// Fill out your copyright notice in the Description page of Project Settings.


#include "AndroidHelper.h"

#if PLATFORM_ANDROID
#include "Android/AndroidJNI.h"
#include "Android/AndroidApplication.h"
#endif

AndroidHelper::AndroidHelper()
{
}

AndroidHelper::~AndroidHelper()
{
}

void AndroidHelper::ShowToast(const FString& Msg)
{
#if PLATFORM_ANDROID
	if (JNIEnv* env = FAndroidApplication::GetJavaEnv())
	{
		jmethodID showToast = FJavaWrapper::FindMethod(env,
			FJavaWrapper::GameActivityClassID,
			"showToast",
			"(Ljava/lang/String;)V", false);
		jstring jMsg = env->NewStringUTF(TCHAR_TO_UTF8(*Msg));

		FJavaWrapper::CallVoidMethod(env, FJavaWrapper::GameActivityThis, showToast, jMsg);
	}
#endif
}
