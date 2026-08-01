class CfgWeapons {
    class TCP_U_B_CBUU_FieldTop_Full_Gloves_Bloused_Kneepads_Base;
    class OCI_U_B_FieldTop_Full_Gloves_Bloused_Kneepads_Medic : TCP_U_B_CBUU_FieldTop_Full_Gloves_Bloused_Kneepads_Base
    {
        scope=1;
        scopeArsenal=1;
        CBRN_protectionLevel="4";
        displayName = QUOTE([OCI] Medic CBUU SHIRT Full Gloves Bloused Kneepads); 
        ACE_GForceCoef=0.4;
        class ItemInfo : UniformItem {
            uniformClass = QUOTE(OCI_B_FieldTop_Full_Gloves_Bloused_Kneepads_Medic);
            containerClass="Supply50";
            mass=1;
            uniformType = "Neopren";
            allowedSlots[]={"701","801","901"};
            armor=20;
        };
        hiddenSelectionsTextures[] = {
            "z\OCI\addons\marines\data\uniform\medic\CBUU_FieldTop_CO.paa"
        };
        class TCP_equipmentTypes: TCP_equipmentTypes
        {
            baseEquipment=QUOTE(OCI_U_B_FieldTop_Full_Gloves_Bloused_Kneepads_Medic);
        };
    };

    class TCP_V_M43A_Pads_2_Base;
    class OCI_V_M43A_Pads_2_Medic: TCP_V_M43A_Pads_2_Base
	{
		author=AUTHOR;
		scope=1;
		displayName=Q([10MEB] M43/A Medic);
		class TCP_uniformDecals: TCP_uniformDecals
		{
			decalColor="black";
		};
		hiddenSelectionsTextures[]=
		{
			"z\OCI\addons\marines\data\vest\medic\vest_M43A_01_CO.paa",
			"z\OCI\addons\marines\data\vest\medic\vest_M43A_02_CO.paa",
			"z\OCI\addons\marines\data\vest\medic\vest_M43A_03_CO.paa",
            "z\OCI\addons\marines\data\vest\medic\vest_M43_DecalSheet_CA.paa"
        };
	};

    class TCP_H_Helmet_CH43A_White;
    class TCP_H_Helmet_CH43A_White_ChinstrapOffset;
    class OCI_H_Helmet_CH43A_Medic: TCP_H_Helmet_CH43A_White
	{
		author=AUTHOR;
		scope=1;
		displayName=Q([OCI] CH43A Helmet Medic);
		picture="\TCP\Characters\BLUFOR\UNSC\Army\Headgear\helmet_CH43A\data\ui\White\icon_headgear_CH43A_CA.paa";
		class TCP_uniformDecals: TCP_uniformDecals
		{
			decalColor="white";
		};
		class TCP_equipmentTypes: TCP_equipmentTypes
		{
			baseEquipment="OCI_H_Helmet_CH43A_Medic";
		};
		hiddenSelectionsTextures[]=
		{
			"z\OCI\addons\marines\data\helmets\medic\helmet_CH43A_CO.paa",
			"z\OCI\addons\marines\data\vest\medic\vest_M43_DecalSheet_CA.paa"
		};
	};
	class OCI_H_Helmet_CH43A_Medic_ChinstrapOffset: TCP_H_Helmet_CH43A_White_ChinstrapOffset
	{
		author=AUTHOR;
		scope=1;
		displayName=Q([OCI] CH43A Helmet Medic);
		picture="\TCP\Characters\BLUFOR\UNSC\Army\Headgear\helmet_CH43A\data\ui\White\icon_headgear_CH43A_CA.paa";
		class TCP_uniformDecals: TCP_uniformDecals
		{
			decalColor="white";
		};
		class TCP_equipmentTypes: TCP_equipmentTypes
		{
			baseEquipment="OCI_H_Helmet_CH43A_Medic";
		};
		hiddenSelectionsTextures[]=
		{
			"z\OCI\addons\marines\data\helmets\medic\helmet_CH43A_CO.paa",
			"z\OCI\addons\marines\data\vest\medic\vest_M43_DecalSheet_CA.paa"
		};
	};
    
    class TCP_V_M43A_GungnirL_3_Brown;
    class TCP_V_M43A_GungnirS_3_Brown;
    class TCP_V_M43A_BaseSec_3_Brown;


    class OCI_CEArmour: TCP_V_M43A_GungnirL_3_Brown
    {
        author=AUTHOR;
        scope=2;
        displayName="[10thMEB] Marine Armour (Heavy)";
    };
    class OCI_CEArmourPouch: TCP_V_M43A_GungnirS_3_Brown
    {
        author=AUTHOR;
        scope=2;
        displayName="[10thMEB] Marine Armour (Medium)";
    };
    class OCI_CEArmourNSV2: TCP_V_M43A_BaseSec_3_Brown
    {
        author=AUTHOR;
        scope=2;
        displayName="[10thMEB] Marine Armour (Light)";
        descriptionShort="CE Armour";
    };
    class TCP_H_boonieHat_Folded_Right_Olive;
    class TCP_H_Helmet_CH43A_Brown;
    class TCP_H_Helmet_ECH43A_Brown_Yellow;

    class OCI_CEBoonie: TCP_H_boonieHat_Folded_Right_Olive
    {
        author="OCIrd S-4 Team";
        displayName="[10thMEB] Boonie Hat (camo)";
    };
    class OCI_CH43A_Helmet: TCP_H_Helmet_CH43A_Brown
    {
        author="OCIrd S-4 Team";
        scope=2;
        displayName="[10thMEB] CH43/A Marine Helmet";
    };
    class OCI_ECH43A_Helmet: TCP_H_Helmet_ECH43A_Brown_Yellow
    {
        author="OCIrd S-4 Team";
        scope=2;
        displayName="[10thMEB] ECH43/A Marine Helmet";
    };
};
