// Fill out your copyright notice in the Description page of Project Settings.


#include "UpdateNextTargetPointBTTaskNode.h"
#include "AIControllerCPP.h"

EBTNodeResult::Type UUpdateNextTargetPointBTTaskNode::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AAIControllerCPP* AIController = Cast<AAIControllerCPP>(OwnerComp.GetOwner());
	
	AIController->UpdateNextTargetPoint();

	return EBTNodeResult::Succeeded;
}

FString UUpdateNextTargetPointBTTaskNode::GetStaticDescription() const
{
	return TEXT("Actualiza el siguiente punto en el recorrido");
}