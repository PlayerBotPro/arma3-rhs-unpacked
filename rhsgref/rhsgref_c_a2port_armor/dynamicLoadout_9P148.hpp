class TransportPylonsComponent
{
	UIPicture = "\rhsafrf\addons\rhs_a2port_car\data\loadouts\RHS_BM21_EDEN_CA.paa";
	class pylons
	{

		class pylon1
		{
			hardpoints[]		= {"RHS_HP_9P148"};
			priority			= 1;
			maxweight			= 200;
			UIposition[]		= {0.12,0.1};
			bay					= 1;
			attachment			= "";
			turret[] 			= {0};
			hitpoint 			= HitTurret;
		};
	};
	class Bays
	{
		class MainBay
		{
			bayOpenTime					= 5.5;
			openBayWhenWeaponSelected	= 1;
			autoCloseWhenEmptyDelay		= 1e6;
		};
	};
	class Presets
	{
	};
};