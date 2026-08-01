class CfgPatches
{
    class OCI_OCLF_Units
    {
        name = "Outer Colony Liberation Front - Units";
        units[]=
        {
            "OCLF_Rifleman",
            "OCLF_Rifleman_AT",
            "OCLF_Rifleman_AA",
            "OCLF_Marksman",
            "OCLF_Grenadier",
			"OCLF_Medic",
            "OCLF_Autorifleman",
            "OCLF_Rifleman_BR",
            "OCLF_Light_Rifleman",
            "OCLF_Unarmed",
            "OCLF_Sniper",
            "OCLF_Spotter",
            "OCLF_SquadLead",
            "OCLF_TeamLead",
            "OCLF_RTO",
            "OCLF_Officer",
            "OCLF_Crewman"
        };
        requiredAddons[] =
        {
            "OCI_OCLF",
            "OCI_OCLF_Uniforms"
        };
    };
};
class CfgVehicles
{
	class O_Soldier_F;
    class OCLF_UnitBase: O_Soldier_F
    {
        scope = 0;
        scopeCurator = 0;
        
        author = "Salmon";
        side = 0;
        faction = "OCI_OCLF_Fac";
        editorCategory = "OCI_OCLF_EdCat";
        editorSubcategory = "OCI_Infantry_EdSubCat";
        backpack = "";
        attendant = 0;
        engineer = 0;
        canDeactivateMines = 0;
        identityTypes[] = {"Head_Euro","LanguagePER_F","G_IRAN_default"};
        uniformClass = "OCLF_U_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Standard";

        items[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","FirstAidKit"};
        respawnItems[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","FirstAidKit"};
    };
    class OCLF_Rifleman: OCLF_UnitBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCLF] Rifleman";
        weapons[] = {"OCI_MA37_TCP_optic_M11VERO", "Throw", "Put"};
        respawnWeapons[] = {"OCI_MA37_TCP_optic_M11VERO", "Throw", "Put"};
        linkedItems[] = {"OCLF_V_M43A_BaseSec_2_Standard","OCLF_H_Helmet_CH43A_Standard","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"OCLF_V_M43A_BaseSec_2_Standard","OCLF_H_Helmet_CH43A_Standard","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        magazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
        respawnMagazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};    };

