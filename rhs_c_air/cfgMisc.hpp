
class rhs_flightrecorder_assembled: ThingX
{
	EdPrev(rhs_flightrecorder_assembled)
	AUTHOR_MACRO
	scope = 2;
	scopeCurator = 2;
	displayName = "Plane flight recorder (assembled)";

	model = "\rhsafrf\addons\rhs_air\misc\rhs_flightrecorder.p3d";

	mapSize = 1.4;
	icon = "iconObject_1x1";

	editorCategory = "EdCat_Things";
	editorSubcategory = "EdSubcat_Intel";
	vehicleCategory = "Interactive_F";
	vehicleClass = "Intel";
	destrType = "DestructNo";

	cost = 100;
	class AnimationSources
	{
		class recorder_action
		{
			source = "user";
			initPhase = 0;
			animPeriod = 1.2;
		};
	};

	class UserActions
	{
		class takeItem
		{
			displayName = "Take flight recorder";
			position = "";
			radius = 2;
			showWindow = 1;
			condition = "alive this && (this animationSourcePhase 'recorder_action' isEqualTo 0)";
			statement = "this spawn {_this animateSource ['recorder_action',1];sleep 1.2;private _n = 'rhs_flightrecorder' createVehicle [0,0,0];_n setpos ((getpos _this) vectorAdd [0,0.2,0.1]);_n setdir getdir _this;_n setVelocity [0.5,0.5,0]}";
			onlyForPlayer =1;
		};
		class restoreItem: takeItem
		{
			displayName = "Put flight recorder";
			condition = "alive this && (this animationSourcePhase 'recorder_action' isEqualTo 1) && ('rhs_item_flightrecorder' in (items player))";
			statement = "this animateSource ['recorder_action',0];player removeItem 'rhs_item_flightrecorder'";
		};
	};
};
class Item_Base_F;
class rhs_flightrecorder: ThingX
{
	EdPrev(rhs_flightrecorder)
	scope = 2;
	scopeCurator = 2;
	displayName = "Plane flight recorder";
	AUTHOR_MACRO
	editorCategory = "EdCat_Things";
	editorSubcategory = "EdSubcat_Intel";
	vehicleCategory = "Interactive_F";
	vehicleClass = "Intel";
	model = \rhsafrf\addons\rhs_air\misc\rhs_flightrecorder_holder.p3d;

	forceSupply = 1;
	showWeaponCargo = 1;
	transportMaxMagazines = 1e+009;
	transportMaxWeapons = 1e+009;
	isGround = 1;

	class TransportItems {
		class rhs_item_flightrecorder {
			name = rhs_item_flightrecorder;
			count = 1;
		};
	};
};