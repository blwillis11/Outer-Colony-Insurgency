class CfgVehicles
{
	#include "..\Base.hpp"

	

	class OPTRE_OQ_38_Wren_Drone_UNSC;
	class DOUBLES(FACTION,OQ_38_Wren_Drone_Woodland): OPTRE_OQ_38_Wren_Drone_UNSC
	{
		scope = 2;
		displayName = "[OCI] OQ-38 'Wren' [Woodland]";
		faction = QUOTE(FACTION);
		crew = QUOTE(O_UAV_AI);
		side = 0;
		class ACE_Actions
		{
			class ACE_MainActions
			{
				selection="interaction_point";
				distance=5;
				condition="(true)";
				class ACE_Pickup
				{
					selection="";
					displayName="Pick Up Wren";
					distance=5;
					condition="(alive _target)";
					statement="[_player, _target, 'OCI_OQ38_Wren_Drone_Woodland_Item'] call OPTRE_ace_fnc_pick_up_vic";
					showDisabled=0;
					exceptions[]={};
					icon="\OPTRE_Vehicles_Air_Drone\Wren\data\wren_icon.paa";
				};
				class ace_repair_Repair
				{
					displayName="Repair";
					condition="true";
					statement="";
					runOnHover=1;
					showDisabled=0;
					icon="\A3\ui_f\data\igui\cfg\actions\repair_ca.paa";
					distance=4;
					exceptions[]=
					{
						"isNotSwimming",
						"isNotOnLadder"
					};
				};
			};
		};
	};

	class Man;
	class CAManBase: Man
	{
		class ACE_SelfActions
		{
			class ACE_Equipment
			{
                class OPTRE_Wren_Drone_place;
				class OCI_Wren_Drone_place: OPTRE_Wren_Drone_place
				{
					displayName="Deploy Wren Drone";
					condition="[_player, 'OCI_OQ38_Wren_Drone_Woodland_Item'] call ace_common_fnc_hasItem";
					statement="[_player, 'OPTRE_OQ_38_Wren_Drone_UNSC', 'OCI_OQ38_Wren_Drone_Woodland_Item'] call OPTRE_ace_fnc_place_down_vic";
					icon="\OPTRE_Vehicles_Air_Drone\Wren\data\wren_icon.paa";
				};
			};
		};
	};
};