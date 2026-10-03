/*
	Mark V options UI handler

	_r - ctrl id
	_a - animation name
	_t - type, default 0

	a: reyhard
*/

params["_r","_a",["_t",0]];

private _p = call rhsusf_fnc_findPlayer;
private _v = vehicle _p;

switch(_t)do{
	case 0 : {
		if(_v animationSourcePhase _a < 1)then{
			_v animateSource [_a,1,true];
			ctrlSetText [_r,"rhsusf\addons\rhsusf_c_markvsoc\scripts\ui\rhs_switch_off.paa"];
		}else{
			_v animateSource [_a,0,true];
			ctrlSetText [_r,"a3\data_f\clear_empty.paa"];
		};
	};
	case 1 : {
		if(_v animationSourcePhase _a < 1)then{
			_v animateSource [_a,1,true];
			ctrlSetText [_r,"rhsusf\addons\rhsusf_c_markvsoc\scripts\ui\rhs_switch_rubber_off.paa"];
			if(_a == "c_eng_ctrl_off_source")then{
				{ctrlSetText [_x,"#(argb,8,8,3)color(0.43,0.5,0.45,0.81)"]}foreach [1201,1204,1205,1206];
			};
		}else{
			_v animateSource [_a,0,true];
			ctrlSetText [_r,"rhsusf\addons\rhsusf_c_markvsoc\scripts\ui\rhs_switch_rubber_on.paa"];
			if(_a == "c_eng_ctrl_off_source")then{
				{ctrlSetText [_x,"#(argb,8,8,3)color(0.43,0.5,0.45,0)"]}foreach [1201,1204,1205,1206];
			};
		};
	};
	case 2: {
		if(isLightOn _v)then{
			_p action ["lightOff", _v];
			ctrlSetText [_r,"rhsusf\addons\rhsusf_c_markvsoc\scripts\ui\rhs_switch_off.paa"];
			ctrlSetText [1203,"#(argb,8,8,3)color(0.43,0.5,0.45,0.81)"];
		}else{
			_p action ["lightOn", _v];
			ctrlSetText [_r,"a3\data_f\clear_empty.paa"];
			ctrlSetText [1203,"#(argb,8,8,3)color(0.43,0.5,0.45,0)"];
		};
	};
};
