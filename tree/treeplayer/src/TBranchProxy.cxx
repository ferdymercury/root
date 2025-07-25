// @(#)root/base:$Id$
// Author: Philippe Canal  13/05/2003

/*************************************************************************
 * Copyright (C) 1995-2000, Rene Brun, Fons Rademakers and al.           *
 * All rights reserved.                                                  *
 *                                                                       *
 * For the licensing terms see $ROOTSYS/LICENSE.                         *
 * For the list of contributors see $ROOTSYS/README/CREDITS.             *
 *************************************************************************/

/** \class ROOT::Detail::TBranchProxy
Base class for all the proxy object. It includes the implementation
of the autoloading of branches as well as all the generic setup routine.
*/

#include "TBranchProxy.h"
#include "TLeaf.h"
#include "TBranchElement.h"
#include "TBranchObject.h"
#include "TCollection.h" // TRangeStaticCast
#include "TStreamerElement.h"
#include "TStreamerInfo.h"
#include "ROOT/InternalTreeUtils.hxx" // GetFileNamesFromTree, GetTreeFullPaths

#include <string>
#include <string_view>

ClassImp(ROOT::Detail::TBranchProxy);

using namespace ROOT::Internal;

namespace {
/**
 * \brief Find if the input branch name is the prefix for other sub-branches in the same tree.
 */
bool AreThereSubBranches(std::string_view parentBrName, TTree &tree)
{
   const std::string prefix = [&parentBrName]() {
      if (parentBrName.back() == '.')
         return std::string(parentBrName);
      return std::string(parentBrName) + '.';
   }();

   for (auto *leaf : ROOT::Detail::TRangeStaticCast<TLeaf>(tree.GetListOfLeaves()))
      // Compares the prefix string with the leaf name, checking if the first
      // `prefix.size()` characters match those of the prefix, i.e. if the leaf
      // name starts with the prefix
      if (prefix.compare(0, prefix.size(), leaf->GetName(), prefix.size()) == 0)
         return true;
   return false;
}
} // namespace

////////////////////////////////////////////////////////////////////////////////
/// Constructor.

ROOT::Detail::TBranchProxy::TBranchProxy() :
   fDirector(nullptr), fInitialized(false), fIsMember(false), fIsClone(false), fIsaPointer(false),
   fHasLeafCount(false), fBranchName(""), fParent(nullptr), fDataMember(""),
   fClassName(""), fClass(nullptr), fElement(nullptr), fMemberOffset(0), fOffset(0), fArrayLength(1),
   fBranch(nullptr), fBranchCount(nullptr),
   fNotify(this),
   fRead(-1), fWhere(nullptr),fCollection(nullptr)
{
};

////////////////////////////////////////////////////////////////////////////////
/// Constructor.

ROOT::Detail::TBranchProxy::TBranchProxy(TBranchProxyDirector* boss, const char* top,
                                 const char* name) :
   fDirector(boss), fInitialized(false), fIsMember(false), fIsClone(false), fIsaPointer(false),
   fHasLeafCount(false), fBranchName(top), fParent(nullptr), fDataMember(""),
   fClassName(""), fClass(nullptr), fElement(nullptr), fMemberOffset(0), fOffset(0), fArrayLength(1),
   fBranch(nullptr), fBranchCount(nullptr),
   fNotify(this),
   fRead(-1),  fWhere(nullptr),fCollection(nullptr)
{
   if (fBranchName.Length() && fBranchName[fBranchName.Length()-1]!='.' && name) {
      ((TString&)fBranchName).Append(".");
   }
   if (name) ((TString&)fBranchName).Append(name);
   boss->Attach(this);
}

////////////////////////////////////////////////////////////////////////////////
/// Constructor.

ROOT::Detail::TBranchProxy::TBranchProxy(TBranchProxyDirector* boss, const char *top, const char *name, const char *membername) :
   fDirector(boss), fInitialized(false), fIsMember(true), fIsClone(false), fIsaPointer(false),
   fHasLeafCount(false), fBranchName(top), fParent(nullptr), fDataMember(membername),
   fClassName(""), fClass(nullptr), fElement(nullptr), fMemberOffset(0), fOffset(0), fArrayLength(1),
   fBranch(nullptr), fBranchCount(nullptr),
   fNotify(this),
   fRead(-1), fWhere(nullptr),fCollection(nullptr)
{
   if (name && strlen(name)) {
      if (fBranchName.Length() && fBranchName[fBranchName.Length()-1]!='.') {
         ((TString&)fBranchName).Append(".");
      }
      ((TString&)fBranchName).Append(name);
   }
   boss->Attach(this);
}

