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
	[false,1.5,1,25,[0,0,0],[],[],["Vorona_HEAT"]] execVM "rhsafrf\addons\rhs_main\scripts\fn_exportMagazineIcons.sqf"
*/

params[
	["_menu",		false,		[false]	],
	["_delay",		2.5,		[0]		],
	["_fov",		1,			[0]		],
	["_aperture",	25,			[0]		],
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
_cfgAll = configfile >> "cfgMagazines" >> "default";
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
_cfgMagazines = "
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
							{_class iskindof [_x,configFile >> 'cfgMagazines']} count _blacklist == 0
						}
					}
				}
			}
		}
	}
" configclasses (configfile >> "cfgVehicles");
_cfgMagazinesCount = count _cfgMagazines;

if (_cfgMagazinesCount == 0) exitwith {["No classes found!"] call bis_fnc_error;};
//if(true)exitWith{hint format["%1",_cfgMagazines]};

private _pos = [1024,1024,250];
private _weaponHolder = "WeaponHolderSimulated_Scripted" createVehicle _pos;
private _background = "Sphere_3DEN" createVehicle _pos;
private _cam = "camera" camcreate _pos;

_background setPosASL _pos;
private _pos = [1024,1024,350];
//_weaponHolder attachTo [_background,[0,0,5]];
_weaponHolder setposasl _pos;
_weaponHolder setdir 90;
_y = 90; _p = 270; _r = 0;
_weaponHolder setVectorDirAndUp [
	[ sin _y * cos _p,cos _y * cos _p,sin _p],
	[ [ sin _r,-sin _p,cos _r * cos _p],-_y] call BIS_fnc_rotateVector2D
];
//_weaponHolder setVectorDirAndUp [[-0,-0,-1],[0,-1,-0]];
_weaponHolder enableSimulation false;
_weaponHolder setFeatureType 2;


_cam cameraeffect ["internal","back"];
//_cam campreparetarget (_weaponHolder modeltoworld [0,0,0]);
_cam setposASL ((_pos vectoradd [35.17,0.0,1.35]) vectorDiff _offset);
_cam setdir 180;
_cam campreparetarget (_weaponHolder modeltoworld ([0.1,-0.4,0.3]) vectoradd _offset);
_cam campreparefocus [-1,-1];
_cam campreparefov (0.0035*_fov);
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

{
	//--- Restart date so every screenshot is taken in same light conditions
	setdate [2035,5,28,18,54];

	_class = configname _x;

	//--- Get filename
	_dlc = _x call _fnc_getDlc;
	if (_dlc != "") then {_dlc = _dlc + "\";};

	//--- Add weapon/item to container
	if (_dlc != "") then {_dlc = _dlc + "Backpacks\";};
	//_cam setposASL ((_pos vectoradd [-0.17,-0.5,0.5]) vectorDiff _offset);
	//_cam campreparetarget (_weaponHolder modeltoworld ([1.17,0,-0.75]) vectoradd _offset);
	_weaponHolder addBackpackCargo [_class,1];
	//_weaponHolder setVectorDirAndUp [[0,0,1],[0,1,0]];
	_cam campreparefov (0.019*_fov);

	//--- Prepare camera before shot
	_cam camcommitprepared 0;
	sleep (0.05 + _delay);

	//--- Final filename
	_fileName = format ["WeaponPictures\%2%1_ca.png",_class,_dlc];

	//--- Update UI
	_ctrlInfo ctrlsetstructuredtext parsetext format ["Saving screenshot to<br /><t font='EtelkaMonospaceProBold' size='0.875'>[Arma 3 Profile]\Screenshots\%1</t><br />Note: The text overlay will not be saved. <br />Estimated time left: %2 seconds",_fileName,((_cfgMagazinesCount-_foreachindex))*_delay];
	_ctrlProgress progresssetposition (_foreachindex / _cfgMagazinesCount);

	//--- Take screenshot
	screenshot _fileName;
	sleep 0.05;
	clearBackpackCargo _weaponHolder;
}foreach _cfgMagazines;

_cam cameraeffect ["terminate","back"];
camdestroy _cam;
deleteVehicle _weaponHolder;
deleteVehicle _background;
ctrldelete _ctrlInfo;
ctrldelete _ctrlProgress;
setaperture -1;

if (is3DEN) then {
	get3dencamera cameraeffect ["internal","back"];
	["showinterface",true] call bis_fnc_3DENInterface;
};
