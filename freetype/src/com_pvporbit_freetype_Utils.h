/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_pvporbit_freetype_Utils */

#ifndef _Included_com_pvporbit_freetype_Utils
#define _Included_com_pvporbit_freetype_Utils
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_pvporbit_freetype_Utils
 * Method:    newBuffer
 * Signature: (I)Ljava/nio/ByteBuffer;
 */
JNIEXPORT jobject JNICALL Java_com_pvporbit_freetype_Utils_newBuffer
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_pvporbit_freetype_Utils
 * Method:    fillBuffer
 * Signature: ([BLjava/nio/ByteBuffer;I)V
 */
JNIEXPORT void JNICALL Java_com_pvporbit_freetype_Utils_fillBuffer
  (JNIEnv *, jclass, jbyteArray, jobject, jint);

/*
 * Class:     com_pvporbit_freetype_Utils
 * Method:    deleteBuffer
 * Signature: (Ljava/nio/ByteBuffer;)V
 */
JNIEXPORT void JNICALL Java_com_pvporbit_freetype_Utils_deleteBuffer
  (JNIEnv *, jclass, jobject);

#ifdef __cplusplus
}
#endif
#endif