////////////////////////////////////////////////////////////////////////////////
/// Constructor.

ROOT::Detail::TBranchProxy::TBranchProxy(TBranchProxyDirector* boss, Detail::TBranchProxy *parent, const char* membername, const char* top,
                                 const char* name) :
   fDirector(boss), fInitialized(false), fIsMember(true), fIsClone(false), fIsaPointer(false),
   fHasLeafCount(false), fBranchName(top), fParent(parent), fDataMember(membername),
   fClassName(""), fClass(nullptr), fElement(nullptr), fMemberOffset(0), fOffset(0), fArrayLength(1),
   fBranch(nullptr), fBranchCount(nullptr),
   fNotify(this),
   fRead(-1), fWhere(nullptr),fCollection(nullptr)
{
   if (name && strlen(name)) {
      if (fBranchName.Length() && fBranchName[fBranchName.Length()-1]!='.') {
         ((TString&)fBranchName).Append(".");
      }
      ((TString&)fBranchName).Append(name);
   }
   boss->Attach(this);
}

////////////////////////////////////////////////////////////////////////////////
/// Constructor.

ROOT::Detail::TBranchProxy::TBranchProxy(TBranchProxyDirector* boss, TBranch* branch, const char* membername) :
   fDirector(boss), fInitialized(false), fIsMember(membername != nullptr && membername[0]), fIsClone(false), fIsaPointer(false),
   fHasLeafCount(false), fBranchName(branch->GetName()), fParent(nullptr), fDataMember(membername),
   fClassName(""), fClass(nullptr), fElement(nullptr), fMemberOffset(0), fOffset(0), fArrayLength(1),
   fBranch(nullptr), fBranchCount(nullptr),
   fNotify(this),
   fRead(-1), fWhere(nullptr),fCollection(nullptr)
{
   boss->Attach(this);
}

////////////////////////////////////////////////////////////////////////////////
/// For a fullBranchName that might contain a leading friend tree path (but
/// access elements designating a leaf), but the leaf name such that it matches
/// the "path" to branch.

static std::string GetFriendBranchName(TTree* directorTree, TBranch* branch, const char* fullBranchName)
{
   // ROOT-10046: Here we need to ask for the tree with GetTree otherwise, if directorTree
   // is a chain, this check is bogus and a bug can occur (ROOT-10046)
   if (directorTree->GetTree() == branch->GetTree())
      return branch->GetFullName().Data();

   // Friend case:
   std::string sFullBranchName = fullBranchName;
   std::string::size_type pos = sFullBranchName.rfind(branch->GetFullName());
   if (pos != std::string::npos) {
      sFullBranchName.erase(pos);
      sFullBranchName += branch->GetFullName();
   }
   return sFullBranchName;
}

////////////////////////////////////////////////////////////////////////////////
/// Constructor taking the branch name, possibly of a friended tree.
/// Used by TTreeReaderValue in place of TFriendProxy.

ROOT::Detail::TBranchProxy::TBranchProxy(TBranchProxyDirector *boss, const char *branchname, TBranch *branch,
                                         const char *membername, bool suppressMissingBranchError)
   : fDirector(boss),
     fInitialized(false),
     fIsMember(membername != nullptr && membername[0]),
     fIsClone(false),
     fIsaPointer(false),
     fHasLeafCount(false),
     fSuppressMissingBranchError(suppressMissingBranchError),
     fBranchName(GetFriendBranchName(boss->GetTree(), branch, branchname)),
     fParent(nullptr),
     fDataMember(membername),
     fClassName(""),
     fClass(nullptr),
     fElement(nullptr),
     fMemberOffset(0),
     fOffset(0),
     fArrayLength(1),
     fBranch(nullptr),
     fBranchCount(nullptr),
     fNotify(this),
     fRead(-1),
     fWhere(nullptr),
     fCollection(nullptr)
{
   // Constructor.

   boss->Attach(this);
}

////////////////////////////////////////////////////////////////////////////////
/// Typical Destructor

ROOT::Detail::TBranchProxy::~TBranchProxy()
{
   if (fNotify.IsLinked() && fDirector && fDirector->GetTree())
      fNotify.RemoveLink(*(fDirector->GetTree()));
}

////////////////////////////////////////////////////////////////////////////////
/// Completely reset the object.

void ROOT::Detail::TBranchProxy::Reset()
{
   fWhere = nullptr;
   fBranch = nullptr;
   fBranchCount = nullptr;
   fRead = -1;
   fClass = nullptr;
   fElement = nullptr;
   fMemberOffset = 0;
   fOffset = 0;
   fArrayLength = 1;
   fIsClone = false;
   fInitialized = false;
   fHasLeafCount = false;
   delete fCollection;
   fCollection = nullptr;
}

