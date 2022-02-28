// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Comportamientos_P5 : ModuleRules
{
	public Comportamientos_P5(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
