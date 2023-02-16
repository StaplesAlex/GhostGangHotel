using UnrealBuildTool;

public class GhostGangTarget : TargetRules
{
	public GhostGangTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		ExtraModuleNames.Add("GhostGang");
	}
}
