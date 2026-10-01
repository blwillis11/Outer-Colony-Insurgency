class Armored
{
    name = "$STR_A3_CfgGroups_West_BLU_F_Armored0";

    class DOUBLES(FACTION,BUS_TankPlatoon)
    {
        name = "$STR_A3_CfgGroups_West_BLU_F_Armored_BUS_TankPlatoon0";

        side = SIDE_ID;
        faction = QUOTE(FACTION);

        icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";

        class Unit0
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,M700_Innie));
            rank = "LIEUTENANT";
            position[] = {0,0,0};
        };
        class Unit1
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,M700_Innie));
            rank = "SERGEANT";
            position[] = {10,-10,0};
        };
        class Unit2
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,M700_Innie));
            rank = "SERGEANT";
            position[] = {-10,-10,0};
        };
        class Unit3
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,M700_Innie));
            rank = "CORPORAL";
            position[] = {20,-20,0};
        };
    };
    class DOUBLES(FACTION,BUS_TankPlatoon_AA)
    {
        name = "$STR_A3_CfgGroups_West_BLU_F_Armored_BUS_TankPlatoon_AA0";

        side = SIDE_ID;
        faction = QUOTE(FACTION);

        icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";

        class Unit0
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,M700_Innie));
            rank = "LIEUTENANT";
            position[] = {0,0,0};
        };
        class Unit1
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Bearcat_AA_Innie));
            rank = "SERGEANT";
            position[] = {10,-10,0};
        };
        class Unit2
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,M700_Innie));
            rank = "SERGEANT";
            position[] = {-10,-10,0};
        };
        class Unit3
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Bearcat_AA_Innie));
            rank = "CORPORAL";
            position[] = {20,-20,0};
        };
    };
    class DOUBLES(FACTION,BUS_TankSection)
    {
        name = "$STR_A3_CfgGroups_West_BLU_F_Armored_BUS_TankSection0";

        side = SIDE_ID;
        faction = QUOTE(FACTION);

        icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";

        class Unit0
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,M700_Innie));
            rank = "LIEUTENANT";
            position[] = {0,0,0};
        };
        class Unit1
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,M700_Innie));
            rank = "SERGEANT";
            position[] = {10,-10,0};
        };
    };
    class DOUBLES(FACTION,BUS_SPGPlatoon_Scorcher)
    {
        name = "$STR_A3_CfgGroups_West_BLU_F_Armored_BUS_SPGPlatoon_Scorcher0";

        side = SIDE_ID;
        faction = QUOTE(FACTION);

        icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";

        class Unit0
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,MAP118_SPH_Alpaca));
            rank = "LIEUTENANT";
            position[] = {0,0,0};
        };
        class Unit1
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,MAP118_SPH_Alpaca));
            rank = "SERGEANT";
            position[] = {10,-10,0};
        };
        class Unit2
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,MAP118_SPH_Alpaca));
            rank = "SERGEANT";
            position[] = {-10,-10,0};
        };
        class Unit3
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,MAP118_SPH_Alpaca));
            rank = "CORPORAL";
            position[] = {20,-20,0};
        };
    };
    class DOUBLES(FACTION,BUS_SPGSection_Scorcher)
    {
        name = "$STR_A3_CfgGroups_West_BLU_F_Armored_BUS_SPGSection_Scorcher0";

        side = SIDE_ID;
        faction = QUOTE(FACTION);

        icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";

        class Unit0
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,MAP118_SPH_Alpaca));
            rank = "LIEUTENANT";
            position[] = {0,0,0};
        };
        class Unit1
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,MAP118_SPH_Alpaca));
            rank = "SERGEANT";
            position[] = {10,-10,0};
        };
    };
    class DOUBLES(FACTION,BUS_SPGSection_MLRS)
    {
        name = "$STR_A3_CfgGroups_West_BLU_F_Armored_BUS_SPGSection_MLRS0";

        side = SIDE_ID;
        faction = QUOTE(FACTION);

        icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";

        class Unit0
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,M705_Porcupine));
            rank = "LIEUTENANT";
            position[] = {0,0,0};
        };
        class Unit1
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,M705_Porcupine));
            rank = "SERGEANT";
            position[] = {10,-10,0};
        };
    };
};