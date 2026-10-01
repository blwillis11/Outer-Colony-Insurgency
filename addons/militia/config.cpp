#include "script_component.hpp"
#include "script_macros.hpp"

class CfgPatches
{
    class OCI_Militia
    {
        authors[] = {"B. Salmon"};
        name = Q(COMPONENT_NAME);
        
        units[]=
        {
        };
        weapons[]=
        {
            "OCI_MA37_TCP_optic_M11VERO",
            "OCI_MA37K_TCP_optic_M11VERO",
            "OCI_M6G_TCP_acc_flashlight_M6G_TCP_optic_KFA_M6G_TCP_bipod_handGuard_M6G",
            "OCI_M731_TCP_acc_carryHandle_M731_TCP_optic_EVOSD_TCP_bipod_01",
            "OCI_BR45_TCP_optic_M11VERO"
        };
        
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] =
        {
            "OCI_Main"
        };
    };
};