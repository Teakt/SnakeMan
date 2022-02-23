// Copyright Epic Games, Inc. All Rights Reserved.

#include "Snake3DGameMode.h"
#include "Snake3DCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASnake3DGameMode::ASnake3DGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
