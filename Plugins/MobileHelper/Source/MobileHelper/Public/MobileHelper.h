// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Modules/ModuleManager.h"
#include "EngineMinimal.h"
#include "Core.h"
#include "Interfaces/PlatformInterface.h"

typedef TSharedPtr<IPlatformInterface, ESPMode::ThreadSafe> FPlatformInterfacePtr;

class FMobileHelperModule : public IModuleInterface
{
public:
	static inline FMobileHelperModule& Get()
	{
		return FModuleManager::LoadModuleChecked<FMobileHelperModule>("MobileHelper");
	}

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;


	inline FPlatformInterfacePtr GetPlatform() const
	{
		return PlatformPtr;
	}
protected:
	FPlatformInterfacePtr PlatformPtr;
};
