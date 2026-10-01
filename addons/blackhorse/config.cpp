#include "script_component.hpp"

class CfgPatches
{
	class ADDON
	{
		addonRootClass = QUOTE(MAIN_ADDON);

		name = QUOTE(COMPONENT_NAME);
		units[] = {};
		// Used for forcing load order
		requiredAddons[] = {QUOTE(MAIN_ADDON), QUOTE(OPTRE_FC_Units_Marines)};
        skipWhenMissingDependencies = 1;
	};
};

class CfgFactionClasses
{
	class OCI_Blackhorse
	{
		displayName = QUOTE(TAG Blackhorse PMG);
		priority = 0;
		side = 2;
	};
};

class CfgEditorSubcategories
{
	class EdSubCat_O_BH_PMG_S
	{
		displayName = QUOTE(Infantry);
	};
};