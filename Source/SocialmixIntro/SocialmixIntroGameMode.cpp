// Copyright Epic Games, Inc. All Rights Reserved.

#include "SocialmixIntroGameMode.h"
#include "UObject/ConstructorHelpers.h"

ASocialmixIntroGameMode::ASocialmixIntroGameMode()
{
	UE_LOG(LogTemp, Warning, TEXT("Hello from Cpp"));
}

void ASocialmixIntroGameMode::StartPlay()
{
	Super::StartPlay();

	if(!GEngine) return;

	GEngine->AddOnScreenDebugMessage(-1, 2, FColor::Green, FString("Hello the game has started"));
	GEngine->AddOnScreenDebugMessage(-1, 2, FColor::Green, FString::Printf(TEXT("Hello from %s"), *FString("Earth")));

	UE_LOG(LogTemp, Warning, TEXT("Hello we are on %s and %d"), *FString("Socialmix"), 42);
}
