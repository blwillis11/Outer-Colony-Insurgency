#include "script_component.hpp"

class CfgPatches {
    class OCI_Vehicles {
		addonRootClass="OCI_Main";
        name = COMPONENT_NAME;
		units[] = 
        {
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

class CfgWeapons
{
    class rockets_230mm_GAT;

    class OCI_MLRS_230mm_rockets: rockets_230mm_GAT
    {
        magazines[] = {
            "OCI_12Rnd_230mm_rockets"
        };
    };
    class mortar_155mm_AMOS;

    class OCI_mortar_155mm_AMOS: mortar_155mm_AMOS
    {
        magazines[] = {
            "OCI_12Rnd_105mm_Con",
            "6Rnd_155mm_Mo_smoke"
        };
    };
};