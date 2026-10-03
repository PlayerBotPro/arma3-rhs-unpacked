/*
	custom vehicle rearming for vehicles available through 3den attributes

	_v - vehicle
	_a - value changed
	_s - slot changed
	_max - max ammo
	_slots - slots available

	a: reyhard
*/

params["_v","_a","_s","_max","_slots"];

//systemChat "init";
//remove all magazines (except coax) on first call
if(_v getVariable["rhs_isCustomLoadout",true])then{
	{
		_v removeMagazineTurret [_x,[0]];
	}foreach (_v magazinesTurret [0]);
	_v setVariable ["rhs_isCustomLoadout",false];
	//systemChat "removing mags";
};

//get magazine types
private _s_type = _v getVariable [format["%1_type",_s],""];
//systemChat format["%1",_s_type];
//diag_log format["%1",_s_type];

//3den operations
if(is3DEN)then{
	if(_a < 0)then{
		_a = 0;
		_v set3DENAttribute [_s,0];
		//systemChat "Warning! Invalid number, reverting to 0";
	};

	//max rounds
	if(_a>_max)then{
		_a = _max;
		_v set3DENAttribute [_s,_max];
		systemChat "Warning! Max for single round reached, changing to amount of rounds to max";
	};

	//counting ammo
	private _c = _slots - [_s];
	private _i = _a;
	{
		if((_v get3DENAttribute _x select 0) > 0)then{_i = _i + (_v get3DENAttribute _x select 0)};
	}foreach _c;
	//systemChat format["total ammo count: %1",_i];

	//equally remove magazines above limit
	if(_i>_max)then{
		//calculating between how many nods we need to split exceding rounds
		private _divide = 0;
		{
			if((_v get3DENAttribute _x select 0) > 0)then{_divide=_divide+1}else{_c = _c - [_x]};
		}foreach _c;

		_i = _i - _max;
		//systemChat format["removing excesive mags %1 %2 divide: %3",_i,_c,_divide];
		{
			_temp = (_v get3DENAttribute _x select 0) - ceil (_i/_divide);
			if(_temp<0)then{_temp=0};
			_v set3DENAttribute [_x,_temp];
			_i = _i -  ceil (_i/_divide);
		}foreach _c;
	};

};

_v addMagazineTurret [_s_type,[0]];
_v setMagazineTurretAmmo [_s_type,_a,[0]];

