/*
	compass & turret indicator control

	a: reyhard
*/

uiNameSpace setVariable ["RHS_compass_Ctrl",_this select 0];

disableSerialization;
private _c = uiNamespace getVariable "RHS_compass_Ctrl";
//commander & gunner turret
private _tc = (_c displayCtrl 412);
private _tg = (_c displayCtrl 413);
private _gpk = (_c displayCtrl 212);

["rhs_compass_handler", "onEachFrame", {
	params["_tc","_tg","_gpk","_time"];

	if(time>_time )then{
		// deinitialization part upon UI destruction
		if(isNull _tc)exitWith{
			["rhs_compass_handler", "onEachFrame"] call BIS_fnc_removeStackedEventHandler;
			uiNameSpace setVariable ["RHS_compass_Ctrl",displayNull];
		};

		private _p = call rhs_fnc_findPlayer;
		private _v = vehicle _p;

		//angles
		private _a0 = deg(_v animationSourcePhase "mg_turret") - deg(_v animationSourcePhase "TCOverrideTurret");
		private _a2 = _v weaponDirection (currentWeapon _v);
		_a2 = -((_a2 select 0) atan2 (_a2 select 1))+(getDir _v);
		//commander coupola moves with main gun. in order to counter that effect we substract main gun angle from coupola
		private _a1 = deg(_v animationSourcePhase "ObsTurret")+_a2+(180+_a0);
		private _a3 = -(getDir _p);

		//vectors
		private _v1=[[0,1],_a1] call BIS_fnc_rotateVector2D;
		private _v2=[[0,1],_a2] call BIS_fnc_rotateVector2D;
		private _v3=[[0.406737, -0.913545],_a3] call BIS_fnc_rotateVector2D;

		_tc ctrlSetModelDirAndUp [[0,1,0],[_v1 select 0, 0, _v1 select 1]];
		_tg ctrlSetModelDirAndUp [[0,1,0],[_v2 select 0, 0, _v2 select 1]];
		_gpk ctrlSetModelDirAndUp [[_v3 select 0,_v3 select 1,0],[0, 0, 1]];

		_this set [3,time+(1/diag_fps)];
	};
},[_tc,_tg,_gpk,time]] call BIS_fnc_addStackedEventHandler;