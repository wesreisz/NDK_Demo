#include <jni.h>
#include "com_wesleyreisz_ndkdemo_MainActivity.h"

JNIEXPORT jstring JNICALL Java_com_wesleyreisz_ndkdemo_MainActivity_hello
  (JNIEnv * env, jobject obj){
    return (*env)->NewStringUTF(env, "Hello from JNI and C++");
  }