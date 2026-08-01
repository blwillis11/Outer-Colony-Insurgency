class CfgGroups 
{
    class INDEP
    {
        class OCI_Peacekeepers
        {
            name = "[OCI] UNSC Peacekeepers";
            class PK_Infantry
            {
                name = "Peacekeeper Infantry";

                class OCI_Peacekeeper_Sentry
                {
                    name = "[OCI] Peacekeeper Sentry";
                    side = 2;
                    faction = "OCI_Peacekeepers_Fac";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0
                    {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "OCI_Peacekeeper_Rifleman";
                    };
                    class Unit1
                    {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "OCI_Peacekeeper_Rifleman";
                    };
                };

                class OCI_Peacekeeper_Fireteam
                {
                    name = "[OCI] Peacekeeper Fireteam";
                    side = 2;
                    faction = "OCI_Peacekeepers_Fac";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0
                    {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "OCI_Peacekeeper_Rifleman";
                    };
                    class Unit1
                    {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "OCI_Peacekeeper_Rifleman";
                    };
                    class Unit2
                    {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "OCI_Peacekeeper_Medic";
                    };
                    class Unit3
                    {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "OCI_Peacekeeper_RTO_Operator";
                    };
                    class Unit4
                    {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "OCI_Peacekeeper_Team_Lead";
                    };
                };
            };
        };
    };
};
