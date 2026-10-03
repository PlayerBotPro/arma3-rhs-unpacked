/*
	rhs_fnc_stryker_m1132_LMS_UI

	a: reyhard
*/
params["_vehicle"];

#define GREEN [0.1,1,0.15,1]
#define RED [0.76,0.05,0,1]
#define ORANGE [0.99,0.6,0.04,1]
#define WHITE [1,1,1,1]

#define CTRL_FUNCTION \
private _ctrlFunction = {\
	params["_ct","_t","_c"];\
		_ct ctrlSetText _t;\
		_ct ctrlSetTextColor _c;\
};

CTRL_FUNCTION

createDialog 'RHS_LaneMarkingSystem_Controls';

private _button_TimeInterval		= (findDisplay 201) displayCtrl 1600;
private _button_DistanceInterval	= (findDisplay 201) displayCtrl 1601;

private _button_dist_1		= (findDisplay 201) displayCtrl 1602;
private _button_dist_2		= (findDisplay 201) displayCtrl 1603;
private _button_dist_3		= (findDisplay 201) displayCtrl 1604;
private _button_dist_4		= (findDisplay 201) displayCtrl 1605;
private _button_dist_5		= (findDisplay 201) displayCtrl 1606;
private _buttons_distance	= [_button_dist_1,_button_dist_2,_button_dist_3,_button_dist_4,_button_dist_5];

private _button_time_1		= (findDisplay 201) displayCtrl 1607;
private _button_time_2		= (findDisplay 201) displayCtrl 1608;
private _button_time_3		= (findDisplay 201) displayCtrl 1609;
private _button_time_4		= (findDisplay 201) displayCtrl 1610;
private _button_time_5		= (findDisplay 201) displayCtrl 1611;
private _buttons_time 		= [_button_time_1,_button_time_2,_button_time_3,_button_time_4,_button_time_5];


private _LMS_TimeStatus		= _vehicle getVariable ["RHS_LMS_Time",false];
private _LMS_Distancetatus	= _vehicle getVariable ["RHS_LMS_Distance",false];

private _LMS_TimeSelected		= _vehicle getVariable ["RHS_LMS_TimeValue",5];
private _LMS_DistanceSelected	= _vehicle getVariable ["RHS_LMS_DistanceValue",25];


{_x ctrlSetTextColor WHITE}foreach (_buttons_distance + _buttons_time);

switch(_LMS_TimeSelected)do{
	case 5: 	{_button_time_1 ctrlSetTextColor ORANGE;};
	case 10: 	{_button_time_2 ctrlSetTextColor ORANGE;};
	case 15: 	{_button_time_3 ctrlSetTextColor ORANGE;};
	case 25: 	{_button_time_4 ctrlSetTextColor ORANGE;};
	case 40: 	{_button_time_5 ctrlSetTextColor ORANGE;};
};

switch(_LMS_DistanceSelected)do{
	case 15: 	{_button_dist_1 ctrlSetTextColor ORANGE;};
	case 25: 	{_button_dist_2 ctrlSetTextColor ORANGE;};
	case 50: 	{_button_dist_3 ctrlSetTextColor ORANGE;};
	case 100: 	{_button_dist_4 ctrlSetTextColor ORANGE;};
	case 250: 	{_button_dist_5 ctrlSetTextColor ORANGE;};
};

// Add actions for time buttons
{
	_x ctrladdeventhandler ["ButtonClick",{
		params ["_ctrl"];

		private _button_time_1		= (findDisplay 201) displayCtrl 1607;
		private _button_time_2		= (findDisplay 201) displayCtrl 1608;
		private _button_time_3		= (findDisplay 201) displayCtrl 1609;
		private _button_time_4		= (findDisplay 201) displayCtrl 1610;
		private _button_time_5		= (findDisplay 201) displayCtrl 1611;
		{_x ctrlSetTextColor WHITE}foreach [_button_time_1,_button_time_2,_button_time_3,_button_time_4,_button_time_5];

		_ctrl ctrlSetTextColor ORANGE;
		cameraon setVariable ["RHS_LMS_TimeValue",parseNumber (ctrlText _ctrl),true];

	}];
}foreach _buttons_time;

// Add actions for distance button
{
	_x ctrladdeventhandler ["ButtonClick",{
		params ["_ctrl"];

		private _button_dist_1	= (findDisplay 201) displayCtrl 1602;
		private _button_dist_2	= (findDisplay 201) displayCtrl 1603;
		private _button_dist_3	= (findDisplay 201) displayCtrl 1604;
		private _button_dist_4	= (findDisplay 201) displayCtrl 1605;
		private _button_dist_5	= (findDisplay 201) displayCtrl 1606;
		{_x ctrlSetTextColor WHITE}foreach [_button_dist_1,_button_dist_2,_button_dist_3,_button_dist_4,_button_dist_5];

		_ctrl ctrlSetTextColor ORANGE;
		cameraon setVariable ["RHS_LMS_DistanceValue",parseNumber (ctrlText _ctrl),true];

	}];
}foreach _buttons_distance;

