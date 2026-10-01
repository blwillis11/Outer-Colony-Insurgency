//Autorifleman
class DOUBLES(PFACTION,Soldier_Air_Assault): DOUBLES(PFACTION,Recon_Base)
{
	dlc = Q(PREFIX);
    author = AUTHOR;
	SCOPE_S
	displayName = "Air Assault Raider";
	identityTypes[] = {
        "LanguageENG_F",
        "Head_NATO"
    };

	backpack = "";
};
class DOUBLES(PFACTION,Soldier_Air_Assault_AT): DOUBLES(PFACTION,Soldier_Air_Assault)
{
	dlc = Q(PREFIX);
    author = AUTHOR;
	SCOPE_S
	displayName = "Air Assault Raider (AT)";
	backpack = QUOTE(TRIPLES(BACKPACK,SUBCOMPONENT3,AT));
    weapons[] =
	{
		QUOTE(RIFLE_SPECOPS),
        QUOTE(LAUNCHER),
		"Throw",
		"Put",
        QUOTE(BINO)
	};
	respawnWeapons[] =
	{
		QUOTE(RIFLE_SPECOPS),
        QUOTE(LAUNCHER),
		"Throw",
		"Put",
        QUOTE(BINO)
	};
};
class DOUBLES(PFACTION,Soldier_Air_Assault_Exp): DOUBLES(PFACTION,Soldier_Air_Assault)
{
	dlc = Q(PREFIX);
    author = AUTHOR;
	SCOPE_S
	displayName = "$STR_B_soldier_exp_F0";

	backpack = QUOTE(TRIPLES(BACKPACK,SUBCOMPONENT3,EXP));
};
class DOUBLES(PFACTION,Soldier_Air_Assault_JTAC): DOUBLES(PFACTION,Soldier_Air_Assault)
{
	dlc = Q(PREFIX);
    author = AUTHOR;
	SCOPE_S
	displayName = "Air Assault Raider (JTAC)";

	backpack = QUOTE(TRIPLES(BACKPACK_JTAC,SUBCOMPONENT3,RADIO));

    magazines[] = {
        MAG_6(SMG_SPECOPS_MAG),
        MAG_2(SMOKE),
        MAG_1(SMOKE_BLUE),
        MAG_2(SMOKE_ORANGE),
        MAG_3(SMOKE_RED),
        MAG_2(LIGHT)
    };
    respawnMagazines[] = {
        MAG_6(SMG_SPECOPS_MAG),
        MAG_2(SMOKE),
        MAG_1(SMOKE_BLUE),
        MAG_2(SMOKE_ORANGE),
        MAG_3(SMOKE_RED),
        MAG_2(LIGHT)
    };
};
class DOUBLES(PFACTION,Soldier_Air_Assault_TL): DOUBLES(PFACTION,Soldier_Air_Assault)
{
	dlc = Q(PREFIX);
    author = AUTHOR;
	SCOPE_S
	displayName = "Air Assault Raider Team Leader";

    cost = 250000;
    icon = "iconManLeader";
    role = "Grenadier";
};
class DOUBLES(PFACTION,Soldier_Air_Assault_CLS): DOUBLES(PFACTION,Soldier_Air_Assault)
{
	dlc = Q(PREFIX);
    author = AUTHOR;
	SCOPE_S
	displayName = "Air Assault Raider (CLS)";

	backpack = QUOTE(TRIPLES(BACKPACK_MEDIC,SUBCOMPONENT3,MED));

    picture = "pictureHeal";
    attendant = 1;
    icon = "iconManMedic";
    role = "CombatLifeSaver";
};
class DOUBLES(PFACTION,Soldier_Air_Assault_M): DOUBLES(PFACTION,Soldier_Air_Assault)
{
	dlc = Q(PREFIX);
    author = AUTHOR;
	SCOPE_S
	displayName = "Air Assault Raider Marksman";

	backpack = "";
    role = "Marksman";
    cost = 250000;
    primaryAmmoCoef = 0.2;
    secondaryAmmoCoef = 0.05;
    handgunAmmoCoef = 0.1;

    weapons[] =
	{
		QUOTE(RIFLE_SPECOPS),
		"Throw",
		"Put",
        QUOTE(BINO)
	};
	respawnWeapons[] =
	{
		QUOTE(RIFLE_SPECOPS),
		"Throw",
		"Put",
        QUOTE(BINO)
	};
};