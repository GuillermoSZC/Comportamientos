// Fill out your copyright notice in the Description page of Project Settings.


#include "AIControllerCPP.h"
#include "BrainComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "TargetPointCPP.h"
#include "Runtime/Engine/Public/EngineUtils.h"


void AAIControllerCPP::UpdateNextTargetPoint()
{
	UBlackboardComponent* pBlackboardComponent = BrainComponent->GetBlackboardComponent();

	int32 iTargetPointIndex = pBlackboardComponent->GetValueAsInt("TargetPointIndex");

	if (iTargetPointIndex >= 4)
	{
		iTargetPointIndex = 0;
		pBlackboardComponent->SetValueAsInt("TargetPointIndex", iTargetPointIndex);
	}

	for (TActorIterator<ATargetPointCPP> It(GetWorld()); It; ++It)
	{
		ATargetPointCPP* pTargetPoint = *It;
	
		if (iTargetPointIndex == pTargetPoint->m_iPosition)
		{
			pBlackboardComponent->SetValueAsVector("TargetPointPosition", pTargetPoint->GetActorLocation());
			break;
		}
	}
	pBlackboardComponent->SetValueAsInt("TargetPointIndex", (iTargetPointIndex + 1));
}
