/*
a: reyhard

handling tigr sts weapons
*/

params["_v","_u","_t"];
//support for AI turned off for now
if(not(_u call RHS_fnc_isPlayer))exitWith{
	if(_t isEqualTo [0])then{
		_v animate ["turret_correct",(_v animationPhase "turret_ags")+rad(30)];
	}else{
		_v animate ["turret_correct",_v animationPhase "MainTurret"];
	};
};

//call rhs_fnc_tigr_sts_turret_ui;