/*
set recticle elevation

a: reyhard
*/
disableSerialization;

private["_v","_ammo","_t","_param","_a"];

_v = _this select 0;
_t = _this select 1;

//main display
_c = uiNamespace getVariable "RHS_TKN4s_Ctrl";
//emergency sight
_g = _c displayCtrl 1;
//current ammo text
_a = (_c displayCtrl 3);
//range finder text
_r = (_c displayCtrl 4);

_param=0;

if(_t>=1000)then{_r ctrlSetText format["%1",_t]}else{_r ctrlSetText format["0%1",_t]};
_ammo=(getText (configFile >> "CfgMagazines" >> ( currentMagazine _v) >> "ammo" ));

if(_ammo isKindOf "rhs_ammo_3bm_base")then
{
	//emergency sight anims
	if(_t<1400)then{_param=(_t/3000)*1.87}else{_param=(_t/2300)*1.65};
	//APFSDS
	_t=(((_t/780)^3+(_t/780)+33)/235);
	_a ctrlSetText "6";
}else{
	if(_ammo isKindOf "rhs_ammo_3bk_base")then
	{
		//emergency sight anims
		if(_t<1600)then{_k=6.65}else{if(_t<1900)then{_k=6.75}else{if(_t<2400)then{_k=7.05}else{_k=7.85}}};
		_param=(_t/2900)*_k;

		//HEAT
		_t=(((_t/520)^3+(_t/660)+48)/145);
		_a ctrlSetText "H";

	}else{
		if(_ammo isKindOf "rhs_ammo_3of_base")then
		{
			//emergency sight anims
			if(_t<1900)then{_k=8.95}else{if(_t<2300)then{_k=9.35}else{if(_t<2400)then{_k=9.75}else{_k=13.12}}};
			_param=(_t/4000)*_k;

			//HEF
			_t=(((_t/361)^3+(_t/540)+57)/147);
			_a ctrlSetText "0";

		}else{
			if(_ammo isKindOf "MissileCore")then
			{
				_t=0;
				_a ctrlSetText "U";
			}else{
				if(currentMagazine _v == "rhs_mag_762x54mm_250")then
				{
					//PKT
					_t=0;
				};
			};
		};
	};
};


_g ctrlSetPosition [19.22 *   (0.01875 * Safezoneh),(-3.95+_param)*   (0.025 *    SafezoneH),29 *   (0.01875 * SafezoneH),29 *   (0.025 * SafezoneH)];
_g ctrlCommit 4;