/*
	Author: Karel Moricky, modifications made by reyhard

	Description:


	Parameter(s):
		0: BOOL - decides if interface with settings should be opened
		1: NUMBER - duration in seconds for which an objects remains on the screen before its screen is captured (default: 1 s)
		2: NUMBER - fov modifier. Use values above 1 to capture larger weapons (default: 1.0)
		3: NUMBER - aperture modifier.  The closer the number is to 0, the more light will be let into the lens, meaning picture will be more bright (default: 45)
		4: ARRAY of NUMBERs - offset  (default: [0,0,0])
		5: ARRAY of STRINGs - list of CfgMods classes. Only objects belonging to these mods will be used (default: all mods)
		6: ARRAY of STRINGs - list of CfgPatches classes. Only objects belonging to these addons will be used (default: all addons)
		7: ARRAY of STRINGs - list of CfgVehicles classes. Only these objects will be used (default: all classes)

	Returns:
	Nothing

	Example:
	[false,1.5,1,45,[0,0,0],[],[],["rhs_weap_vhsd2","rhs_weap_vhsd2_bg","rhs_weap_vhsd2_ct15x","rhs_weap_vhsd2_bg_ct15x","rhs_weap_vhsk2"]] execVM "\rhsafrf\addons\rhs_main\scripts\fn_exportWeaponIcons.sqf"
*/

params[
	["_menu",		false,		[false]	],
	["_delay",		2.5,		[0]		],
	["_fov",		1,			[0]		],
	["_aperture",	45,			[0]		],
	["_offset",		[0,0,0],	[[]]	],
	["_mods",		[],			[[]]	],
	["_patches",	[],			[[]]	],
	["_classes",	[],			[[]]	]
];

//--- Convert CfgMods classes to lower case for comparison
_mods = +_mods;
{
	_mods set [_foreachindex,tolower _x];
} foreach _mods;
_allMods = count _mods == 0;

//--- Convert CfgPatches classes to lower case for comparison
_patches = +_patches;
{
	_patches set [_foreachindex,tolower _x];
} foreach _patches;
_allPatches = count _patches == 0;

//--- Convert vehicle classes classes to lower case for comparison
_classes = +_classes;
{
	_classes set [_foreachindex,tolower _x];
} foreach _classes;
_allClasses = count _classes == 0;

//--- Get the list of affected objects
_cfgAll = configfile >> "cfgVehicles" >> "default";
_restrictedModels = [""];
_blacklist = [];

//--- Decide DLC folders
_dlcTable = [];
_fnc_getDlc = {
	_dlc = "";
	_addonList = configsourceaddonlist _this;
	if (count _addonList > 0) then {
		_dlcList = configsourcemodlist (configfile >> "cfgpatches" >> (_addonList select 0)); //--- Check mod of first object's addon to get the first occurance
		_dlc = "";
		if (count _dlcList > 0) then {
			_dlc = _dlcList select 0;
			{
				if (_dlc == (_x select 0)) exitwith {_dlc = _x select 1;};
			} foreach _dlcTable;
		};
	};
	_dlc
};


//--- Get the list of affected objects
_cfgVehicles = "
	getnumber (_x >> 'scope') > 0
	&&
	{
		_class = configname _x;
		(_allMods || {(tolower _x) in _mods} count (configsourcemodlist _x) > 0)
		&&
		{
			(_allPatches || {(tolower _x) in _patches} count (configsourceaddonlist _x) > 0)
			&&
			{
				(_allClasses || {(tolower _class) in _classes})
				&&
				{
					!(gettext (_x >> 'model') in _restrictedModels)
					&&
					{
						inheritsfrom _x != _cfgAll
						&&
						{
							{_class iskindof [_x,configFile >> 'cfgVehicles']} count _blacklist == 0
						}
					}
				}
			}
		}
	}
" configclasses (configfile >> "cfgVehicles");
_cfgVehiclesCount = count _cfgVehicles;

if (_cfgVehiclesCount == 0) exitwith {["No classes found!"] call bis_fnc_error;};
//if(true)exitWith{hint format["%1",_cfgVehicles]};

private _pos = [1024,1024,250];
private _background = "Sphere_3DEN" createVehicle _pos;
private _cam = "camera" camcreate _pos;

