// Fill out your copyright notice in the Description page of Project Settings.


#include "AIControllerCPP.h"

AAIControllerCPP::AAIControllerCPP()
{
	// Perception = CreateDefaultSubobject(UAIPerceptionComponent)(TEXT("AIPerception Component"));
	// Sight = CreateDefaultSubobject(UAISenseConfig_Sight)(TEXT("Sight"));
	// 
	// Perception->ConfigureSense(*Sight);
	// Perception->SetDominantSense(Sight->GetSenseImplementation());
	// Perception->OnPerceptionUpdated.AddDynamic(this, &AAIControllerCPP::PerceptionUpdated);
}

void AAIControllerCPP::PerceptionUpdated()
{

}
