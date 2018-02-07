//
// Created by Shuo.Wang on 2017/5/10.
//




#include <jni.h>


#ifndef FFMPEGANDROID_NATIVE_LIB_H
#define FFMPEGANDROID_NATIVE_LIB_H
#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT jint JNICALL Java_com_ws_ffmpegandroidavfilter_MainActivity_play
        (JNIEnv *, jclass, jobject);
JNIEXPORT void JNICALL
Java_com_ws_ffmpegandroidavfilter_MainActivity_playSound(JNIEnv *env, jobject instance, jstring input_);
#ifdef __cplusplus
}
#endif
#endif