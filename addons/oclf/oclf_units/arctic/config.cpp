class CfgPatches
{
    class OCI_OCLF_Units_Arctic
    {
        addonRootClass="OCI_OCLF_Units";
        name = "Outer Colony Liberation Front - Units - Arctic";
        units[]=
        {
            "OCLF_Rifleman_Arctic",
            "OCLF_Rifleman_AT_Arctic",
            "OCLF_Rifleman_AA_Arctic",
            "OCLF_Marksman_Arctic",
            "OCLF_Grenadier_Arctic",
			"OCLF_Medic_Arctic",
            "OCLF_Autorifleman_Arctic",
            "OCLF_Rifleman_BR_Arctic",
            "OCLF_Light_Rifleman_Arctic",
            "OCLF_Unarmed_Arctic",
            "OCLF_Sniper_Arctic",
            "OCLF_Spotter_Arctic",
            "OCLF_SquadLead_Arctic",
            "OCLF_TeamLead_Arctic",
            "OCLF_RTO_Arctic",
            "OCLF_Officer_Arctic",
            "OCLF_Crewman_Arctic"
        };
        requiredAddons[] =
        {
            "OCI_OCLF_Units"
        };
    };
};
class CfgVehicles
{
	class OCLF_UnitBase;
    class OCLF_UnitBase_Arctic: OCLF_UnitBase
    {
        editorSubcategory = "OCI_Infantry_Arctic_EdSubCat";
        uniformClass = "OCLF_U_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Arctic";
        OCI_Glasses[] = {
            "None",2,
            "TCP_G_TacticalGlasses_Red",1,
            "TCP_G_BalaclavaTacticalGlasses_White_Red",1
		};
    };