_background setPosASL _pos;
private _pos = [1024,1024,350];

_cam cameraeffect ["internal","back"];
//_cam campreparetarget (_weaponHolder modeltoworld [0,0,0]);
_cam setposASL ((_pos vectoradd [-0.17,-1219.5,0.5]) vectorDiff _offset);
_cam setdir 180;
//_cam campreparetarget (_weaponHolder modeltoworld ([0.17,0,-0.5]) vectoradd _offset);
_cam campreparefocus [-1,-1];
_cam campreparefov (0.0315*_fov);
_cam camcommitprepared 0;
showcinemaborder false;

setaperture _aperture;

//--- Prepare the UI
_display = [] call bis_fnc_displayMission;
_ctrlInfoW = 0.5;
_ctrlInfoH = 0.2;
_ctrlInfo = _display ctrlcreate ["RscStructuredText",-1];
_ctrlInfo ctrlsetposition [
	safezoneX + 0.1,//safezoneX + safezoneW - _ctrlInfoW - 0.1,
	safezoneY + safezoneH - _ctrlInfoH,
	safezoneW - 0.2,//_ctrlInfoW,
	_ctrlInfoH
];
//_ctrlInfo ctrlsetbackgroundcolor [0,0,0,1];
//_ctrlInfo ctrlsetfontheight (_ctrlInfoH * 0.7);
_ctrlInfo ctrlcommit 0;

_ctrlProgressH = 0.01;
_ctrlProgress = _display ctrlcreate ["RscProgress",-1];
_ctrlProgress ctrlsetposition [
	safezoneX,
	safezoneY + safezoneH - _ctrlProgressH,
	safezoneW,
	_ctrlProgressH
];
_ctrlProgress ctrlcommit 0;

_screenTop = safezoneY;
_screenBottom = safezoneY + safezoneH;
_screenLeft = safezoneX;
_screenRight = safezoneX + safezoneW;
_vehicle = objNull;

