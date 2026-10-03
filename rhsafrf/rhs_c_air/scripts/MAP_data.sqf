params ["_plane","_MAPdata"];

_plane animate ["lever_pilot_touch_mfd",1];

sleep 0.3;

_plane animate ["lever_pilot_touch_mfd",0];

sleep 0.1;

if (_MAPdata == 2) exitWith {_plane setObjectTexture [9, "\rhsafrf\addons\rhs_c_air\scripts\data\black_co.paa"]};

switch(worldName)do{
	case "Stratis" : 
	{
		if (_MAPdata == 0) then{_plane setObjectTexture [9, "\rhsafrf\addons\rhs_c_air\scripts\data\Stratis_co.paa"];};
		if (_MAPdata == 1) then{_plane setObjectTexture [9, "\rhsafrf\addons\rhs_c_air\scripts\data\Stratis_gps_co.paa"];};
	};
	case "Altis" : 
	{
		if (_MAPdata == 0) then{_plane setObjectTexture [9, "\rhsafrf\addons\rhs_c_air\scripts\data\altis_co.paa"];};
		if (_MAPdata == 1) then{_plane setObjectTexture [9, "\rhsafrf\addons\rhs_c_air\scripts\data\altis_gps_co.paa"];};
	};
	case default 
	{
		_plane setObjectTexture [9, getText (configFile >> "CfgWorlds" >> worldName >> "pictureMap")];
	};
};
