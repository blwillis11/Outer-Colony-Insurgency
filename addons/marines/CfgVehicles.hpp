class CfgVehicles {
    class TCP_B_CBUU_FieldTop_Full_Gloves_Bloused_Kneepads_Base;
    class OCI_B_FieldTop_Full_Gloves_Bloused_Kneepads_Medic : TCP_B_CBUU_FieldTop_Full_Gloves_Bloused_Kneepads_Base {
        author=AUTHOR;
        scope= 1;
        scopeArsenal= 1;
        scopeCurator = 1;
        CBRN_protectionLevel="4 + 8";
        hiddenSelectionsTextures[] = {
            "z\OCI\addons\marines\data\uniform\medic\CBUU_FieldTop_CO.paa",
            "z\OCI\addons\marines\data\uniform\medic\CBUU_Pants_CO.paa",
            "z\OCI\addons\marines\data\uniform\medic\CBUU_Gloves_CO.paa"
            };
        uniformClass = QUOTE(OCI_U_B_FieldTop_Full_Gloves_Bloused_Kneepads_Medic);
    };

    class TCP_B_Medic_1_Black;
    class TCP_B_Medic_1_Black_M43A1;
    class TCP_B_Medic_1_Black_M43A;
    class TCP_B_Medic_1_Black_M43D1;
    class TCP_B_Medic_1_Black_M43D;

    class OCI_B_Medic_1_Medic : TCP_B_Medic_1_Black
  {
    maximumLoad = 200;
    scope=2;
    class TCP_equipmentTypes:TCP_equipmentTypes { 
      baseEquipment=QUOTE(OCI_B_Medic_1_Medic); 
    }; 
    hiddenSelectionsTextures[]= {
        "z\OCI\addons\marines\data\pouches\Medic\Pouches_CO.paa",
        "z\OCI\addons\marines\data\vest\medic\vest_M43A_03_CO.paa"
    };
  };
  class OCI_B_Medic_1_Medic_M43A1 : TCP_B_Medic_1_Black_M43A1
  {
    maximumLoad = 200;
    ace_arsenal_uniqueBase = QUOTE(OCI_B_Medic_1_Medic);
    class TCP_equipmentTypes:TCP_equipmentTypes 
		{
      baseEquipment=QUOTE(OCI_B_Medic_1_Medic);
    }; 
    hiddenSelectionsTextures[]= 
		{
			"z\OCI\addons\marines\data\pouches\Medic\Pouches_CO.paa",
			"z\OCI\addons\marines\data\vest\medic\vest_M43A_03_CO.paa"
		};
  };
  class OCI_B_Medic_1_Medic_M43A : TCP_B_Medic_1_Black_M43A
  {
    maximumLoad = 200;
    ace_arsenal_uniqueBase = QUOTE(OCI_B_Medic_1_Medic);
    class TCP_equipmentTypes:TCP_equipmentTypes 
		{ 
      baseEquipment=QUOTE(OCI_B_Medic_1_Medic); 
    }; 
    hiddenSelectionsTextures[]= 
		{
			"z\OCI\addons\marines\data\pouches\Medic\Pouches_CO.paa",
			"z\OCI\addons\marines\data\vest\medic\vest_M43A_03_CO.paa"
		};
  };
  class OCI_B_Medic_1_Medic_M43D1 : TCP_B_Medic_1_Black_M43D1
  {
    maximumLoad = 200;
    ace_arsenal_uniqueBase = QUOTE(OCI_B_Medic_1_Medic);
    class TCP_equipmentTypes:TCP_equipmentTypes 
		{ 
      baseEquipment=QUOTE(OCI_B_Medic_1_Medic); 
    }; 
    hiddenSelectionsTextures[]= 
		{
			"z\OCI\addons\marines\data\pouches\Medic\Pouches_CO.paa",
			"z\OCI\addons\marines\data\vest\medic\vest_M43A_03_CO.paa"
		};
  };
  class OCI_B_Medic_1_Medic_M43D : TCP_B_Medic_1_Black_M43D
  {
    maximumLoad = 200;
    ace_arsenal_uniqueBase = QUOTE(OCI_B_Medic_1_Medic);
    class TCP_equipmentTypes:TCP_equipmentTypes 
		{ 
      baseEquipment=QUOTE(OCI_B_Medic_1_Medic); 
    }; 
    hiddenSelectionsTextures[]= 
		{
			"z\OCI\addons\marines\data\pouches\Medic\Pouches_CO.paa",
			"z\OCI\addons\marines\data\vest\medic\vest_M43A_03_CO.paa"
		};
  };
    class B_Soldier_base_F;
    class OCI_10MEBBase: B_Soldier_base_F
    {
        scope = 0;
        scopeCurator = 0;

        author = AUTHOR;
        side = 1;
        
        faction = "OCI_10MEB_Fac";
        editorCategory = "OCI_10MEB_EdCat";
        editorSubcategory = "OCI_Infantry_EdSubCat";
        camouflage = 1.4;

        identityTypes[] = {"Head_Euro","LanguagePER_F","G_IRAN_default"};
        allowedfacewear[] = {};
        allowedHeadgear[] = {};
        allowedHeadgearB[] = {};
        headgearList[] = {};

        uniformClass = "TCP_U_B_CBUU_FieldTop_Full_Gloves_Bloused_Woodland";
    };
    class OCI_ECH_10MEBBase: OCI_10MEBBase
    {
        editorSubcategory = "OCI_ECH_Infantry_EdSubCat";
    };
    class OCI_Marine_Rifleman_AT: OCI_10MEBBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCI] Marine Rifleman [AT]";

        facewear = "";

        attendant = 0;
        engineer = 0;
        canDeactivateMines = 0;

        backpack = "TCP_B_M43_Medium_Rucksack_Brown";

        weapons[] = {"OCI_MA40","OCI_M41_SSR", "Throw", "Put"};
        respawnWeapons[] = {"OCI_MA40","OCI_M41_SSR", "Throw", "Put"};

        linkedItems[] = {"OCI_CEArmourPouch","OCI_CH43A_Helmet","ItemMap","ItemRadio","ItemCompass","ItemWatch","LM_OPCAN_COMMCAMUA"};
        respawnLinkedItems[] = {"OCI_CEArmourPouch","OCI_CH43A_Helmet","ItemMap","ItemRadio","ItemCompass","ItemWatch","LM_OPCAN_COMMCAMUA"};

        magazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OPTRE_M41_Twin_HEAT"};
        respawnMagazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OPTRE_M41_Twin_HEAT"};

        items[] = {"ACE_EarPlugs","FirstAidKit"};
        respawnItems[] = {"ACE_EarPlugs","FirstAidKit"};
    };
    class OCI_Marine_Marksman: OCI_10MEBBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCI] Marine Marksman";

        facewear = "";

        attendant = 0;
        engineer = 0;
        canDeactivateMines = 0;


        backpack = "TCP_B_M43_Medium_Rucksack_Brown";

        weapons[] = {"OCI_M392_DMR","OPTRE_M6G_SF", "Throw", "Put"};
        respawnWeapons[] = {"OCI_M392_DMR","OPTRE_M6G_SF", "Throw", "Put"};

        linkedItems[] = {"OCI_CEArmourNSV2","OCI_CEBoonie","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"OCI_CEArmourNSV2","OCI_CEBoonie","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        magazines[] = {"OCI_15Rnd_762x51_Mag","OCI_15Rnd_762x51_Mag","OCI_15Rnd_762x51_Mag","OCI_15Rnd_762x51_Mag","OCI_15Rnd_762x51_Mag","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};
        respawnMagazines[] = {"OCI_15Rnd_762x51_Mag","OCI_15Rnd_762x51_Mag","OCI_15Rnd_762x51_Mag","OCI_15Rnd_762x51_Mag","OCI_15Rnd_762x51_Mag","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};

        items[] = {"ACE_EarPlugs","FirstAidKit"};
        respawnItems[] = {"ACE_EarPlugs","FirstAidKit"};
    };
    class OCI_Marine_RTO_Operator: OCI_10MEBBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCI] Marine RTO Operator";

        facewear = "";

        attendant = 0;
        engineer = 0;
        canDeactivateMines = 0;


        backpack = "TCP_B_ANPRC171_Brown";

        weapons[] = {"OCI_M7_SMG","OPTRE_M6G_SF", "Throw", "Put"};
        respawnWeapons[] = {"OCI_M7_SMG","OPTRE_M6G_SF", "Throw", "Put"};

        linkedItems[] = {"OCI_CEArmour","OCI_CH43A_Helmet","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"OCI_CEArmour","OCI_CH43A_Helmet","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        magazines[] = {"Chemlight_green","Chemlight_green","HandGrenade","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};
        respawnMagazines[] = {"Chemlight_green","Chemlight_green","HandGrenade","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};

        items[] = {"FirstAidKit"};
        respawnItems[] = {"FirstAidKit"};
    };
    class OCI_Marine_Medic: OCI_10MEBBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCI] Marine Medic";

        identityTypes[] = {"Head_Euro","LanguagePER_F","G_IRAN_default"};
        allowedfacewear[] = {};
        allowedHeadgear[] = {};
        allowedHeadgearB[] = {};
        headgearList[] = {};

        facewear = "";

        attendant = 1;
        engineer = 0;
        canDeactivateMines = 0;

        uniformClass = "OCI_U_B_FieldTop_Full_Gloves_Bloused_Kneepads_Medic";
        backpack = "OCI_B_Medic_1_Medic";

        weapons[] = {"OCI_M7_SMG","OPTRE_M6G_SF", "Throw", "Put"};
        respawnWeapons[] = {"OCI_M7_SMG","OPTRE_M6G_SF", "Throw", "Put"};

        linkedItems[] = {"OCI_V_M43A_Pads_2_Medic","OCI_H_Helmet_CH43A_Medic","ItemMap","ItemRadio","ItemCompass","ItemWatch","LM_OPCAN_COMM"};
        respawnLinkedItems[] = {"OCI_V_M43A_Pads_2_Medic","OCI_H_Helmet_CH43A_Medic","ItemMap","ItemRadio","ItemCompass","ItemWatch","LM_OPCAN_COMM"};

        magazines[] = {"Chemlight_green","Chemlight_green","HandGrenade","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};
        respawnMagazines[] = {"Chemlight_green","Chemlight_green","HandGrenade","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};

        items[] = {"FirstAidKit"};
        respawnItems[] = {"FirstAidKit"};
    };
    class OCI_Marine_Grenadier: OCI_10MEBBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCI] Marine Grenadier";

        facewear = "";

        attendant = 0;
        engineer = 0;
        canDeactivateMines = 0;


        backpack = "TCP_B_M43_Medium_Rucksack_Brown";

        weapons[] = {"OCI_MA40GL","OPTRE_M6B","OPTRE_Binoculars", "Throw", "Put"};
        respawnWeapons[] = {"OCI_MA40GL","OPTRE_M6B","OPTRE_Binoculars", "Throw", "Put"};

        linkedItems[] = {"OCI_CEArmour","OCI_CH43A_Helmet","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};
        respawnLinkedItems[] = {"OCI_CEArmour","OCI_CH43A_Helmet","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};

        magazines[] = {"1Rnd_HE_Grenade_shell","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
        respawnMagazines[] = {"1Rnd_HE_Grenade_shell","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag"};

        items[] = {"ACE_EarPlugs","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
        respawnItems[] = {"ACE_EarPlugs","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    };
    class OCI_Marine_Rifleman: OCI_10MEBBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCI] Marine Rifleman";

        facewear = "";

        attendant = 0;
        engineer = 0;
        canDeactivateMines = 0;


        backpack = "TCP_B_M43_Medium_Rucksack_Brown";

        weapons[] = {"OCI_MA40","OPTRE_M6B","OPTRE_Binoculars", "Throw", "Put"};
        respawnWeapons[] = {"OCI_MA40","OPTRE_M6B","OPTRE_Binoculars", "Throw", "Put"};

        linkedItems[] = {"OCI_CEArmour","OCI_CH43A_Helmet","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};
        respawnLinkedItems[] = {"OCI_CEArmour","OCI_CH43A_Helmet","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};

        magazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
        respawnMagazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag"};

        items[] = {"ACE_EarPlugs","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
        respawnItems[] = {"ACE_EarPlugs","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    };
    class OCI_Marine_Team_Lead: OCI_10MEBBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCI] Marine Team Lead";

        facewear = "";

        attendant = 0;
        engineer = 0;
        canDeactivateMines = 0;


        backpack = "TCP_B_M43_Medium_Rucksack_Brown";

        weapons[] = {"OCI_MA40","OPTRE_M6B","OPTRE_Binoculars", "Throw", "Put"};
        respawnWeapons[] = {"OCI_MA40","OPTRE_M6B","OPTRE_Binoculars", "Throw", "Put"};

        linkedItems[] = {"OCI_CEArmour","OCI_CH43A_Helmet","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};
        respawnLinkedItems[] = {"OCI_CEArmour","OCI_CH43A_Helmet","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};

        magazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
        respawnMagazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag"};

        items[] = {"ACE_EarPlugs","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
        respawnItems[] = {"ACE_EarPlugs","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    };
    class OCI_Marine_Autorifleman: OCI_10MEBBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCI] Marine Autorifleman";

        facewear = "";

        attendant = 0;
        engineer = 0;
        canDeactivateMines = 0;


        backpack = "TCP_B_M43_Medium_Rucksack_Brown";

        weapons[] = {"OCI_LMG_M731","OPTRE_M6G_SF", "Throw", "Put"};
        respawnWeapons[] = {"OCI_LMG_M731","OPTRE_M6G_SF", "Throw", "Put"};

        linkedItems[] = {"OCI_CEArmour","OCI_CH43A_Helmet","ItemMap","ItemRadio","ItemCompass","ItemWatch","LM_OPCAN_COMMUA"};
        respawnLinkedItems[] = {"OCI_CEArmour","OCI_CH43A_Helmet","ItemMap","ItemRadio","ItemCompass","ItemWatch","LM_OPCAN_COMMUA"};

        magazines[] = {"OCI_100rnd_762x51_Mag","OCI_100rnd_762x51_Mag","OCI_100rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag"};
        respawnMagazines[] = {"OCI_100rnd_762x51_Mag","OCI_100rnd_762x51_Mag","OCI_100rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag"};

        items[] = {"ACE_EarPlugs","FirstAidKit"};
        respawnItems[] = {"ACE_EarPlugs","FirstAidKit"};
    };
    class OCI_Marine_Sniper: OCI_10MEBBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCI] Marine Sniper";

        facewear = "";

        attendant = 0;
        engineer = 0;
        canDeactivateMines = 0;


        backpack = "TCP_B_M43_Medium_Rucksack_Brown";

        weapons[] = {"OCI_SRS99","OPTRE_M6G_SF", "Throw", "Put"};
        respawnWeapons[] = {"OCI_SRS99","OPTRE_M6G_SF", "Throw", "Put"};

        linkedItems[] = {"OCI_CEArmour","OCI_CH43A_Helmet","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"OCI_CEArmour","OCI_CH43A_Helmet","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        magazines[] = {"OCI_4Rnd_127x99_Mag_APFSDS","OCI_4Rnd_127x99_Mag_APFSDS","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};
        respawnMagazines[] = {"OCI_4Rnd_127x99_Mag_APFSDS","OCI_4Rnd_127x99_Mag_APFSDS","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};

        items[] = {"ACE_EarPlugs","FirstAidKit"};
        respawnItems[] = {"ACE_EarPlugs","FirstAidKit"};
    };
    class OCI_ECH_Marine_Rifleman_AT: OCI_ECH_10MEBBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCI] Marine Rifleman [AT]";

        facewear = "";

        attendant = 0;
        engineer = 0;
        canDeactivateMines = 0;


        backpack = "TCP_B_M43_Medium_Rucksack_Brown";

        weapons[] = {"OCI_MA40","OCI_M41_SSR", "Throw", "Put"};
        respawnWeapons[] = {"OCI_MA40","OCI_M41_SSR", "Throw", "Put"};

        linkedItems[] = {"OCI_CEArmourPouch","OCI_ECH43A_Helmet","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"OCI_CEArmourPouch","OCI_ECH43A_Helmet","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        magazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_M41_Twin_HEAT"};
        respawnMagazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_M41_Twin_HEAT"};

        items[] = {"ACE_EarPlugs","FirstAidKit"};
        respawnItems[] = {"ACE_EarPlugs","FirstAidKit"};
    };
    class OCI_ECH_Marine_Marksman: OCI_ECH_10MEBBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCI] Marine Marksman";

        facewear = "";

        attendant = 0;
        engineer = 0;
        canDeactivateMines = 0;


        backpack = "TCP_B_M43_Medium_Rucksack_Brown";

        weapons[] = {"OCI_M392_DMR","OPTRE_M6G_SF", "Throw", "Put"};
        respawnWeapons[] = {"OCI_M392_DMR","OPTRE_M6G_SF", "Throw", "Put"};

        linkedItems[] = {"OCI_CEArmourNSV2","OCI_CEBoonie","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"OCI_CEArmourNSV2","OCI_CEBoonie","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        magazines[] = {"OCI_15Rnd_762x51_Mag","OCI_15Rnd_762x51_Mag","OCI_15Rnd_762x51_Mag","OCI_15Rnd_762x51_Mag","OCI_15Rnd_762x51_Mag","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};
        respawnMagazines[] = {"OCI_15Rnd_762x51_Mag","OCI_15Rnd_762x51_Mag","OCI_15Rnd_762x51_Mag","OCI_15Rnd_762x51_Mag","OCI_15Rnd_762x51_Mag","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};

        items[] = {"ACE_EarPlugs","FirstAidKit"};
        respawnItems[] = {"ACE_EarPlugs","FirstAidKit"};
    };
    class OCI_ECH_Marine_RTO_Operator: OCI_ECH_10MEBBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCI] Marine RTO Operator";

        facewear = "";

        attendant = 0;
        engineer = 0;
        canDeactivateMines = 0;


        backpack = "TCP_B_ANPRC171_Brown";

        weapons[] = {"OCI_M7_SMG","OPTRE_M6G_SF", "Throw", "Put"};
        respawnWeapons[] = {"OCI_M7_SMG","OPTRE_M6G_SF", "Throw", "Put"};

        linkedItems[] = {"OCI_CEArmour","OCI_ECH43A_Helmet","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"OCI_CEArmour","OCI_ECH43A_Helmet","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        magazines[] = {"Chemlight_green","Chemlight_green","HandGrenade","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};
        respawnMagazines[] = {"Chemlight_green","Chemlight_green","HandGrenade","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};

        items[] = {"FirstAidKit"};
        respawnItems[] = {"FirstAidKit"};
    };
    class OCI_ECH_Marine_Medic: OCI_ECH_10MEBBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCI] Marine Medic";

        facewear = "";

        attendant = 1;
        engineer = 0;
        canDeactivateMines = 0;


        backpack = "TCP_B_M43_Medium_Rucksack_Brown";

        weapons[] = {"OCI_M7_SMG","OPTRE_M6G_SF", "Throw", "Put"};
        respawnWeapons[] = {"OCI_M7_SMG","OPTRE_M6G_SF", "Throw", "Put"};

        linkedItems[] = {"OCI_CEArmourPouch","OCI_ECH43A_Helmet","ItemMap","ItemRadio","ItemCompass","ItemWatch","LM_OPCAN_COMM"};
        respawnLinkedItems[] = {"OCI_CEArmourPouch","OCI_ECH43A_Helmet","ItemMap","ItemRadio","ItemCompass","ItemWatch","LM_OPCAN_COMM"};

        magazines[] = {"Chemlight_green","Chemlight_green","HandGrenade","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};
        respawnMagazines[] = {"Chemlight_green","Chemlight_green","HandGrenade","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OCI_48Rnd_5x23Caseless_FMJ_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};

        items[] = {"FirstAidKit"};
        respawnItems[] = {"FirstAidKit"};
    };
    class OCI_ECH_Marine_Grenadier: OCI_ECH_10MEBBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCI] Marine Grenadier";

        facewear = "";

        attendant = 0;
        engineer = 0;
        canDeactivateMines = 0;


        backpack = "TCP_B_M43_Medium_Rucksack_Brown";

        weapons[] = {"OCI_MA40GL","OPTRE_M6B","OPTRE_Binoculars", "Throw", "Put"};
        respawnWeapons[] = {"OCI_MA40GL","OPTRE_M6B","OPTRE_Binoculars", "Throw", "Put"};

        linkedItems[] = {"OCI_CEArmour","OCI_ECH43A_Helmet","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};
        respawnLinkedItems[] = {"OCI_CEArmour","OCI_ECH43A_Helmet","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};

        magazines[] = {"1Rnd_HE_Grenade_shell","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
        respawnMagazines[] = {"1Rnd_HE_Grenade_shell","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag"};

        items[] = {"ACE_EarPlugs","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
        respawnItems[] = {"ACE_EarPlugs","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    };
    class OCI_ECH_Marine_Rifleman: OCI_ECH_10MEBBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCI] Marine Rifleman";

        facewear = "";

        attendant = 0;
        engineer = 0;
        canDeactivateMines = 0;


        backpack = "TCP_B_M43_Medium_Rucksack_Brown";

        weapons[] = {"OCI_MA40","OPTRE_M6B","OPTRE_Binoculars", "Throw", "Put"};
        respawnWeapons[] = {"OCI_MA40","OPTRE_M6B","OPTRE_Binoculars", "Throw", "Put"};

        linkedItems[] = {"OCI_CEArmour","OCI_ECH43A_Helmet","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};
        respawnLinkedItems[] = {"OCI_CEArmour","OCI_ECH43A_Helmet","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};

        magazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
        respawnMagazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag"};

        items[] = {"ACE_EarPlugs","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
        respawnItems[] = {"ACE_EarPlugs","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    };
    class OCI_ECH_Marine_Team_Lead: OCI_ECH_10MEBBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCI] Marine Team Lead";

        facewear = "";

        attendant = 0;
        engineer = 0;
        canDeactivateMines = 0;


        backpack = "TCP_B_M43_Medium_Rucksack_Brown";

        weapons[] = {"OCI_MA40","OPTRE_M6B","OPTRE_Binoculars", "Throw", "Put"};
        respawnWeapons[] = {"OCI_MA40","OPTRE_M6B","OPTRE_Binoculars", "Throw", "Put"};

        linkedItems[] = {"OCI_CEArmour","OCI_ECH43A_Helmet","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};
        respawnLinkedItems[] = {"OCI_CEArmour","OCI_ECH43A_Helmet","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};

        magazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
        respawnMagazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag"};

        items[] = {"ACE_EarPlugs","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
        respawnItems[] = {"ACE_EarPlugs","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    };
    class OCI_ECH_Marine_Autorifleman: OCI_ECH_10MEBBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCI] Marine Autorifleman";

        facewear = "";

        attendant = 0;
        engineer = 0;
        canDeactivateMines = 0;


        backpack = "TCP_B_M43_Medium_Rucksack_Brown";

        weapons[] = {"OCI_LMG_M731","OPTRE_M6G_SF", "Throw", "Put"};
        respawnWeapons[] = {"OCI_LMG_M731","OPTRE_M6G_SF", "Throw", "Put"};

        linkedItems[] = {"OCI_CEArmour","OCI_ECH43A_Helmet","ItemMap","ItemRadio","ItemCompass","ItemWatch","LM_OPCAN_COMMUA"};
        respawnLinkedItems[] = {"OCI_CEArmour","OCI_ECH43A_Helmet","ItemMap","ItemRadio","ItemCompass","ItemWatch","LM_OPCAN_COMMUA"};

        magazines[] = {"OCI_100rnd_762x51_Mag","OCI_100rnd_762x51_Mag","OCI_100rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag"};
        respawnMagazines[] = {"OCI_100rnd_762x51_Mag","OCI_100rnd_762x51_Mag","OCI_100rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag"};

        items[] = {"ACE_EarPlugs","FirstAidKit"};
        respawnItems[] = {"ACE_EarPlugs","FirstAidKit"};
    };
    class OCI_ECH_Marine_Sniper: OCI_ECH_10MEBBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCI] Marine Sniper";

        facewear = "";

        attendant = 0;
        engineer = 0;
        canDeactivateMines = 0;


        backpack = "TCP_B_M43_Medium_Rucksack_Brown";

        weapons[] = {"OCI_SRS99","OPTRE_M6G_SF", "Throw", "Put"};
        respawnWeapons[] = {"OCI_SRS99","OPTRE_M6G_SF", "Throw", "Put"};

        linkedItems[] = {"OCI_CEArmour","OCI_ECH43A_Helmet","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"OCI_CEArmour","OCI_ECH43A_Helmet","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        magazines[] = {"OCI_4Rnd_127x99_Mag_APFSDS","OCI_4Rnd_127x99_Mag_APFSDS","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};
        respawnMagazines[] = {"OCI_4Rnd_127x99_Mag_APFSDS","OCI_4Rnd_127x99_Mag_APFSDS","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};

        items[] = {"ACE_EarPlugs","FirstAidKit"};
        respawnItems[] = {"ACE_EarPlugs","FirstAidKit"};
    };
};
