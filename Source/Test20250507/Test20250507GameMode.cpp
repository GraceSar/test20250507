// Copyright Epic Games, Inc. All Rights Reserved.

#include "Test20250507GameMode.h"
#include "Test20250507Character.h"
#include "UObject/ConstructorHelpers.h"

ATest20250507GameMode::ATest20250507GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
