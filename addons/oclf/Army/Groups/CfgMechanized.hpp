class Mechanized
{
    name = "$STR_A3_CfgGroups_West_BLU_F_Mechanized0";

    class DOUBLES(FACTION,BUS_MechInfSquad)
    {
        name = "$STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInfSquad0";

        side = SIDE_ID;
        faction = QUOTE(FACTION);

        icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";

        class Unit0
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Bearcat_Autocannon_Innie));
            rank = "LIEUTENANT";
            position[] = {0,0,0};
        };
        class Unit1
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_SL));
            rank = "SERGEANT";
            position[] = {5,-5,0};
        };
        class Unit2
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Soldier));
            rank = "PRIVATE";
            position[] = {-5,-5,0};
        };
        class Unit3
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_LAT));
            rank = "CORPORAL";
            position[] = {10,-10,0};
        };
        class Unit4
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_M));
            rank = "PRIVATE";
            position[] = {-10,-10,0};
        };
        class Unit5
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_TL));
            rank = "SERGEANT";
            position[] = {15,-15,0};
        };
        class Unit6
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_AR));
            rank = "CORPORAL";
            position[] = {-15,-15,0};
        };
        class Unit7
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_A));
            rank = "PRIVATE";
            position[] = {20,-20,0};
        };
        class Unit8
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_Medic));
            rank = "PRIVATE";
            position[] = {-20,-20,0};
        };
    };
    class DOUBLES(FACTION,BUS_MechInf_AT)
    {
        name = "$STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInf_AT0";

        side = SIDE_ID;
        faction = QUOTE(FACTION);

        icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";

        class Unit0
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Bearcat_Cannon_Innie));
            rank = "LIEUTENANT";
            position[] = {0,0,0};
        };
        class Unit1
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_SL));
            rank = "SERGEANT";
            position[] = {5,-5,0};
        };
        class Unit2
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_AR));
            rank = "CORPORAL";
            position[] = {-5,-5,0};
        };
        class Unit3
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_AT));
            rank = "PRIVATE";
            position[] = {10,-10,0};
        };
        class Unit4
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_AT));
            rank = "PRIVATE";
            position[] = {-10,-10,0};
        };
        class Unit5
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_AT));
            rank = "SERGEANT";
            position[] = {15,-15,0};
        };
        class Unit6
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_AAT));
            rank = "CORPORAL";
            position[] = {-15,-15,0};
        };
        class Unit7
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_AAT));
            rank = "PRIVATE";
            position[] = {20,-20,0};
        };
        class Unit8
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_AAT));
            rank = "PRIVATE";
            position[] = {-20,-20,0};
        };
    };
    class DOUBLES(FACTION,BUS_MechInf_AA)
    {
        name = "$STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInf_AA0";

        side = SIDE_ID;
        faction = QUOTE(FACTION);

        icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";

        class Unit0
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Bearcat_AA_Innie));
            rank = "LIEUTENANT";
            position[] = {0,0,0};
        };
        class Unit1
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_SL));
            rank = "SERGEANT";
            position[] = {5,-5,0};
        };
        class Unit2
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_AR));
            rank = "CORPORAL";
            position[] = {-5,-5,0};
        };
        class Unit3
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_AA));
            rank = "PRIVATE";
            position[] = {10,-10,0};
        };
        class Unit4
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_AA));
            rank = "PRIVATE";
            position[] = {-10,-10,0};
        };
        class Unit5
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_AA));
            rank = "SERGEANT";
            position[] = {15,-15,0};
        };
        class Unit6
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_AA));
            rank = "CORPORAL";
            position[] = {-15,-15,0};
        };
        class Unit7
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_AA));
            rank = "PRIVATE";
            position[] = {20,-20,0};
        };
        class Unit8
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_AA));
            rank = "PRIVATE";
            position[] = {-20,-20,0};
        };
    };
    class DOUBLES(FACTION,BUS_MechInf_Support)
    {
        name = "$STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInf_Support0";

        side = SIDE_ID;
        faction = QUOTE(FACTION);

        icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";

        class Unit0
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Bearcat_Unarmed_Innie));
            rank = "LIEUTENANT";
            position[] = {0,0,0};
        };
        class Unit1
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_SL));
            rank = "SERGEANT";
            position[] = {5,-5,0};
        };
        class Unit2
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_TL));
            rank = "SERGEANT";
            position[] = {-5,-5,0};
        };
        class Unit3
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_Repair));
            rank = "CORPORAL";
            position[] = {10,-10,0};
        };
        class Unit4
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_Engineer));
            rank = "PRIVATE";
            position[] = {-10,-10,0};
        };
        class Unit5
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_Medic));
            rank = "PRIVATE";
            position[] = {15,-15,0};
        };
        class Unit6
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_AR));
            rank = "CORPORAL";
            position[] = {-15,-15,0};
        };
        class Unit7
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_exp));
            rank = "PRIVATE";
            position[] = {20,-20,0};
        };
        class Unit8
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_A));
            rank = "PRIVATE";
            position[] = {-20,-20,0};
        };
    };
};