class CfgVehicles {

    class I_Soldier_F;
    class OCI_BPGBase: I_Soldier_F
    {
        scope = 0;
        scopeCurator = 0;

        author = AUTHOR;
        side = 2;
        
        faction = "OCI_BPG_Fac";
        editorCategory = "OCI_BPG_EdCat";
        editorSubcategory = "OCI_Infantry_EdSubCat";
        camouflage = 1.4;

        identityTypes[] = {"Head_Euro","LanguagePER_F","G_IRAN_default"};
        allowedfacewear[] = {""};
        allowedHeadgear[] = {""};
        allowedHeadgearB[] = {""};
        headgearList[] = {""};

        uniformClass = "OPTRE_FC_Marines_Uniform_GRN";
    };
    class OCI_Blackhorse_Marksman: OCI_BPGBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCI] Blackhorse Marksman";

        facewear = "";

        attendant = 0;
        engineer = 0;
        canDeactivateMines = 0;


        backpack = "";

        weapons[] = {"OCI_M392_DMR","OPTRE_M6G_SF", "Throw", "Put"};
        respawnWeapons[] = {"OCI_M392_DMR","OPTRE_M6G_SF", "Throw", "Put"};

        linkedItems[] = {"OCI_M52B_BPG_Marksman","TCP_H_Beret_Green","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"OCI_M52B_BPG_Marksman","TCP_H_Beret_Green","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        magazines[] = {"OCI_15Rnd_762x51_Mag","OCI_15Rnd_762x51_Mag","OCI_15Rnd_762x51_Mag","OCI_15Rnd_762x51_Mag","OCI_15Rnd_762x51_Mag","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};
        respawnMagazines[] = {"OCI_15Rnd_762x51_Mag","OCI_15Rnd_762x51_Mag","OCI_15Rnd_762x51_Mag","OCI_15Rnd_762x51_Mag","OCI_15Rnd_762x51_Mag","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};

        items[] = {"ACE_EarPlugs","FirstAidKit"};
        respawnItems[] = {"ACE_EarPlugs","FirstAidKit"};
    };
    class OCI_Blackhorse_Rifleman: OCI_BPGBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCI] Blackhorse Rifleman";

        facewear = "";

        attendant = 0;
        engineer = 0;
        canDeactivateMines = 0;


        backpack = "";

        weapons[] = {"OCI_MA37K","OPTRE_M6B","OPTRE_Binoculars", "Throw", "Put"};
        respawnWeapons[] = {"OCI_MA37K","OPTRE_M6B","OPTRE_Binoculars", "Throw", "Put"};

        linkedItems[] = {"OCI_M52B_BPG_Light","OPTRE_CH255_Security_Basic_Type_2_Helmet","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};
        respawnLinkedItems[] = {"OCI_M52B_BPG_Light","OPTRE_CH255_Security_Basic_Type_2_Helmet","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};

        magazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
        respawnMagazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag"};

        items[] = {"ACE_EarPlugs","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
        respawnItems[] = {"ACE_EarPlugs","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    };
    class OCI_Blackhorse_Team_Lead: OCI_BPGBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCI] Blackhorse Team Lead";

        facewear = "";

        attendant = 0;
        engineer = 0;
        canDeactivateMines = 0;


        backpack = "";

        weapons[] = {"OCI_BR45","OPTRE_M6B","OPTRE_Binoculars", "Throw", "Put"};
        respawnWeapons[] = {"OCI_BR45","OPTRE_M6B","OPTRE_Binoculars", "Throw", "Put"};

        linkedItems[] = {"OCI_M52B_BPG_TeamLeader","TCP_H_UtilityCover_Olive","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};
        respawnLinkedItems[] = {"OCI_M52B_BPG_TeamLeader","TCP_H_UtilityCover_Olive","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};

        magazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
        respawnMagazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","OCI_95x40_36Rnd_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag"};

        items[] = {"ACE_EarPlugs","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
        respawnItems[] = {"ACE_EarPlugs","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    };
    class OCI_Blackhorse_Autorifleman: OCI_BPGBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCI] Blackhorse Autorifleman";

        facewear = "";

        attendant = 0;
        engineer = 0;
        canDeactivateMines = 0;


        backpack = "";

        weapons[] = {"OCI_LMG_M731","OPTRE_M6G_SF", "Throw", "Put"};
        respawnWeapons[] = {"OCI_LMG_M731","OPTRE_M6G_SF", "Throw", "Put"};

        linkedItems[] = {"OCI_M52B_BPG_Rifleman","OCI_CH255_BPG_Helmet","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"OCI_M52B_BPG_Rifleman","OCI_CH255_BPG_Helmet","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        magazines[] = {"OCI_100rnd_762x51_Mag","OCI_100rnd_762x51_Mag","OCI_100rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag"};
        respawnMagazines[] = {"OCI_100rnd_762x51_Mag","OCI_100rnd_762x51_Mag","OCI_100rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag"};

        items[] = {"ACE_EarPlugs","FirstAidKit"};
        respawnItems[] = {"ACE_EarPlugs","FirstAidKit"};
    };
    class OCI_Blackhorse_Sniper: OCI_BPGBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCI] Blackhorse Sniper";

        facewear = "";

        attendant = 0;
        engineer = 0;
        canDeactivateMines = 0;


        backpack = "";

        weapons[] = {"OCI_SRS99","OPTRE_M6G_SF", "Throw", "Put"};
        respawnWeapons[] = {"OCI_SRS99","OPTRE_M6G_SF", "Throw", "Put"};

        linkedItems[] = {"OCI_M52B_BPG_Sniper","TCP_H_boonieHat_Folded_Left_Olive","ItemMap","ItemRadio","ItemCompass","ItemWatch","LM_OPCAN_COMMCAMSNI"};
        respawnLinkedItems[] = {"OCI_M52B_BPG_Sniper","TCP_H_boonieHat_Folded_Left_Olive","ItemMap","ItemRadio","ItemCompass","ItemWatch","LM_OPCAN_COMMCAMSNI"};

        magazines[] = {"OCI_M232_145x114x4_APFSDS","OCI_M232_145x114x4_APFSDS","OCI_M232_145x114x4_APFSDS","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};
        respawnMagazines[] = {"OCI_M232_145x114x4_APFSDS","OCI_M232_145x114x4_APFSDS","OCI_M232_145x114x4_APFSDS","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};

        items[] = {"ACE_EarPlugs","FirstAidKit"};
        respawnItems[] = {"ACE_EarPlugs","FirstAidKit"};
    };
};
