class CfgPatches {
    class OCI_Wheeled_Vehicles_Bearcat {
        addonRootClass="OCI_Vehicles";
        name = "Outer Colony Insurgency - Wheeled Vehicles - Bearcat";
        units[] = {
            "OCI_Bearcat_AA_Innie",
            "OCI_Bearcat_Autocannon_Innie",
            "OCI_Bearcat_Unarmed_Innie",
            "OCI_Bearcat_Cannon_Innie"
        };
        requiredAddons[] = {
            "OCI_Vehicles",
            "TKE_Ext_V_OPTRE"
        };
        skipwhenmissingdependancies = 1;
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
        editorCategory = "OCI_OCI_EdCat";
        editorSubcategory = "EdSubcat_AAs";
        scopeCurator=2;
        scope=2;
        side=0;
        crew = "OCLF_Crewman";
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
        editorCategory = "OCI_OCI_EdCat";
        editorSubcategory = "EdSubcat_APCs";
        scopeCurator=2;
        scope=2;
        side=0;
        crew = "OCLF_Crewman";
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
        editorCategory = "OCI_OCI_EdCat";
        editorSubcategory = "EdSubcat_APCs";
        scopeCurator=2;
        scope=2;
        side=0;
        crew = "OCLF_Crewman";
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
        editorCategory = "OCI_OCI_EdCat";
        editorSubcategory = "EdSubcat_APCs";
        scopeCurator=2;
        scope=2;
        side=0;
        crew = "OCLF_Crewman";
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