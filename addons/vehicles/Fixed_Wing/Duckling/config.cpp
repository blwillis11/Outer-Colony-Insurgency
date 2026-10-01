#include "script_component.hpp"
class CfgPatches
{
    class SUBADDON2
	{
		addonRootClass = QUOTE(ADDON);

		name = QUOTE(SUBCOMPONENT2_NAME);
		units[] = {
            QUOTE(OCI_JAS39_Innie)
        };

		// Used for forcing load order
		requiredAddons[] = {
            QUOTE(ADDON)
        };
        skipWhenMissingDependencies = 1;
	};
};

class CfgVehicles
{
    class I_Plane_Fighter_04_F;
    class OCI_JAS39_Innie: I_Plane_Fighter_04_F
    {
        displayName="[OCI] JAS-39 Duckling";
        author= "OCI Dev Team";
        faction = "OCI_OCI_Fac";
        editorSubcategory = "EdSubcat_Planes";
        scopeCurator=2;
        scope=2;
        side=0;
        hiddenSelectionsTextures[] = {
            "\z\OCI\addons\vehicles\fixed_wing\Duckling\data\Fighter_04_fuselage_01_co.paa",
            "a3\air_f_jets\plane_fighter_04\data\Fighter_04_fuselage_02_co.paa",
            "a3\air_f_jets\plane_fighter_04\data\fighter_04_misc_01_co.paa",
            "a3\air_f_jets\plane_fighter_04\data\Numbers\Fighter_04_number_04_ca.paa",
            "a3\air_f_jets\plane_fighter_04\data\Numbers\Fighter_04_number_04_ca.paa",
            "a3\air_f_jets\plane_fighter_04\data\Numbers\Fighter_04_number_08_ca.paa"
        };
        crew = "OCI_O_OCLF_A_W_Soldier";
    };
};
