# java-media-keys
Java source file and dll file for pressing the "Volume Down", "Volume Up", "Volume Mute", "Previous Track", "Next Track", and "Play/Pause Track", "Media Stop" virtual keys on the keyboard.

MediaKeys.java must be in a package named "commands" to work.

MediaKeys.dll must be in the same path as the "src" folder or in the same path as the .class or .jar file when compiled.

MediaKeys.c and MediaKeys.h are the the source code files for the dll.

#### Helpful Links:
 - my [StackOverflow post](https://stackoverflow.com/a/55321025/11039508) giving an overview of how to set this up
 - helpful [link](https://www3.ntu.edu.sg/home/ehchua/programming/java/JavaNativeInterface.html) for setting up the JNI and creating the .dll file
 - [StackOverflow post](https://stackoverflow.com/a/2969148/11039508) on pressing virtual keys on Windows

#### October-2020 Update:
 - added the "Media Stop" command (VK_MEDIA_STOP)
 - removed redundancy in .c source file
 - updated MediaKeys.dll to reflect changes
 - prior version without "Media Stop" put in the folder "backup"
