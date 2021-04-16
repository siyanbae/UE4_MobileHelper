// Copyright Epic Games, Inc. All Rights Reserved.

#include "MobileHelperBPLibrary.h"
#include "MobileHelper.h"

UMobileHelperBPLibrary::UMobileHelperBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

void UMobileHelperBPLibrary::ShowToastMessage(const FString Msg)
{
#if PLATFORM_ANDROID
	FMobileHelperModule::Get().GetPlatform()->ShowToast(Msg);
#else
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, Msg);
#endif
}