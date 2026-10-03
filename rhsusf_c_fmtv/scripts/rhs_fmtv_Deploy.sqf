/*
a: reyhard

i:
_v - vehicle
_src - animation source
_p - phase (0 - deploy,1 - fold)
_t - (optional) type of anim - instant or not

FMTV deployment script
remove fuel & deploy shelter
*/

params[
	"_v",
	"_Src",
	"_p",
	["_t",false,[false]]
];

if(_p isEqualTo 1)then{
	_v setVariable ["rhs_fmtv_fuel",fuel _v,true];
	_v setFuel 0;
	_v animateSource [_Src,1,_t];

	//tfar compatibility
	_v setVariable ["tf_range", 50000, true]
}else{
	_f = _v getVariable ["rhs_fmtv_fuel",1];
	_v setFuel _f;
	_v animateSource [_Src,0,_t];

	//tfar compatibility
	_v setVariable ["tf_range", 10000, true]
};

/*
to add new deploy EH:
_fnc = (_v getVariable ["rhs_eh_fmtv_deploy",[]]) append ["yourfunctionName"];
_v setVariable ["rhs_eh_fmtv_deploy",_fnc];
*/
{_this call (call (compile _x))}foreach (_v getVariable ["rhs_eh_fmtv_deploy",[]]);