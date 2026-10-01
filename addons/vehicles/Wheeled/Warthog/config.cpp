#include "script_component.hpp"
class CfgPatches
{
    class SUBADDON2
	{
		addonRootClass = QUOTE(ADDON);

		name = QUOTE(SUBCOMPONENT2_NAME);
		units[] = {
            QUOTE(OCI_M12A_Innie),
            QUOTE(OCI_M12A_LAAG_Innie),
            QUOTE(OCI_M831A_Innie),
            QUOTE(OCI_M12A_ALIM_Innie)
        };

		// Used for forcing load order
		requiredAddons[] = {
            QUOTE(ADDON)
        };
        skipWhenMissingDependencies = 1;
	};
};

class CfgVehicles
{
    class TCP_B_UNSC_A_W_M12A;
    class OCI_M12A_Innie : TCP_B_UNSC_A_W_M12A
    {
        displayName="[OCI] M12A FAV Warthog";
        author= "OCI Dev Team";
        faction = "OCI_OCI_Fac";
        editorSubcategory = "EdSubcat_Cars";
        scopeCurator=2;
        scope=2;
        side=0;
        crew = "OCI_O_OCLF_A_W_Soldier";
        hiddenSelectionsTextures[] = {
            "\z\OCI\addons\vehicles\Wheeled\Warthog\Data\M12A_Ext_CO.paa",
            "\TCP\Soft\M12A\data\camo\default\M12A_Int_CO.paa",
            "\TCP\Soft\M12A\data\camo\default\M12A_Tub_CO.paa",
            "\TCP\Soft\M12A\data\camo\default\M12A_Susp_CO.paa",
            "\TCP\Soft\M12A\data\camo\olive\M12A_Rim_CO.paa",
            "\z\OCI\addons\vehicles\Wheeled\Warthog\Data\M12A_DecalSheet_CA.paa"
        };
        textureList[] = {};
        textureSources[] = 
        {
        };
    };

    class TCP_B_UNSC_A_W_M12A_LAAG_M41;
    class OCI_M12A_LAAG_Innie : TCP_B_UNSC_A_W_M12A_LAAG_M41
    {
        displayName="[OCI] M12A LRV Warthog (M41)";
        author= "OCI Dev Team";
        faction = "OCI_OCI_Fac";
        editorSubcategory = "EdSubcat_Cars";
        scopeCurator=2;
        scope=2;
        side=0;
        crew = "OCI_O_OCLF_A_W_Soldier";
        hiddenSelectionsTextures[] = {
            "\z\OCI\addons\vehicles\Wheeled\Warthog\Data\M12A_Ext_CO.paa",
            "\TCP\Soft\M12A\data\camo\default\M12A_Int_CO.paa",
            "\TCP\Soft\M12A\data\camo\default\M12A_Tub_CO.paa",
            "\TCP\Soft\M12A\data\camo\default\M12A_Susp_CO.paa",
            "\TCP\Soft\M12A\data\camo\olive\M12A_Rim_CO.paa",
            "\z\OCI\addons\vehicles\Wheeled\Warthog\Data\M12A_DecalSheet_CA.paa",
            "\TCP\static\M41_LAAG\data\camo\olive\M41_LAAG_01_CO.paa",
            "\TCP\static\M41_LAAG\data\camo\black\M41_LAAG_DecalSheet_CA.paa"
        };
        textureList[] = {};
        textureSources[] = 
        {
        };
    };

    class TCP_B_UNSC_A_W_M831A;
    class OCI_M831A_Innie : TCP_B_UNSC_A_W_M831A
    {
        displayName="[OCI] M831A Troop Transport Warthog";
        author= "OCI Dev Team";
        faction = "OCI_OCI_Fac";
        editorSubcategory = "EdSubcat_Cars";
        scopeCurator=2;
        scope=2;
        side=0;
        crew = "OCI_O_OCLF_A_W_Soldier";
        hiddenSelectionsTextures[] = {
            "\z\OCI\addons\vehicles\Wheeled\Warthog\Data\M12A_Ext_CO.paa",
            "\TCP\Soft\M12A\data\camo\default\M12A_Int_CO.paa",
            "\TCP\Soft\M12A\data\camo\default\M12A_Tub_CO.paa",
            "\TCP\Soft\M12A\data\camo\default\M12A_Susp_CO.paa",
            "\TCP\Soft\M12A\data\camo\olive\M12A_Rim_CO.paa",
            "\z\OCI\addons\vehicles\Wheeled\Warthog\Data\M12A_DecalSheet_CA.paa",
            "\TCP\Soft\M12A\data\camo\olive\M12A_M831_CO.paa"
        };
        textureList[] = {};
        textureSources[] = 
        {
        };
    };

    class TCP_B_UNSC_A_W_M12A_ALIM_M68B;
    class OCI_M12A_ALIM_Innie : TCP_B_UNSC_A_W_M12A_ALIM_M68B
    {
        displayName="[OCI] M12AG2 LAAV Warthog";
        author= "OCI Dev Team";
        faction = "OCI_OCI_Fac";
        editorSubcategory = "EdSubcat_Cars";
        scopeCurator=2;
        scope=2;
        side=0;
        crew = "OCI_O_OCLF_A_W_Soldier";
        hiddenSelectionsTextures[] = {
            "\z\OCI\addons\vehicles\Wheeled\Warthog\Data\M12A_Ext_CO.paa",
            "\TCP\Soft\M12A\data\camo\default\M12A_Int_CO.paa",
            "\TCP\Soft\M12A\data\camo\default\M12A_Tub_CO.paa",
            "\TCP\Soft\M12A\data\camo\default\M12A_Susp_CO.paa",
            "\TCP\Soft\M12A\data\camo\olive\M12A_Rim_CO.paa",
            "\z\OCI\addons\vehicles\Wheeled\Warthog\Data\M12A_DecalSheet_CA.paa",
            "\TCP\static\M68B_ALIM\data\camo\olive\M68B_ALIM_01_CO.paa",
            "\TCP\static\M68A_ALIM\data\camo\olive\M68A_ALIM_Stand_co.paa",
            "\TCP\static\M68A_ALIM\data\camo\default\M68A_ALIM_MFD_CO.paa",
            "\TCP\static\M68A_ALIM\data\camo\default\M68A_ALIM_Glass_CA.paa",
            "\TCP\static\M68A_ALIM\data\camo\default\M68A_ALIM_DecalSheet_CA.paa"
        };
        textureList[] = {};
        textureSources[] = 
        {
        };
    };
};
