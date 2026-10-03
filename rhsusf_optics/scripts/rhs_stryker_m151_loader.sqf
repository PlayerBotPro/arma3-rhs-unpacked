/*
	rhsusf_fnc_stryker_m151_loader
	a: reyhard
*/
disableSerialization;

uiNameSpace setVariable ["RHS_Stryker_M151_Ctrl",_this # 0];

cameraon setUserMFDtext [1,"1.0x"];
((_this # 0) displayctrl 6001) ctrladdeventhandler ["draw",{_this call rhsusf_fnc_stryker_m151_handler}];


private _mapEventHandler = nil;
if(isNil "RHS_WP_Managment_Disabled")then
{
	// Create button for toggling on/off
	(findDisplay 12 ctrlCreate ["RHS_WP_Control_Checbkox",20002]);

	// Add stackable map event handler for adding waypoints
	_mapEventHandler = addMissionEventHandler ["MapSingleClick", {_this call rhs_fnc_wp_manager}];
};

// loop handling different optics mode, weapon changing & transition fade effect
["rhs_stryker_m151_mainLoop", "onEachFrame", {

	params["_mapEventHandler"];
	//hintSilent format["running for %1s",round(time-_startTime)];

	//remove EH
	if( isNull ( (uiNamespace getVariable "RHS_Stryker_M151_Ctrl") displayCtrl 8551))exitWith
	{
		["rhs_stryker_m151_mainLoop", "onEachFrame"] call BIS_fnc_removeStackedEventHandler;
		uiNameSpace setVariable ["RHS_Stryker_M151_Ctrl",displayNull];
		//systemChat "removing EH";// Remove map event handler
		if(isNil "RHS_WP_Managment_Disabled")then
		{
			removeMissionEventHandler ["MapSingleClick", _mapEventHandler];
			ctrlDelete ((findDisplay 12) displayCtrl 20001);
			ctrlDelete ((findDisplay 12) displayCtrl 20002);
		};
	};
},[_mapEventHandler]] call BIS_fnc_addStackedEventHandler;