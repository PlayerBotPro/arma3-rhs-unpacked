/*
	rhsusf_fnc_turret_gunnerAdjust
*/

// remove additional handler if it's present
if( not ( (uiNameSpace getVariable ["rhs_turret_gunnerAdjust_eh",-1]) isEqualTo -1))then{
	(findDisplay 46) displayRemoveEventHandler ["KeyDown", uiNameSpace getVariable ["rhs_turret_gunnerAdjust_eh",-1]];
	//systemChat format[" %1 reload passed",(uiNameSpace getVariable ["rhs_hatch_handler_eh",-1])];
};

uiNameSpace getVariable ["rhs_turret_gunnerAdjust_eh",_id];
_id =  (findDisplay 46) displayAddEventHandler ["KeyDown", {

	// Exit if UI no longer available
	if( (isNull ( (uiNamespace getVariable ["rhs_turret_gunnerAdjust_ctrl",displayNull]) displayCtrl 9601)) )exitWith
	{
		//systemChat "exit";
		// Restore to default state
		cameraon animateSource ["GunnerAdjust_source",0.25];
		// Remove on eachFrame event
		(findDisplay 46) displayRemoveEventHandler ["KeyDown", uiNameSpace getVariable ["rhs_turret_gunnerAdjust_eh",-1]];
		uiNameSpace setVariable ["rhs_turret_gunnerAdjust_ctrl",displayNull];
		uiNameSpace setVariable ["rhs_turret_gunnerAdjust_eh",nil];
		missionNamespace setVariable ["rhs_gunnerAdjust_state",nil];
	};


	private _handle = false;

	// Don't perform action when gunner is turned in
	private _animIn = [[typeOf cameraon, [0]] call BIS_fnc_turretConfig,"gunnerInAction",""] call BIS_fnc_returnConfigEntry;
	if(_animIn == animationState (call rhs_fnc_findPlayer))exitWith{_handle};

	// Perform action when adjust up or down action was activated
	private _adjustUp	= inputAction "AdjustUp";
	private _adjustDown	= inputAction "AdjustDown";
	if(_adjustUp + _adjustDown > 0)then
	{
		private _animationState	= cameraon animationSourcePhase "GunnerAdjust_source";
		private _desiredState	= missionNamespace getVariable ["rhs_gunnerAdjust_state",_animationState];
		
		// Animate only when previous animation was completed to reduce network traffic
		if(_desiredState isEqualTo _animationState)then
		{
			private _toAnimate = (( (_animationState) + (_adjustDown - _adjustUp)*0.1) max 0) min 0.7;
			// Exit if animation reached its limits, otherwise animate gunner source & update desired state
			if(_toAnimate isEqualTo 0 || _toAnimate isEqualTo 0.7)exitWith{false};
			missionNamespace setVariable ["rhs_gunnerAdjust_state",_toAnimate];
			cameraon animateSource ["GunnerAdjust_source",_toAnimate];
			//systemChat format["press %1",time];
		};
		//_handle = true;
	};

	_handle;
}];

uiNameSpace setVariable ["rhs_turret_gunnerAdjust_ctrl",_this select 0];
uiNameSpace setVariable ["rhs_turret_gunnerAdjust_eh",_id];