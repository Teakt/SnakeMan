// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Snake3D : ModuleRules
{
	public Snake3D(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] 
		{ "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "UMG" });
	}
}
