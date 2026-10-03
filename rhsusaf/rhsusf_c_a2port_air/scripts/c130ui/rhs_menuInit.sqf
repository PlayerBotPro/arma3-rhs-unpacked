/*
	C130j options menu init

	a: reyhard
*/
params["_v"];

#define Green [0.1,1,0.15,1]
#define Red [0.76,0.05,0,1]
#define Orange [0.99,0.6,0.04,1]

private _d = createDialog "RHS_C130J_UI";
private _ctrl1 = (findDisplay 101) displayCtrl 5651;
private _ctrl2 = (findDisplay 101) displayCtrl 5652;
private _ctrl3 = (findDisplay 101) displayCtrl 5653;
private _ctrl4 = (findDisplay 101) displayCtrl 5654;
private _ctrl5 = (findDisplay 101) displayCtrl 5655;
private _ctrl6 = (findDisplay 101) displayCtrl 5656;
private _ctrl7 = (findDisplay 101) displayCtrl 5657;

private _ctrlFunction = {
	params["_ct","_t","_c"];
		_ct ctrlSetText _t;
		_ct ctrlSetTextColor _c;
};

// animations check
if(_v animationSourcePhase 'ramp' == 0)then{
	ctrlSetText [2600,"Open ramp"];
		[_ctrl1,"Closed",Red] call _ctrlFunction;
}else{
	ctrlSetText [2600,"Close ramp"];
	if(_v animationSourcePhase 'ramp' == 0.65)then{
		[_ctrl1,"Leveled",Orange] call _ctrlFunction;
	}else{
		[_ctrl1,"Open",Green] call _ctrlFunction;
	};
};

if(_v doorPhase 'door_2_1' == 1)then{
	[_ctrl2,"Open",Green] call _ctrlFunction;
};
if(_v doorPhase 'door_2_2' == 1)then{
	[_ctrl3,"Open",Green] call _ctrlFunction;
};
if(_v doorPhase 'door_1' == 1)then{
	[_ctrl4,"Open",Green] call _ctrlFunction;
};
if(_v animationSourcePhase 'jumplight' == 1)then{
	[_ctrl5,"Green",Green] call _ctrlFunction;
};
if(_v animationSourcePhase 'cargolights_hide' == 1)then{
	[_ctrl6,"On",Green] call _ctrlFunction;
};
/*
if(_v animationSourcePhase 'cabinlights_hide' == 0)then{
	[_ctrl7,"On",Green] call _ctrlFunction;
};*/