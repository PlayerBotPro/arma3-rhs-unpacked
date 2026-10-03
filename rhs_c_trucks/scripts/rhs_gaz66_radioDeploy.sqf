/*
a: reyhard

i:
_v - vehicle
_p - phase (1 - deploy,0 - fold)
_t - (optional) type of anim - instant or not

gaz-66 R-142 deployment script
remove fuel & deploy antena
*/

params[
	"_v",
	"_p",
	["_t",false,[false]]
];

if(_p isEqualTo 1)then{
	_v setVariable ["rhs_gaz66_fuel",fuel _v,true];
	_v setFuel 0;
	_v animateDoor ["mast_source",1,_t];

	//tfar compatibility
	_v setVariable ["tf_range", 50000, true]
}else{
	_f = _v getVariable ["rhs_gaz66_fuel",1];
	_v setFuel _f;
	_v animateDoor ["mast_source",0,_t];

	//tfar compatibility
	_v setVariable ["tf_range", 10000, true]
};

/*
to add new deploy EH:
_fnc = (_v getVariable ["rhs_eh_gaz66_deploy",[]]) append ["yourfunctionName"];
_v setVariable ["rhs_eh_gaz66_deploy",_fnc];
*/
{_this call (call (compile _x))}foreach (_v getVariable ["rhs_eh_gaz66_deploy",[]]);