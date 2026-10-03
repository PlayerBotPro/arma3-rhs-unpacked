/*
	rhs_fnc_sight_bmp2_tkn3
	TKN-3B simulation
	Adds limited Hunter Killer capabilities to TKN-3B periscope


	script is fired only once & is destroyed together with display
	a: reyhard
*/

//systemChat "init";

if(not( isNull (uiNameSpace getVariable ["RHS_BMP2_TKN3_Ctrl",displayNull]))) exitWith{};

// remove additional handler if it's present
if( not ( (uiNameSpace getVariable ["rhs_tkn3_eh",-1]) isEqualTo -1))then
{
	(findDisplay 46) displayRemoveEventHandler ["KeyDown", uiNameSpace getVariable "rhs_tkn3_eh"];
	//systemChat format[" %1 reload passed",(uiNameSpace getVariable ["rhs_hatch_handler_eh",-1])];
};

// loop handling different optics mode, weapon changing & transition fade effect
["rhs_bmp2_tkn3_handler", "onEachFrame", {
	params["_v","_mode_old","_time"];

	// refresh rate 0.01s
	if(time > _time)then{
		_this set [2,time+0.01];

		private _mode = ctrlText (uiNamespace getVariable "RHS_BMP2_TKN3_Ctrl" displayCtrl 154);
		// check if mode was changed
		if(_mode!=_mode_old)then
		{
			// deinitialization part
			if(  ctrlText ( (uiNamespace getVariable "RHS_BMP2_TKN3_Ctrl")  displayCtrl 1000) != "RHS_TKN3" )exitWith
			{
				["rhs_bmp2_tkn3_handler", "onEachFrame"] call BIS_fnc_removeStackedEventHandler;

				//systemChat "removing EH";
			};

			private _sight	= (uiNamespace getVariable "RHS_BMP2_TKN3_Ctrl" displayCtrl 1);
			private _bar	= (uiNamespace getVariable "RHS_BMP2_TKN3_Ctrl" displayCtrl 2);
			private _v		= vehicle (call rhs_fnc_findPlayer);
			_this set [0,_v];
			//systemChat "updating vehicle";

			switch(_mode)do
			{
				case "AA1" : {
					{_x ctrlSetTextColor [0.7,0.074,0.02,1]; }foreach [_sight,_bar];
					_sight ctrlSetText "rhsafrf\addons\rhs_optics\vehicles\data\rhs_1pz3_1x_ca.paa";
					_v animateSource ["1PZ3_Use",1];
				};
				case "AA2" : {
					{_x ctrlSetTextColor [0.7,0.074,0.02,1]; }foreach [_sight,_bar];
					_sight ctrlSetText "rhsafrf\addons\rhs_optics\vehicles\data\rhs_1pz3_4x_ca.paa";
					_v animateSource ["1PZ3_Use",1];
				};
				case "TKN3": {
					{_x ctrlSetTextColor [0.7,0.074,0.02,0]; }foreach [_sight,_bar];
					_v animateSource ["1PZ3_Use",0];
				};
				case "NIGHT" : {
					{_x ctrlSetTextColor [0.7,0.074,0.02,0]; }foreach [_sight,_bar];
				};
			};
			// fade effect to simulate changing optical devices
			titleCut ["", "black in", 2];
			// update mode param
			_this set [1,_mode];
		};
	};
},["","",time]] call BIS_fnc_addStackedEventHandler;

//systemChat "init passed, adding EH";
uiNameSpace setVariable ["RHS_BMP2_TKN3_Ctrl",_this select 0];

#define CURRENT_PLAYER missionNamespace getVariable ["bis_fnc_moduleRemoteControl_unit", player]

_id =  (findDisplay 46) displayAddEventHandler ["KeyDown", {

	private _handle=false;

	// deinitialization part
	if(ctrlText((uiNamespace getVariable "RHS_BMP2_TKN3_Ctrl") displayCtrl 1000) != "RHS_TKN3" ) exitWith
	{
		// remove event handlers & deinitalize variables
		(findDisplay 46) displayRemoveEventHandler ["KeyDown", uiNameSpace getVariable "rhs_tkn3_eh"];
		uiNameSpace setVariable ["RHS_BMP2_TKN3_Ctrl",displayNull];
		uiNameSpace setVariable ["rhs_tkn3_eh",nil];

		private _p = CURRENT_PLAYER;
		private _TC_Vehicle = _p getVariable ["RHS_TC_Vehicle",objNull];
		if(_TC_Vehicle != objNull) then
		{
			// restart anims for AI
			[_TC_Vehicle,["TCOverrideTurret",0]] remoteExecCall ["animateSource", crew _TC_Vehicle];
			_p setVariable ["RHS_TC_Vehicle",nil];
		};
	};

	// commander override handling
	// Target cuing is done by placing the crosshair reticle in the periscope's viewfinder over the intended target and pressing the cue button.
	// The system only accounts for the cupola's orientation, and not the periscope's elevation, so the cannon will not elevate to meet the target; only the turret will.
	// single click sleve cannon but there is also continous mode supported
	if(inputAction "lookAround" > 0)then{
		// sleving works only in optic mode
		if(cameraView != "GUNNER")exitWith{_handle};

		private _p = CURRENT_PLAYER;
		private _v = vehicle _p;
		private _g = gunner _v;
		_p setVariable ["RHS_TC_Vehicle",_v];

		// Exit if turret or gun is destroyed
		if(((_v getHitPointDamage "HitTurret") isEqualTo 1) || (_v getHitPointDamage "HitGun") isEqualTo 1)exitWith {};

		// since there is no other method
		if(_g call rhs_fnc_isPlayer or (_g isEqualTo objNull))then
		{
			[_v,["TCOverrideTurret",_v animationSourcePhase "ObsTurret"]] remoteExecCall ["animateSource",crew _v];
			[_v,["TCOverrideGun",(_v animationSourcePhase "ObsGun") min ((rad 60)-(_v animationSourcePhase "MainGun"))]] remoteExecCall ["animateSource",crew _v];

			//systemChat "rotating turret with player (or nobody) as a gunner";
		}else{
			// unassign target, otherwise it's not going to work
			if(assignedTarget _g != objNull)then{
				_g doWatch objNull;
			};
			// AI use doWatch command, since animating turret cause issues with aiming

			if(_v animationSourcePhase "1PZ3_Use" > 0)then
			{
				private _pos = (_v modelToWorldVisual (_v selectionPosition "view_tkn3_pos"));
				private _dir = (_v modelToWorldVisual (_v selectionPosition "view_tkn3_dir"));

				private _viewVector = (_pos vectorFromTo _dir) vectorMultiply (((screenToWorld [0.5,0.5]) distance _p) max 500);
				_g doWatch (_pos vectorAdd _viewVector);
				helper setPos (_pos vectorAdd _viewVector);
				hintSilent format["%1",(_pos vectorAdd _viewVector)];
			}else
			{
				_g doWatch (positionCameraToWorld [0,0,((screenToWorld [0.5,0.5]) distance _p) max 500]);
			};

			// restart TC override anims if it was previously used on player gunner
			if(_v animationSourcePhase "TCOverrideTurret" != 0)then{
				[_v,["TCOverrideTurret",0]] remoteExecCall ["animateSource",crew _v];
				[_v,["TCOverrideGun",0]] remoteExecCall ["animateSource",crew _v];
			};
			//systemChat "rotating turret with AI as a gunner";
		};
	};
	_handle;
}];
uiNameSpace setVariable ["rhs_tkn3_eh",_id];