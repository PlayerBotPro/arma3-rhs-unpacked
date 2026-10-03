/*
	Mark V options menu init

	a: reyhard
*/
params["_v"];

private _d = createDialog "RHS_MarkV_UI";

// check animation, stage I
{
	if(_v animationSourcePhase (_x select 0) == 0)then{
		ctrlSetText [_x select 1,"a3\data_f\clear_empty.paa"];
	};
}foreach [["rL_nav_source",7004],["rL_opR_source",7005], ["Beacons",7006],["rL_opT_source",7007] ];

//check animations, stage II
{

	if(_v animationSourcePhase (_x select 0) == 0)then{
		ctrlSetText [_x select 1,"rhsusf\addons\rhsusf_c_markvsoc\scripts\ui\rhs_switch_rubber_on.paa"];
	};
}foreach [["c_displays_off_source",7001],["c_eng_ctrl_off_source",7002], ["rL_remSpot_source",7008],["c_instr_off_source",7009] ];

//check lights
if(isLightOn _v)then{
	ctrlSetText [7003,"a3\data_f\clear_empty.paa"];
	ctrlSetText [1203,"#(argb,8,8,3)color(0.43,0.5,0.45,0)"];
}else{
	ctrlSetText [7003,"rhsusf\addons\rhsusf_c_markvsoc\scripts\ui\rhs_switch_off.paa"];
	ctrlSetText [1203,"#(argb,8,8,3)color(0.43,0.5,0.45,0.81)"];
};

//check engine & damage
if(isEngineOn _v)then{

	ctrlSetText [1207,"#(argb,8,8,3)color(0.43,0.5,0.45,0)"];
	ctrlSetText [1209,"#(argb,8,8,3)color(0.43,0.5,0.45,0)"];
	private _dam = _v getHitPointDamage "HitEngine";
	if(_dam >0.5)then{
		ctrlSetText [1207,"#(argb,8,8,3)color(0.43,0.5,0.45,0.81)"];
		if(_dam == 1)then{
			ctrlSetText [1209,"#(argb,8,8,3)color(0.43,0.5,0.45,0.81)"];
		};
	};
};

//check fuel
if(fuel _v < 0.1)then{
	ctrlSetText [1208,"#(argb,8,8,3)color(0.43,0.5,0.45,0)"];
};