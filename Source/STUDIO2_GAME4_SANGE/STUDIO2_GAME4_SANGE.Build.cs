// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class STUDIO2_GAME4_SANGE : ModuleRules
{
	public STUDIO2_GAME4_SANGE(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
