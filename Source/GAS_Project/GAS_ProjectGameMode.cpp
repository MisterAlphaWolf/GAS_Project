// Copyright Epic Games, Inc. All Rights Reserved.

#include "GAS_ProjectGameMode.h"
#include "GAS_ProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGAS_ProjectGameMode::AGAS_ProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
