// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Ghosthunter : ModuleRules
{
	public Ghosthunter(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
