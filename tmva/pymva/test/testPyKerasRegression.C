#include <iostream>

#include "TString.h"
#include "TFile.h"
#include "TTree.h"
#include "TSystem.h"
#include "TROOT.h"
#include "TMVA/Factory.h"
#include "TMVA/Reader.h"
#include "TMVA/DataLoader.h"
#include "TMVA/PyMethodBase.h"

TString pythonSrc = "\
from tensorflow.keras.models import Sequential\n\
from tensorflow.keras.layers import Dense, Activation\n\
from tensorflow.keras.optimizers import SGD\n\
\n\
model = Sequential()\n\
model.add(Dense(64, activation=\"tanh\", input_dim=2))\n\
model.add(Dense(1, activation=\"linear\"))\n\
model.compile(loss=\"mean_squared_error\", optimizer=SGD(learning_rate=0.01), weighted_metrics=[])\n\
model.save(\"kerasModelRegression.h5\")\n";

int testPyKerasRegression(){
   // Get data file
   std::cout << "Get test data..." << std::endl;
   TString fname = gROOT->GetTutorialDir() + "/machine_learning/data/tmva_reg_example.root";
   TFile *input = TFile::Open(fname);
   if (!input) {
      std::cout << "ERROR: could not open data file " << fname << std::endl;
      return 1;
   }

   // Build model from python file
   std::cout << "Generate keras model..." << std::endl;
   UInt_t ret;
   ret = gSystem->Exec("echo '"+pythonSrc+"' > generateKerasModelRegression.py");
   if(ret!=0){
       std::cout << "[ERROR] Failed to write python code to file" << std::endl;
       return 1;
   }
   ret = gSystem->Exec(TMVA::Python_Executable() + " generateKerasModelRegression.py");
   if(ret!=0){
       std::cout << "[ERROR] Failed to generate model using python" << std::endl;
       return 1;
   }

   // Setup PyMVA and factory
   std::cout << "Setup TMVA..." << std::endl;
   TMVA::PyMethodBase::PyInitialize();
   TFile* outputFile = TFile::Open("ResultsTestPyKerasRegression.root", "RECREATE");
   TMVA::Factory *factory = new TMVA::Factory("testPyKerasRegression", outputFile,
      "!V:Silent:Color:!DrawProgressBar:AnalysisType=Regression");

   // Load data
   TMVA::DataLoader *dataloader = new TMVA::DataLoader("datasetTestPyKerasRegression");

   TTree *tree = (TTree*)input->Get("TreeR");
   dataloader->AddRegressionTree(tree);

   dataloader->AddVariable("var1");
   dataloader->AddVariable("var2");
   dataloader->AddTarget("fvalue");

   dataloader->PrepareTrainingAndTestTree("",
#ifdef R__MACOSX  // on macos we don;t disable eager execution, it is very slow
      "nTrain_Regression=500:nTest_Regression=100:SplitMode=Random:NormMode=NumEvents:!V");
#else
      "nTrain_Regression=1000:nTest_Regression=200:SplitMode=Random:NormMode=NumEvents:!V");
#endif
   // Book and train method
   factory->BookMethod(dataloader, TMVA::Types::kPyKeras, "PyKeras",
      "!H:!V:VarTransform=D,G:FilenameModel=kerasModelRegression.h5:FilenameTrainedModel=trainedKerasModelRegression.h5:NumEpochs=10:BatchSize=25:SaveBestOnly=false:Verbose=0");
   std::cout << "Train model..." << std::endl;
   factory->TrainAllMethods();

   // Clean-up
   delete factory;
   delete dataloader;
   delete outputFile;

   // Setup reader
   UInt_t numEvents = 100;
   std::cout << "Run reader and estimate target of " << numEvents << " events..." << std::endl;
   TMVA::Reader *reader = new TMVA::Reader("!Color:Silent");
   Float_t vars[3];
   reader->AddVariable("var1", vars+0);
   reader->AddVariable("var2", vars+1);
   reader->BookMVA("PyKeras", "datasetTestPyKerasRegression/weights/testPyKerasRegression_PyKeras.weights.xml");

   // Get mean squared error on events
   tree->SetBranchAddress("var1", vars+0);
   tree->SetBranchAddress("var2", vars+1);
   tree->SetBranchAddress("fvalue", vars+2);

   Float_t meanMvaError = 0;
   for(UInt_t i=0; i<numEvents; i++){
      tree->GetEntry(i);
      meanMvaError += std::pow(vars[2]-reader->EvaluateMVA("PyKeras"),2);
   }
   meanMvaError = meanMvaError/float(numEvents);

   // Check whether the response is obviously better than guessing
   std::cout << "Mean squared error: " << meanMvaError << std::endl;
/*
#ifdef R__MACOSX
   if(meanMvaError > 30.0){
#else
   if(meanMvaError > 60.0){
#endif
      std::cout << "[ERROR] Mean squared error is " << meanMvaError << " (>30.0)" << std::endl;
      return 1;
   }
*/

   return 0;
}

int main(){
   int err = testPyKerasRegression();
   return err;
}
