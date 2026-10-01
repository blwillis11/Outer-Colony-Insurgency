class CfgGlasses
{
    class None {
        identityTypes[] += {
            "OCI_G_BH_S", 300

        };
    };

    class G_Lowprofile;
    class OCI_Lowprofile : G_Lowprofile {
        displayName = "[OCI] Low Profile Goggles";
        SCOPE_NS
        identityTypes[] = {"OCI_G_BH_S", 100};
    };
    
    class G_Tactical_Clear;
    class OCI_Tactical_Clear : G_Tactical_Clear {
        displayName = "[OCI] Tactical Glasses";
        SCOPE_NS
        identityTypes[] = {"OCI_G_BH_S", 100};
    };
    
    class G_HeadSetMilitary;
    class OCI_HeadSetMilitary : G_HeadSetMilitary {
        displayName = "[OCI] Headset Military";
        SCOPE_NS
        identityTypes[] = {"OCI_G_BH_S", 100};
    };
    class OPTRE_Glasses_Cigarette;
    class OCI_Glasses_Cigarette : OPTRE_Glasses_Cigarette {
        displayName = "[OCI] Cigarette";
        SCOPE_NS
        identityTypes[] = {"OCI_G_BH_S", 100};
    };
    

};