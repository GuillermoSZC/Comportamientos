// Fill out your copyright notice in the Description page of Project Settings.


#include "AIControllerCPP.h"
#include "BrainComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "TargetPointCPP.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"
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

void AAIControllerCPP::CheckNearbyEnemy()
{
	APawn* pPawn = GetPawn();

	FVector MultiSphereStart = pPawn->GetActorLocation();

	FVector MultiSphereEnd = MultiSphereStart + FVector(0, 0, 15.f);

	TArray<TEnumAsByte<EObjectTypeQuery>>ObjectTypes;
	ObjectTypes.Add(UEngineTypes::ConvertToObjectType(ECC_Pawn));

	TArray<AActor*> ActorsToIgnore;
	ActorsToIgnore.Add(pPawn);

	TArray<FHitResult> OutHits;

	bool bResult = UKismetSystemLibrary::SphereTraceMultiForObjects(GetWorld(),
		MultiSphereStart,
		MultiSphereEnd,
		700,
		ObjectTypes,
		false,
		ActorsToIgnore,
		EDrawDebugTrace::ForDuration,
		OutHits,
		true);

	UBlackboardComponent* BlackboardComponent = BrainComponent->GetBlackboardComponent();

	if (!bResult)
	{
		for (int32 i = 0; i < OutHits.Num(); ++i)
		{
			FHitResult Hit = OutHits[i];

			APawn* pPlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);

			if (Hit.GetActor() == pPlayerPawn)
			{
				BlackboardComponent->SetValueAsObject("TargetActorToFollow", pPlayerPawn);
				break;
			}
		}
	}
	else
	{
		BlackboardComponent->SetValueAsObject("TargetActorToFollow", NULL);
	}
}
