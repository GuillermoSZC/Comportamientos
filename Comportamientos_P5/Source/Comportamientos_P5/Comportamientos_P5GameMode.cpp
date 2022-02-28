// Copyright Epic Games, Inc. All Rights Reserved.

#include "Comportamientos_P5GameMode.h"
#include "Comportamientos_P5Character.h"
#include "UObject/ConstructorHelpers.h"

AComportamientos_P5GameMode::AComportamientos_P5GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