    class OCLF_Rifleman_Arctic: OCLF_UnitBase_Arctic
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCLF] Rifleman (Arctic)";
        weapons[] = {"OCI_MA37_TCP_optic_M11VERO", "Throw", "Put"};
        respawnWeapons[] = {"OCI_MA37_TCP_optic_M11VERO", "Throw", "Put"};
        linkedItems[] = {"OCLF_V_M43A_BaseSec_2_Arctic","OCLF_H_Helmet_CH43A_Arctic","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"OCLF_V_M43A_BaseSec_2_Arctic","OCLF_H_Helmet_CH43A_Arctic","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        magazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
        respawnMagazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};    };

    class OCLF_Rifleman_AT_Arctic: OCLF_UnitBase_Arctic
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCLF] Rifleman (AT) (Arctic)";
        backpack = "OCI_B_M43_Medium_Rucksack_Arctic_AT_OCLF";
        weapons[] = {"OCI_MA37_TCP_optic_M11VERO", "OCI_M41_SSR", "Throw", "Put"};
        respawnWeapons[] = {"OCI_MA37_TCP_optic_M11VERO", "OCI_M41_SSR", "Throw", "Put"};
        linkedItems[] = {"OCLF_V_M43A_BaseSec_2_Arctic","OCLF_H_Helmet_CH43A_Arctic","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"OCLF_V_M43A_BaseSec_2_Arctic","OCLF_H_Helmet_CH43A_Arctic","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        magazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
        respawnMagazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
    };
    class OCLF_Rifleman_AA_Arctic: OCLF_UnitBase_Arctic
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCLF] Rifleman (AA) (Arctic)";
        backpack = "OCI_B_M43_Medium_Rucksack_Arctic_AA_OCLF";
        weapons[] = {"OCI_MA37_TCP_optic_M11VERO", "OCI_M41_SSR_AA", "Throw", "Put"};
        respawnWeapons[] = {"OCI_MA37_TCP_optic_M11VERO", "OCI_M41_SSR_AA", "Throw", "Put"};
        linkedItems[] = {"OCLF_V_M43A_BaseSec_2_Arctic","OCLF_H_Helmet_CH43A_Arctic","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"OCLF_V_M43A_BaseSec_2_Arctic","OCLF_H_Helmet_CH43A_Arctic","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        magazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
        respawnMagazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
    };

    class OCLF_Marksman_Arctic: OCLF_UnitBase_Arctic
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCLF] Marksman (Arctic)";
        weapons[] = {"OCI_M392_DMR_TCP_optic_M43RCO", "Throw", "Put"};
        respawnWeapons[] = {"OCI_M392_DMR_TCP_optic_M43RCO", "Throw", "Put"};
        linkedItems[] = {"OCLF_V_M43A_BaseSec_2_Arctic","OCLF_H_Helmet_CH43A_Arctic","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"OCLF_V_M43A_BaseSec_2_Arctic","OCLF_H_Helmet_CH43A_Arctic","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        magazines[] = {"OCI_15Rnd_762x51_Mag","OCI_15Rnd_762x51_Mag","OCI_15Rnd_762x51_Mag","OCI_15Rnd_762x51_Mag","OCI_15Rnd_762x51_Mag","OCI_15Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
        respawnMagazines[] = {"OCI_15Rnd_762x51_Mag","OCI_15Rnd_762x51_Mag","OCI_15Rnd_762x51_Mag","OCI_15Rnd_762x51_Mag","OCI_15Rnd_762x51_Mag","OCI_15Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
    };

    class OCLF_Grenadier_Arctic: OCLF_UnitBase_Arctic
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCLF] Grenadier (Arctic)";
        weapons[] = {"OCI_MA37GL_TCP_optic_M11VERO", "Throw", "Put"};
        respawnWeapons[] = {"OCI_MA37GL_TCP_optic_M11VERO", "Throw", "Put"};
        linkedItems[] = {"OCLF_V_M43A_BaseSec_2_Arctic","OCLF_H_Helmet_CH43A_Arctic","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"OCLF_V_M43A_BaseSec_2_Arctic","OCLF_H_Helmet_CH43A_Arctic","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        magazines[] = {"TCP_1Rnd_40_Shell_HE","TCP_1Rnd_40_Shell_HE","TCP_1Rnd_40_Shell_HE","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
        respawnMagazines[] = {"TCP_1Rnd_40_Shell_HE","TCP_1Rnd_40_Shell_HE","TCP_1Rnd_40_Shell_HE","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
    };

    class OCLF_Medic_Arctic: OCLF_UnitBase_Arctic
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCLF] Medic (Arctic)";
        attendant = 1;
        weapons[] = {"OCI_MA37K_TCP_optic_M11VERO", "Throw", "Put"};
        respawnWeapons[] = {"OCI_MA37K_TCP_optic_M11VERO", "Throw", "Put"};
        linkedItems[] = {"OCLF_V_M43A_BaseSec_2_Arctic","OCLF_H_Helmet_CH43A_Arctic","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"OCLF_V_M43A_BaseSec_2_Arctic","OCLF_H_Helmet_CH43A_Arctic","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        magazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
        respawnMagazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
    };

    class OCLF_Autorifleman_Arctic: OCLF_UnitBase_Arctic
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCLF] Autorifleman (Arctic)";
        backpack = "OCI_B_M43_Medium_Rucksack_Arctic_Autorifleman_OCLF";
        weapons[] = {"OCI_LMG_M731_TCP_acc_carryHandle_M731_TCP_optic_EVOSD_TCP_bipod_01", "Throw", "Put"};
        respawnWeapons[] = {"OCI_LMG_M731_TCP_acc_carryHandle_M731_TCP_optic_EVOSD_TCP_bipod_01", "Throw", "Put"};
        linkedItems[] = {"OCLF_V_M43A_BaseSec_2_Arctic","OCLF_H_Helmet_CH43A_Arctic","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"OCLF_V_M43A_BaseSec_2_Arctic","OCLF_H_Helmet_CH43A_Arctic","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        magazines[] = {"TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
        respawnMagazines[] = {"TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
    };

    class OCLF_Rifleman_BR_Arctic: OCLF_UnitBase_Arctic
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCLF] Rifleman (BR) (Arctic)";
        weapons[] = {"OCI_BR45_TCP_optic_M11VERO", "Throw", "Put"};
        respawnWeapons[] = {"OCI_BR45_TCP_optic_M11VERO", "Throw", "Put"};
        linkedItems[] = {"OCLF_V_M43A_BaseSec_2_Arctic","OCLF_H_Helmet_CH43A_Arctic","ItemMap","itemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"OCLF_V_M43A_BaseSec_2_Arctic","OCLF_H_Helmet_CH43A_Arctic","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        magazines[] = {"OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
        respawnMagazines[] = {"OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
    };

    class OCLF_Light_Rifleman_Arctic: OCLF_UnitBase_Arctic
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCLF] Rifleman (Light) (Arctic)";
        weapons[] = {"OCI_MA37_TCP_optic_M11VERO", "Throw", "Put"};
        respawnWeapons[] = {"OCI_MA37_TCP_optic_M11VERO", "Throw", "Put"};
        linkedItems[] = {"OCLF_V_M43A_Light_1_Arctic","","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"OCLF_V_M43A_Light_1_Arctic","","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        magazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
        respawnMagazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
    };

    class OCLF_Unarmed_Arctic: OCLF_UnitBase_Arctic
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCLF] Unarmed (Arctic)";
        weapons[] = {"Throw", "Put"};
        respawnWeapons[] = {"Throw", "Put"};
        linkedItems[] = {"ItemMap","itemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"ItemMap","itemRadio","ItemCompass","ItemWatch"};
        magazines[] = {"TCP_M21_Smoke","TCP_M21_Smoke"};
        respawnMagazines[] = {"TCP_M21_Smoke","TCP_M21_Smoke"};
    };

    class OCLF_Sniper_Arctic: OCLF_UnitBase_Arctic
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCLF] Sniper (Arctic)";
        weapons[] = {"OCI_SRS99", "Throw", "Put"};
        respawnWeapons[] = {"OCI_SRS99", "Throw", "Put"};
        linkedItems[] = {"OCLF_V_M43A_Light_1_Arctic","TCP_H_boonieHat_Folded_Left_White","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"OCLF_V_M43A_Light_1_Arctic","TCP_H_boonieHat_Folded_Left_White","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        magazines[] = {"OCI_4Rnd_127x99_Mag_APFSDS","OCI_4Rnd_127x99_Mag_APFSDS","OCI_4Rnd_127x99_Mag_APFSDS","OCI_4Rnd_127x99_Mag_APFSDS","OCI_4Rnd_127x99_Mag_APFSDS","OCI_4Rnd_127x99_Mag_APFSDS","TCP_M21_Smoke","TCP_M21_Smoke"};
        respawnMagazines[] = {"OCI_4Rnd_127x99_Mag_APFSDS","OCI_4Rnd_127x99_Mag_APFSDS","OCI_4Rnd_127x99_Mag_APFSDS","OCI_4Rnd_127x99_Mag_APFSDS","OCI_4Rnd_127x99_Mag_APFSDS","OCI_4Rnd_127x99_Mag_APFSDS","TCP_M21_Smoke","TCP_M21_Smoke"};
    };

    class OCLF_Spotter_Arctic: OCLF_UnitBase_Arctic
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCLF] Spotter (Arctic)";
        weapons[] = {"OCI_BR45_TCP_optic_M27RCO", "Throw", "Put"};
        respawnWeapons[] = {"OCI_BR45_TCP_optic_M27RCO", "Throw", "Put"};
        linkedItems[] = {"OCLF_V_M43A_Light_1_Arctic","TCP_H_boonieHat_Folded_Left_White","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"OCLF_V_M43A_Light_1_Arctic","TCP_H_boonieHat_Folded_Left_White","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        magazines[] = {"OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","TCP_M21_Smoke","TCP_M21_Smoke"};
        respawnMagazines[] = {"OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","TCP_M21_Smoke","TCP_M21_Smoke"};
    };

    class OCLF_SquadLead_Arctic: OCLF_UnitBase_Arctic
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCLF] Squad Leader (Arctic)";
        weapons[] = {"OCI_MA37_TCP_optic_M11VERO", "Throw", "Put"};
        respawnWeapons[] = {"OCI_MA37_TCP_optic_M11VERO", "Throw", "Put"};
        linkedItems[] = {"OCLF_V_M43A_BaseSec_2_Arctic","OCLF_H_Helmet_CH43A_Arctic","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"OCLF_V_M43A_BaseSec_2_Arctic","OCLF_H_Helmet_CH43A_Arctic","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        magazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
        respawnMagazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
    };

    class OCLF_TeamLead_Arctic: OCLF_UnitBase_Arctic
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCLF] Team Leader (Arctic)";
        weapons[] = {"OCI_MA37_TCP_optic_M11VERO", "Throw", "Put"};
        respawnWeapons[] = {"OCI_MA37_TCP_optic_M11VERO", "Throw", "Put"};
        linkedItems[] = {"OCLF_V_M43A_BaseSec_2_Arctic","OCLF_H_Helmet_CH43A_Arctic","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"OCLF_V_M43A_BaseSec_2_Arctic","OCLF_H_Helmet_CH43A_Arctic","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        magazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
        respawnMagazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
    };

    class OCLF_RTO_Arctic: OCLF_UnitBase_Arctic
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCLF] RTO (Arctic)";
        backpack = "TCP_B_RTO_1_ANPRC171_White";
        weapons[] = {"OCI_M7_SMG_TCP_optic_M11VERO", "Throw", "Put"};
        respawnWeapons[] = {"OCI_M7_SMG_TCP_optic_M11VERO", "Throw", "Put"};
        linkedItems[] = {"OCLF_V_M43A_BaseSec_2_Arctic","OCLF_H_Helmet_CH43A_Arctic","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"OCLF_V_M43A_BaseSec_2_Arctic","OCLF_H_Helmet_CH43A_Arctic","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        magazines[] = {"OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
        respawnMagazines[] = {"OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
    };

    class OCLF_Officer_Arctic: OCLF_UnitBase_Arctic
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCLF] Officer (Arctic)";
        uniformClass = "OCLF_U_B_CBUU_FieldTop_QuarterRoll_Unzipped_Arctic";
        weapons[] = {"OCI_M6C", "Throw", "Put"};
        respawnWeapons[] = {"OCI_M6C", "Throw", "Put"};
        linkedItems[] = {"OCLF_V_M43A_Light_3_Arctic","TCP_H_Beret_Red","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"OCLF_V_M43A_Light_3_Arctic","TCP_H_Beret_Red","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        magazines[] = {"OCI_12Rnd_127x30_SAP_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
        respawnMagazines[] = {"OCI_12Rnd_127x30_SAP_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
    };
    class OCLF_Crewman_Arctic: OCLF_UnitBase_Arctic
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCLF] Crewman (Arctic)";
        engineer = 1;
        weapons[] = {"OCI_M7_SMG_TCP_optic_M11VERO", "Throw", "Put"};
        respawnWeapons[] = {"OCI_M7_SMG_TCP_optic_M11VERO", "Throw", "Put"};
        linkedItems[] = {"OCLF_V_M43A_BaseSec_2_Arctic","OCLF_H_Helmet_CH43A_Arctic","ItemMap","itemRadio","ItemCompass","ItemWatch","TCP_G_BalaclavaTacticalGlasses_White_Red"};
        respawnLinkedItems[] = {"OCLF_V_M43A_BaseSec_2_Arctic","OCLF_H_Helmet_CH43A_Arctic","ItemMap","itemRadio","ItemCompass","ItemWatch","TCP_G_BalaclavaTacticalGlasses_White_Red"};
        magazines[] = {"OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
        respawnMagazines[] = {"OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
    };
};