_agent = objNull;//--- Main loop -------------------------------------------
{
	//--- Restart date so every screenshot is taken in same light conditions
	setdate [2035,5,28,18,54];

	_class = configname _x;

	//--- Get filename
	_dlc = _x call _fnc_getDlc;
	if (_dlc != "") then {_dlc = _dlc + "\";};
	_fileName = format ["VehicleIcons\%2%1_ca.png",_class,_dlc];

	//--- Update UI
	_ctrlInfo ctrlsetstructuredtext parsetext format ["Saving screenshot to<br /><t font='EtelkaMonospaceProBold' size='0.875'>[Arma 3 Profile]\Screenshots\%1</t><br />Note: The text overlay will not be saved.",_fileName];
	_ctrlProgress progresssetposition (_foreachindex / _cfgVehiclesCount);

	//--- Set position and camera angles (exsception for helipads)
	_camDirH = 0;
	_camDirV = 0;
	_posLocal = +_pos;
	if (_class iskindof "HeliH") then {
		_posLocal set [2,0];
		_camDirH = 90;
		_camDirV = 75;
	};

	//--- Create object
	_object = createvehicle [_class,_posLocal,[],0,"none"];
	if (_class iskindof "allvehicles") then {_object setdir 90;} else {_object setdir 270;};
	if (primaryweapon _object != "") then {_object switchmove "amovpercmstpslowwrfldnon"} else {_object switchmove "amovpercmstpsnonwnondnon";};
	_object setposatl _posLocal;
	_object switchaction "default";
	_timeCapture = time + _delay;
	if (_object iskindof "FlagCarrierCore") then {
		_object spawn {_this enablesimulation false;}; // Delay freezing to initialize flag
	} else {
		_object enablesimulation false;
	};

	//--- Caulculate bounding box corners
	_bbox = boundingboxreal _object;
	_bbox1 = _bbox select 0;
	_bbox2 = _bbox select 1;
	_worldPositions = [
		_object modeltoworld [_bbox1 select 0,_bbox1 select 1,_bbox1 select 2],
		_object modeltoworld [_bbox1 select 0,_bbox1 select 1,_bbox2 select 2],
		_object modeltoworld [_bbox1 select 0,_bbox2 select 1,_bbox1 select 2],
		_object modeltoworld [_bbox1 select 0,_bbox2 select 1,_bbox2 select 2],
		_object modeltoworld [_bbox2 select 0,_bbox1 select 1,_bbox1 select 2],
		_object modeltoworld [_bbox2 select 0,_bbox1 select 1,_bbox2 select 2],
		_object modeltoworld [_bbox2 select 0,_bbox2 select 1,_bbox1 select 2],
		_object modeltoworld [_bbox2 select 0,_bbox2 select 1,_bbox2 select 2]
	];

	//--- Set camera
	_camAngle = _camDirV;
	_camDis = (24.5 * ((sizeof _class) max 0.1)) min 224 max 0.2; //--- 125 m is a sphere diameter
	_camPos = [_posLocal,_camDis,_camDirH] call bis_fnc_relpos;
	_camPos set [2,/*_posZ*/((_object modeltoworld [0,0,0]) select 2) + (tan _camAngle * _camDis)];
	_cam campreparepos _camPos;
	_cam campreparetarget (_object modeltoworld [0,0,0]);
	_cam campreparefocus [-1,-1];
	_cam campreparefov 0.7;
	_cam camcommitprepared 0;
	sleep 0.01; //--- Delay for camera to load

	if (_class iskindof "man" && !(_class iskindof "animal")) then {
		//--- Zoom in to character's torso to make inventory more apparent
		_cam campreparetarget (_object modeltoworld [0,0,1.25]);
		_cam campreparefov 0.075;
		_cam camcommitprepared 0;
	} else {
		//--- Calculate target
		_extremes = [0.5,0.5,0.5,0.5]; //--- Left, Right, Top, Bottom
		{
			_screenPos = worldtoscreen _x;
			if (count _screenPos > 0) then {
				_screenPosX = _screenPos select 0;
				_screenPosY = _screenPos select 1;
				if (_screenPosX < (_extremes select 0)) then {_extremes set [0,_screenPosX];};
				if (_screenPosX > (_extremes select 1)) then {_extremes set [1,_screenPosX];};
				if (_screenPosY > (_extremes select 3)) then {_extremes set [3,_screenPosY];};
				if (_screenPosY < (_extremes select 2)) then {_extremes set [2,_screenPosY];};
			};
		} foreach _worldPositions;
		_cam campreparetarget screentoworld [
			(_extremes select 0) + ((_extremes select 1) - (_extremes select 0)) / 2,
			(_extremes select 2) + ((_extremes select 3) - (_extremes select 2)) / 2
		];

		_cam campreparetarget (_object modeltoworld [0,0,-0.0]);
		//--- Calculate zoom - get the closest zoom where all bounding box corners are still visible
		_fovStart = if (_camDis < 0.35) then {0.01} else {0.01}; //--- When camera is too close, it cuts into the model itself
		for "_f" from _fovStart to 0.7 step 0.01 do {
			_cam campreparefov _f;
			_cam camcommitprepared 0;
			sleep 0.01; //--- Delay for camera to load
			_onScreen = true;
			{
				_screenPos = worldtoscreen _x;
				if (count _screenPos == 0) then {_screenPos = [10,10];};
				if (abs (linearconversion [_screenLeft,_screenRight,_screenPos select 0,-1,1]) > 1) exitwith {_onScreen = false;};
				if (abs (linearconversion [_screenTop,_screenBottom,_screenPos select 1,-1,1]) > 1) exitwith {_onScreen = false;};
			} foreach _worldPositions;
			if (_onScreen) exitwith {};
		};
	};

	//--- Wait for model to load and take a screenshot
	waituntil {time > _timeCapture};
	screenshot _fileName;
	sleep 0.01;

	//--- Delete the object
	_object setpos [10,10,10];
	deletevehicle _object;

} foreach _cfgVehicles;


_cam cameraeffect ["terminate","back"];
camdestroy _cam;
deleteVehicle _background;
ctrldelete _ctrlInfo;
ctrldelete _ctrlProgress;
setaperture -1;

if (is3DEN) then {
	get3dencamera cameraeffect ["internal","back"];
	["showinterface",true] call bis_fnc_3DENInterface;
};
