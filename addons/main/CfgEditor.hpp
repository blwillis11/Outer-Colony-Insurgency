class cfgFactionClasses 
{ 
    class OCI_OCI_Fac
    {
        displayName = "[OCI] Outer Colony Insurgency";
        priority = 0; // Position in list.
        side = 0; // Opfor = 0, Blufor = 1, Indep = 2.
        icon = ""; //Custom Icon
    };
    class OCI_10MEB_Fac
    {
        displayName = "[OCI] 10th Marine Expeditionary Brigade";
        priority = 0; // Position in list.
        side = 1; // Opfor = 0, Blufor = 1, Indep = 2.
        icon = ""; //Custom Icon
    };
    class OCI_Peacekeepers_Fac
    {
        displayName = "[OCI] UNSC Peacekeepers";
        priority = 0; // Position in list.
        side = 2; // Opfor = 0, Blufor = 1, Indep = 2.
        icon = ""; //Custom Icon
    };
    class OCI_Militia_Fac
    {
        displayName = "[OCI] Outer Colony Militia";
        priority = 0; // Position in list.
        side = 2; // Opfor = 0, Blufor = 1, Indep = 2.
        icon = ""; //Custom Icon
    };
    class OCI_Militia_OPFOR_Fac
    {
        displayName = "[OCI] Outer Colony Militia";
        priority = 0; // Position in list.
        side = 0; // Opfor = 0, Blufor = 1, Indep = 2.
        icon = ""; //Custom Icon
    };
    class OCI_Police_Fac
    {
        displayName = "[OCI] Colonial Police";
        priority = 0; // Position in list.
        side = 2; // Opfor = 0, Blufor = 1, Indep = 2.
        icon = ""; //Custom Icon
    };
    class OCI_Modules
    {
        displayName = "[OCI] Modules";
        priority = 0; // Position in list.
        side = 7;
    };
};
class CfgEditorCategories
{
    class OCI_Objects_EdCat
    {
        displayName = "[OCI] Objects";
    };
    class OCI_OCI_EdCat // Category class, you point to it in editorCategory property
	{
		displayName = "[OCI] Outer Colony Insurgency"; // Name visible in the list
		scopeCurator=2;
		scopeeditor=2;
	};
    class OCI_10MEB_EdCat // Category class, you point to it in editorCategory property
	{
		displayName = "[OCI] 10th Marine Expeditionary Brigade";
		scopeCurator=2;
		scopeeditor=2;
	};
    class OCI_BPG_EdCat // Category class, you point to it in editorCategory property
	{
		displayName = "[OCI] Blackhorse Paramilitary Group";
		scopeCurator=2;
		scopeeditor=2;
	};
    class OCI_Peacekeepers_EdCat // Category class, you point to it in editorCategory property
	{
		displayName = "[OCI] UNSC Peacekeepers";
		scopeCurator=2;
		scopeeditor=2;
	};
    class OCI_Militia_EdCat // Category class, you point to it in editorCategory property
	{
		displayName = "[OCI] Outer Colony Militia"; // Name visible in the list
		scopeCurator=2;
		scopeeditor=2;
	};
    class OCI_Police_EdCat // Category class, you point to it in editorCategory property
	{
		displayName = "[OCI] Colonial Police"; // Name visible in the list
		scopeCurator=2;
		scopeeditor=2;
	};
};

class CfgEditorSubcategories
{
    class OCI_Mechanized_EdSubCat
    {
        displayName = "Mechanized";
    };
    class OCI_Infantry_EdSubCat
    {
        displayName = "Infantry";
    };
    class OCI_ECH_Infantry_EdSubCat
    {
        displayName = "Infantry [ECH]";
    };
    class OCI_Infantry_Woodland_EdSubCat
    {
        displayName = "Infantry [Woodland]";
    };
    class OCI_ECH_Infantry_Woodland_EdSubCat
    {
        displayName = "Infantry [ECH Woodland]";
    };
    class OCI_Infantry_Tropic_EdSubCat
    {
        displayName = "Infantry [Tropic]";
    };
    class OCI_ECH_Infantry_Tropic_EdSubCat
    {
        displayName = "Infantry [ECH Tropic]";
    };
    class OCI_Infantry_Arid_EdSubCat
    {
        displayName = "Infantry [Arid]";
    };
    class OCI_ECH_Infantry_Arid_EdSubCat
    {
        displayName = "Infantry [ECH Arid]";
    };
    class OCI_Infantry_Arctic_EdSubCat
    {
        displayName = "Infantry [Arctic]";
    };
    class OCI_ECH_Infantry_Arctic_EdSubCat
    {
        displayName = "Infantry [ECH Arctic]";
    };
    class OCI_Misc_EdSubCat
    {
        displayName = "Miscellaneous";
        vehicleClass = "OCI_Objects_EdCat";
    };
    class OCI_SpecOps_EdSubCat
    {
        displayName = "Special Forces";
    };
    class OCI_Radar_EdSubCat
    {
        displayName = "Radar Systems";
    };
};
