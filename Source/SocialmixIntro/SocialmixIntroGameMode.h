// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "SocialmixIntroGameMode.generated.h"

UCLASS(minimalapi)
class ASocialmixIntroGameMode : public AGameModeBase
{
private:
	GENERATED_BODY()

public:
	ASocialmixIntroGameMode();

	void StartPlay() override;
};



