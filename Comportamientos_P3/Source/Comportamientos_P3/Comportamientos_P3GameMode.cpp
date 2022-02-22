// Copyright Epic Games, Inc. All Rights Reserved.

#include "Comportamientos_P3GameMode.h"
#include "Comportamientos_P3PlayerController.h"
#include "Comportamientos_P3Character.h"
#include "UObject/ConstructorHelpers.h"

AComportamientos_P3GameMode::AComportamientos_P3GameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AComportamientos_P3PlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}