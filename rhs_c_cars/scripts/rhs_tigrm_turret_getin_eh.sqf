/*
	a: reyhard
	get in handler for tigr m gun handling
*/

params["_v","_p","_u","_t"];

if(_t isEqualTo [0])then{
	if(_u call rhs_fnc_isPlayer)then{
		_u action ['turnIn',_v];
		_v animateDoor ["hatch_gunner_h",0];
	}else{
		//_u action ['turnOut',_v];
		_v animateDoor ["hatch_gunner_h",1];
	};
};