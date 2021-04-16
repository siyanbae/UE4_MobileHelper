// Copyright Epic Games, Inc. All Rights Reserved.

#include "MobileHelper.h"

#define LOCTEXT_NAMESPACE "FMobileHelperModule"

void FMobileHelperModule::StartupModule()
{
#if PLATFORM_ANDROID
	PlatformPtr = MakeShareable(new PlatformAndroid());
#endif
}

void FMobileHelperModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FMobileHelperModule, MobileHelper)