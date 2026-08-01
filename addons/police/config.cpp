#include "script_component.hpp"
#include "script_macros.hpp"

class CfgPatches
{
    class OCI_Police
    {
        authors[] = {"B. Salmon"};
        name = "Colonial Police";
        
        units[]=
        {
        };
        weapons[]=
        {
            
        };
        
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] =
        {
            "OCI_Main"
        };
    };
};
class itemInfo;
class CfgVehicles {
    #include "cfgVehicles.hpp"
};
class CfgWeapons {
    #include "CfgWeapons.hpp"
};