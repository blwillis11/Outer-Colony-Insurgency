#include "script_component.hpp"

class CfgPatches {
    class OCI_Peacekeepers {
        name = COMPONENT_NAME;
		units[] = 
        {
            "OCI_Peacekeeper_RTO_Operator",
            "OCI_Peacekeeper_Medic",
            "OCI_Peacekeeper_Rifleman",
            "OCI_Peacekeeper_Team_Lead"
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

// configs go here

class TCP_equipmentTypes;
class TCP_uniformDecals;
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "CfgGroups.hpp"