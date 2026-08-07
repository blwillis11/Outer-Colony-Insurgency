class CfgPatches
{
    class OCI_OCLF_Units_ORCS
    {
        name = "Outer Colony Liberation Front - ORCS Units";
        units[]=
        {
            "OCLF_ORCS_Rifleman",
            "OCLF_ORCS_Rifleman_AT",
            "OCLF_ORCS_Rifleman_AA",
            "OCLF_ORCS_Marksman",
            "OCLF_ORCS_Grenadier",
			"OCLF_ORCS_Medic",
            "OCLF_ORCS_Autorifleman",
            "OCLF_ORCS_Rifleman_BR",
            "OCLF_ORCS_Sniper",
            "OCLF_ORCS_Spotter",
            "OCLF_ORCS_SquadLead",
            "OCLF_ORCS_TeamLead",
            "OCLF_ORCS_RTO"
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
	class OCLF_UnitBase;
    class OCLF_ORCS_UnitBase: OCLF_UnitBase
    {
        editorSubcategory = "OCI_ORCS_EdSubCat";
        backpack = "";
        identityTypes[] = {"Head_Euro","LanguagePER_F","G_IRAN_default"};
        uniformClass = "OCLF_U_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Black";
        OCI_Glasses[] = {
		};
    };
    class OCLF_ORCS_Rifleman: OCLF_ORCS_UnitBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCLF] ORCS Rifleman";
        weapons[] = {"OCI_MA37_TCP_optic_M11VERO", "Throw", "Put"};
        respawnWeapons[] = {"OCI_MA37_TCP_optic_M11VERO", "Throw", "Put"};
        linkedItems[] = {"OCLF_V_M43D_ODST_3_2_Black","OCLF_H_Helmet_CH43A_Black","G_AirPurifyingRespirator_02_black_nofilter_F","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"OCLF_V_M43D_ODST_3_2_Black","OCLF_H_Helmet_CH43A_Black","G_AirPurifyingRespirator_02_black_nofilter_F","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        magazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
        respawnMagazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};    };

    class OCLF_ORCS_Rifleman_AT: OCLF_ORCS_UnitBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCLF] ORCS Rifleman (AT)";
        backpack = "OCI_B_M43_Medium_Rucksack_Olive_AT_OCLF";
        weapons[] = {"OCI_MA37_TCP_optic_M11VERO", "OCI_M41_SSR", "Throw", "Put"};
        respawnWeapons[] = {"OCI_MA37_TCP_optic_M11VERO", "OCI_M41_SSR", "Throw", "Put"};
        linkedItems[] = {"OCLF_V_M43D_ODST_3_2_Black","OCLF_H_Helmet_CH43A_Black","G_AirPurifyingRespirator_02_black_nofilter_F","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"OCLF_V_M43D_ODST_3_2_Black","OCLF_H_Helmet_CH43A_Black","G_AirPurifyingRespirator_02_black_nofilter_F","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        magazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
        respawnMagazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
    };
    class OCLF_ORCS_Rifleman_AA: OCLF_ORCS_UnitBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCLF] ORCS Rifleman (AA)";
        backpack = "OCI_B_M43_Medium_Rucksack_Olive_AA_OCLF";
        weapons[] = {"OCI_MA37_TCP_optic_M11VERO", "OCI_M41_SSR_AA", "Throw", "Put"};
        respawnWeapons[] = {"OCI_MA37_TCP_optic_M11VERO", "OCI_M41_SSR_AA", "Throw", "Put"};
        linkedItems[] = {"OCLF_V_M43D_ODST_3_2_Black","OCLF_H_Helmet_CH43A_Black","G_AirPurifyingRespirator_02_black_nofilter_F","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"OCLF_V_M43D_ODST_3_2_Black","OCLF_H_Helmet_CH43A_Black","G_AirPurifyingRespirator_02_black_nofilter_F","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        magazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
        respawnMagazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
    };

    class OCLF_ORCS_Marksman: OCLF_ORCS_UnitBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCLF] ORCS Marksman";
        weapons[] = {"OCI_M392_DMR_TCP_optic_M43RCO", "Throw", "Put"};
        respawnWeapons[] = {"OCI_M392_DMR_TCP_optic_M43RCO", "Throw", "Put"};
        linkedItems[] = {"OCLF_V_M43D_ODST_3_2_Black","OCLF_H_Helmet_CH43A_Black","G_AirPurifyingRespirator_02_black_nofilter_F","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"OCLF_V_M43D_ODST_3_2_Black","OCLF_H_Helmet_CH43A_Black","G_AirPurifyingRespirator_02_black_nofilter_F","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        magazines[] = {"OCI_15Rnd_762x51_Mag","OCI_15Rnd_762x51_Mag","OCI_15Rnd_762x51_Mag","OCI_15Rnd_762x51_Mag","OCI_15Rnd_762x51_Mag","OCI_15Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
        respawnMagazines[] = {"OCI_15Rnd_762x51_Mag","OCI_15Rnd_762x51_Mag","OCI_15Rnd_762x51_Mag","OCI_15Rnd_762x51_Mag","OCI_15Rnd_762x51_Mag","OCI_15Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
    };

    class OCLF_ORCS_Grenadier: OCLF_ORCS_UnitBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCLF] ORCS Grenadier";
        weapons[] = {"OCI_MA37GL_TCP_optic_M11VERO", "Throw", "Put"};
        respawnWeapons[] = {"OCI_MA37GL_TCP_optic_M11VERO", "Throw", "Put"};
        linkedItems[] = {"OCLF_V_M43D_ODST_3_2_Black","OCLF_H_Helmet_CH43A_Black","G_AirPurifyingRespirator_02_black_nofilter_F","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"OCLF_V_M43D_ODST_3_2_Black","OCLF_H_Helmet_CH43A_Black","G_AirPurifyingRespirator_02_black_nofilter_F","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        magazines[] = {"TCP_1Rnd_40_Shell_HE","TCP_1Rnd_40_Shell_HE","TCP_1Rnd_40_Shell_HE","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
        respawnMagazines[] = {"TCP_1Rnd_40_Shell_HE","TCP_1Rnd_40_Shell_HE","TCP_1Rnd_40_Shell_HE","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
    };

    class OCLF_ORCS_Medic: OCLF_ORCS_UnitBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCLF] ORCS Medic";
        attendant = 1;
        weapons[] = {"OCI_MA37K_TCP_optic_M11VERO", "Throw", "Put"};
        respawnWeapons[] = {"OCI_MA37K_TCP_optic_M11VERO", "Throw", "Put"};
        linkedItems[] = {"OCLF_V_M43D_ODST_3_2_Black","OCLF_H_Helmet_CH43A_Black","G_AirPurifyingRespirator_02_black_nofilter_F","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"OCLF_V_M43D_ODST_3_2_Black","OCLF_H_Helmet_CH43A_Black","G_AirPurifyingRespirator_02_black_nofilter_F","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        magazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
        respawnMagazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
    };

    class OCLF_ORCS_Autorifleman: OCLF_ORCS_UnitBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCLF] ORCS Autorifleman";
        backpack = "OCI_B_M43_Medium_Rucksack_Olive_Autorifleman_OCLF";
        weapons[] = {"OCI_LMG_M731_TCP_acc_carryHandle_M731_TCP_optic_EVOSD_TCP_bipod_01", "Throw", "Put"};
        respawnWeapons[] = {"OCI_LMG_M731_TCP_acc_carryHandle_M731_TCP_optic_EVOSD_TCP_bipod_01", "Throw", "Put"};
        linkedItems[] = {"OCLF_V_M43D_ODST_3_2_Black","OCLF_H_Helmet_CH43A_Black","G_AirPurifyingRespirator_02_black_nofilter_F","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"OCLF_V_M43D_ODST_3_2_Black","OCLF_H_Helmet_CH43A_Black","G_AirPurifyingRespirator_02_black_nofilter_F","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        magazines[] = {"TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
        respawnMagazines[] = {"TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
    };

    class OCLF_ORCS_Rifleman_BR: OCLF_ORCS_UnitBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCLF] ORCS Rifleman (BR)";
        weapons[] = {"OCI_BR45_TCP_optic_M11VERO", "Throw", "Put"};
        respawnWeapons[] = {"OCI_BR45_TCP_optic_M11VERO", "Throw", "Put"};
        linkedItems[] = {"OCLF_V_M43D_ODST_3_2_Black","OCLF_H_Helmet_CH43A_Black","G_AirPurifyingRespirator_02_black_nofilter_F","ItemMap","itemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"OCLF_V_M43D_ODST_3_2_Black","OCLF_H_Helmet_CH43A_Black","G_AirPurifyingRespirator_02_black_nofilter_F","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        magazines[] = {"OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
        respawnMagazines[] = {"OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
    };

    class OCLF_ORCS_Sniper: OCLF_ORCS_UnitBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCLF] ORCS Sniper";
        weapons[] = {"OCI_SRS99", "Throw", "Put"};
        respawnWeapons[] = {"OCI_SRS99", "Throw", "Put"};
        linkedItems[] = {"OCLF_V_M43D_ODST_3_2_Black","OCLF_H_Helmet_CH43A_Black","G_AirPurifyingRespirator_02_black_nofilter_F","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"OCLF_V_M43D_ODST_3_2_Black","OCLF_H_Helmet_CH43A_Black","G_AirPurifyingRespirator_02_black_nofilter_F","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        magazines[] = {"OCI_4Rnd_127x99_Mag_APFSDS","OCI_4Rnd_127x99_Mag_APFSDS","OCI_4Rnd_127x99_Mag_APFSDS","OCI_4Rnd_127x99_Mag_APFSDS","OCI_4Rnd_127x99_Mag_APFSDS","OCI_4Rnd_127x99_Mag_APFSDS","TCP_M21_Smoke","TCP_M21_Smoke"};
        respawnMagazines[] = {"OCI_4Rnd_127x99_Mag_APFSDS","OCI_4Rnd_127x99_Mag_APFSDS","OCI_4Rnd_127x99_Mag_APFSDS","OCI_4Rnd_127x99_Mag_APFSDS","OCI_4Rnd_127x99_Mag_APFSDS","OCI_4Rnd_127x99_Mag_APFSDS","TCP_M21_Smoke","TCP_M21_Smoke"};
    };

    class OCLF_ORCS_Spotter: OCLF_ORCS_UnitBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCLF] ORCS Spotter";
        weapons[] = {"OCI_BR45_TCP_optic_M27RCO", "Throw", "Put"};
        respawnWeapons[] = {"OCI_BR45_TCP_optic_M27RCO", "Throw", "Put"};
        linkedItems[] = {"OCLF_V_M43D_ODST_3_2_Black","OCLF_H_Helmet_CH43A_Black","G_AirPurifyingRespirator_02_black_nofilter_F","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"OCLF_V_M43D_ODST_3_2_Black","OCLF_H_Helmet_CH43A_Black","G_AirPurifyingRespirator_02_black_nofilter_F","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        magazines[] = {"OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","TCP_M21_Smoke","TCP_M21_Smoke"};
        respawnMagazines[] = {"OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","TCP_M21_Smoke","TCP_M21_Smoke"};
    };

    class OCLF_ORCS_SquadLead: OCLF_ORCS_UnitBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCLF] ORCS Squad Leader";
        weapons[] = {"OCI_MA37_TCP_optic_M11VERO", "Throw", "Put"};
        respawnWeapons[] = {"OCI_MA37_TCP_optic_M11VERO", "Throw", "Put"};
        linkedItems[] = {"OCLF_V_M43D_ODST_3_2_Black","OCLF_H_Helmet_CH43A_Black","G_AirPurifyingRespirator_02_black_nofilter_F","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"OCLF_V_M43D_ODST_3_2_Black","OCLF_H_Helmet_CH43A_Black","G_AirPurifyingRespirator_02_black_nofilter_F","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        magazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
        respawnMagazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
    };

    class OCLF_ORCS_TeamLead: OCLF_ORCS_UnitBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCLF] ORCS Team Leader";
        weapons[] = {"OCI_MA37_TCP_optic_M11VERO", "Throw", "Put"};
        respawnWeapons[] = {"OCI_MA37_TCP_optic_M11VERO", "Throw", "Put"};
        linkedItems[] = {"OCLF_V_M43D_ODST_3_2_Black","OCLF_H_Helmet_CH43A_Black","G_AirPurifyingRespirator_02_black_nofilter_F","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"OCLF_V_M43D_ODST_3_2_Black","OCLF_H_Helmet_CH43A_Black","G_AirPurifyingRespirator_02_black_nofilter_F","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        magazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
        respawnMagazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
    };

    class OCLF_ORCS_RTO: OCLF_ORCS_UnitBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCLF] ORCS RTO";
        backpack = "TCP_B_RTO_1_ANPRC171_Olive";
        weapons[] = {"OCI_M7_SMG_TCP_optic_M11VERO", "Throw", "Put"};
        respawnWeapons[] = {"OCI_M7_SMG_TCP_optic_M11VERO", "Throw", "Put"};
        linkedItems[] = {"OCLF_V_M43D_ODST_3_2_Black","OCLF_H_Helmet_CH43A_Black","G_AirPurifyingRespirator_02_black_nofilter_F","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"OCLF_V_M43D_ODST_3_2_Black","OCLF_H_Helmet_CH43A_Black","G_AirPurifyingRespirator_02_black_nofilter_F","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        magazines[] = {"OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
        respawnMagazines[] = {"OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
    };
};