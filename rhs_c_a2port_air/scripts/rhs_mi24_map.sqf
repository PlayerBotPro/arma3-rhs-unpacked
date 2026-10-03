/*
	Mi-24 moving map script. 

	Scripts upon initialization assigns proper map via setObjectTexture (without sending data over net) & then it constantly updates 2 MFD variables (X & Y coords). 

	Execution of script is connected to 

	a: reyhard
*/

private _vehicle = vehicle (call rhs_fnc_findPlayer);

// Set proper map picture from pool of premade textures
switch(toLower worldName)do
{
	case "zargabad";
	case "chernarus";
	case "abel";
	case "bootcamp_acr";
	case "cain";
	case "chernarus";
	case "desert_e";
	case "intro";
	case "malden";
	case "noe";
	case "provinggrounds_pmc";
	case "sara";
	case "sara_dbe1";
	case "shapur_baf";
	case "takistan";
	case "tanoa";
	case "utes";
	case "woodland_acr":
	{
		_vehicle setObjectTexture [6, format["\rhsafrf\addons\rhs_a2port_air\data\maps\%1_co.paa",worldName]];
	};
	case "stratis" ;
	case "altis" : 
	{
		_vehicle setObjectTexture [6, format["\rhsafrf\addons\rhs_c_air\scripts\data\%1_co.paa",worldName]];
	};
	// Backup solution - assign world picture - might not look best but it's still better than nothing
	case default 
	{
		_vehicle setObjectTexture [6, getText (configFile >> "CfgWorlds" >> worldName >> "pictureMap")];
	};
};

//disableSerialization;
// Main Loop
while{ not(isNull ( (uiNamespace getVariable "rhs_spo15_ctrl") displayCtrl 8655)) }do
{
	if (((call rhs_fnc_findPlayer) isEqualTo (driver _vehicle)) && {cameraView isEqualTo "INTERNAL"}) then
	{
		//hint format[ "updated map %1",time];

		private _pos = getpos _vehicle;
		_pos resize 2;
		_pos = _pos apply {(round _x)/worldSize};

		// Update plane position on MFD
		_vehicle setUserMFDvalue [1,_pos select 0];
		_vehicle setUserMFDvalue [0,_pos select 1];
	};
	sleep 0.1;
};

