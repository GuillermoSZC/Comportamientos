// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "CheckNearbyEnemyBTService.generated.h"

/**
 * 
 */
UCLASS()
class COMPORTAMIENTOS_P3_2_API UCheckNearbyEnemyBTService : public UBTService
{
	GENERATED_BODY()


		virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;
};
