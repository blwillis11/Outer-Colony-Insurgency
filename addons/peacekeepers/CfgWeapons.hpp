class CfgWeapons {
    class TCP_H_Helmet_CH43A_White;
    class TCP_H_Helmet_CH43A_White_ChinstrapOffset;
    class PK_H_Helmet_CH43A_Standard: TCP_H_Helmet_CH43A_White
	{
		author=AUTHOR;
		scope=1;
		displayName=Q([OCI] Peacekeeper CH43A Helmet);
		picture="\TCP\Characters\BLUFOR\UNSC\Army\Headgear\helmet_CH43A\data\ui\White\icon_headgear_CH43A_CA.paa";
		class TCP_uniformDecals: TCP_uniformDecals
		{
			decalColor="white";
		};
		class TCP_equipmentTypes: TCP_equipmentTypes
		{
			baseEquipment="PK_H_Helmet_CH43A_Standard";
		};
		hiddenSelectionsTextures[]=
		{
			Q(\z\OCI\addons\peacekeepers\data\helmets\standard\helmet_CH43A_CO.paa),
			Q(\z\OCI\addons\peacekeepers\data\vest\medic\vest_M43_DecalSheet_CA.paa)
		};
	};
	class PK_H_Helmet_CH43A_Standard_ChinstrapOffset: TCP_H_Helmet_CH43A_White_ChinstrapOffset
	{
		author=AUTHOR;
		scope=1;
		displayName=Q([OCI] Peacekeeper CH43A Helmet);
		picture="\TCP\Characters\BLUFOR\UNSC\Army\Headgear\helmet_CH43A\data\ui\White\icon_headgear_CH43A_CA.paa";
		class TCP_uniformDecals: TCP_uniformDecals
		{
			decalColor="white";
		};
		class TCP_equipmentTypes: TCP_equipmentTypes
		{
			baseEquipment="PK_H_Helmet_CH43A_Standard";
		};
		hiddenSelectionsTextures[]=
		{
			Q(\z\OCI\addons\peacekeepers\data\helmets\standard\helmet_CH43A_CO.paa),
			Q(\z\OCI\addons\peacekeepers\data\vest\medic\vest_M43_DecalSheet_CA.paa)
		};
	};
    class PK_H_Helmet_CH43A_Medic: TCP_H_Helmet_CH43A_White
	{
		author=AUTHOR;
		scope=1;
		displayName=Q([73] CH43A Helmet Medic);
		picture="\TCP\Characters\BLUFOR\UNSC\Army\Headgear\helmet_CH43A\data\ui\White\icon_headgear_CH43A_CA.paa";
		class TCP_uniformDecals: TCP_uniformDecals
		{
			decalColor="white";
		};
		class TCP_equipmentTypes: TCP_equipmentTypes
		{
			baseEquipment="PK_H_Helmet_CH43A_Medic";
		};
		hiddenSelectionsTextures[]=
		{
			Q(\z\OCI\addons\peacekeepers\data\helmets\medic\medhelmet_CH43A_CO.paa),
			Q(\z\OCI\addons\peacekeepers\data\vest\medic\vest_M43_DecalSheet_CA.paa)
		};
	};
	class PK_H_Helmet_CH43A_Medic_ChinstrapOffset: TCP_H_Helmet_CH43A_White_ChinstrapOffset
	{
		author=AUTHOR;
		scope=1;
		displayName=Q([73] CH43A Helmet Medic);
		picture="\TCP\Characters\BLUFOR\UNSC\Army\Headgear\helmet_CH43A\data\ui\White\icon_headgear_CH43A_CA.paa";
		class TCP_uniformDecals: TCP_uniformDecals
		{
			decalColor="white";
		};
		class TCP_equipmentTypes: TCP_equipmentTypes
		{
			baseEquipment="PK_H_Helmet_CH43A_Medic";
		};
		hiddenSelectionsTextures[]=
		{
			Q(\z\OCI\addons\peacekeepers\data\helmets\medic\medhelmet_CH43A_CO.paa),
			Q(\z\OCI\addons\peacekeepers\data\vest\medic\vest_M43_DecalSheet_CA.paa)
		};
	};
};
