/*
 * Author: Aidan Evans
 * Date: 3/24/2019
 */



#include <jni.h>
#include <stdio.h>
#include "MediaKeys.h"

#define WINVER 0x0500
#include <windows.h>



//hits the volume mute/unmute key
JNIEXPORT void JNICALL Java_commands_MediaKeys_volumeMute (JNIEnv *env, jobject thisObj) {

    KEYBDINPUT kbi;

    //specific keycode
    kbi.wVk = VK_VOLUME_MUTE;

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



//hits the volume down key
JNIEXPORT void JNICALL Java_commands_MediaKeys_volumeDown (JNIEnv *env, jobject thisObj) {

    KEYBDINPUT kbi;

    //specific keycode
    kbi.wVk = VK_VOLUME_DOWN;

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



//hits the volume up key
JNIEXPORT void JNICALL Java_commands_MediaKeys_volumeUp (JNIEnv *env, jobject thisObj) {

    KEYBDINPUT kbi;

    //specific keycode
    kbi.wVk = VK_VOLUME_UP;

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




//hits the previous track key
JNIEXPORT void JNICALL Java_commands_MediaKeys_songPrevious (JNIEnv *env, jobject thisObj) {

    KEYBDINPUT kbi;

    //specific keycode
    kbi.wVk = VK_MEDIA_PREV_TRACK;

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



//hits the next track key
JNIEXPORT void JNICALL Java_commands_MediaKeys_songNext (JNIEnv *env, jobject thisObj) {

    KEYBDINPUT kbi;

    //specific keycode
    kbi.wVk = VK_MEDIA_NEXT_TRACK;

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



//hits the play/pause key
JNIEXPORT void JNICALL Java_commands_MediaKeys_songPlayPause (JNIEnv *env, jobject thisObj) {

    KEYBDINPUT kbi;

    //specific keycode
    kbi.wVk = VK_MEDIA_PLAY_PAUSE;

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











