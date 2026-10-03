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
_cfgAll = configfile >> "cfgWeapons" >> "default";
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
_cfgWeapons = "
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
							{_class iskindof [_x,configFile >> 'cfgWeapons']} count _blacklist == 0
						}
					}
				}
			}
		}
	}
" configclasses (configfile >> "cfgWeapons");
_cfgWeaponsCount = count _cfgWeapons;

if (_cfgWeaponsCount == 0) exitwith {["No classes found!"] call bis_fnc_error;};
//if(true)exitWith{hint format["%1",_cfgWeapons]};

private _pos = [1024,1024,250];
private _weaponHolder = "GroundWeaponHolder_Scripted" createVehicle _pos;
private _background = "Sphere_3DEN" createVehicle _pos;
private _cam = "camera" camcreate _pos;

_background setPosASL _pos;
private _pos = [1024,1024,350];
_weaponHolder setPosASL _pos;
_weaponHolder setVectorDirAndUp [[0,0,1],[0,1,0]];


_cam cameraeffect ["internal","back"];
//_cam campreparetarget (_weaponHolder modeltoworld [0,0,0]);
_cam setposASL ((_pos vectoradd [-0.17,-19.5,0.5]) vectorDiff _offset);
_cam setdir 180;
_cam campreparetarget (_weaponHolder modeltoworld ([0.17,0,-0.5]) vectoradd _offset);
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