// Time interval - first init
if(_LMS_TimeStatus)then{
	[_button_TimeInterval,"Time Interval Active",GREEN] call _ctrlFunction;
}else{
	[_button_TimeInterval,"Time Interval Inactive",RED] call _ctrlFunction;
};

// Time interval - click action
_button_TimeInterval ctrladdeventhandler ["ButtonClick",{
	params ["_ctrl"];

	CTRL_FUNCTION

	private _LMS_TimeStatus	= cameraon getVariable ["RHS_LMS_Time",false];
	if(_LMS_TimeStatus)then{
		// Deactivate time interval system
		[_ctrl,"Time Interval Inactive",RED] call _ctrlFunction;
		cameraOn setVariable ["RHS_LMS_Time",false,true];
	}else{
		// Activate time interval
		[_ctrl,"Time Interval Active",GREEN] call _ctrlFunction;
		cameraOn setVariable ["RHS_LMS_Time",true,true];

		// Add per frame handler
		private _pfhName = "rhs_lms_time_handler_" + str(random(999999));
		[_pfhName, "onEachFrame", {
			params["_vehicle","_pfh","_time"];

			// Get basic information
			private _LMS_TimeStatus	= _vehicle getVariable ["RHS_LMS_Time",false];
			private _ammo			= driver _vehicle ammo "rhsusf_weap_laneMarkerSystem";

			// exit if vehicle is not alive, action is disabled or run out of ammo
			if(!alive _vehicle || !_LMS_TimeStatus || _ammo	 isEqualTo 0)exitWith{
				_vehicle setVariable ["RHS_LMS_Time",false,true];
				[_pfh, "onEachFrame"] call BIS_fnc_removeStackedEventHandler;
			};

			// Fire lane marker system when selected time interval was reached
			if(time > _time)then{
				private _LMS_TimeSelected = _vehicle getVariable ["RHS_LMS_TimeValue",5];
				_this set [2,_time + _LMS_TimeSelected];
				[_vehicle,"rhsusf_weap_laneMarkerSystem",[-1]] call bis_fnc_fire;

			};
		},[cameraon,_pfhName,time]] call BIS_fnc_addStackedEventHandler;
	};
}];

if(_LMS_Distancetatus)then{
	[_button_DistanceInterval,"Distance Interval Active",GREEN] call _ctrlFunction;
}else{
	[_button_DistanceInterval,"Distance Interval Inactive",RED] call _ctrlFunction;
};
_button_DistanceInterval ctrladdeventhandler ["ButtonClick",{
	params ["_ctrl"];

	CTRL_FUNCTION

	private _LMS_Distancetatus	= cameraon getVariable ["RHS_LMS_Distance",false];
	if(_LMS_Distancetatus)then{
		[_ctrl,"Distance Interval Inactive",RED] call _ctrlFunction;
		cameraOn setVariable ["RHS_LMS_Distance",false,true];
	}else{
		[_ctrl,"Distance Interval Active",GREEN] call _ctrlFunction;
		cameraOn setVariable ["RHS_LMS_Distance",true,true];

		// Add per frame handler
		private _pfhName = "rhs_lms_distance_handler_" + str(random(999999));
		[_pfhName, "onEachFrame", {
			params["_vehicle","_pfh","_pos"];

			// Get basic information
			private _LMS_Distancetatus		= _vehicle getVariable ["RHS_LMS_Distance",false];
			private _LMS_DistanceSelected	= _vehicle getVariable ["RHS_LMS_DistanceValue",25];
			private _ammo					= driver _vehicle ammo "rhsusf_weap_laneMarkerSystem";
			private _posVeh 				= getpos _vehicle;

			// exit if vehicle is not alive, action is disabled or run out of ammo
			if(!alive _vehicle || !_LMS_Distancetatus || _ammo	 isEqualTo 0)exitWith{
				_vehicle setVariable ["RHS_LMS_Distance",false,true];
				[_pfh, "onEachFrame"] call BIS_fnc_removeStackedEventHandler;
			};

			//hintSilent format["dist: %1",_posVeh distance _pos];

			// Fire lane marker system when selected distance interval was reached
			if(_posVeh distance _pos > _LMS_DistanceSelected)then{
				_this set [2,_posVeh];
				[_vehicle,"rhsusf_weap_laneMarkerSystem",[-1]] call bis_fnc_fire;

			};
		},[cameraon,_pfhName,getpos cameraon]] call BIS_fnc_addStackedEventHandler;
	};
}];