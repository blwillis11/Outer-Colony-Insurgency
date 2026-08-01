class CfgPatches
{
    class OCI_Police_Vehicles
    {
        name = "Outer Colony Police - Vehicles";
        units[]=
        {
            "OCI_M12A_Police"
        };
        requiredAddons[] =
        {
            "OCI_Police",
            "OPTRE_Vehicles_Warthog"
        };
    };
};
class CfgVehicles
{
	class OPTRE_M12_FAV_PD;
    class OCI_M12A_Police : OPTRE_M12_FAV_PD
    {
        displayName="[OCI] M12A FAV Warthog";
        author= "OCI Dev Team";
        faction = "OCI_Police_Fac";
        editorCategory = "OCI_Police_EdCat";
        editorSubcategory = "EdSubcat_Cars";
        scopeCurator=2;
        scope=2;
        side=2;
        crew = "Police_Policeman_AR";
    };
};