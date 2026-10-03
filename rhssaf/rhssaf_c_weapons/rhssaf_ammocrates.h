class I_supplyCrate_F;


//- VIRTUAL

class rhssaf_virtual_crate: I_supplyCrate_F
{

	DLC_AUTHOR;
	SCOPE_PUBLIC;
	displayName = $STR_RHSSAF_CRATE;
	type = 0;
	transportMaxWeapons = 70;
	transportMaxMagazines = 40;

	class EventHandlers
	{
		init = "[_this select 0,0] call rhs_fnc_virtualAmmoBoxSAF;";
	};
	SLX_XEH_DISABLED = 1;

	class TransportWeapons
	{
	};

	class TransportMagazines
	{
	};

	class TransportItems
	{
	};
};
