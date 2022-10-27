using UnrealBuildTool;
using System.Collections.Generic;

public class PoniakoooEditorTarget : TargetRules
{
	public PoniakoooEditorTarget( TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange( new string[] { "Poniakooo" } );
	}
}
