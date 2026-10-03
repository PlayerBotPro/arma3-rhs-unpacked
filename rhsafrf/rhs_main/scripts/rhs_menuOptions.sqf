// optic part
{lbAdd [2821,_x]}foreach ["2D","3D","PiP"];
lbSetCurSel [2821,(profileNamespace getVariable ["rhs_preferedOptic",0])];

// dynamic object drawing part
{lbAdd [2822,_x]}foreach ["Off","Object","Terrain"];
lbSetCurSel [2822,(profileNamespace getVariable ["rhs_dynamicObjectDistance",0])];

// UI options
{lbAdd [2824,_x]}foreach ["Normal","No cross","Minimal"];
lbSetCurSel [2824,(profileNamespace getVariable ["RHS_UI_Targeting_Level",0])];

private _di=
[
	["D: Next CM Mode","nextCM"],
	["D: Next CM Mode","nextCM"],
	["D: Optics Mode","opticsMode"],
	["D: Lase Range","gunElevAuto"],
	["D: Switch gunner weapon","switchGunnerWeapon"]
];
private _dv=
[
	["D: Binocular","Binocular"],
	["D: Zeroing Up","ZeroingUp"],
	["D: Zeroing Down","ZeroingDown"],
	["D: Lase Range","gunElevAuto"],
	["D: Throw","Throw"],
	["D: Handbrake","CarHandBrake"],
	["D: Swim Down","SwimDown"]
];
private _hi=
[
	"rhs_key_wpn_int",
	"rhs_key_acc_int",
	"rhs_key_opt_int",
	"rhs_key_lase_int",
	"rhs_key_safe_int"
];
private _hv=
[
	"rhs_key_opn_cmp",
	"rhs_key_rng_up",
	"rhs_key_rng_dwn",
	"rhs_key_lase_tgt",
	"rhs_key_dmp_lead",
	"rhs_key_nxt_rnd",
	"rhs_key_mode_chng"
];

private _pi=
[
	(profileNamespace getVariable ["rhs_key_wpn_int","nextCM"]),
	(profileNamespace getVariable ["rhs_key_acc_int","nextCM"]),
	(profileNamespace getVariable ["rhs_key_opt_int","opticsMode"]),
	(profileNamespace getVariable ["rhs_key_lase_int","gunElevAuto"]),
	(profileNamespace getVariable ["rhs_key_safe_int","switchGunnerWeapon"])
];
private _pv=
[
	(profileNamespace getVariable ["rhs_key_opn_cmp","Binocular"]),
	(profileNamespace getVariable ["rhs_key_rng_up","ZeroingUp"]),
	(profileNamespace getVariable ["rhs_key_rng_dwn","ZeroingDown"]),
	(profileNamespace getVariable ["rhs_key_lase_tgt","gunElevAuto"]),
	(profileNamespace getVariable ["rhs_key_dmp_lead","Throw"]),
	(profileNamespace getVariable ["rhs_key_nxt_rnd","CarHandBrake"]),
	(profileNamespace getVariable ["rhs_key_mode_chng","SwimDown"])
];

private _r=1500;
private _tx="";

{_tx=format["%1 - %2",_x select 0,actionKeysNames (_x select 1)]; lbAdd [_r, _tx];_r=_r+1 }foreach _di;

_r=1600;
{_tx=format["%1 - %2",_x select 0,actionKeysNames (_x select 1)]; lbAdd [_r, _tx];_r=_r+1 }foreach _dv;

_r=0;

for "_i" from 1500 to 1504 do
{

	if( (_pi select _r) == ((_di select _r) select 1 ) )then{lbSetCurSel [_i,0]};
	for "_k" from 1 to 20 do
	{
		_tx=format["user%1",_k];
		_tx=format["User Action %1 - %2",_k,actionKeysNames _tx];
		lbAdd [_i,_tx];

		if((_pi select _r) == (format["user%1",_k]) )then{lbSetCurSel [_i,_k+1]};
	};
	_r=_r+1;
};
_r=0;
for "_i" from 1600 to 1606 do
{

	if( (_pv select _r) == ((_dv select _r) select 1 ) )then{lbSetCurSel [_i,0]};
	for "_k" from 1 to 20 do
	{
		_tx=format["user%1",_k];
		_tx=format["User Action %1 - %2",_k,actionKeysNames _tx];
		lbAdd [_i,_tx];

		if((_pv select _r) == (format["user%1",_k]) )then{lbSetCurSel [_i,_k+1]};
	};
	_r=_r+1;
};

rhs_options_comboChng=[];
private _htmp=_hi;
private _dtmp=_di;
while{dialog}do
{
	if(count rhs_options_comboChng >0)then
	{
		_idx=( (ctrlIDC (rhs_options_comboChng select 0) )-1500);
		_htmp=_hi;
		_dtmp=_di;
		if((rhs_options_comboChng select 1) == 0)then
		{
			if(_idx >= 100)then{
				_htmp=_hv;
				_dtmp=_dv;
				_idx=_idx-100;
			};
			profileNamespace setVariable [(_htmp select _idx) ,(_dtmp select _idx) select 1];
			_tx=format["%1_GLB",(_htmp select _idx)];
			if(!isNil format["%1",_tx])then{ call compile format["%1 = '%2'",_tx,((_dtmp select _idx) select 1 )]; };

		}else{
			if(_idx >= 100)then{
				_htmp=_hv;
				_idx=_idx-100;
			};
			//diag_log format["%1 %2 %3 %4",_idx,_htmp,_dtmp,rhs_options_comboChng];
			profileNamespace setVariable [ (_htmp select _idx) ,format["user%1",rhs_options_comboChng select 1] ];
			_tx=format["%1_GLB",(_htmp select _idx)];
			if(!isNil format["%1",_tx])then{call compile format["%1 = 'user%2' ",_tx,rhs_options_comboChng select 1];};
		};
		rhs_options_comboChng =[];
	};
	sleep 0.1;
};
rhs_options_comboChng=nil;
saveProfileNamespace;