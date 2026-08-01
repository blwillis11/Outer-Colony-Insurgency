#include "script_component.hpp"

class CfgPatches {
    class OCI_Marines {
        name = COMPONENT_NAME;
		units[] = 
        {
            "OCI_Marine_Rifleman_AT",
            "OCI_Marine_Rifleman",
            "OCI_Marine_Marksman",
            "OCI_Marine_RTO_Operator",
            "OCI_Marine_Medic",
            "OCI_Marine_Grenadier",
            "OCI_Marine_Autorifleman",
            "OCI_Marine_Sniper",
            "OCI_ECH_Marine_Rifleman_AT",
            "OCI_ECH_Marine_Rifleman",
            "OCI_ECH_Marine_Marksman",
            "OCI_ECH_Marine_RTO_Operator",
            "OCI_ECH_Marine_Medic",
            "OCI_ECH_Marine_Grenadier",
            "OCI_ECH_Marine_Autorifleman",
            "OCI_ECH_Marine_Sniper"
        }; 
        weapons[] = {
           
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
			"OCI_Main"
        };
        authors[] = {"Salmon"}; // sub array of authors, considered for the specific addon, can be removed or left empty {}
        author = AUTHOR; // primary author name, either yours or your team's, considered for the whole mod
        VERSION_CONFIG;
    };
};

class TCP_equipmentTypes;
class TCP_uniformDecals;
class UniformItem;

// configs go here
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "CfgGroups.hpp"
