// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "AIControllerCPP.generated.h"

// DECLARE_DYNAMIC_DELEGATE[_RetVal, ...](PerceptionUpdated);

UCLASS()
class COMPORTAMIENTOS_P5_API AAIControllerCPP : public AAIController
{
	GENERATED_BODY()
public:
	AAIControllerCPP();
	
	// UAIPerceptionComponent* Perception;
	// UAISenseConfig_Sight* Sight;

	UFUNCTION()
	void PerceptionUpdated();
};
