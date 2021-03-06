// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EngineMinimal.h"
#include "Core.h"
#include "Interfaces/PlatformInterface.h"

/**
 * 
 */
class AndroidHelper : public IPlatformInterface
{
public:
	AndroidHelper();
	virtual ~AndroidHelper();

	virtual void ShowToast(const FString& Msg) override;
};
