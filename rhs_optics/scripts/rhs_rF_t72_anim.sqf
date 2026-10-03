params["_t"];
private _v = vehicle (call rhs_fnc_findPlayer);

_v animate ["PrimarySight_range",_t];
{_v animate [_x,0]}foreach ["PrimarySight_elevation_APFSDS","PrimarySight_elevation_HEF","PrimarySight_elevation_HEAT"];

private _mag = ( currentMagazine _v);
private _a = (getText (configFile >> "CfgMagazines" >> _mag >> "ammo" ));
private _d = 0;
private _hAdj = 0;

// minimal distance for calculations
if(_t isEqualTo 0)then{_t =1};

if(_a isKindOf "rhs_ammo_3bm_base")then
{
	_hAdj=((-_t/1000)^3+1.2)/10;
	//APFSDS
	_d=[_t,_mag,_a,_v,_hAdj] call rhs_fnc_findAngle;
	_d=7.16+_d*13;
	_v animate ["PrimarySight_elevation_APFSDS",_d];
}else{
	if(_a isKindOf "rhs_ammo_3bk_base")then
	{
		_hAdj=-((_t/1000)^3+1.3)/10;
		//HEAT
		_d=[_t,_mag,_a,_v,_hAdj] call rhs_fnc_findAngle;
		_d=7.46+_d*19.5;
		_v animate ["PrimarySight_elevation_HEAT",_d];
	}else{
		if(_a isKindOf "rhs_ammo_3of_base")then
		{
			_hAdj=-((_t/1000)^3+1.3)/10;
			//HEF
			_d=[_t,_mag,_a,_v,_hAdj] call rhs_fnc_findAngle;
			_d=7.46+_d*19.5;
			_v animate ["PrimarySight_elevation_HEF",_d];
		}else{
			if(_mag == "rhs_mag_762x54mm_250")then
			{
				//PKT
				_v animate ["PrimarySight_elevation_APFSDS",7.46];
			};
		};
	};
};
