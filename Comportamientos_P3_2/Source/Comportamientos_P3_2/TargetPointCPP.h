// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TargetPoint.h"
#include "TargetPointCPP.generated.h"

/**
 * 
 */
UCLASS()
class COMPORTAMIENTOS_P3_2_API ATargetPointCPP : public ATargetPoint
{
	GENERATED_BODY()

public:
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ejercicio")
		int32 m_iPosition;
};
