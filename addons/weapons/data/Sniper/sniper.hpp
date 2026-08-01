class TCP_srifle_SRS99;

class OCI_SRS99:TCP_srifle_SRS99
{
    displayName = "[OCI] SRS99";
    baseWeapon = "OCI_SRS99";
    author= AUTHOR;
    initSpeed = 1400;
    minRange=1;
    minRangeProbab=0.30000001;
    midRange=1200;
    midRangeProbab=0.57999998;
    maxRange=1400;
    maxRangeProbab=0.039999999;
    class LinkedItems
    {
        class LinkedItemsOptic
        {
            slot="CowsSlot";
            item="TCP_optic_Oracle_N";
        };
    };
    magazineWell[]=
    {
        "OCI_4Rnd_127x99_MagWell"
    };
    magazines[]=
    {
        "OCI_4Rnd_127x99_Mag_APFSDS"
    };
};
