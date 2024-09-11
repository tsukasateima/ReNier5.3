// Copyright Epic Games, Inc. All Rights Reserved.

#include "ReNierGameMode.h"
#include "ReNierCharacter.h"
#include "UObject/ConstructorHelpers.h"

AReNierGameMode::AReNierGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
