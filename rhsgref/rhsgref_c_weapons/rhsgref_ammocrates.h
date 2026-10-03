class Box_Syndicate_Wps_F;

//- VIRTUAL

	class rhsgref_weapons_crate: Box_Syndicate_Wps_F
	{

		AUTHOR_MACRO
		displayName = "$STR_RHSGREF_CRATE";
		//displayName = "RHSGREF Weapons Crate (Virtual)";
		scope = 2;
		type = 0;		

		transportMaxWeapons = 70;
		transportMaxMagazines = 40;

		class EventHandlers
		{
			init = "[_this select 0,0] call rhs_fnc_virtualAmmoBoxGREF;";
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
