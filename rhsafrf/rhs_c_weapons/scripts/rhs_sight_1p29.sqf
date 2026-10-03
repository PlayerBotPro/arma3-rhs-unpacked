/*
1p29 illumination handler

a: reyhard
*/

[] call RHS_fnc_preferedOptic;

if(count _this > 1)then{
	private _p = call rhs_fnc_findplayer;
	private _i = (getText (configFile >> "cfgWeapons" >> primaryWeapon _p >> "rhs_1p29_type"));
	if(_i isEqualTo "")exitWith{};

	// Add 3d variant if optic type is equal to 1
	private _type = missionNameSpace getVariable ["rhs_preferedOptic",profileNamespace getVariable ["rhs_preferedOptic",0]];
	if(_type isEqualTo 1)then{_i = _i + "_3d"};

	//systemChat format["start %1",_i];
	if( ((primaryWeaponItems _p) select 2)  != _i)then{
		_p addPrimaryWeaponItem _i;
	};
	if(_type isEqualTo 1)exitWith{};
};

if(isNull (uiNamespace getVariable ["rhs_1p29_ctrl",displayNull]))then
{
	uiNameSpace setVariable ["rhs_1p29_ctrl",_this select 0];

	[] spawn
	{

		private["_v","_t"];
		disableSerialization;
		_c = uiNamespace getVariable "rhs_1p29_ctrl";

		//illumination
		_g = _c displayCtrl 1;

		while{not(isNull _g)}do
		{
			_g ctrlSetTextColor [0.44,0.98,0.21,(0 max (abs((daytime-12)/14)-(0.2*sunOrMoon))) min 0.65];
			sleep 2;
			//player globalChat format["%1",abs((daytime-12)/34)];
		};
		uiNameSpace setVariable ["rhs_1p29_ctrl",displayNull];
	};
};