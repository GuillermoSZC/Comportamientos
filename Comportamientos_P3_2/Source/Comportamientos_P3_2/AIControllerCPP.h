// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "AIControllerCPP.generated.h"

/**
 * 
 */
UCLASS()
class COMPORTAMIENTOS_P3_2_API AAIControllerCPP : public AAIController
{
	GENERATED_BODY()
	
public:

	UFUNCTION(BlueprintCallable, Category = "Ejercicio")
		void UpdateNextTargetPoint();

	UFUNCTION(BlueprintCallable, Category = "Ejercicio")
		void CheckNearbyEnemy();

	UFUNCTION(BlueprintCallable, Category = "Ejercicio")
		EPathFollowingRequestResult::Type MoveToEnemy();
};
