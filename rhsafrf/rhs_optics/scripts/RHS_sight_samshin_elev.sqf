/*
set gun elevation and launch lead calculation

a: reyhard
*/
disableSerialization;
params["_v","_t"];


if(_t!=0)then{
	_mag = currentMagazine _v;
	_ammo=(getText (configFile >> "CfgMagazines" >> _mag >> "ammo" ));

	_hAdj=1.6;
	if(_ammo isKindOf "rhs_ammo_30x165mm_base")then
	{
		//APBC - 2A72
		_hAdj=((_t/1000)^3+0.7)/(1.8+0.4)-0.5;
	}else{
		if(_ammo isKindOf "rhs_ammo_3uor6")then
		{
			//HE - 2A72
			_hAdj=((_t/1000)^3+0.7)/5;

		}else{
			_t=0;
		};
	};

	//player globalChat format["%1 %2",rad (_t),_t];

	if(_t!=0)then{
		_t= [_this select 1,_mag,_ammo,_v,_hAdj,1] call rhs_fnc_findAngle
	}else{
		if(_ammo isKindOf "MissileCore")then{_t=0};
	};
	//systemChat format["hadj: %1 t: %2",_hAdj, _t];
};

private _bank = ((call rhs_fnc_findPlayer) call BIS_fnc_getPitchBank) select 1;
if(abs(_bank) >6)then{_t=_t*1.05};
[_v,["elev",rad(cos(_bank)*_t)*10000]] remoteExecCall ["animateSource",_v];
[_v,["elev_bank",rad(sin(_bank)*_t)*10000]] remoteExecCall ["animateSource",_v];