////////////////////////////////////////////////////////////////////////////////
/// Display the content of the object

void ROOT::Detail::TBranchProxy::Print()
{
   std::cout << "fBranchName " << fBranchName << std::endl;
   //std::cout << "fTree " << fDirector->fTree << std::endl;
   std::cout << "fBranch " << fBranch << std::endl;
   if (fHasLeafCount)
      std::cout << "fLeafCount " << fLeafCount << std::endl;
   else if (fBranchCount)
      std::cout << "fBranchCount " << fBranchCount << std::endl;
}


////////////////////////////////////////////////////////////////////////////////
/// Initialize/cache the necessary information.

bool ROOT::Detail::TBranchProxy::Setup()
{
   // Should we check the type?

   if (!fDirector->GetTree()) {
      return false;
   }
   if (!fNotify.IsLinked()) {
      fNotify.PrependLink(*fDirector->GetTree());
   }
   if (fParent) {

      if (!fParent->Setup()) {
         return false;
      }

      TClass *pcl = fParent->GetClass();
      R__ASSERT(pcl);

      if (pcl==TClonesArray::Class()) {
         // We always skip the clones array

         Int_t i = fDirector->GetReadEntry();
         if (i<0)  fDirector->SetReadEntry(0);
         if (fParent->Read()) {
            if (i<0) fDirector->SetReadEntry(i);

            TClonesArray *clones;
            clones = (TClonesArray*)fParent->GetStart();

            if (clones) pcl = clones->GetClass();
         }
      } else if (pcl->GetCollectionProxy()) {
         // We always skip the collections.

         if (fCollection) delete fCollection;
         fCollection = pcl->GetCollectionProxy()->Generate();
         pcl = fCollection->GetValueClass();
         if (pcl == nullptr) {
            // coverity[dereference] fparent is checked jus a bit earlier and can not be null here
            Error("Setup","Not finding TClass for collection for the data member %s seems no longer be in class %s",fDataMember.Data(),fParent->GetClass()->GetName());
            return false;
         }
      }

      fElement = (TStreamerElement*)pcl->GetStreamerInfo()->GetStreamerElement(fDataMember, fOffset);
      if (fElement) {
         fIsaPointer = fElement->IsaPointer();
         fClass = fElement->GetClassPointer();
         fMemberOffset = fElement->GetOffset();
         fArrayLength = fElement->GetArrayLength();
         fValueSize = fElement->GetSize();
      } else {
         Error("Setup","Data member %s seems no longer be in class %s",fDataMember.Data(),pcl->GetName());
         return false;
      }

      fIsClone = (fClass==TClonesArray::Class());

      fWhere = fParent->fWhere; // not really used ... it is reset by GetStart and GetClStart

      if (fParent->IsaPointer()) {
         // fprintf(stderr,"non-split pointer de-referencing non implemented yet \n");
         // nothing to do!
      } else {
         // Accumulate offsets.
         // or not!? fOffset = fMemberOffset = fMemberOffset + fParent->fOffset;
      }

      // This is not sufficient for following pointers

   } else {

      // This does not allow (yet) to precede the branch name with
      // its mother's name
      fBranch = fDirector->GetTree()->GetBranch(fBranchName.Data());
      if (!fBranch) {
         if (!fSuppressMissingBranchError && !AreThereSubBranches(fBranchName.View(), *fDirector->GetTree())) {
            // The next error refers specifically to the situation where the branch identified by fBranchName
            // is not present and that is not expected. An example is when traversing a chain of files, the branch
            // is missing from the file that we are switching into.
            // Conversely, there are situations where the missing branch is indeed expected. A notable example is when
            // the TTree contains a split object, the branch referring to the whole object type will actually be elided
            // and will not be found by `TTree::GetBranch`, only the data members will be present as sub branches.
            auto *tree = fDirector->GetTree()->GetTree(); // Double GetTree to extract the current TTree being processed
            Error("TBranchProxy::Setup()", "%s",
                  Form("Branch '%s' is not available from tree '%s' in file '%s'.", fBranchName.Data(),
                       ROOT::Internal::TreeUtils::GetTreeFullPaths(*tree)[0].c_str(),
                       ROOT::Internal::TreeUtils::GetFileNamesFromTree(*tree)[0].c_str()));
         }
         return false;
      }

      fWhere = (double*)fBranch->GetAddress();

      if (!fWhere && fBranch->IsA()==TBranchElement::Class()
          && ((TBranchElement*)fBranch)->GetMother()) {

         TBranchElement* be = ((TBranchElement*)fBranch);

         be->GetMother()->SetAddress(nullptr);
         fWhere =  (double*)fBranch->GetAddress();

      }
      if (fBranch->IsA()==TBranch::Class()) {
         TLeaf *leaf2 = nullptr;
         if (fDataMember.Length()) {
            leaf2 = fBranch->GetLeaf(fDataMember);
         } else if (!fWhere) {
            leaf2 = (TLeaf*)fBranch->GetListOfLeaves()->At(0); // fBranch->GetLeaf(fLeafname);
            fWhere = leaf2->GetValuePointer();
         }
         if (leaf2) {
            fWhere = leaf2->GetValuePointer();
            fArrayLength = leaf2->GetLen();
            fValueSize = leaf2->GetLenType();
            if (leaf2->GetLeafCount()) {
               fLeafCount = leaf2->GetLeafCount();
               fHasLeafCount = true;
            }
         }
      } else if (fBranch->IsA() == TBranchElement::Class()) {
         // Calculate fBranchCount for a leaf.
         TLeaf *leaf = (TLeaf*) fBranch->GetListOfLeaves()->At(0); // fBranch->GetLeaf(fLeafname);
         if (leaf)
            leaf = leaf->GetLeafCount();
         if (leaf) {
            fBranchCount = dynamic_cast<TBranchElement*>(leaf->GetBranch());
         }
      }

      if (!fWhere) {
         fBranch->SetupAddresses();
         fWhere = (double*)fBranch->GetAddress();
      }


      if (fWhere && fBranch->IsA()==TBranchElement::Class()) {

         TBranchElement* be = ((TBranchElement*)fBranch);

         TStreamerInfo * info = be->GetInfo();
         Int_t id = be->GetID();
         if (be->GetType() == 3) {
            fClassName = "TClonesArray";
            fClass = TClonesArray::Class();
         } else if (id>=0) {
            fOffset = info->GetElementOffset(id);
            fElement = (TStreamerElement*)info->GetElements()->At(id);
            fIsaPointer = fElement->IsaPointer();
            fClass = fElement->GetClassPointer();
            fValueSize = fElement->GetSize();

            if ((fIsMember || (be->GetType()!=3 && be->GetType() !=4))
                  && (be->GetType()!=31 && be->GetType()!=41)) {

               if (fClass==TClonesArray::Class()) {
                  Int_t i = be->GetTree()->GetReadEntry();
                  if (i<0) i = 0;
                  be->GetEntry(i);

                  TClonesArray *clones;
                  if ( fIsMember && be->GetType()==3 ) {
                     clones = (TClonesArray*)be->GetObject();
                  } else if (fIsaPointer) {
                     clones = (TClonesArray*)*(void**)((char*)fWhere+fOffset);
                  } else {
                     clones = (TClonesArray*)((char*)fWhere+fOffset);
                  }
                  if (!fIsMember) fIsClone = true;
                  fClass = clones->GetClass();
               } else if (fClass && fClass->GetCollectionProxy()) {
                  delete fCollection;
                  fCollection = fClass->GetCollectionProxy()->Generate();
                  fClass = fCollection->GetValueClass();
               }

            }
            if (fClass) fClassName = fClass->GetName();
         } else {
            fClassName = be->GetClassName();
            fClass = TClass::GetClass(fClassName);
         }

         if (be->GetType()==3) {
            // top level TClonesArray

            if (!fIsMember) fIsClone = true;
            fIsaPointer = false;
            fWhere = be->GetObject();
            fValueSize = static_cast<TClonesArray *>(fWhere)->GetClass()->Size();

         } else if (be->GetType()==4) {
            // top level TClonesArray

            fCollection = be->GetCollectionProxy()->Generate();
            fIsaPointer = false;
            fWhere = be->GetObject();

         } else if (id<0) {
            // top level object

            fIsaPointer = false;
            fWhere = be->GetObject();

         } else if (be->GetType()==41) {

            fCollection = be->GetCollectionProxy()->Generate();
            fWhere   = be->GetObject();
            fOffset += be->GetOffset();

         } else if (be->GetType()==31) {

            fWhere   = be->GetObject();
            fOffset += be->GetOffset();

         } else if (be->GetType()==2) {
            // this might also be the right path for GetType()==1

            fWhere = be->GetObject();

         } else {

            // fWhere = ((unsigned char*)fWhere) + fOffset;
            fWhere = ((unsigned char*)be->GetObject()) + fOffset;

         }
      } else if (fBranch->IsA() == TBranchObject::Class()) {
         fIsaPointer = true; // this holds for all cases we test
         fClassName = fBranch->GetClassName();
         fClass = TClass::GetClass(fClassName);
      } else {
         fClassName = fBranch->GetClassName();
         fClass = TClass::GetClass(fClassName);
      }

      /*
        fClassName = fBranch->GetClassName(); // What about TClonesArray?
        if ( fBranch->IsA()==TBranchElement::Class() &&
        ((TBranchElement*)fBranch)->GetType()==31 ||((TBranchElement*)fBranch)->GetType()==3 ) {

        Int_t id = ((TBranchElement*)fBranch)->GetID();
        if (id>=0) {

        fElement = ((TStreamerElement*)(((TBranchElement*)fBranch)->GetInfo())->GetElements()->At(id));
        fClass = fElement->GetClassPointer();
        if (fClass) fClassName = fClass->GetName();

        }
        }
        if (fClass==0 && fClassName.Length()) fClass = TClass::GetClass(fClassName);
      */
      //fprintf(stderr,"For %s fClass is %p which is %s\n",
      //        fBranchName.Data(),fClass,fClass==0?"not set":fClass->GetName());

      if ( fBranch->IsA()==TBranchElement::Class() &&
           (((TBranchElement*)fBranch)->GetType()==3 || fClass==TClonesArray::Class()) &&
           !fIsMember ) {
         fIsClone = true;
      }

      if (fIsMember) {
         if ( fBranch->IsA()==TBranchElement::Class() &&
              fClass==TClonesArray::Class() &&
              (((TBranchElement*)fBranch)->GetType()==31 || ((TBranchElement*)fBranch)->GetType()==3) ) {

            TBranchElement *bcount = ((TBranchElement*)fBranch)->GetBranchCount();
            TString member;
            if (bcount) {
               TString bname = fBranch->GetName();
               TString bcname = bcount->GetName();
               member = bname.Remove(0,bcname.Length()+1);
            } else {
               member = fDataMember;
            }

            fMemberOffset = fClass->GetDataMemberOffset(member);

            if (fMemberOffset < 0) {
               Error("Setup","%s",Form("Negative offset %d for %s in %s",
                                  fMemberOffset,fBranch->GetName(),
                                  bcount?bcount->GetName():"unknown"));
               fMemberOffset = 0;
            } else if (fMemberOffset == TVirtualStreamerInfo::kMissing) {
               Error("Setup", "%s",
                     Form("Missing data member in a TClonesArray, %s in %s and %s", fDataMember.Data(),
                          fBranch->GetName(), bcount ? bcount->GetName() : "unknown"));
               fMemberOffset = 0;
            }

         } else if (fParent && fClass) {

            fElement = (TStreamerElement*)
               fClass->GetStreamerInfo()->GetElements()->FindObject(fDataMember);
            if (fElement) {
               fMemberOffset = fElement->GetOffset();
               fValueSize = fElement->GetSize();
            } else {
               // Need to compose the proper sub name

               TString member;

               member += fDataMember;
               fMemberOffset = fClass->GetDataMemberOffset(member);
            }
            if (fMemberOffset < 0) {
               Error("Setup", "%s",
                     Form("Negative offset %d for %s in %s, class: %s", fMemberOffset, fDataMember.Data(),
                          fBranch->GetName(), fClass->GetName()));
               fMemberOffset = 0;
            } else if (fMemberOffset == TVirtualStreamerInfo::kMissing) {
               Error("Setup", "%s",
                     Form("Missing data member %s in %s, class: %s", fDataMember.Data(), fBranch->GetName(),
                          fClass->GetName()));
               fMemberOffset = 0;
            }

         // The extra condition (fElement is not a TStreamerSTL) is to handle the case where fBranch is a
         // TBranchElement and fElement is a TStreamerSTL. Without the extra condition we get an error
         // message, although the vector (i.e. the TBranchElement) is accessible.
         } else if (fParent && fBranch->IsA() != TBranch::Class() && fElement->IsA() != TStreamerBasicType::Class() &&
                    fElement->IsA() != TStreamerSTL::Class()) {
            Error("Setup", "%s", Form("Missing TClass object for %s", fClassName.Data()));
         }

         if ( fBranch->IsA()==TBranchElement::Class()
              && (((TBranchElement*)fBranch)->GetType()==31 || ((TBranchElement*)fBranch)->GetType()==3) ) {

            fOffset = fMemberOffset;

         } else {

            fWhere = ((unsigned char*)fWhere) + fMemberOffset;
         }
      }
   }
   if (fClass==TClonesArray::Class()) fIsClone = true;
   if (fWhere!=nullptr) {
      fInitialized = true;
      return true;
   } else {
      return false;
   }
}
