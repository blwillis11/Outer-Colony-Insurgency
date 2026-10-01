#include "script_component.hpp"
class CfgPatches
{
    class SUBADDON2
	{
		addonRootClass = QUOTE(ADDON);

		name = QUOTE(SUBCOMPONENT2_NAME);
		units[] = {
            QUOTE(OCI_Bearcat_AA_Innie),
            QUOTE(OCI_Bearcat_Autocannon_Innie),
            QUOTE(OCI_Bearcat_Unarmed_Innie),
            QUOTE(OCI_Bearcat_Cannon_Innie)
        };

		// Used for forcing load order
		requiredAddons[] = {
            QUOTE(ADDON), 
            QUOTE(TKE_Ext_V_OPTRE)
        };
        skipWhenMissingDependencies = 1;
	};
};


class CfgVehicles
{
    class TKE_Ext_Bearcat_AA_Innie;
    class OCI_Bearcat_AA_Innie: TKE_Ext_Bearcat_AA_Innie
    {
        displayName="[OCI] TC-15/B 'Bearcat' SHORAD";
        author= "OCI Dev Team";
        faction = "OCI_OCI_Fac";
        editorSubcategory = "EdSubcat_AAs";
        scopeCurator=2;
        scope=2;
        side=0;
        crew = "OCI_O_OCLF_A_W_Soldier";
        class ace_cargo {
            class cargo {
                class ACE_Tracks { // Doesn't have to have the same name as the item you're adding
                    type = "ACE_Tracks";
                    amount = 4;
                };
            };
        };
    };
    class TKE_Ext_Bearcat_Autocannon_Innie;
    class OCI_Bearcat_Autocannon_Innie :TKE_Ext_Bearcat_Autocannon_Innie
    {
        displayName="[OCI] TC-15/A 'Bearcat' IFV";
        author= "OCI Dev Team";
        faction = "OCI_OCI_Fac";
        editorSubcategory = "EdSubcat_APCs";
        scopeCurator=2;
        scope=2;
        side=0;
        crew = "OCI_O_OCLF_A_W_Soldier";
        class ACE_Cargo
        {
            class Cargo
            {
                class ACE_wheel
                {
                    type="ACE_wheel";
                    amount=4;
                };
            };
        };
    };

    class TKE_Ext_Bearcat_Unarmed_Innie;
    class OCI_Bearcat_Unarmed_Innie:TKE_Ext_Bearcat_Unarmed_Innie
    {
        displayName="[OCI] TC-15/C 'Bearcat' APC";
        author= "OCI Dev Team";
        faction = "OCI_OCI_Fac";
        editorSubcategory = "EdSubcat_APCs";
        scopeCurator=2;
        scope=2;
        side=0;
        crew = "OCI_O_OCLF_A_W_Soldier";
        class ACE_Cargo
        {
            class Cargo
            {
                class ACE_wheel
                {
                    type="ACE_wheel";
                    amount=4;
                };
            };
        };
    };

    class TKE_Ext_Bearcat_Cannon_Innie;
    class OCI_Bearcat_Cannon_Innie:TKE_Ext_Bearcat_Cannon_Innie
    {
        displayName="[OCI] TC-15/C 'Bearcat' FSV";
        author= "OCI Dev Team";
        faction = "OCI_OCI_Fac";
        editorSubcategory = "EdSubcat_APCs";
        scopeCurator=2;
        scope=2;
        side=0;
        crew = "OCI_O_OCLF_A_W_Soldier";
        class ACE_Cargo
        {
            class Cargo
            {
                class ACE_wheel
                {
                    type="ACE_wheel";
                    amount=4;
                };
            };
        };
    };
};