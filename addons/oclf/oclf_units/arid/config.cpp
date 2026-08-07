class CfgPatches
{
    class OCI_OCLF_Units_Arid
    {
        addonRootClass="OCI_OCLF_Units";
        name = "Outer Colony Liberation Front - Units - Arid";
        units[]=
        {
            "OCLF_Rifleman_Arid",
            "OCLF_Rifleman_AT_Arid",
            "OCLF_Rifleman_AA_Arid",
            "OCLF_Marksman_Arid",
            "OCLF_Grenadier_Arid",
			"OCLF_Medic_Arid",
            "OCLF_Autorifleman_Arid",
            "OCLF_Rifleman_BR_Arid",
            "OCLF_Light_Rifleman_Arid",
            "OCLF_Unarmed_Arid",
            "OCLF_Sniper_Arid",
            "OCLF_Spotter_Arid",
            "OCLF_SquadLead_Arid",
            "OCLF_TeamLead_Arid",
            "OCLF_RTO_Arid",
            "OCLF_Officer_Arid",
            "OCLF_Crewman_Arid"
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
    class OCLF_UnitBase_Arid: OCLF_UnitBase
    {
        editorSubcategory = "OCI_Infantry_Arid_EdSubCat";
        uniformClass = "OCLF_U_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Arid";
    };

    class OCLF_Rifleman_Arid: OCLF_UnitBase_Arid
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCLF] Rifleman (Arid)";
        weapons[] = {"OCI_MA37_TCP_optic_M11VERO", "Throw", "Put"};
        respawnWeapons[] = {"OCI_MA37_TCP_optic_M11VERO", "Throw", "Put"};
        linkedItems[] = {"OCLF_V_M43A_BaseSec_2_Standard","OCLF_H_Helmet_CH43A_Standard","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"OCLF_V_M43A_BaseSec_2_Standard","OCLF_H_Helmet_CH43A_Standard","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        magazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
        respawnMagazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};    };

    class OCLF_Rifleman_AT_Arid: OCLF_UnitBase_Arid
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCLF] Rifleman (AT) (Arid)";
        backpack = "OCI_B_M43_Medium_Rucksack_Olive_AT_OCLF";
        weapons[] = {"OCI_MA37_TCP_optic_M11VERO", "OCI_M41_SSR", "Throw", "Put"};
        respawnWeapons[] = {"OCI_MA37_TCP_optic_M11VERO", "OCI_M41_SSR", "Throw", "Put"};
        linkedItems[] = {"OCLF_V_M43A_BaseSec_2_Standard","OCLF_H_Helmet_CH43A_Standard","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"OCLF_V_M43A_BaseSec_2_Standard","OCLF_H_Helmet_CH43A_Standard","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        magazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
        respawnMagazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
    };
    class OCLF_Rifleman_AA_Arid: OCLF_UnitBase_Arid
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCLF] Rifleman (AA) (Arid)";
        backpack = "OCI_B_M43_Medium_Rucksack_Olive_AA_OCLF";
        weapons[] = {"OCI_MA37_TCP_optic_M11VERO", "OCI_M41_SSR_AA", "Throw", "Put"};
        respawnWeapons[] = {"OCI_MA37_TCP_optic_M11VERO", "OCI_M41_SSR_AA", "Throw", "Put"};
        linkedItems[] = {"OCLF_V_M43A_BaseSec_2_Standard","OCLF_H_Helmet_CH43A_Standard","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"OCLF_V_M43A_BaseSec_2_Standard","OCLF_H_Helmet_CH43A_Standard","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        magazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
        respawnMagazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
    };

    class OCLF_Marksman_Arid: OCLF_UnitBase_Arid
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCLF] Marksman (Arid)";
        weapons[] = {"OCI_M392_DMR_TCP_optic_M43RCO", "Throw", "Put"};
        respawnWeapons[] = {"OCI_M392_DMR_TCP_optic_M43RCO", "Throw", "Put"};
        linkedItems[] = {"OCLF_V_M43A_BaseSec_2_Standard","OCLF_H_Helmet_CH43A_Standard","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"OCLF_V_M43A_BaseSec_2_Standard","OCLF_H_Helmet_CH43A_Standard","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        magazines[] = {"OCI_15Rnd_762x51_Mag","OCI_15Rnd_762x51_Mag","OCI_15Rnd_762x51_Mag","OCI_15Rnd_762x51_Mag","OCI_15Rnd_762x51_Mag","OCI_15Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
        respawnMagazines[] = {"OCI_15Rnd_762x51_Mag","OCI_15Rnd_762x51_Mag","OCI_15Rnd_762x51_Mag","OCI_15Rnd_762x51_Mag","OCI_15Rnd_762x51_Mag","OCI_15Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
    };

    class OCLF_Grenadier_Arid: OCLF_UnitBase_Arid
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCLF] Grenadier (Arid)";
        weapons[] = {"OCI_MA37GL_TCP_optic_M11VERO", "Throw", "Put"};
        respawnWeapons[] = {"OCI_MA37GL_TCP_optic_M11VERO", "Throw", "Put"};
        linkedItems[] = {"OCLF_V_M43A_BaseSec_2_Standard","OCLF_H_Helmet_CH43A_Standard","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"OCLF_V_M43A_BaseSec_2_Standard","OCLF_H_Helmet_CH43A_Standard","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        magazines[] = {"TCP_1Rnd_40_Shell_HE","TCP_1Rnd_40_Shell_HE","TCP_1Rnd_40_Shell_HE","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
        respawnMagazines[] = {"TCP_1Rnd_40_Shell_HE","TCP_1Rnd_40_Shell_HE","TCP_1Rnd_40_Shell_HE","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
    };

    class OCLF_Medic_Arid: OCLF_UnitBase_Arid
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCLF] Medic (Arid)";
        attendant = 1;
        weapons[] = {"OCI_MA37K_TCP_optic_M11VERO", "Throw", "Put"};
        respawnWeapons[] = {"OCI_MA37K_TCP_optic_M11VERO", "Throw", "Put"};
        linkedItems[] = {"OCLF_V_M43A_BaseSec_2_Standard","OCLF_H_Helmet_CH43A_Standard","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"OCLF_V_M43A_BaseSec_2_Standard","OCLF_H_Helmet_CH43A_Standard","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        magazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
        respawnMagazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
    };

    class OCLF_Autorifleman_Arid: OCLF_UnitBase_Arid
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCLF] Autorifleman (Arid)";
        backpack = "OCI_B_M43_Medium_Rucksack_Olive_Autorifleman_OCLF";
        weapons[] = {"OCI_LMG_M731_TCP_acc_carryHandle_M731_TCP_optic_EVOSD_TCP_bipod_01", "Throw", "Put"};
        respawnWeapons[] = {"OCI_LMG_M731_TCP_acc_carryHandle_M731_TCP_optic_EVOSD_TCP_bipod_01", "Throw", "Put"};
        linkedItems[] = {"OCLF_V_M43A_BaseSec_2_Standard","OCLF_H_Helmet_CH43A_Standard","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"OCLF_V_M43A_BaseSec_2_Standard","OCLF_H_Helmet_CH43A_Standard","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        magazines[] = {"TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
        respawnMagazines[] = {"TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
    };

    class OCLF_Rifleman_BR_Arid: OCLF_UnitBase_Arid
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCLF] Rifleman (BR) (Arid)";
        weapons[] = {"OCI_BR45_TCP_optic_M11VERO", "Throw", "Put"};
        respawnWeapons[] = {"OCI_BR45_TCP_optic_M11VERO", "Throw", "Put"};
        linkedItems[] = {"OCLF_V_M43A_BaseSec_2_Standard","OCLF_H_Helmet_CH43A_Standard","ItemMap","itemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"OCLF_V_M43A_BaseSec_2_Standard","OCLF_H_Helmet_CH43A_Standard","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        magazines[] = {"OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
        respawnMagazines[] = {"OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
    };

    class OCLF_Light_Rifleman_Arid: OCLF_UnitBase_Arid
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCLF] Rifleman (Light) (Arid)";
        weapons[] = {"OCI_MA37_TCP_optic_M11VERO", "Throw", "Put"};
        respawnWeapons[] = {"OCI_MA37_TCP_optic_M11VERO", "Throw", "Put"};
        linkedItems[] = {"OCLF_V_M43A_Light_1_Standard","","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"OCLF_V_M43A_Light_1_Standard","","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        magazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
        respawnMagazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
    };

    class OCLF_Unarmed_Arid: OCLF_UnitBase_Arid
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCLF] Unarmed (Arid)";
        weapons[] = {"Throw", "Put"};
        respawnWeapons[] = {"Throw", "Put"};
        linkedItems[] = {"ItemMap","itemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"ItemMap","itemRadio","ItemCompass","ItemWatch"};
        magazines[] = {"TCP_M21_Smoke","TCP_M21_Smoke"};
        respawnMagazines[] = {"TCP_M21_Smoke","TCP_M21_Smoke"};
    };

    class OCLF_Sniper_Arid: OCLF_UnitBase_Arid
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCLF] Sniper (Arid)";
        weapons[] = {"OCI_SRS99", "Throw", "Put"};
        respawnWeapons[] = {"OCI_SRS99", "Throw", "Put"};
        linkedItems[] = {"OCLF_V_M43A_Light_1_Standard","TCP_H_boonieHat_Folded_Left_Olive","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"OCLF_V_M43A_Light_1_Standard","TCP_H_boonieHat_Folded_Left_Olive","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        magazines[] = {"OCI_4Rnd_127x99_Mag_APFSDS","OCI_4Rnd_127x99_Mag_APFSDS","OCI_4Rnd_127x99_Mag_APFSDS","OCI_4Rnd_127x99_Mag_APFSDS","OCI_4Rnd_127x99_Mag_APFSDS","OCI_4Rnd_127x99_Mag_APFSDS","TCP_M21_Smoke","TCP_M21_Smoke"};
        respawnMagazines[] = {"OCI_4Rnd_127x99_Mag_APFSDS","OCI_4Rnd_127x99_Mag_APFSDS","OCI_4Rnd_127x99_Mag_APFSDS","OCI_4Rnd_127x99_Mag_APFSDS","OCI_4Rnd_127x99_Mag_APFSDS","OCI_4Rnd_127x99_Mag_APFSDS","TCP_M21_Smoke","TCP_M21_Smoke"};
    };

    class OCLF_Spotter_Arid: OCLF_UnitBase_Arid
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCLF] Spotter (Arid)";
        weapons[] = {"OCI_BR45_TCP_optic_M27RCO", "Throw", "Put"};
        respawnWeapons[] = {"OCI_BR45_TCP_optic_M27RCO", "Throw", "Put"};
        linkedItems[] = {"OCLF_V_M43A_Light_1_Standard","TCP_H_boonieHat_Folded_Left_Olive","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"OCLF_V_M43A_Light_1_Standard","TCP_H_boonieHat_Folded_Left_Olive","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        magazines[] = {"OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","TCP_M21_Smoke","TCP_M21_Smoke"};
        respawnMagazines[] = {"OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","TCP_M21_Smoke","TCP_M21_Smoke"};
    };

    class OCLF_SquadLead_Arid: OCLF_UnitBase_Arid
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCLF] Squad Leader (Arid)";
        weapons[] = {"OCI_MA37_TCP_optic_M11VERO", "Throw", "Put"};
        respawnWeapons[] = {"OCI_MA37_TCP_optic_M11VERO", "Throw", "Put"};
        linkedItems[] = {"OCLF_V_M43A_BaseSec_2_Standard","OCLF_H_Helmet_CH43A_Standard","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"OCLF_V_M43A_BaseSec_2_Standard","OCLF_H_Helmet_CH43A_Standard","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        magazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
        respawnMagazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
    };

    class OCLF_TeamLead_Arid: OCLF_UnitBase_Arid
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCLF] Team Leader (Arid)";
        weapons[] = {"OCI_MA37_TCP_optic_M11VERO", "Throw", "Put"};
        respawnWeapons[] = {"OCI_MA37_TCP_optic_M11VERO", "Throw", "Put"};
        linkedItems[] = {"OCLF_V_M43A_BaseSec_2_Standard","OCLF_H_Helmet_CH43A_Standard","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"OCLF_V_M43A_BaseSec_2_Standard","OCLF_H_Helmet_CH43A_Standard","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        magazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
        respawnMagazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
    };

    class OCLF_RTO_Arid: OCLF_UnitBase_Arid
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCLF] RTO (Arid)";
        backpack = "TCP_B_RTO_1_ANPRC171_Olive";
        weapons[] = {"OCI_M7_SMG_TCP_optic_M11VERO", "Throw", "Put"};
        respawnWeapons[] = {"OCI_M7_SMG_TCP_optic_M11VERO", "Throw", "Put"};
        linkedItems[] = {"OCLF_V_M43A_BaseSec_2_Standard","OCLF_H_Helmet_CH43A_Standard","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"OCLF_V_M43A_BaseSec_2_Standard","OCLF_H_Helmet_CH43A_Standard","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        magazines[] = {"OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
        respawnMagazines[] = {"OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
    };

    class OCLF_Officer_Arid: OCLF_UnitBase_Arid
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCLF] Officer (Arid)";
        uniformClass = "OCLF_U_B_CBUU_FieldTop_QuarterRoll_Unzipped_Arid";
        weapons[] = {"OCI_M6C", "Throw", "Put"};
        respawnWeapons[] = {"OCI_M6C", "Throw", "Put"};
        linkedItems[] = {"OCLF_V_M43A_Light_3_Standard","TCP_H_Beret_Red","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"OCLF_V_M43A_Light_3_Standard","TCP_H_Beret_Red","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        magazines[] = {"OCI_12Rnd_127x30_SAP_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
        respawnMagazines[] = {"OCI_12Rnd_127x30_SAP_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
    };
    class OCLF_Crewman_Arid: OCLF_UnitBase_Arid
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCLF] Crewman (Arid)";
        engineer = 1;
        weapons[] = {"OCI_M7_SMG_TCP_optic_M11VERO", "Throw", "Put"};
        respawnWeapons[] = {"OCI_M7_SMG_TCP_optic_M11VERO", "Throw", "Put"};
        linkedItems[] = {"OCLF_V_M43A_BaseSec_2_Standard","OCLF_H_Helmet_CH43A_Standard","ItemMap","itemRadio","ItemCompass","ItemWatch","TCP_G_BalaclavaTacticalGlasses_Olive_Red"};
        respawnLinkedItems[] = {"OCLF_V_M43A_BaseSec_2_Standard","OCLF_H_Helmet_CH43A_Standard","ItemMap","itemRadio","ItemCompass","ItemWatch","TCP_G_BalaclavaTacticalGlasses_Olive_Red"};
        magazines[] = {"OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
        respawnMagazines[] = {"OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
    };
};