// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Comportamientos_P3_2 : ModuleRules
{
	public Comportamientos_P3_2(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "NavigationSystem", "AIModule", "GameplayTasks" });
    }
}
