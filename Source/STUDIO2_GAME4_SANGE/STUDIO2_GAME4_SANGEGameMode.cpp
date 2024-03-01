// Copyright Epic Games, Inc. All Rights Reserved.

#include "STUDIO2_GAME4_SANGEGameMode.h"
#include "STUDIO2_GAME4_SANGECharacter.h"
#include "UObject/ConstructorHelpers.h"

ASTUDIO2_GAME4_SANGEGameMode::ASTUDIO2_GAME4_SANGEGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
