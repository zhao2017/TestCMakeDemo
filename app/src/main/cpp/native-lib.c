#include <jni.h>
#include<stdio.h>
#include <stdlib.h>

JNIEXPORT jstring

//test.com.zh.testcmakedemo
JNICALL

Java_test_com_zh_testcmakedemo_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject obj) {
    return (*env)->NewStringUTF(env,"Hello from C");
}
