// Fill out your copyright notice in the Description page of Project Settings.


#include "MoveToEnemyBTTaskNode.h"
#include "AIControllerCPP.h"

UMoveToEnemyBTTaskNode::UMoveToEnemyBTTaskNode()
{
	bNotifyTick = true;
}

EBTNodeResult::Type UMoveToEnemyBTTaskNode::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	return EBTNodeResult::InProgress;
}

void UMoveToEnemyBTTaskNode::TickTask(class UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	AAIControllerCPP* AIContr = Cast<AAIControllerCPP>(OwnerComp.GetOwner());

	EPathFollowingRequestResult::Type MoveToActorResult = AIContr->MoveToEnemy();

	if (MoveToActorResult == EPathFollowingRequestResult::AlreadyAtGoal)
	{
		FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
	}
}

FString UMoveToEnemyBTTaskNode::GetStaticDescription() const
{
	return TEXT("Persigue al personaje principal");
}
