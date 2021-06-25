#include <jni.h>
#include <string>
#include <iostream>
using namespace std;

extern "C" JNIEXPORT jstring JNICALL
Java_com_gzd_ndkdemoapp_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
extern "C" JNIEXPORT jstring JNICALL
Java_com_gzd_ndkdemoapp_MainActivity_testFrom(
        JNIEnv* env,
        jobject /* this */) {
    return env->NewStringUTF("test");
}

int main() {
    cout << "Hello, world!" << endl;
    return 0;
}