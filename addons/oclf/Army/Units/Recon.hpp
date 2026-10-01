//--- Recon Scout
class DOUBLES(PFACTION,Recon): DOUBLES(PFACTION,Recon_Base)
{
    author = ECSTRING(Data, Author);
    dlc = QUOTE(PREFIX);

    scope = 2;

    displayName = "$STR_B_recon_F0";
	
	uniformClass = QUOTE(UNIFORM_ROLLED_KNEEPADS);

    linkedItems[] =
	{
		QUOTE(VEST_LIGHT),
		QUOTE(WATCHCAP),
		QUOTE(ITEM_MAP),
		QUOTE(ITEM_COMPASS),
		QUOTE(ITEM_WATCH),
		QUOTE(ITEM_RADIO),
		QUOTE(ITEM_GPS)
	};
	respawnLinkedItems[] =
	{
		QUOTE(VEST_LIGHT),
		QUOTE(WATCHCAP),
		QUOTE(ITEM_MAP),
		QUOTE(ITEM_COMPASS),
		QUOTE(ITEM_WATCH),
		QUOTE(ITEM_RADIO),
		QUOTE(ITEM_GPS)
	};
};

//--- Recon Scout (AT)
class DOUBLES(PFACTION,Recon_LAT): DOUBLES(PFACTION,Recon_Base)
{
    author = ECSTRING(Data, Author);
    dlc = QUOTE(PREFIX);

    scope = 2;

    displayName = "$STR_B_recon_LAT_F0";
    role = "MissileSpecialist";
    icon = "iconManAT";

    cost = 130000;

    threat[] = {0.8,0.8,0.3};
    secondaryAmmoCoef = 0.5;

    uniformClass = QUOTE(UNIFORM_TSHIRT_KNEEPADS);
    backpack = QUOTE(TRIPLES(BACKPACK,SUBCOMPONENT5,AT));
    
    weapons[] = 
	{
		QUOTE(RIFLE_SPECOPS),
        QUOTE(LAUNCHER),
		QUOTE(PISTOL_SPECOPS),
		"Throw",
		"Put",
        QUOTE(BINO)
	};
	respawnWeapons[] =
	{
		QUOTE(RIFLE_SPECOPS),
        QUOTE(LAUNCHER),
		QUOTE(PISTOL_SPECOPS),
		"Throw",
		"Put",
        QUOTE(BINO)
	};

    magazines[] = 
	{
		MAG_6(RIFLE_SPECOPS_MAG),
        MAG_1(LAUNCHER_MAG),
		MAG_2(PISTOL_SPECOPS_MAG),
		MAG_1(FRAG),
		MAG_1(SMOKE),
		MAG_2(LIGHT)
	};
	respawnMagazines[] = 
	{
		MAG_6(RIFLE_SPECOPS_MAG),
        MAG_1(LAUNCHER_MAG),
		MAG_2(PISTOL_SPECOPS_MAG),
		MAG_1(FRAG),
		MAG_1(SMOKE),
		MAG_2(LIGHT)
	};
};

//--- Recon Demo Specialist
class DOUBLES(PFACTION,Recon_Exp): DOUBLES(PFACTION,Recon_Base)
{
    author = ECSTRING(Data, Author);
    dlc = QUOTE(PREFIX);

    scope = 2;

    displayName = "$STR_B_soldier_exp_F0";
    role = "Sapper";
    icon = "iconManExplosive";
    picture = "pictureExplosive";

    cost = 93000;

    canDeactivateMines = 1;
    detectSkill = 38;

    uniformClass = QUOTE(UNIFORM_TSHIRT_KNEEPADS);
    backpack = QUOTE(TRIPLES(BACKPACK,SUBCOMPONENT5,EXP));

    linkedItems[] =
	{
		QUOTE(VEST_LIGHT),
		QUOTE(BOONIEHAT),
		QUOTE(ITEM_MAP),
		QUOTE(ITEM_COMPASS),
		QUOTE(ITEM_WATCH),
		QUOTE(ITEM_RADIO),
		QUOTE(ITEM_GPS)
	};
	respawnLinkedItems[] =
	{
		QUOTE(VEST_LIGHT),
		QUOTE(BOONIEHAT),
		QUOTE(ITEM_MAP),
		QUOTE(ITEM_COMPASS),
		QUOTE(ITEM_WATCH),
		QUOTE(ITEM_RADIO),
		QUOTE(ITEM_GPS)
	};
};

//--- Recon JTAC (Grenadier)
class DOUBLES(PFACTION,Recon_JTAC): DOUBLES(PFACTION,Recon_Base)
{
    author = ECSTRING(Data, Author);
    dlc = QUOTE(PREFIX);

    scope = 2;

    displayName = "$STR_B_recon_JTAC_F0";

    cost = 200000;

    role = "SpecialOperative";

