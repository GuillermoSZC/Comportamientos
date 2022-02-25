// Fill out your copyright notice in the Description page of Project Settings.


#include "CheckNearbyEnemyBTService.h"
#include "BrainComponent.h"
#include "TargetPointCPP.h"
#include "AIControllerCPP.h"
#include "Runtime/Engine/Public/EngineUtils.h"
#include "BehaviorTree/BlackboardComponent.h"

void UCheckNearbyEnemyBTService::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

	AAIControllerCPP* AIContr = Cast<AAIControllerCPP>(OwnerComp.GetOwner());
	
	AIContr->CheckNearbyEnemy();
}
