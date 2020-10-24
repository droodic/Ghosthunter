// Copyright Epic Games, Inc. All Rights Reserved.

#include "GhosthunterGameMode.h"
#include "GhosthunterCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGhosthunterGameMode::AGhosthunterGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
