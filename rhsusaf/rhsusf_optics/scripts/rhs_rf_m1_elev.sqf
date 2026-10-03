disableSerialization;
//FCS
params["_t"];

private _p = call rhs_fnc_findPlayer;
private _v = vehicle _p;

private _c = uiNamespace getVariable "RHS_M1_Ctrl";
private _s = (_c displayCtrl 151);
private _leadParam = 0;

_v setVariable ["rhsusf_m1_range",_t];

[_t] spawn RHSusf_fnc_rf_M1_digit;

if(_t != 0)then{
	private _mag = currentMagazine _v;
	private _a = (getText (configFile >> "CfgMagazines" >> _mag >> "ammo" ));
	private _h = -((_v modelToWorld (_v selectionPosition "usti hlavne")) select 2)+0.3;
	//AP
	if(_a isKindOf "rhs_ammo_M829")then{
		_h= 0.0903922 * log(_t) - 0.75496;
		_leadParam=1.16;
	}else
	{
		//HEAT
		if(_a isKindOf "rhs_ammo_M830")then{
			_h = 0.000507694 * _t - 0.504259 ;
			_leadParam=1.55;
		}else
		{
			//HE
			if(_a isKindOf "rhs_ammo_M1069")then{
				_h= 1.11714*10^(-6) *(_t)^2 - 0.00123676 *_t - 0.0595195 ;
				_leadParam=1.8;
			}else
			{
				//MG COAX
				_h=3.02697*(10^-9)*_t^3 - 3.18604*(10^-6)*_t^2 + 0.00294081*_t - 0.949649;
			};
		};
	};

	_t= [_this select 0,_mag,_a,_v,_h] call rhsusf_fnc_findAngle;
	if(_t<30)then{
		private _bank = (_p call BIS_fnc_getPitchBank) select 1;
		[_v,["elev",rad(cos(_bank)*_t)*10000]] remoteExecCall ["animateSource",[_v,_p]];
		[_v,["elev_bank",rad(sin(_bank)*_t)*10000]] remoteExecCall ["animateSource",[_v,_p]];
	};

	[_v,_leadParam] spawn rhsusf_fnc_sight_m1_lead;
}else{
	[_v,["elev",0]] remoteExecCall ["animateSource",[_v,_p]];
};