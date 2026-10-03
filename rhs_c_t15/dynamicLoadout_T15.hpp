class TransportPylonsComponent
{
	UIPicture = "\rhsafrf\addons\rhs_a2port_car\data\loadouts\RHS_BM21_EDEN_CA.paa";
	class pylons
	{

		class pylon1
		{
			hardpoints[]		= {"RHS_HP_T15"};
			priority			= 1;
			maxweight			= 200;
			UIposition[]		= {0.12,0.1};
			bay					= -1;
			attachment			= "rhs_mag_9m133m2_pylon";
			turret[] 			= {0};
			hitpoint 			= HitTurret;
		};
		class pylon2: pylon1 	{priority = 2;	UIposition[] = {__EVAL(0.12+0.19*0),__EVAL(0.1+0.1/2.5)};};
		class pylon3: pylon1 	{priority = 3;	UIposition[] = {__EVAL(0.12+0.19*0),__EVAL(0.1+0.2/2.5)};};
		class pylon4: pylon1 	{priority = 4;	UIposition[] = {__EVAL(0.12+0.19*0),__EVAL(0.1+0.3/2.5)};};
		
		/*class spare_pylon1 			
		{
			hardpoints[]	= {"RHS_HP_T15_SPARE"};
			priority		= 5;	
			maxweight		= 200;
			UIposition[]	= {__EVAL(0.52+0.19*0),__EVAL(0.1+0.1/2.5)};
			attachment		= "rhs_mag_9m133m2_spare_pylon";
			bay				= 1;
			turret[] 			= {0};
		};
		class spare_pylon2: spare_pylon1 	{	UIposition[] = {__EVAL(0.52+0.19*0),__EVAL(0.1+0.1/2.5)};};
		class spare_pylon3: spare_pylon1 	{	UIposition[] = {__EVAL(0.52+0.19*0),__EVAL(0.1+0.2/2.5)};};
		class spare_pylon4: spare_pylon1 	{	UIposition[] = {__EVAL(0.52+0.19*0),__EVAL(0.1+0.3/2.5)};};*/
	};
	class Bays
	{
		class MainBay
		{
			bayOpenTime					= 5.5;
			openBayWhenWeaponSelected	= 0.5;
			autoCloseWhenEmptyDelay		= 1;
		};
	};
	class Presets
	{
	};
};