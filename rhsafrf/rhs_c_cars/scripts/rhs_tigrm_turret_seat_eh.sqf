/*
hatch control - seatSwitched event handler script

a: reyhard
*/

params["_v","_u",["_u2",objNull]];

if(_u == _v turretUnit [0])then{
	if(_u call rhs_fnc_isPlayer)then{
		_v animateDoor ["hatch_gunner_h",0];
		_u  action ['turnIn',_v];
	}else{
		_v animateDoor ["hatch_gunner_h",1];
		_u  action ['turnOut',_v];
	};
};

if(not( isNull _u2))then{
	if(_u2 == _v turretUnit [0])then{
		if(_u2 call rhs_fnc_isPlayer)then{
			_v animateDoor ["hatch_gunner_h",0];
			_u2  action ['turnIn',_v];
		}else{
			_v animateDoor ["hatch_gunner_h",1];
			_u2  action ['turnOut',_v];
		};
	};
};