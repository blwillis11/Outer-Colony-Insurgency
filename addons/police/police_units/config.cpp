class CfgPatches
{
    class OCI_Police_Units
    {
        name = "Colonial Police - Units";
        units[]=
        {
            "Police_Policeman_AR",
            "Police_Policeman_SMG",
            "Police_SWAT_AR",
            "Police_SWAT_SMG"
        };
        requiredAddons[] =
        {
            "OCI_Police",
            "OCI_Police_Uniforms"
        };
    };
};
class CfgVehicles
{
	class I_Soldier_F;
    class Police_UnitBase: I_Soldier_F
    {
        scope = 0;
        scopeCurator = 0;
        
        author = "Salmon";
        side = 2;
        faction = "OCI_Police_Fac";
        editorCategory = "OCI_Police_EdCat";
        editorSubcategory = "OCI_Infantry_EdSubCat";
        backpack = "";
        attendant = 0;
        engineer = 0;
        canDeactivateMines = 0;
        identityTypes[] = {"Head_Euro","LanguagePER_F","G_IRAN_default"};
        uniformClass = "OCI_CPD_Uniform";
        allowedFacewear[] = {
        };

        items[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","FirstAidKit"};
        respawnItems[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","FirstAidKit"};

        allowedHeadgear[] = {""};
        headgearList[] = {""};
    };
    class Police_Policeman_AR: Police_UnitBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCI] Policeman (AR)";
        weapons[] = {"OCI_MA37_TCP_optic_M11VERO", "Throw", "Put"};
        respawnWeapons[] = {"OCI_MA37_TCP_optic_M11VERO", "Throw", "Put"};
        linkedItems[] = {"OCI_Vest_CPD_Light","OPTRE_CPD_Cap","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"OCI_Vest_CPD_Light","OPTRE_CPD_Cap","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        magazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke"};
        respawnMagazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke"};    
    };
    class Police_Policeman_SMG: Police_UnitBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCI] Policeman (SMG)";
        weapons[] = {"OCI_M6J", "Throw", "Put"};
        respawnWeapons[] = {"OCI_M6J", "Throw", "Put"};
        linkedItems[] = {"OCI_Vest_CPD_Light","OPTRE_CPD_Cap","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"OCI_Vest_CPD_Light","OPTRE_CPD_Cap","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        magazines[] = {"OCI_36Rnd_127x30_SAP_Mag","OCI_36Rnd_127x30_SAP_Mag","OCI_36Rnd_127x30_SAP_Mag","OCI_36Rnd_127x30_SAP_Mag","TCP_M21_Smoke","TCP_M21_Smoke"};
        respawnMagazines[] = {"OCI_36Rnd_127x30_SAP_Mag","OCI_36Rnd_127x30_SAP_Mag","OCI_36Rnd_127x30_SAP_Mag","OCI_36Rnd_127x30_SAP_Mag","TCP_M21_Smoke","TCP_M21_Smoke"};    
    };
    class Police_SWAT_AR: Police_UnitBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCI] SWAT (AR)";
        weapons[] = {"OCI_MA37_TCP_optic_M11VERO", "Throw", "Put"};
        respawnWeapons[] = {"OCI_MA37_TCP_optic_M11VERO", "Throw", "Put"};
        linkedItems[] = {"OCI_Vest_CPD_Heavy","OCI_CPD_CH251P","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"OCI_Vest_CPD_Heavy","OCI_CPD_CH251P","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        magazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke"};
        respawnMagazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke"};    
    };
    class Police_SWAT_SMG: Police_UnitBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCI] SWAT (SMG)";
        weapons[] = {"OCI_M6J", "Throw", "Put"};
        respawnWeapons[] = {"OCI_M6J", "Throw", "Put"};
        linkedItems[] = {"OCI_Vest_CPD_Heavy","OCI_CPD_CH251P","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"OCI_Vest_CPD_Heavy","OCI_CPD_CH251P","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        magazines[] = {"OCI_36Rnd_127x30_SAP_Mag","OCI_36Rnd_127x30_SAP_Mag","OCI_36Rnd_127x30_SAP_Mag","OCI_36Rnd_127x30_SAP_Mag","TCP_M21_Smoke","TCP_M21_Smoke"};
        respawnMagazines[] = {"OCI_36Rnd_127x30_SAP_Mag","OCI_36Rnd_127x30_SAP_Mag","OCI_36Rnd_127x30_SAP_Mag","OCI_36Rnd_127x30_SAP_Mag","TCP_M21_Smoke","TCP_M21_Smoke"};    
    };
};