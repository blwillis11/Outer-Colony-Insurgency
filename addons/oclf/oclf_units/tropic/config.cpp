class CfgPatches
{
    class OCI_OCLF_Units_Tropic
    {
        addonRootClass="OCI_OCLF_Units";
        name = "Outer Colony Liberation Front - Units - Tropic";
        units[]=
        {
            "OCLF_Rifleman_Tropic",
            "OCLF_Rifleman_AT_Tropic",
            "OCLF_Rifleman_AA_Tropic",
            "OCLF_Marksman_Tropic",
            "OCLF_Grenadier_Tropic",
			"OCLF_Medic_Tropic",
            "OCLF_Autorifleman_Tropic",
            "OCLF_Rifleman_BR_Tropic",
            "OCLF_Light_Rifleman_Tropic",
            "OCLF_Unarmed_Tropic",
            "OCLF_Sniper_Tropic",
            "OCLF_Spotter_Tropic",
            "OCLF_SquadLead_Tropic",
            "OCLF_TeamLead_Tropic",
            "OCLF_RTO_Tropic",
            "OCLF_Officer_Tropic",
            "OCLF_Crewman_Tropic"
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
    class OCLF_UnitBase_Tropic: OCLF_UnitBase
    {
        editorSubcategory = "OCI_Infantry_Tropic_EdSubCat";
        uniformClass = "OCLF_U_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Tropic";
    };

    class OCLF_Rifleman_Tropic: OCLF_UnitBase_Tropic
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCLF] Rifleman (Tropic)";
        weapons[] = {"OCI_MA37_TCP_optic_M11VERO", "Throw", "Put"};
        respawnWeapons[] = {"OCI_MA37_TCP_optic_M11VERO", "Throw", "Put"};
        linkedItems[] = {"OCLF_V_M43A_BaseSec_2_Tropic","OCLF_H_Helmet_CH43A_Tropic","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"OCLF_V_M43A_BaseSec_2_Tropic","OCLF_H_Helmet_CH43A_Tropic","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        magazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
        respawnMagazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};    };

    class OCLF_Rifleman_AT_Tropic: OCLF_UnitBase_Tropic
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCLF] Rifleman (AT) (Tropic)";
        backpack = "OCI_B_M43_Medium_Rucksack_Green_AT_OCLF";
        weapons[] = {"OCI_MA37_TCP_optic_M11VERO", "OCI_M41_SSR", "Throw", "Put"};
        respawnWeapons[] = {"OCI_MA37_TCP_optic_M11VERO", "OCI_M41_SSR", "Throw", "Put"};
        linkedItems[] = {"OCLF_V_M43A_BaseSec_2_Tropic","OCLF_H_Helmet_CH43A_Tropic","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"OCLF_V_M43A_BaseSec_2_Tropic","OCLF_H_Helmet_CH43A_Tropic","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        magazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
        respawnMagazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
    };
    class OCLF_Rifleman_AA_Tropic: OCLF_UnitBase_Tropic
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCLF] Rifleman (AA) (Tropic)";
        backpack = "OCI_B_M43_Medium_Rucksack_Green_AA_OCLF";
        weapons[] = {"OCI_MA37_TCP_optic_M11VERO", "OCI_M41_SSR_AA", "Throw", "Put"};
        respawnWeapons[] = {"OCI_MA37_TCP_optic_M11VERO", "OCI_M41_SSR_AA", "Throw", "Put"};
        linkedItems[] = {"OCLF_V_M43A_BaseSec_2_Tropic","OCLF_H_Helmet_CH43A_Tropic","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"OCLF_V_M43A_BaseSec_2_Tropic","OCLF_H_Helmet_CH43A_Tropic","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        magazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
        respawnMagazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
    };

    class OCLF_Marksman_Tropic: OCLF_UnitBase_Tropic
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCLF] Marksman (Tropic)";
        weapons[] = {"OCI_M392_DMR_TCP_optic_M43RCO", "Throw", "Put"};
        respawnWeapons[] = {"OCI_M392_DMR_TCP_optic_M43RCO", "Throw", "Put"};
        linkedItems[] = {"OCLF_V_M43A_BaseSec_2_Tropic","OCLF_H_Helmet_CH43A_Tropic","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"OCLF_V_M43A_BaseSec_2_Tropic","OCLF_H_Helmet_CH43A_Tropic","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        magazines[] = {"OCI_15Rnd_762x51_Mag","OCI_15Rnd_762x51_Mag","OCI_15Rnd_762x51_Mag","OCI_15Rnd_762x51_Mag","OCI_15Rnd_762x51_Mag","OCI_15Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
        respawnMagazines[] = {"OCI_15Rnd_762x51_Mag","OCI_15Rnd_762x51_Mag","OCI_15Rnd_762x51_Mag","OCI_15Rnd_762x51_Mag","OCI_15Rnd_762x51_Mag","OCI_15Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
    };

    class OCLF_Grenadier_Tropic: OCLF_UnitBase_Tropic
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCLF] Grenadier (Tropic)";
        weapons[] = {"OCI_MA37GL_TCP_optic_M11VERO", "Throw", "Put"};
        respawnWeapons[] = {"OCI_MA37GL_TCP_optic_M11VERO", "Throw", "Put"};
        linkedItems[] = {"OCLF_V_M43A_BaseSec_2_Tropic","OCLF_H_Helmet_CH43A_Tropic","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"OCLF_V_M43A_BaseSec_2_Tropic","OCLF_H_Helmet_CH43A_Tropic","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        magazines[] = {"TCP_1Rnd_40_Shell_HE","TCP_1Rnd_40_Shell_HE","TCP_1Rnd_40_Shell_HE","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
        respawnMagazines[] = {"TCP_1Rnd_40_Shell_HE","TCP_1Rnd_40_Shell_HE","TCP_1Rnd_40_Shell_HE","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
    };

    class OCLF_Medic_Tropic: OCLF_UnitBase_Tropic
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCLF] Medic (Tropic)";
        attendant = 1;
        weapons[] = {"OCI_MA37K_TCP_optic_M11VERO", "Throw", "Put"};
        respawnWeapons[] = {"OCI_MA37K_TCP_optic_M11VERO", "Throw", "Put"};
        linkedItems[] = {"OCLF_V_M43A_BaseSec_2_Tropic","OCLF_H_Helmet_CH43A_Tropic","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"OCLF_V_M43A_BaseSec_2_Tropic","OCLF_H_Helmet_CH43A_Tropic","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        magazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
        respawnMagazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
    };

    class OCLF_Autorifleman_Tropic: OCLF_UnitBase_Tropic
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCLF] Autorifleman (Tropic)";
        backpack = "OCI_B_M43_Medium_Rucksack_Green_Autorifleman_OCLF";
        weapons[] = {"OCI_LMG_M731_TCP_acc_carryHandle_M731_TCP_optic_EVOSD_TCP_bipod_01", "Throw", "Put"};
        respawnWeapons[] = {"OCI_LMG_M731_TCP_acc_carryHandle_M731_TCP_optic_EVOSD_TCP_bipod_01", "Throw", "Put"};
        linkedItems[] = {"OCLF_V_M43A_BaseSec_2_Tropic","OCLF_H_Helmet_CH43A_Tropic","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"OCLF_V_M43A_BaseSec_2_Tropic","OCLF_H_Helmet_CH43A_Tropic","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        magazines[] = {"TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
        respawnMagazines[] = {"TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
    };

    class OCLF_Rifleman_BR_Tropic: OCLF_UnitBase_Tropic
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCLF] Rifleman (BR) (Tropic)";
        weapons[] = {"OCI_BR45_TCP_optic_M11VERO", "Throw", "Put"};
        respawnWeapons[] = {"OCI_BR45_TCP_optic_M11VERO", "Throw", "Put"};
        linkedItems[] = {"OCLF_V_M43A_BaseSec_2_Tropic","OCLF_H_Helmet_CH43A_Tropic","ItemMap","itemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"OCLF_V_M43A_BaseSec_2_Tropic","OCLF_H_Helmet_CH43A_Tropic","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        magazines[] = {"OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
        respawnMagazines[] = {"OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
    };

    class OCLF_Light_Rifleman_Tropic: OCLF_UnitBase_Tropic
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCLF] Rifleman (Light) (Tropic)";
        weapons[] = {"OCI_MA37_TCP_optic_M11VERO", "Throw", "Put"};
        respawnWeapons[] = {"OCI_MA37_TCP_optic_M11VERO", "Throw", "Put"};
        linkedItems[] = {"OCLF_V_M43A_Light_1_Tropic","","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"OCLF_V_M43A_Light_1_Tropic","","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        magazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
        respawnMagazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
    };

    class OCLF_Unarmed_Tropic: OCLF_UnitBase_Tropic
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCLF] Unarmed (Tropic)";
        weapons[] = {"Throw", "Put"};
        respawnWeapons[] = {"Throw", "Put"};
        linkedItems[] = {"ItemMap","itemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"ItemMap","itemRadio","ItemCompass","ItemWatch"};
        magazines[] = {"TCP_M21_Smoke","TCP_M21_Smoke"};
        respawnMagazines[] = {"TCP_M21_Smoke","TCP_M21_Smoke"};
    };

    class OCLF_Sniper_Tropic: OCLF_UnitBase_Tropic
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCLF] Sniper (Tropic)";
        weapons[] = {"OCI_SRS99", "Throw", "Put"};
        respawnWeapons[] = {"OCI_SRS99", "Throw", "Put"};
        linkedItems[] = {"OCLF_V_M43A_Light_1_Tropic","TCP_H_boonieHat_Folded_Left_Green","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"OCLF_V_M43A_Light_1_Tropic","TCP_H_boonieHat_Folded_Left_Green","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        magazines[] = {"OCI_4Rnd_127x99_Mag_APFSDS","OCI_4Rnd_127x99_Mag_APFSDS","OCI_4Rnd_127x99_Mag_APFSDS","OCI_4Rnd_127x99_Mag_APFSDS","OCI_4Rnd_127x99_Mag_APFSDS","OCI_4Rnd_127x99_Mag_APFSDS","TCP_M21_Smoke","TCP_M21_Smoke"};
        respawnMagazines[] = {"OCI_4Rnd_127x99_Mag_APFSDS","OCI_4Rnd_127x99_Mag_APFSDS","OCI_4Rnd_127x99_Mag_APFSDS","OCI_4Rnd_127x99_Mag_APFSDS","OCI_4Rnd_127x99_Mag_APFSDS","OCI_4Rnd_127x99_Mag_APFSDS","TCP_M21_Smoke","TCP_M21_Smoke"};
    };

    class OCLF_Spotter_Tropic: OCLF_UnitBase_Tropic
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCLF] Spotter (Tropic)";
        weapons[] = {"OCI_BR45_TCP_optic_M27RCO", "Throw", "Put"};
        respawnWeapons[] = {"OCI_BR45_TCP_optic_M27RCO", "Throw", "Put"};
        linkedItems[] = {"OCLF_V_M43A_Light_1_Tropic","TCP_H_boonieHat_Folded_Left_Green","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"OCLF_V_M43A_Light_1_Tropic","TCP_H_boonieHat_Folded_Left_Green","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        magazines[] = {"OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","TCP_M21_Smoke","TCP_M21_Smoke"};
        respawnMagazines[] = {"OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","TCP_M21_Smoke","TCP_M21_Smoke"};
    };

    class OCLF_SquadLead_Tropic: OCLF_UnitBase_Tropic
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCLF] Squad Leader (Tropic)";
        weapons[] = {"OCI_MA37_TCP_optic_M11VERO", "Throw", "Put"};
        respawnWeapons[] = {"OCI_MA37_TCP_optic_M11VERO", "Throw", "Put"};
        linkedItems[] = {"OCLF_V_M43A_BaseSec_2_Tropic","OCLF_H_Helmet_CH43A_Tropic","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"OCLF_V_M43A_BaseSec_2_Tropic","OCLF_H_Helmet_CH43A_Tropic","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        magazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
        respawnMagazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
    };

    class OCLF_TeamLead_Tropic: OCLF_UnitBase_Tropic
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCLF] Team Leader (Tropic)";
        weapons[] = {"OCI_MA37_TCP_optic_M11VERO", "Throw", "Put"};
        respawnWeapons[] = {"OCI_MA37_TCP_optic_M11VERO", "Throw", "Put"};
        linkedItems[] = {"OCLF_V_M43A_BaseSec_2_Tropic","OCLF_H_Helmet_CH43A_Tropic","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"OCLF_V_M43A_BaseSec_2_Tropic","OCLF_H_Helmet_CH43A_Tropic","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        magazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
        respawnMagazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
    };

    class OCLF_RTO_Tropic: OCLF_UnitBase_Tropic
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCLF] RTO (Tropic)";
        backpack = "TCP_B_RTO_1_ANPRC171_Green";
        weapons[] = {"OCI_M7_SMG_TCP_optic_M11VERO", "Throw", "Put"};
        respawnWeapons[] = {"OCI_M7_SMG_TCP_optic_M11VERO", "Throw", "Put"};
        linkedItems[] = {"OCLF_V_M43A_BaseSec_2_Tropic","OCLF_H_Helmet_CH43A_Tropic","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"OCLF_V_M43A_BaseSec_2_Tropic","OCLF_H_Helmet_CH43A_Tropic","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        magazines[] = {"OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
        respawnMagazines[] = {"OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
    };

    class OCLF_Officer_Tropic: OCLF_UnitBase_Tropic
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCLF] Officer (Tropic)";
        uniformClass = "OCLF_U_B_CBUU_FieldTop_QuarterRoll_Unzipped_Tropic";
        weapons[] = {"OCI_M6C", "Throw", "Put"};
        respawnWeapons[] = {"OCI_M6C", "Throw", "Put"};
        linkedItems[] = {"OCLF_V_M43A_Light_3_Tropic","TCP_H_Beret_Red","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"OCLF_V_M43A_Light_3_Tropic","TCP_H_Beret_Red","ItemMap","itemRadio","ItemCompass","ItemWatch"};
        magazines[] = {"OCI_12Rnd_127x30_SAP_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
        respawnMagazines[] = {"OCI_12Rnd_127x30_SAP_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
    };
    class OCLF_Crewman_Tropic: OCLF_UnitBase_Tropic
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCLF] Crewman (Tropic)";
        engineer = 1;
        weapons[] = {"OCI_M7_SMG_TCP_optic_M11VERO", "Throw", "Put"};
        respawnWeapons[] = {"OCI_M7_SMG_TCP_optic_M11VERO", "Throw", "Put"};
        linkedItems[] = {"OCLF_V_M43A_BaseSec_2_Tropic","OCLF_H_Helmet_CH43A_Tropic","ItemMap","itemRadio","ItemCompass","ItemWatch","TCP_G_BalaclavaTacticalGlasses_Green_Red"};
        respawnLinkedItems[] = {"OCLF_V_M43A_BaseSec_2_Tropic","OCLF_H_Helmet_CH43A_Tropic","ItemMap","itemRadio","ItemCompass","ItemWatch","TCP_G_BalaclavaTacticalGlasses_Green_Red"};
        magazines[] = {"OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
        respawnMagazines[] = {"OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
    };
};