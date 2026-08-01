class TCP_srifle_M392;

class OCI_M392_DMR:TCP_srifle_M392
{
    displayName = "[OCI] M392 DMR";
    baseWeapon = "OCI_M392_DMR";
    author= AUTHOR;
    scope = 2;
    scopeArsenal = 2;
    magazineWell[] = {"OCI_15Rnd_762x51_DMR_MagWell"};
    magazines[]={"OCI_15Rnd_762x51_Mag"};
    class LinkedItems
    {
        class LinkedItemsOptic
        {
            slot="CowsSlot";
            item="TCP_optic_EVOSD";
        };
    };
};
