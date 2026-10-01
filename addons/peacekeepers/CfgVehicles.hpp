class CfgVehicles {

    class I_Soldier_F;
    class OCI_PKBase: I_Soldier_F
    {
        faction = "OCI_Peacekeepers_Fac";
        editorCategory = "OCI_Peacekeepers_EdCat";
        editorSubcategory = "OCI_Infantry_EdSubCat";

        uniformClass = "PK_U_B_CBUU_FieldTop_Full_Gloves_Bloused_Kneepads_Gray";

        scope = 0;
        scopeCurator = 0;
        author = AUTHOR;

        identityTypes[] = {"Head_Euro","LanguagePER_F","G_IRAN_default"};
        allowedfacewear[] = {""};
        allowedHeadgear[] = {""};
        allowedHeadgearB[] = {""};
        headgearList[] = {""};
    };
    class OCI_Peacekeeper_RTO_Operator: OCI_PKBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCI] Peacekeeper RTO Operator";

        facewear = "";

        attendant = 0;
        engineer = 0;
        canDeactivateMines = 0;

        backpack = "TCP_B_RTO_1_ANPRC171_Roll_White";

        weapons[] = {"OCI_M7_SMG","OPTRE_M6G_SF", "Throw", "Put"};
        respawnWeapons[] = {"OCI_M7_SMG","OPTRE_M6G_SF", "Throw", "Put"};

        linkedItems[] = {"TCP_V_M43A_BaseSec_3_White","PK_H_Helmet_CH43A_Standard","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"TCP_V_M43A_BaseSec_3_White","PK_H_Helmet_CH43A_Standard","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        magazines[] = {"Chemlight_green","Chemlight_green","HandGrenade","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};
        respawnMagazines[] = {"Chemlight_green","Chemlight_green","HandGrenade","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};

        items[] = {"FirstAidKit"};
        respawnItems[] = {"FirstAidKit"};
    };
    class OCI_Peacekeeper_Medic: OCI_PKBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCI] Peacekeeper Medic";

        facewear = "";

        attendant = 1;
        engineer = 0;
        canDeactivateMines = 0;

        backpack = "TCP_B_Medic_1_M43_Medium_Rucksack_Medical_Roll_White";

        weapons[] = {"OCI_M7_SMG","Throw", "Put"};
        respawnWeapons[] = {"OCI_M7_SMG", "Throw", "Put"};

        linkedItems[] = {"TCP_V_M43A_BaseSec_3_White","PK_H_Helmet_CH43A_Medic","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"TCP_V_M43A_BaseSec_3_White","PK_H_Helmet_CH43A_Medic","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        magazines[] = {"Chemlight_green","Chemlight_green","HandGrenade","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};
        respawnMagazines[] = {"Chemlight_green","Chemlight_green","HandGrenade","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};

        items[] = {"FirstAidKit"};
        respawnItems[] = {"FirstAidKit"};
    };
    class OCI_Peacekeeper_Rifleman: OCI_PKBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCI] Peacekeeper Rifleman";

        facewear = "";

        attendant = 0;
        engineer = 0;
        canDeactivateMines = 0;

        backpack = "TCP_B_Rifleman_1_M43_Medium_Rucksack_Roll_White";

        weapons[] = {"OCI_MA40","OPTRE_Binoculars", "Throw", "Put"};
        respawnWeapons[] = {"OCI_MA40","OPTRE_Binoculars", "Throw", "Put"};

        linkedItems[] = {"TCP_V_M43A_BaseSec_3_White","PK_H_Helmet_CH43A_Standard","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"TCP_V_M43A_BaseSec_3_White","PK_H_Helmet_CH43A_Standard","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        magazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
        respawnMagazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};

        items[] = {"ACE_EarPlugs","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
        respawnItems[] = {"ACE_EarPlugs","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    };
    class OCI_Peacekeeper_Team_Lead: OCI_PKBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCI] Peacekeeper Team Lead";

        facewear = "";

        attendant = 0;
        engineer = 0;
        canDeactivateMines = 0;

        backpack = "TCP_B_Rifleman_1_M43_Medium_Rucksack_Patrol_Roll_White";

        weapons[] = {"OCI_MA40","OPTRE_Binoculars", "Throw", "Put"};
        respawnWeapons[] = {"OCI_MA40","OPTRE_Binoculars", "Throw", "Put"};

        linkedItems[] = {"TCP_V_M43A_BaseSec_3_White","PK_H_Helmet_CH43A_Standard","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"TCP_V_M43A_BaseSec_3_White","PK_H_Helmet_CH43A_Standard","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        magazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
        respawnMagazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};

        items[] = {"ACE_EarPlugs","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
        respawnItems[] = {"ACE_EarPlugs","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    };
    class OCI_Peacekeeper_Officer: OCI_PKBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCI] Peacekeeper Officer";

        facewear = "";

        attendant = 0;
        engineer = 0;
        canDeactivateMines = 0;

        backpack = "TCP_B_M2_Buttpack_White";

        weapons[] = {"OCI_M6C","OPTRE_Binoculars", "Throw", "Put"};
        respawnWeapons[] = {"OCI_M6C","OPTRE_Binoculars", "Throw", "Put"};

        linkedItems[] = {"TCP_V_M43A_Pads_1_White","TCP_H_Beret_UNSC_Circle_Blue","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"TCP_V_M43A_Pads_1_White","TCP_H_Beret_UNSC_Circle_Blue","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        magazines[] = {"OCI_12Rnd_127x30_SAP_Mag","OCI_12Rnd_127x30_SAP_Mag","OCI_12Rnd_127x30_SAP_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
        respawnMagazines[] = {"OCI_12Rnd_127x30_SAP_Mag","OCI_12Rnd_127x30_SAP_Mag","OCI_12Rnd_127x30_SAP_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};

        items[] = {"ACE_EarPlugs","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
        respawnItems[] = {"ACE_EarPlugs","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    };
};
