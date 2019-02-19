// Copyright Varjo Technologies Oy. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class VarjoSampleEditorTarget : TargetRules
{
	public VarjoSampleEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		ExtraModuleNames.AddRange( new string[] { "VarjoSample" } );
	}
}