_fn_addAgentWeapon =
{
	params["_pos"];
	private _weaponHolder =  createAgent ["rhs_invisible_man", _pos, [], 0, "FORM"];
	removeAllWeapons _weaponHolder;
	removeHeadgear _weaponHolder;
	_weaponHolder setposasl _pos;
	_weaponHolder setdir 180;
	_weaponHolder setFace "RHS_EmptyHead";
	_weaponHolder addUniform "rhs_uniform_invisible";
	_weaponHolder addWeapon "rhs_weap_rifle_empty";
	_weaponHolder switchMove "amovpercmstpsraswrfldnon";
	_weaponHolder enableSimulation false;
	_weaponHolder setFeatureType 2;

	_weaponHolder
};
_agent = objNull;
_accessoryHolder = objNull;
{
	//--- Restart date so every screenshot is taken in same light conditions
	setdate [2035,5,28,18,54];

	_class = configname _x;

	//--- Get filename
	_dlc = _x call _fnc_getDlc;
	if (_dlc != "") then {_dlc = _dlc + "\";};

	//--- Add weapon/item to container
	clearItemCargo _weaponHolder;
	clearWeaponCargo _weaponHolder;
	removeAllPrimaryWeaponItems _accessoryHolder;
	private _type = getNumber (_x >> "type");
	switch(_type)do
	{
		// Weapons
		case 1;
		case 2;
		case 3;
		case 4:
		{
			if (_dlc != "") then {_dlc = _dlc + "Weapons\";};
			_cam setposASL ((_pos vectoradd [-0.17,-19.5,0.5]) vectorDiff _offset);
			_cam campreparetarget (_weaponHolder modeltoworld ([0.17,0,-0.5]) vectoradd _offset);

			private _magazine = getArray (configFile >> "cfgWeapons" >> _class >> "magazines") # 0;
			_weaponHolder addWeaponWithAttachmentsCargo  [[_class, "", "", "", [_magazine, 30], [], ""], 1];
			_cam campreparefov (0.0315*_fov);
		};
		// Binocular or NVG
		case 4096:
		{
			if(getNumber (_x >> "useAsBinocular") > 0)then{
				if (_dlc != "") then {_dlc = _dlc + "Accessories\";};
				_weaponHolder addWeaponCargo [_class, 1];
				_weaponHolder setVectorDirAndUp [[0,-1.0,0.0],[sin(-0),cos(90),sin(90)]];
				_cam campreparetarget (_weaponHolder modeltoworld ([0.05,0,-0.6]) vectoradd _offset);
				_cam campreparefov (0.0115*_fov);

			}else{
				if (_dlc != "") then {_dlc = _dlc + "Headgear\";};
				_weaponHolder addItemCargo [_class, 1];
				_weaponHolder setVectorDirAndUp [[0,-0.28,0.75],[sin(-30),cos(-30),0]];
				_cam campreparefov (0.0195*_fov);
				_cam setposASL ((_pos vectoradd [-0.17-2.6,-19.5,-2.75]) vectorDiff _offset);
				_cam campreparetarget (_weaponHolder modeltoworld ([0.17+2.0,1.25,-3.05]) vectoradd _offset);
			};
		};
		// Items
		case 131072:
		{
			_type = getNumber (_x >> "ItemInfo" >> "type");
			switch(_type)do
			{
				// Muzzle
				case 101;
				// Optics
				case 201;
				// Flashlight
				case 301:
				{
					if (_dlc != "") then {_dlc = _dlc + "Accessories\";};
					if(_accessoryHolder isEqualTo objNull)then
					{
						_accessoryHolder = [_pos] call _fn_addAgentWeapon;
					};
					_accessoryHolder addPrimaryWeaponItem _class;
					_cam setposASL ((_pos vectoradd [38.17,0.0,1.35]) vectorDiff _offset);
					_cam setdir 180;
					_cam campreparetarget (_accessoryHolder modeltoworld ([2.0,0.7,1.3]) vectoradd _offset);
					_cam campreparefov (0.0035*_fov);
				};
				// Bipod
				case 302:
				{
					if (_dlc != "") then {_dlc = _dlc + "Accessories\";};
					if(_accessoryHolder isEqualTo objNull)then
					{
						_accessoryHolder = [_pos] call _fn_addAgentWeapon;
					};
					_accessoryHolder addPrimaryWeaponItem _class;
					_cam setposASL ((_pos vectoradd [38.17,0.0,1.35]) vectorDiff _offset);
					_cam setdir 180;
					_cam campreparetarget (_accessoryHolder modeltoworld ([2.0,0.7,1.3]) vectoradd _offset);
					_cam campreparefov (0.0035*_fov);
				};
				// Heagear
				case 605:
				{
					if (_dlc != "") then {_dlc = _dlc + "Headgear\";};
					_weaponHolder addItemCargo [_class, 1];
					_weaponHolder setVectorDirAndUp [[0,-0.28,0.75],[sin(-30),cos(-30),0]];
					_cam campreparefov (0.0195*_fov);
					_cam setposASL ((_pos vectoradd [-0.17-2.6,-19.5,-2.75]) vectorDiff _offset);
					_cam campreparetarget (_weaponHolder modeltoworld ([0.17+2.0,1.15,-3.05]) vectoradd _offset);
				};
				// Vests
				case 701:
				{
					if (_dlc != "") then {_dlc = _dlc + "Vest\";};
					_weaponHolder addItemCargo [_class, 1];
					_weaponHolder setVectorDirAndUp [[0,-0.28,0.75],[sin(-24),cos(-24),0]];
					_cam campreparefov (0.0335*_fov);
					_cam setposASL ((_pos vectoradd [-0.17-2.6,-19.5,-2.75]) vectorDiff _offset);
					_cam campreparetarget (_weaponHolder modeltoworld ([0.17+1.7,0.83,-3.15]) vectoradd _offset);
				};
				// Uniforms
				case 801:
				{
					if (_dlc != "") then {_dlc = _dlc + "Uniform\";};
					if(_agent isEqualTo objNull)then
					{
						_uniformClass = getText (_x >> "ItemInfo" >> "uniformClass");
						_agent = createAgent ["VirtualMan_F",_pos,[],0,"CAN_COLLIDE"];
						_agent setFace "RHS_EmptyHead";
						removeGoggles _agent;
						_agent attachTo [_weaponHolder,[0,0,0]];
						_y = 180; _p = 0; _r = 0;
						_weaponHolder setVectorDirAndUp [
							[ sin _y * cos _p,cos _y * cos _p,sin _p],
							[ [ sin _r,-sin _p,cos _r * cos _p],-_y] call BIS_fnc_rotateVector2D
						];
						sleep 0.1;
					};
					_agent forceAddUniform _class;
					_agent switchMove "";

					_cam campreparefov (0.0195*_fov);
					_cam setposASL ((_pos vectoradd [-0.17-1.1,-19.5,-2.75]) vectorDiff _offset);
					_cam campreparetarget (_weaponHolder modeltoworld ([0.17,3.2,0.5]) vectoradd _offset);
				};
			};
		};
	};
	//--- Prepare camera before shot
	_cam camcommitprepared 0;
	sleep (0.05 + _delay);

	//--- Final filename
	_fileName = format ["WeaponPictures\%2%1_ca.png",_class,_dlc];

	//--- Update UI
	_ctrlInfo ctrlsetstructuredtext parsetext format ["Saving screenshot to<br /><t font='EtelkaMonospaceProBold' size='0.875'>[Arma 3 Profile]\Screenshots\%1</t><br />Note: The text overlay will not be saved. <br />Estimated time left: %2 seconds",_fileName,((_cfgWeaponsCount-_foreachindex))*_delay];
	_ctrlProgress progresssetposition (_foreachindex / _cfgWeaponsCount);

	//--- Take screenshot
	screenshot _fileName;
	sleep 0.05;
}foreach _cfgWeapons;

_cam cameraeffect ["terminate","back"];
camdestroy _cam;
deleteVehicle _weaponHolder;
deleteVehicle _background;
deleteVehicle _accessoryHolder;
ctrldelete _ctrlInfo;
ctrldelete _ctrlProgress;
setaperture -1;

if (is3DEN) then {
	get3dencamera cameraeffect ["internal","back"];
	["showinterface",true] call bis_fnc_3DENInterface;
};
