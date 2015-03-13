#include "com_mxu_app_kkplayer_interop_IMediaControl.h"

/*
 * Class:     com_mxu_app_kkplayer_interop_IMediaControl
 * Method:    start
 * Signature: ()Ljava/lang/Boolean;
 */
JNIEXPORT jboolean JNICALL Java_com_mxu_app_kkplayer_interop_IMediaControl_start(JNIEnv *env, jobject obj)
{
	return 1;
}

/*
 * Class:     com_mxu_app_kkplayer_interop_IMediaControl
 * Method:    stop
 * Signature: ()Ljava/lang/Boolean;
 */
JNIEXPORT jboolean JNICALL Java_com_mxu_app_kkplayer_interop_IMediaControl_stop(JNIEnv *env, jobject obj)
{
	return 0;
}

/*
 * Class:     com_mxu_app_kkplayer_interop_IMediaControl
 * Method:    pause
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_mxu_app_kkplayer_interop_IMediaControl_pause(JNIEnv *env, jobject obj)
{
    return 0;
}