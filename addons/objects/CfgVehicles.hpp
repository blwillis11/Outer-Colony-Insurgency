class CfgVehicles
{
	class NonStrategic;
	class OCLF_SpraySymbol: NonStrategic
	{
		author = AUTHOR;
		displayName = "Spray Logo (OCLF)";
		vehicleClass = "OPTRE_City_Building_Class";
		scope = 2;
		scopeCurator = 2;
		faction = "OCI_Assets";
		editorCategory = "OCI_Objects_EdCat";
		editorSubcategory = "OCI_Misc_EdSubCat";
		model = "z\OCI\addons\objects\data\graffiti\Graffiti_01.p3d";
		destrType = "DestructNo";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"z\OCI\addons\objects\data\graffiti\logo\OCLFSpraySymbol_ca.paa"
		};
	};
	class OCLF_SprayLogo: OCLF_SpraySymbol
	{
		displayName = "Spray Symbol (OCLF)";
		hiddenSelectionsTextures[] = {
			"z\OCI\addons\objects\data\graffiti\logo\OCLFSprayLogo_ca.paa"
		};
	};
	
	class FlagCarrier_Asym;
	class FlagCarrier;

	class Land_OCI_FlagPole_01_OCI : FlagCarrier_Asym
	{
		author = AUTHOR;
		displayName = "Flag (OCI)";
		scope = 2;
		scopeCurator = 2;
		faction = "OCI_Assets";
		editorCategory = "OCI_Objects_EdCat";
		editorSubcategory = "OCI_Misc_EdSubCat";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture 'z\OCI\addons\objects\data\flags\OCIFlag_co.paa'";
		};
	};

	class Land_OCI_FlagPole_02_OCI : FlagCarrier
	{
		author = AUTHOR;
		displayName = "Flag (OCI) (Damaged)";
		scope = 2;
		scopeCurator = 2;
		faction = "OCI_Assets";
		editorCategory = "OCI_Objects_EdCat";
		editorSubcategory = "OCI_Misc_EdSubCat";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture 'z\OCI\addons\objects\data\flags\OCIDmgFlag_co.paa'";
		};
	};
};
