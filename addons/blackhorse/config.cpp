#include "script_component.hpp"

class CfgPatches {
    class OCI_Blackhorse {
        name = COMPONENT_NAME;
		units[] = {
            "OCI_Blackhorse_Rifleman_AT",
            "OCI_Blackhorse_Rifleman",
            "OCI_Blackhorse_Marksman",
            "OCI_Blackhorse_RTO_Operator",
            "OCI_Blackhorse_Team_Lead",
            "OCI_Blackhorse_Grenadier",
            "OCI_Blackhorse_Autorifleman",
            "OCI_Blackhorse_Sniper"
        }; 
        weapons[] = {
           
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
			"OCI_Main",
            "OPTRE_FC_Units_Marines"
        };
        authors[] = {"Salmon"}; // sub array of authors, considered for the specific addon, can be removed or left empty {}
        author = AUTHOR; // primary author name, either yours or your team's, considered for the whole mod
        VERSION_CONFIG;
        skipWhenMissingDependencies = 1;
    };
};

class TCP_equipmentTypes;
class TCP_uniformDecals;
class UniformItem;
class ItemInfo;

// configs go here
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "CfgGroups.hpp"
