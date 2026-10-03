/*
	TKN-3B simulation
	Adds limited Hunter Killer capabilities to TKN-3B periscope


	script is fired only once & is destroyed together with display
	a: reyhard
*/

//systemChat "init";

if(not( isNull (uiNameSpace getVariable ["RHS_TKN3_Ctrl",displayNull]))) exitWith{};

// remove additional handler if it's present
if( not ( (uiNameSpace getVariable ["rhs_tkn3_eh",-1]) isEqualTo -1))then{
	(findDisplay 46) displayRemoveEventHandler ["KeyDown", uiNameSpace getVariable "rhs_tkn3_eh"];
	//systemChat format[" %1 reload passed",(uiNameSpace getVariable ["rhs_hatch_handler_eh",-1])];
};

//systemChat "init passed, adding EH";
uiNameSpace setVariable ["RHS_TKN3_Ctrl",_this select 0];

#define realPLAYER missionNamespace getVariable ["bis_fnc_moduleRemoteControl_unit", player]

_id =  (findDisplay 46) displayAddEventHandler ["KeyDown", {

	private _handle=false;

	// deinitialization part
	if(ctrlText((uiNamespace getVariable "RHS_TKN3_Ctrl") displayCtrl 1000) != "RHS_TKN3" ) exitWith {
		
		// remove event handlers & deinitalize variables
		(findDisplay 46) displayRemoveEventHandler ["KeyDown", uiNameSpace getVariable "rhs_tkn3_eh"];
		uiNameSpace setVariable ["RHS_TKN3_Ctrl",displayNull];
		uiNameSpace setVariable ["rhs_tkn3_eh",nil];
		
		if(RHS_TC_Vehicle != objNull) then {
			// restart anims for AI
			[RHS_TC_Vehicle,["TCOverrideTurret",0]] remoteExecCall ["animateSource", crew RHS_TC_Vehicle];
			RHS_TC_Vehicle = nil;
		};
	};

	// commander override handling
	// Target cuing is done by placing the crosshair reticle in the periscope's viewfinder over the intended target and pressing the cue button.
	// The system only accounts for the cupola's orientation, and not the periscope's elevation, so the cannon will not elevate to meet the target; only the turret will.
	// single click sleve cannon but there is also continous mode supported
	if(inputAction "lookAround" > 0)then{
		// sleving works only in optic mode
		if(cameraView != "GUNNER")exitWith{_handle};

		private _p = realPLAYER;
		private _v = vehicle _p;
		private _g = gunner _v;
		RHS_TC_Vehicle = _v;
		
		// Exit if turret is destroyed
		if((_v getHitPointDamage "HitTurret") isEqualTo 1)exitWith {};

		// since there is no method
		if(_g call rhs_fnc_isPlayer or (_g isEqualTo objNull))then{
			[_v,["TCOverrideTurret",_v animationSourcePhase "ObsTurret"]] remoteExecCall ["animateSource",crew _v];

			//systemChat "rotating turret with player (or nobody) as a gunner";
		}else{
			// unassign target, otherwise it's not going to work
			if(assignedTarget _g != objNull)then{
				_g doWatch objNull;
			};
			// AI use doWatch command, since animating turret cause issues with aiming
			_g doWatch (positionCameraToWorld [0,0,(screenToWorld [0.5,0.5]) distance _p]);

			// restart TC override anims if it was previously used on player gunner
			if(_v animationSourcePhase "TCOverrideTurret" != 0)then{
				[_v,["TCOverrideTurret",0]] remoteExecCall ["animateSource",crew _v];
			};
			//systemChat "rotating turret with AI as a gunner";
		};
	};
	_handle;
}];
uiNameSpace setVariable ["rhs_tkn3_eh",_id];