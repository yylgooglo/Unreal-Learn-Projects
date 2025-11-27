// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class PingTaiTY004 : ModuleRules
{
	public PingTaiTY004(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"PingTaiTY004",
			"PingTaiTY004/Variant_Platforming",
			"PingTaiTY004/Variant_Platforming/Animation",
			"PingTaiTY004/Variant_Combat",
			"PingTaiTY004/Variant_Combat/AI",
			"PingTaiTY004/Variant_Combat/Animation",
			"PingTaiTY004/Variant_Combat/Gameplay",
			"PingTaiTY004/Variant_Combat/Interfaces",
			"PingTaiTY004/Variant_Combat/UI",
			"PingTaiTY004/Variant_SideScrolling",
			"PingTaiTY004/Variant_SideScrolling/AI",
			"PingTaiTY004/Variant_SideScrolling/Gameplay",
			"PingTaiTY004/Variant_SideScrolling/Interfaces",
			"PingTaiTY004/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
