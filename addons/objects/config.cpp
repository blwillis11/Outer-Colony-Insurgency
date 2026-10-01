#include "script_component.hpp"

class CfgPatches {
    class OCI_Objects {
        name = Q(COMPONENT_NAME);
		units[] = 
        {
			"Land_OCI_FlagPole_01_OCI",
			"Land_OCI_FlagPole_02_OCI"
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
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
