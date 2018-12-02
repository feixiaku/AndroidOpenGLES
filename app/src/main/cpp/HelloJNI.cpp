//
// Created by feixiaku on 2018/12/2.
//
#include <jni.h>
#include <android/log.h>
#include <string.h>

#define TAG "HelloJNI"
#define LOGD(...) __android_log_print(ANDROID_LOG_DEBUG, TAG, __VA_ARGS__)
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO,  TAG, __VA_ARGS__)
#define LOGW(...) __android_log_print(ANDROID_LOG_WARN,  TAG, __VA_ARGS__)
#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR, TAG, __VA_ARGS__)
#define LOGF(...) __android_log_print(ANDROID_LOG_FATAL, TAG, __VA_ARGS__)

extern "C" {
    JNIEXPORT jstring JNICALL Java_com_example_feixiaku_opengles3native_MainActivity_printLog(JNIEnv *env);
};

//JNIEXPORT jstring JNICALL

JNIEXPORT jstring JNICALL
Java_com_example_feixiaku_opengles3native_MainActivity_printLog(JNIEnv *env)
{
    int i = 0;
    LOGD("hello jni, this is %d", i);

    return env->NewStringUTF("Hello JNI");
}


