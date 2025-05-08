// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Test20250507 : ModuleRules
{
	public Test20250507(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