    weapons[] = 
	{
		QUOTE(RIFLE_GL_SPECOPS),
		QUOTE(PISTOL_SPECOPS),
		"Throw",
		"Put",
        QUOTE(BINO)
	};
	respawnWeapons[] =
	{
		QUOTE(RIFLE_GL_SPECOPS),
		QUOTE(PISTOL_SPECOPS),
		"Throw",
		"Put",
        QUOTE(BINO)
	};
	
	magazines[] = 
	{
		MAG_6(RIFLE_SPECOPS_MAG),
		MAG_3(RIFLE_GL_SPECOPS_MAG),
		MAG_2(PISTOL_SPECOPS_MAG),
		MAG_1(FRAG),
		MAG_1(SMOKE),
		MAG_2(LIGHT)
	};
	respawnMagazines[] = 
	{
		MAG_6(RIFLE_SPECOPS_MAG),
		MAG_3(RIFLE_GL_SPECOPS_MAG),
		MAG_2(PISTOL_SPECOPS_MAG),
		MAG_1(FRAG),
		MAG_1(SMOKE),
		MAG_2(LIGHT)
	};

    linkedItems[] =
	{
		QUOTE(VEST_LIGHT),
		QUOTE(WATCHCAP),
		QUOTE(ITEM_MAP),
		QUOTE(ITEM_COMPASS),
		QUOTE(ITEM_WATCH),
		QUOTE(ITEM_RADIO),
		QUOTE(ITEM_GPS)
	};
	respawnLinkedItems[] =
	{
		QUOTE(VEST_LIGHT),
		QUOTE(WATCHCAP),
		QUOTE(ITEM_MAP),
		QUOTE(ITEM_COMPASS),
		QUOTE(ITEM_WATCH),
		QUOTE(ITEM_RADIO),
		QUOTE(ITEM_GPS)
	};
};

//--- Recon Team Leader
class DOUBLES(PFACTION,Recon_TL): DOUBLES(PFACTION,Recon_Base)
{
    author = ECSTRING(Data, Author);
    dlc = QUOTE(PREFIX);
    
    scope = 2;

    displayName = "$STR_B_recon_TL_F0";

    uniformClass = QUOTE(UNIFORM_ROLLED_KNEEPADS);

    cost = 250000;

    icon = "iconManLeader";
    role = "Grenadier";
    
    magazines[] = 
    {
        MAG_8(PISTOL_SPECOPS_MAG),
        MAG_2(SMOKE),
        MAG_2(FRAG),
        MAG_1(SMOKE_BLUE),
        MAG_1(SMOKE_ORANGE),
        MAG_1(SMOKE_RED),
        MAG_2(LIGHT)
    };
    respawnMagazines[] = 
    {
        MAG_8(PISTOL_SPECOPS_MAG),
        MAG_2(SMOKE),
        MAG_2(FRAG),
        MAG_1(SMOKE_BLUE),
        MAG_1(SMOKE_ORANGE),
        MAG_1(SMOKE_RED),
        MAG_2(LIGHT)
    };

    linkedItems[] =
	{
		QUOTE(VEST_LIGHT),
		QUOTE(HAT),
		QUOTE(ITEM_MAP),
		QUOTE(ITEM_COMPASS),
		QUOTE(ITEM_WATCH),
		QUOTE(ITEM_RADIO),
		QUOTE(ITEM_GPS)
	};
	respawnLinkedItems[] =
	{
		QUOTE(VEST_LIGHT),
		QUOTE(HAT),
		QUOTE(ITEM_MAP),
		QUOTE(ITEM_COMPASS),
		QUOTE(ITEM_WATCH),
		QUOTE(ITEM_RADIO),
		QUOTE(ITEM_GPS)
	};
};

//--- Recon Paramedic
class DOUBLES(PFACTION,Recon_Medic): DOUBLES(PFACTION,Recon_Base)
{
    author = ECSTRING(Data, Author);
    dlc = QUOTE(PREFIX);
    
    scope = 2;

    displayName = "$STR_B_recon_medic_F0";
    
    attendant = 1;

    icon = "iconManMedic";
    role = "CombatLifeSaver";

    backpack = QUOTE(TRIPLES(BACKPACK,SUBCOMPONENT5,MED));

    picture = "pictureHeal";
};

//--- Recon Marksman
class DOUBLES(PFACTION,Recon_M): DOUBLES(PFACTION,Recon_Base)
{
    author = ECSTRING(Data, Author);
    dlc = QUOTE(PREFIX);
    
    scope = 2;

    displayName = "$STR_B_recon_M_F0";

    role = "Marksman";

    cost = 250000;
};

//--- Recon Sharpshooter
class DOUBLES(PFACTION,Recon_Sharpshooter): DOUBLES(PFACTION,Recon_Base)
{
    author = ECSTRING(Data, Author);
    dlc = QUOTE(PREFIX);
    
    scope = 2;

    
    displayName = "$STR_A3_cfgVehicles_B_Recon_Sharpshooter_F0";

    role = "Marksman";

    cost = 250000;
};