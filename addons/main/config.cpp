#include "script_component.hpp"
#include "script_macros.hpp"

class CfgPatches
{
    class OCI_Main
    {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "TCP_Data"
        };             // Addon dependencies
        authors[] = {                       // Authors
            "Salmon"
        };
        author = AUTHOR;                   // MACRO
        VERSION_CONFIG;
    };
};

#include "CfgEditor.hpp"

class CfgMods {
    class PREFIX {
        dir = "@OCI";
        name = "Outer Colony Insurgency";
        picture = ""; // 256x256            // Picture displayed in expansions menu.
        hidePicture = "true";               // Hide the picture in the expansions menu.
        hideName = "true";                  // Hide the name in the expansions menu.
        actionName = "Website";             // Text displayed in the action button in the main menu.
        action = CSTRING(URL);              // Website URL, that is opened when the action button is clicked.
        //description = "";                 // Short description, that is displayed in the main menu.
    };
};
