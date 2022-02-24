// Copyright Epic Games, Inc. All Rights Reserved.

#include "Comportamientos_P3_2GameMode.h"
#include "Comportamientos_P3_2PlayerController.h"
#include "Comportamientos_P3_2Character.h"
#include "UObject/ConstructorHelpers.h"

AComportamientos_P3_2GameMode::AComportamientos_P3_2GameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AComportamientos_P3_2PlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}