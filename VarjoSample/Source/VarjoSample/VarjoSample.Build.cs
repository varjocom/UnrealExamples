// Copyright Varjo Technologies Oy. All Rights Reserved.

using UnrealBuildTool;

public class VarjoSample : ModuleRules
{
	public VarjoSample(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "VarjoHMD", "VarjoEyeTracker" });
        //PrivateDependencyModuleNames.AddRange(new string[] { "HeadMountedDisplay" });
	}
}
