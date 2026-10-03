/*
a: reyhard
i:
	0: vehicle
	1: phase

folding/unfolding helicopter rotors
*/

params["_v","_p"];

if(_p isEqualTo 0)then{
	_v setFuel (_v getVariable ["rhs_heli_fuel",1]);
}else{
	_v setVariable ["rhs_heli_fuel",fuel _v,true];
	_v setFuel 0;
};

{_v animate [_x,_p,true]}foreach ["mainrotor_folded","mainrotor_unfolded","rotorshaft_unfolded"];