// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "EngineMinimal.h"
#include "Core.h"

class IPlatformInterface
{
public:
	virtual void ShowToast(const FString& Msg) = 0;
};
