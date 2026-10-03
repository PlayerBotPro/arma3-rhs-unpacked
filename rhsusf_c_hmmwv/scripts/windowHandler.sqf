/*
a: reyhard

window handling in m1025
*/

params["_v"];
_p=call rhsusf_fnc_findPlayer;
_i=_v getCargoIndex _p;

if(_i isEqualTo -1)then{
//driver
	if(_v doorPhase 'ani_window_1' == 0)then{
		_v animateDoor ['ani_window_1',1];
	}else{
		_v animateDoor ['ani_window_1',0];
	};
}else{
//cargo
	_a=['ani_window_2','ani_window_4','ani_window_3'] select _i;

	if(_v doorPhase _a == 0)then{
		_v animateDoor [_a,1];
	}else{
		_v animateDoor [_a,0];
	};
};