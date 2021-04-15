// Copyright Epic Games, Inc. All Rights Reserved.

#include "MobileHelperBPLibrary.h"
#include "MobileHelper.h"

UMobileHelperBPLibrary::UMobileHelperBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

void UMobileHelperBPLibrary::ShowTestMessage()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Test"));
}