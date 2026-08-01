class CfgVehicles
{
    class Logic;
	class Module_F : Logic
	{
		class AttributesBase
		{
			class Edit;
			class ModuleDescription;
		};
		class ModuleDescription{};
	};
    class Sign_Sphere10cm_F;
    class OCI_Stand_In : Sign_Sphere10cm_F
    {
        displayName= "DO NOT DELETE!";
    };
	class OPTRE_PelicanSupplyDrop;
	class Module_OPTRE_HEV;
	class Module_OPTRE_ODSTDrop;
	class OPTRE_ODSTDrop;

	class OCI_Module_HEV: Module_OPTRE_HEV
	{
		displayName="[OCI] HEV Module";
		category="OCI_Modules";
		function="OCI_fnc_ModuleHEV";
		author= AUTHOR;
		class Arguments
		{
			class shipDeployment
			{
				displayName="Deployment Mode";
				description="This controls the drop scene for the players. The drop will always be directly above the module.";
				defaultValue="Frigate";
				typeName="STRING";
				class values
				{
					class n1
					{
						name="Deploy without ship";
						value="No Ship";
					};
					class n2
					{
						name="Deploy from Frigate";
						value="Frigate";
						default=1;
					};
				};
			};
			class LaunchDelay
			{
				displayName="Count Down Timer";
				description="This is the time that the HEVs will be hanging waiting until drop.";
				defaultValue="10";
				typeName="NUMBER";
			};
			class randomXYVelocity
			{
				displayName="Randomised X/Y Velocity";
				description="Random drift of pods on the horizontal axis. This must be at least 2 (otherwise the script will set it to 2) to minimize pods hitting each other.";
				defaultValue="2";
				typeName="NUMBER";
			};
			class launchSpeed
			{
				displayName="Down Velocity On Launch";
				description="A negative value of how fast the pods descend. Should keep at -1.";
				defaultValue="-1";
				typeName="NUMBER";
			};
			class manualControl
			{
				displayName="Player Control Of HEV";
				description="Depreciated Entry. No longer in use";
				defaultValue=1;
				typeName="NUMBER";
				class values
				{
					class n1
					{
						name="Empty";
						value=0;
					};
					class n2
					{
						name="Empty";
						value=1;
						default=1;
					};
				};
			};
			class startHeight
			{
				displayName="STAGE1: Start Height";
				description="Height that the pods will drop from. Recommend above 5000m";
				defaultValue="5000";
				typeName="NUMBER";
			};
			class hevDropArmtmosphereStartHeight
			{
				displayName="STAGE2A: Atmospheric Entry Height";
				description="At what height to engage the atmo entry fire effects. The difference between this and the start hieight shouldn't be more then 2000";
				defaultValue="3000";
				typeName="NUMBER";
			};
			class hevDropArmtmosphereEndHeight
			{
				displayName="STAGE2B: End Entry Height";
				description="At what height to end the entry atmo effects.";
				defaultValue="2000";
				typeName="NUMBER";
			};
			class chuteDeployHeightHeight
			{
				displayName="STAGE3A: Chute Deployment Height";
				description="Self explanitory.";
				defaultValue="1000";
				typeName="NUMBER";
			};
			class chuteDetachHeight
			{
				displayName="STAGE3B: Chute Detach Height";
				description="Self explanitory.";
				defaultValue="500";
				typeName="NUMBER";
			};
			class boasterHeight
			{
				displayName="STAGE4: Booster Up Height";
				description="Depreciated entry. No longer in use.";
				defaultValue="0";
				typeName="NUMBER";
			};
			class deleteFrigate
			{
				displayName="Delete Ship";
				description="If spawning with a ship, should it be deleted after drop?";
				defaultValue=1;
				typeName="BOOL";
				class values
				{
					class n1
					{
						name="Delete Ship";
						value=1;
						default=1;
					};
					class n2
					{
						name="Dont Delete Ship";
						value=0;
					};
				};
			};
			class deleteChutes
			{
				displayName="Delete Chutes After Detach";
				description="Should the chutes auto delete upon detach or be added to the cleanup module?";
				defaultValue=1;
				typeName="BOOL";
				class values
				{
					class n1
					{
						name="Add Chutes To HEV CleanUp Module";
						value=0;
						default=1;
					};
					class n2
					{
						name="Delete Chutes On Detach";
						value=1;
					};
				};
			};
			class deleteHEVafter
			{
				displayName="HEVs Can Be Delete After";
				description="If the cleanup module is present, HEVs will be deleted after X amount of seconds.";
				defaultValue="600";
				typeName="NUMBER";
			};
		};
	};
    class OCI_Module_ORCSDrop: Module_OPTRE_ODSTDrop
    {
        scope=2;
        displayName="[OCI] AI ORCS Drop Module";
        icon="\OPTRE_Modules\data\picture\Icon_OPTRE.paa";
        category="OCI_Modules";
        function="OCI_fnc_ModuleORCSHEV";
        class Arguments
        {
            class ORCS_Man_1
            {
                displayName="Team Leader";
                description="Class of ORCS to be inserted via HEV.";
                defaultValue="random";
                typeName="STRING";
                class values
                {
                    class n0
                    {
                        name="None";
                        value="none";
                    };
                    class n1
                    {
                        name="Random";
                        value="random";
                        default=1;
                    };
                    class n3
                    {
                        name="ORCS Rifleman (AR)";
                        value="OCLF_ORCS_Rifleman";
                    };
                    class n4
                    {
                        name="ORCS Rifleman (AT)";
                        value="OCLF_ORCS_Rifleman_AT";
                    };
                    class n5
                    {
                        name="ORCS Autorifleman";
                        value="OCLF_ORCS_Autorifleman";
                    };
                    class n6
                    {
                        name="ORCS Marksman";
                        value="OCLF_ORCS_Marksman";
                    };
                    class n7
                    {
                        name="ORCS Grenadier";
                        value="OCLF_ORCS_Grenadier";
                    };
                    class n8
                    {
                        name="ORCS Sniper";
                        value="OCLF_ORCS_Sniper";
                    };
                    class n9
                    {
                        name="ORCS Rifleman (BR)";
                        value="OCLF_ORCS_Rifleman_BR";
                    };
                    class n10
                    {
                        name="ORCS Spotter";
                        value="OCLF_ORCS_Spotter";
                    };
                    class n11
                    {
                        name="ORCS Team Lead";
                        value="OCLF_ORCS_TeamLead";
                    };
                    class n12
                    {
                        name="ORCS Medic";
                        value="OCLF_ORCS_Medic";
                    };
                    class n13
                    {
                        name="ORCS Marksman";
                        value="OCLF_ORCS_Marksman";
                    };
                };
            };
            class ORCS_Man_2: ORCS_Man_1
            {
                displayName="Team Member";
            };
            class ORCS_Man_3: ORCS_Man_1
            {
                displayName="Team Member";
            };
            class ORCS_Man_4: ORCS_Man_1
            {
                displayName="Team Member";
            };
            class ORCS_Man_5: ORCS_Man_1
            {
                displayName="Squad Leader";
            };
            class ORCS_Man_6: ORCS_Man_1
            {
                displayName="Team Member";
            };
            class ORCS_Man_7: ORCS_Man_1
            {
                displayName="Team Member";
            };
            class ORCS_Man_8: ORCS_Man_1
            {
                displayName="Team Member";
            };
            class waypoints
            {
                displayName="WayPoints";
                description="An array or map marker variable names that the groups spawned will follow once on the ground as waypoints. No quotations are needed for example: M1,Marker2,MapMarker1";
                defaultValue="";
                typeName="STRING";
            };
            class finalWaypoint
            {
                displayName="Final Waypoint Task";
                description="What should the group do on their final waypoint. If you have given no waypoints then this option is ignored. If CBA Garrison is selected units will find houses within 75m of last waypoint. If CBA patrol is selected group will patrol within a 300m area of last waypoint.";
                defaultValue=" ";
                typeName="STRING";
                class values
                {
                    class n1
                    {
                        name="BIS Cycle Back To First Waypoint";
                        value="cycle";
                    };
                    class n2
                    {
                        name="CBA Garrison Near Final Waypoint";
                        value="garrison";
                    };
                    class n3
                    {
                        name="CBA Patrol Around Final Waypoint";
                        value="patrol";
                    };
                    class n4
                    {
                        name="Stop, Do Nothing";
                        value="";
                        default=1;
                    };
                };
            };
        };
    };
    class OCI_ORCSDrop: OPTRE_ODSTDrop
    {
        displayName="[OCI] ORCS Drop Module";
        category="OCI_Modules";
        scopeCurator=2;
        curatorInfoType="OCI_ZeusDisplay_ORCSDrop";
        function="OCI_fnc_ModuleORCSHEV";
        author=AUTHOR;
    };
    class OCI_Module_OCLFSquadDrop: Module_F
    {
        scope=2;
        displayName="[OCI] AI OCLF Squad Drop Module";
        icon="\OPTRE_Modules\data\picture\Icon_OPTRE.paa";
        category="OCI_Modules";
        function="OCI_fnc_ModuleOCLFSquadPod";
        author=AUTHOR;
        is3DEN=0;
        class Arguments
        {
            class waypoints
            {
                displayName="WayPoints";
                description="An array or map marker variable names that the groups spawned will follow once on the ground as waypoints. No quotations are needed for example: M1,Marker2,MapMarker1";
                defaultValue="";
                typeName="STRING";
            };
            class finalWaypoint
            {
                displayName="Final Waypoint Task";
                description="What should the group do on their final waypoint. If you have given no waypoints then this option is ignored. If CBA Garrison is selected units will find houses within 75m of last waypoint. If CBA patrol is selected group will patrol within a 300m area of last waypoint.";
                defaultValue=" ";
                typeName="STRING";
                class values
                {
                    class n1
                    {
                        name="BIS Cycle Back To First Waypoint";
                        value="cycle";
                    };
                    class n2
                    {
                        name="CBA Garrison Near Final Waypoint";
                        value="garrison";
                    };
                    class n3
                    {
                        name="CBA Patrol Around Final Waypoint";
                        value="patrol";
                    };
                    class n4
                    {
                        name="Stop, Do Nothing";
                        value="";
                        default=1;
                    };
                };
            };
        };
    };
    class OCI_OCLFSquadDrop: OPTRE_PelicanSupplyDrop
    {
        displayName="[OCI] OCLF Squad Drop Module";
        category="OCI_Modules";
        scopeCurator=2;
        curatorInfoType="OCI_ZeusDisplay_OCLFSquadDrop";
        function="OCI_fnc_ModuleOCLFSquadPod";
        author=AUTHOR;
    };
	class Module_OPTRE_PelicanAirAssault;
    class OCI_Module_PelicanAirAssault: Module_OPTRE_PelicanAirAssault
    {
        scope=2;
        displayName="[OCI] Pelican Air Assault Event";
        icon="\OPTRE_Modules\data\picture\Icon_OPTRE.paa";
        category="OCI_Modules";
        function="OCI_fnc_ModulePelicanAirAssault";
		curatorInfoType="OCI_ZeusDisplay_PelicanAirAssault";
        author= AUTHOR;
        is3DEN=0;
        class Arguments
        {
            class Pelican_Unarmed_Colour
            {
                displayName="D77-TC Pelican";
                description="[Pelican] The D77-TC is a variant of the Pelican Drop Ship, this option determines what authority the Pelican falls under.";
                defaultValue="OCLF";
                typeName="STRING";
                class values
                {
                    class n1
                    {
                        name="OCLF Pelican";
                        value="OCLF";
                    };
                    class n2
                    {
                        name="ORCS Pelican";
                        value="ORCS";
                    };
                    class n3
                    {
                        name="10th MEB Pelican";
                        value="10th";
                        default=1;
                    };
                };
            };
            class spawnDir
            {
                displayName="Spawn Direction";
                description="A number that determines the direction from the module the Pelican will spawn.";
                defaultValue="360";
                typeName="NUMBER";
            };
            class exitDir
            {
                displayName="Exit Direction";
                description="A number that determines the direction from the module the Pelican will spawn.";
                defaultValue="180";
                typeName="NUMBER";
            };
            class distance
            {
                displayName="Spawn / De-spawn Distance";
                description="A number that determines the distance the Pelican will be spawned in the direction of Exit and Spawn.";
                defaultValue="3000";
                typeName="NUMBER";
            };
            class flyInHeight
            {
                displayName="Fly In Height";
                description="A number that determines the height the Pelican will fly at.";
                defaultValue="100";
                typeName="NUMBER";
            };
            class side
            {
                displayName="Side Of Pelican / Groups";
                description="Side Of Pelican, WEST or EAST";
                defaultValue="WEST";
                typeName="STRING";
                class values
                {
                    class n1
                    {
                        name="Side: EAST";
                        value="EAST";
                    };
                    class n2
                    {
                        name="Side: WEST";
                        value="WEST";
                        default=1;
                    };
                    class n3
                    {
                        name="Side: Independent";
                        value="INDEPENDENT ";
                    };
                    class n4
                    {
                        name="Side: civilian";
                        value="CIVILIAN";
                    };
                };
            };
            class vehicle
            {
                displayName="Vehicle To Drop";
                description="Type of vehicle required. A driver and a gunner will be added to the vehicles.";
                defaultValue="";
                typeName="STRING";
                class values
                {
                    class n1
                    {
                        name="Don't Drop A Vehicles";
                        value="";
                        default=1;
                    };
                };
            };
            class box1
            {
                displayName="Branch Of Military";
                description="Type of units to be spawned..";
                defaultValue="Marines";
                typeName="STRING";
                class values
                {
                    class n1
                    {
                        name="OCLF";
                        value="OCLF";
                    };
                    class n2
                    {
                        name="ORCS";
                        value="ORCS";
                    };
                    class n3
                    {
                        name="10th MEB";
                        value="10th MEB";
                        default=1;
                    };
                };
            };
            class box2
            {
                displayName="Squad Sizes";
                description="The number of units in both squads spawned. 2 squads will always be spawned.";
                defaultValue="6";
                typeName="NUMBER";
                class values
                {
                    class n6
                    {
                        name="Six";
                        value=6;
                        default=1;
                    };
                };
            };
            class box3
            {
                displayName="WayPoints";
                description="An array or marker position that the groups spawned will follow once on the ground. For Example: M1,M2,Marker1,MapMarkerZ (No Spaces).";
                defaultValue="";
                typeName="STRING";
            };
            class finalWaypoint
            {
                displayName="Final Waypoint Task";
                description="Side Of Pelican, WEST or EAST";
                defaultValue="cycle";
                typeName="STRING";
                class values
                {
                    class n1
                    {
                        name="Cycle Back To First Waypoint";
                        value="cycle";
                        default=1;
                    };
                    class n2
                    {
                        name="Garrison Near Final Waypoint";
                        value="garrison";
                    };
                    class n3
                    {
                        name="Patrol Around Final Waypoint";
                        value="patrol ";
                    };
                };
            };
            class code
            {
                displayName="Custom Box Code";
                description="A script that will be run on any pod assigned as CUSTOM. _This refers to the pod that is spawned. For example: _this addMagazineCargoGlobal ['OPTRE_60Rnd_5x23mm_Mag',4];";
                defaultValue="";
                typeName="STRING";
            };
        };
        class ModuleDescription
        {
            description[]=
            {
                "This module will spawn a Pelican drop ship that can deliver 2 squads and / or a vehicle the spawned groups can be controlled by zeus. Place the module where you would like the supplies to be dropped on the map. Note that if a Landing Pad is nearby the pelican will always try to land on that position when delivering vehicles as this module uses the LAND command, this may cause a problem if more than one Pelican try to land on a pad at once (This apply s to Landing Pads native to the map as well a spawned / placed pads.)."
            };
            sync[]=
            {
                "EmptyDetector"
            };
            position=1;
            direction=0;
            class EmptyDetector
            {
                duplicate=1;
                position=0;
                direction=0;
                optional=1;
            };
        };
    };
	class OPTRE_PelicanAirAssault;
    class OCI_PelicanAirAssault: OPTRE_PelicanAirAssault
    {
        displayName="[OCI] Pelican Air Assault";
        category="OCI_Modules";
        scopeCurator=2;
        curatorInfoType="OCI_ZeusDisplay_PelicanAirAssault";
        function="OCI_fnc_ModulePelicanAirAssault";
        portrait="OPTRE_Vehicles\Pelican\Data\icon2.paa";
        author= AUTHOR;
    };
};
