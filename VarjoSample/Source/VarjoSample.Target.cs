// Copyright Varjo Technologies Oy. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class VarjoSampleTarget : TargetRules
{
	public VarjoSampleTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		ExtraModuleNames.AddRange( new string[] { "VarjoSample" } );
	}
}