    class OCLF_Rifleman_AT: OCLF_UnitBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCLF] Rifleman (AT)";
        backpack = "OCI_B_M43_Medium_Rucksack_Olive_AT_OCLF";
        weapons[] = {"OCI_MA37_TCP_optic_M11VERO", "OCI_M41_SSR", "Throw", "Put"};
        respawnWeapons[] = {"OCI_MA37_TCP_optic_M11VERO", "OCI_M41_SSR", "Throw", "Put"};
        linkedItems[] = {"OCLF_V_M43A_BaseSec_2_Standard","OCLF_H_Helmet_CH43A_Standard","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"OCLF_V_M43A_BaseSec_2_Standard","OCLF_H_Helmet_CH43A_Standard","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        magazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
        respawnMagazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
    };
    class OCLF_Rifleman_AA: OCLF_UnitBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCLF] Rifleman (AA)";
        backpack = "OCI_B_M43_Medium_Rucksack_Olive_AA_OCLF";
        weapons[] = {"OCI_MA37_TCP_optic_M11VERO", "OCI_M41_SSR_AA", "Throw", "Put"};
        respawnWeapons[] = {"OCI_MA37_TCP_optic_M11VERO", "OCI_M41_SSR_AA", "Throw", "Put"};
        linkedItems[] = {"OCLF_V_M43A_BaseSec_2_Standard","OCLF_H_Helmet_CH43A_Standard","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"OCLF_V_M43A_BaseSec_2_Standard","OCLF_H_Helmet_CH43A_Standard","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        magazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
        respawnMagazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
    };

    class OCLF_Marksman: OCLF_UnitBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCLF] Marksman";
        weapons[] = {"OCI_M392_DMR_TCP_optic_M43RCO", "Throw", "Put"};
        respawnWeapons[] = {"OCI_M392_DMR_TCP_optic_M43RCO", "Throw", "Put"};
        linkedItems[] = {"OCLF_V_M43A_BaseSec_2_Standard","OCLF_H_Helmet_CH43A_Standard","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"OCLF_V_M43A_BaseSec_2_Standard","OCLF_H_Helmet_CH43A_Standard","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        magazines[] = {"OCI_15Rnd_762x51_Mag","OCI_15Rnd_762x51_Mag","OCI_15Rnd_762x51_Mag","OCI_15Rnd_762x51_Mag","OCI_15Rnd_762x51_Mag","OCI_15Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
        respawnMagazines[] = {"OCI_15Rnd_762x51_Mag","OCI_15Rnd_762x51_Mag","OCI_15Rnd_762x51_Mag","OCI_15Rnd_762x51_Mag","OCI_15Rnd_762x51_Mag","OCI_15Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
    };

    class OCLF_Grenadier: OCLF_UnitBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCLF] Grenadier";
        weapons[] = {"OCI_MA37GL_TCP_optic_M11VERO", "Throw", "Put"};
        respawnWeapons[] = {"OCI_MA37GL_TCP_optic_M11VERO", "Throw", "Put"};
        linkedItems[] = {"OCLF_V_M43A_BaseSec_2_Standard","OCLF_H_Helmet_CH43A_Standard","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"OCLF_V_M43A_BaseSec_2_Standard","OCLF_H_Helmet_CH43A_Standard","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        magazines[] = {"TCP_1Rnd_40_Shell_HE","TCP_1Rnd_40_Shell_HE","TCP_1Rnd_40_Shell_HE","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
        respawnMagazines[] = {"TCP_1Rnd_40_Shell_HE","TCP_1Rnd_40_Shell_HE","TCP_1Rnd_40_Shell_HE","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
    };

    class OCLF_Medic: OCLF_UnitBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCLF] Medic";
        attendant = 1;
        weapons[] = {"OCI_MA37K_TCP_optic_M11VERO", "Throw", "Put"};
        respawnWeapons[] = {"OCI_MA37K_TCP_optic_M11VERO", "Throw", "Put"};
        linkedItems[] = {"OCLF_V_M43A_BaseSec_2_Standard","OCLF_H_Helmet_CH43A_Standard","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"OCLF_V_M43A_BaseSec_2_Standard","OCLF_H_Helmet_CH43A_Standard","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        magazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
        respawnMagazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
    };

    class OCLF_Autorifleman: OCLF_UnitBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCLF] Autorifleman";
        backpack = "OCI_B_M43_Medium_Rucksack_Olive_Autorifleman_OCLF";
        weapons[] = {"OCI_LMG_M731_TCP_acc_carryHandle_M731_TCP_optic_EVOSD_TCP_bipod_01", "Throw", "Put"};
        respawnWeapons[] = {"OCI_LMG_M731_TCP_acc_carryHandle_M731_TCP_optic_EVOSD_TCP_bipod_01", "Throw", "Put"};
        linkedItems[] = {"OCLF_V_M43A_BaseSec_2_Standard","OCLF_H_Helmet_CH43A_Standard","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"OCLF_V_M43A_BaseSec_2_Standard","OCLF_H_Helmet_CH43A_Standard","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        magazines[] = {"TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
        respawnMagazines[] = {"TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
    };

    class OCLF_Rifleman_BR: OCLF_UnitBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCLF] Rifleman (BR)";
        weapons[] = {"OCI_BR45_TCP_optic_M11VERO", "Throw", "Put"};
        respawnWeapons[] = {"OCI_BR45_TCP_optic_M11VERO", "Throw", "Put"};
        linkedItems[] = {"OCLF_V_M43A_BaseSec_2_Standard","OCLF_H_Helmet_CH43A_Standard","ItemMap","itemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"OCLF_V_M43A_BaseSec_2_Standard","OCLF_H_Helmet_CH43A_Standard","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        magazines[] = {"OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
        respawnMagazines[] = {"OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
    };

    class OCLF_Light_Rifleman: OCLF_UnitBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCLF] Rifleman (Light)";
        weapons[] = {"OCI_MA37_TCP_optic_M11VERO", "Throw", "Put"};
        respawnWeapons[] = {"OCI_MA37_TCP_optic_M11VERO", "Throw", "Put"};
        linkedItems[] = {"OCLF_V_M43A_Light_1_Standard","","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"OCLF_V_M43A_Light_1_Standard","","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        magazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
        respawnMagazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
    };

    class OCLF_Unarmed: OCLF_UnitBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCLF] Unarmed";
        weapons[] = {"Throw", "Put"};
        respawnWeapons[] = {"Throw", "Put"};
        linkedItems[] = {"ItemMap","itemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"ItemMap","itemRadio","ItemCompass","ItemWatch"};
        magazines[] = {"TCP_M21_Smoke","TCP_M21_Smoke"};
        respawnMagazines[] = {"TCP_M21_Smoke","TCP_M21_Smoke"};
    };

    class OCLF_Sniper: OCLF_UnitBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCLF] Sniper";
        weapons[] = {"OCI_SRS99", "Throw", "Put"};
        respawnWeapons[] = {"OCI_SRS99", "Throw", "Put"};
        linkedItems[] = {"OCLF_V_M43A_Light_1_Standard","TCP_H_boonieHat_Folded_Left_Olive","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"OCLF_V_M43A_Light_1_Standard","TCP_H_boonieHat_Folded_Left_Olive","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        magazines[] = {"OCI_4Rnd_127x99_Mag_APFSDS","OCI_4Rnd_127x99_Mag_APFSDS","OCI_4Rnd_127x99_Mag_APFSDS","OCI_4Rnd_127x99_Mag_APFSDS","OCI_4Rnd_127x99_Mag_APFSDS","OCI_4Rnd_127x99_Mag_APFSDS","TCP_M21_Smoke","TCP_M21_Smoke"};
        respawnMagazines[] = {"OCI_4Rnd_127x99_Mag_APFSDS","OCI_4Rnd_127x99_Mag_APFSDS","OCI_4Rnd_127x99_Mag_APFSDS","OCI_4Rnd_127x99_Mag_APFSDS","OCI_4Rnd_127x99_Mag_APFSDS","OCI_4Rnd_127x99_Mag_APFSDS","TCP_M21_Smoke","TCP_M21_Smoke"};
    };

    class OCLF_Spotter: OCLF_UnitBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCLF] Spotter";
        weapons[] = {"OCI_BR45_TCP_optic_M27RCO", "Throw", "Put"};
        respawnWeapons[] = {"OCI_BR45_TCP_optic_M27RCO", "Throw", "Put"};
        linkedItems[] = {"OCLF_V_M43A_Light_1_Standard","TCP_H_boonieHat_Folded_Left_Olive","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"OCLF_V_M43A_Light_1_Standard","TCP_H_boonieHat_Folded_Left_Olive","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        magazines[] = {"OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","TCP_M21_Smoke","TCP_M21_Smoke"};
        respawnMagazines[] = {"OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","TCP_M21_Smoke","TCP_M21_Smoke"};
    };

    class OCLF_SquadLead: OCLF_UnitBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCLF] Squad Leader";
        weapons[] = {"OCI_MA37_TCP_optic_M11VERO", "Throw", "Put"};
        respawnWeapons[] = {"OCI_MA37_TCP_optic_M11VERO", "Throw", "Put"};
        linkedItems[] = {"OCLF_V_M43A_BaseSec_2_Standard","OCLF_H_Helmet_CH43A_Standard","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"OCLF_V_M43A_BaseSec_2_Standard","OCLF_H_Helmet_CH43A_Standard","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        magazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
        respawnMagazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
    };

    class OCLF_TeamLead: OCLF_UnitBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCLF] Team Leader";
        weapons[] = {"OCI_MA37_TCP_optic_M11VERO", "Throw", "Put"};
        respawnWeapons[] = {"OCI_MA37_TCP_optic_M11VERO", "Throw", "Put"};
        linkedItems[] = {"OCLF_V_M43A_BaseSec_2_Standard","OCLF_H_Helmet_CH43A_Standard","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"OCLF_V_M43A_BaseSec_2_Standard","OCLF_H_Helmet_CH43A_Standard","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        magazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
        respawnMagazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
    };

    class OCLF_RTO: OCLF_UnitBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCLF] RTO";
        backpack = "TCP_B_RTO_1_ANPRC171_Olive";
        weapons[] = {"OCI_M7_SMG_TCP_optic_M11VERO", "Throw", "Put"};
        respawnWeapons[] = {"OCI_M7_SMG_TCP_optic_M11VERO", "Throw", "Put"};
        linkedItems[] = {"OCLF_V_M43A_BaseSec_2_Standard","OCLF_H_Helmet_CH43A_Standard","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"OCLF_V_M43A_BaseSec_2_Standard","OCLF_H_Helmet_CH43A_Standard","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        magazines[] = {"OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
        respawnMagazines[] = {"OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
    };

    class OCLF_Officer: OCLF_UnitBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCLF] Officer";
        uniformClass = "OCLF_U_B_CBUU_FieldTop_QuarterRoll_Unzipped_Standard";
        weapons[] = {"OCI_M6C", "Throw", "Put"};
        respawnWeapons[] = {"OCI_M6C", "Throw", "Put"};
        linkedItems[] = {"OCLF_V_M43A_Light_3_Standard","TCP_H_Beret_Red","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"OCLF_V_M43A_Light_3_Standard","TCP_H_Beret_Red","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        magazines[] = {"OCI_12Rnd_127x30_SAP_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
        respawnMagazines[] = {"OCI_12Rnd_127x30_SAP_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
    };
    class OCLF_Crewman: OCLF_UnitBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCLF] Crewman";
        engineer = 1;
        weapons[] = {"OCI_M7_SMG_TCP_optic_M11VERO", "Throw", "Put"};
        respawnWeapons[] = {"OCI_M7_SMG_TCP_optic_M11VERO", "Throw", "Put"};
        linkedItems[] = {"OCLF_V_M43A_BaseSec_2_Standard","OCLF_H_Helmet_CH43A_Standard","ItemMap","itemRadio","ItemCompass","ItemWatch","TCP_G_BalaclavaTacticalGlasses_Olive_Red"};
        respawnLinkedItems[] = {"OCLF_V_M43A_BaseSec_2_Standard","OCLF_H_Helmet_CH43A_Standard","ItemMap","itemRadio","ItemCompass","ItemWatch","TCP_G_BalaclavaTacticalGlasses_Olive_Red"};
        magazines[] = {"OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
        respawnMagazines[] = {"OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
    };
};