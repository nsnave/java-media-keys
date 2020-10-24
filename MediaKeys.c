
#include <jni.h>
#include <stdio.h>
#include "MediaKeys.h"

#define WINVER 0x0500
#include <windows.h>

//Source used for virtual key press code: https://stackoverflow.com/a/2969148/11039508
void pressKey(WORD key) {

    KEYBDINPUT kbi;

    //specific keycode
    kbi.wVk = key;

    kbi.wScan = 0;
    kbi.dwFlags = 0;
    kbi.time = 0;
    kbi.dwExtraInfo = (ULONG_PTR) GetMessageExtraInfo();

    INPUT input;
    input.type = INPUT_KEYBOARD;
    input.ki   = kbi;

    SendInput(1, &input, sizeof(INPUT));

    return;

}

//hits the volume mute/unmute key
JNIEXPORT void JNICALL Java_commands_MediaKeys_volumeMute (JNIEnv *env, jobject thisObj) {

    pressKey(VK_VOLUME_MUTE);

    return;

}


//hits the volume down key
JNIEXPORT void JNICALL Java_commands_MediaKeys_volumeDown (JNIEnv *env, jobject thisObj) {

    pressKey(VK_VOLUME_DOWN);

    return;

}


//hits the volume up key
JNIEXPORT void JNICALL Java_commands_MediaKeys_volumeUp (JNIEnv *env, jobject thisObj) {

    pressKey(VK_VOLUME_UP);

    return;

}



//hits the previous track key
JNIEXPORT void JNICALL Java_commands_MediaKeys_songPrevious (JNIEnv *env, jobject thisObj) {

    pressKey(VK_MEDIA_PREV_TRACK);

    return;

}


//hits the next track key
JNIEXPORT void JNICALL Java_commands_MediaKeys_songNext (JNIEnv *env, jobject thisObj) {

    pressKey(VK_MEDIA_NEXT_TRACK);

    return;

}



//hits the play/pause key
JNIEXPORT void JNICALL Java_commands_MediaKeys_songPlayPause (JNIEnv *env, jobject thisObj) {

    pressKey(VK_MEDIA_PLAY_PAUSE);

    return;

}



//hits the media stop key
JNIEXPORT void JNICALL Java_commands_MediaKeys_mediaStop (JNIEnv *env, jobject thisObj) {

    pressKey(VK_MEDIA_STOP);

    return;

}












