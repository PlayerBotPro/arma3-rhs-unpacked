/*
	C130J options UI handler

	_r - ctrl id
	_a - animation name
	_t - type, default 0

	a: reyhard
*/

params["_r","_a",["_t",0]];

#define Green [0.1,1,0.15,1]
#define Red [0.76,0.05,0,1]
#define Orange [0.99,0.6,0.04,1]
private _fCtrl = {
	disableSerialization;
	(findDisplay 101) displayCtrl _this
};
private _p = call rhsusf_fnc_findPlayer;
private _v = vehicle _p;
private _delete = false;
private _d =objNull;

switch(_t)do{
	case 1 : {
		if(_v animationSourcePhase _a < 1)then{
			_v animateSource [_a,1];
			ctrlSetText [_r,"Open"];
			ctrlSetText [2600,"Close ramp"];
			ctrlSetText [2601,"Level ramp"];
			(_r call _fCtrl) ctrlSetTextColor Green;
		}else{
			_v animateSource [_a,0];
			ctrlSetText [_r,"Closed"];
			ctrlSetText [2600,"Open ramp"];
			ctrlSetText [2601,"Level ramp"];
			(_r call _fCtrl) ctrlSetTextColor Red;
		};
	};
	case 2 : {
		if(_v animationSourcePhase _a != 0.65)then{
			_v animateSource [_a,0.65];
			ctrlSetText [_r,"Leveled"];
			(_r call _fCtrl) ctrlSetTextColor Orange;
			ctrlSetText [2600,"Open ramp"];
			ctrlSetText [2601,"Close ramp"];
		}else{
			ctrlSetText [2600,"Open ramp"];
			ctrlSetText [2601,"Level ramp"];
			_v animateSource [_a,0];
			(_r call _fCtrl) ctrlSetTextColor Red;
		};
	};
	case 3;
	case 4;
	case 5: {
		if(_v doorPhase _a < 1)then{
			_v animateDoor [_a,1];
			ctrlSetText [_r,"Open"];
			(_r call _fCtrl) ctrlSetTextColor Green;
		}else{
			_v animateDoor [_a,0];
			ctrlSetText [_r,"Closed"];
			(_r call _fCtrl) ctrlSetTextColor Red;
		};
	};
	case 6: {

		if(_v animationSourcePhase _a < 1)then{
			_v animateSource [_a,1];
			ctrlSetText [_r,"Green"];
			(_r call _fCtrl) ctrlSetTextColor Green;
		}else{
			_v animateSource [_a,0];
			ctrlSetText [_r,"Red"];
			(_r call _fCtrl) ctrlSetTextColor Red;
		};
	};
	case 7;
	case 8:{
		if(_v animationSourcePhase _a == 1)then{
			_v animateSource [_a,0];
			ctrlSetText [_r,"Off"];
			(_r call _fCtrl) ctrlSetTextColor Red;

			if(isnull (_v turretUnit [0]))then{
				_d = createAgent ["VirtualMan_F", [0,0,0], [], 0, "FORM"];
				_d moveInTurret [_v,[0]];
				_delete=true;
			};

			(_v turretUnit [0]) action ["searchlightOff",  _v];

			if(_delete)then{deleteVehicle _d};
		}else{
			_v animateSource [_a,1];
			ctrlSetText [_r,"On"];
			(_r call _fCtrl) ctrlSetTextColor Green;

			if(isnull (_v turretUnit [0]))then{
				_d = createAgent ["VirtualMan_F", [0,0,0], [], 0, "FORM"];
				_d moveInTurret [_v,[0]];
				_delete=true;
			};

			(_v turretUnit [0]) action ["searchlightOn",  _v];

			if(_delete)then{deleteVehicle _d};
		};
	};
};
