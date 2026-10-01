// Soldier_Base No Gloves, No Kneepads
// Soldier_Base_02 No Gloves
// Soldier_Base_03 No Kneepads
// Soldier_Base_04 Only Gloves and Kneepads
/////////////////////////////////////////////
// Soldier_Support_Base for Asst Roles
// Pilot_Base for pilot roles


class SoldierGB;
class I_Soldier_base_F : SoldierGB {
    class EventHandlers;
};

class DOUBLES(PCLASSTYPE,Soldier_Base): I_Soldier_base_F
{
    scope = 0;

    dlc = Q(PREFIX);
    author = AUTHOR;
    faction = Q(PFACTION);
    editorSubcategory = Q(PEDITORCAT);
    uniformAccessories[] = {};
    nakedUniform = Q(UNIFORM_NAKED);
    uniformClass = Q(UNIFORM_F);
    role = "Rifleman";
    identityTypes[] = {
        "LanguageENG_F",
        "Head_NATO",
        Q(FACEWEAR)
    };
    class UniformInfo
    {
        class SlotsInfo
        {
            class NVG: UniformSlotInfo
            {
                slotType = 602;
            };
            class Scuba: UniformSlotInfo
            {
                slotType = 604;
            };
            class Headgear: UniformSlotInfo
            {
                slotType = 605;
            };
        };
    };
    weapons[] =
    {
        Q(RIFLE),
        Q(PISTOL),
        "Throw",
        "Put"
    };
    respawnWeapons[] =
    {
        Q(RIFLE),
        Q(PISTOL),
        "Throw",
        "Put"
    };     
    magazines[] =
    {
        MAG_6(RIFLE_MAG),
        MAG_2(PISTOL_MAG),
        MAG_1(FRAG),
        MAG_1(SMOKE),
        MAG_2(LIGHT)
    };
    respawnMagazines[] =
    {
        MAG_6(RIFLE_MAG),
        MAG_2(PISTOL_MAG),
        MAG_1(FRAG),
        MAG_1(SMOKE),
        MAG_2(LIGHT)
    };
    linkedItems[] = {
        Q(VEST),
        Q(HELMET),
        Q(ITEM_MAP),
        Q(ITEM_RADIO),
        Q(ITEM_COMPASS),
        Q(ITEM_WATCH)
    };
    respawnLinkedItems[] = {
        Q(VEST),
        Q(HELMET),
        Q(ITEM_MAP),
        Q(ITEM_RADIO),
        Q(ITEM_COMPASS),
        Q(ITEM_WATCH)
    };
    items[] = {
        MAG_2(MEDKIT)
    };
    respawnItems[] = {
        MAG_2(MEDKIT)
    };
    uniformList[] = {
        Q(UNIFORM_F),0.5,
        Q(UNIFORM_F_U),0.5,
        Q(UNIFORM_H),0.5,
        Q(UNIFORM_H_U),0.5,
        Q(UNIFORM_Q),0.5,
        Q(UNIFORM_Q_U),0.5
    };
    vestList[] = {};
    headgearList[] = {};
    facewearList[] = {};
    backpackList[] = {};
    // class EventHandlers: EventHandlers
    // {
    //     postInit="[(_this select 0), 1, nil, nil, nil, nil] call OCI_fnc_RandomizeGear";
    // };
};
class DOUBLES(PCLASSTYPE,Soldier_Base_04): DOUBLES(PCLASSTYPE,Soldier_Base)
{
    scope = 0;
    dlc = Q(PREFIX);
    author = AUTHOR;
    uniformClass = Q(UNIFORM_F_G_K);
    uniformList[] = {
        Q(UNIFORM_F_G_K),0.5,
        Q(UNIFORM_F_G_U_K),0.5,
        Q(UNIFORM_H_G_K),0.5,
        Q(UNIFORM_H_G_U_K),0.5,
        Q(UNIFORM_Q_G_K),0.5,
        Q(UNIFORM_Q_G_U_K),0.5
    };
};