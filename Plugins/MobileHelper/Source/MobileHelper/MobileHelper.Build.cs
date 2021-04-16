// Some copyright should be here...

using UnrealBuildTool;
using System.IO;

public class MobileHelper : ModuleRules
{
	public MobileHelper(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				// ... add other public dependencies that you statically link with here ...
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				// ... add private dependencies that you statically link with here ...	
			}
			);

        if (Target.Platform == UnrealTargetPlatform.Android)
        {
            PrivateIncludePaths.Add("MobileHelper/Private/Android");
        }
        //else if (Target.Platform == UnrealTargetPlatform.IOS)
        //{
        //    PrivateIncludePaths.Add("MobileHelper/Private/IOS");
        //}

        if (Target.Platform == UnrealTargetPlatform.Android)
        {
            PrivateDependencyModuleNames.AddRange(new string[] { "Launch" });
            string PluginPath = Utils.MakePathRelativeTo(ModuleDirectory, Target.RelativeEnginePath);
            AdditionalPropertiesForReceipt.Add("AndroidPlugin", Path.Combine(PluginPath, "MobileHelper_UPL_Android.xml"));
        }
    }
}
