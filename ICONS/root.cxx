//*CMZ :  2.00/08 26/05/98  13.10.11  by  Fons Rademakers
//*CMZ :  2.00/00 07/03/98  23.42.56  by  Fons Rademakers
//*-- Author :    IconsAuthor   18/02/98

# ROOT mime types
# Actions beginning with ! will be executed in the shell
# Actions beginning with -> are member functions of the selected
# object's class (not yet implemented, still hard coded in the
# class Browse() method).
# All other actions will be handed "as is" to the interpreter

[application/postscript]
pattern = *.e?ps
icon = ps.xpm
action = !ghostview %s

[application/pdf]
pattern = *.pdf
icon = pdf.xpm
action = !acroread %s

[audio/x-wav]
pattern = *.wave?
icon = audio_s.xpm
action = !vplay -s 22500 %s

[audio/basic]
pattern = *.snd *.au
icon = audio_s.xpm
action = !cat %s /dev/audio

[audio/midi]
pattern = *.midi?
icon = midi_s.xpm
action = !cat %s /dev/midi

[video/mpeg]
pattern = *.mpeg? *.mpg
icon = video_s.xpm
action = !xanim %s

[image/gif]
pattern = *.gif
icon = image.xpm
action = !xv %s

[image/jpeg]
pattern = *.jpeg *.jp[ge]
icon = image.xpm
action = !xv %s

[image/tiff]
pattern = *.tiff?
icon = image.xpm
action = !xv %s

[image/x-xpixmap]
pattern = *.x[bp]m
icon = image.xpm
action = !xv %s

[text/html]
pattern = *.html
icon = netscape.xpm
action = !netscape %s

[text/plain]
pattern = *.te?xt
icon = emacs.xpm
action = !xterm -e vi %s &

[text/tex]
pattern = *.tex
icon = tex.xpm
action = !xterm -e vi %s &

[settings/executable]
pattern = .bash_profile .bashrc .profile .login .kshrc .cshrc .xsession
icon = run_config.xpm
action = !xterm -e vi %s &

[settings/config]
pattern = .*rc *.conf
icon = settings.xpm
action = !xterm -e vi %s &

[text/source-c]
pattern = *.c
icon = c_source.xpm
action = !xterm -e vi %s &

[text/source-c++]
pattern = *.cxx *.cpp *.cc *.h
icon = cpp_source.xpm
action = !xterm -e vi %s &

[root/script]
pattern = *.C
icon = root_script.xpm
action = .x %s

[root/file]
pattern = *.root
icon = root_file.xpm
action = TFile *ftmp = new TFile("%s")


