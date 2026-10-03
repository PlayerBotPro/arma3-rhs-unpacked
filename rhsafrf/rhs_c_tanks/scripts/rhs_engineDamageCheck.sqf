/*
	Engine start delay script

	i:	EH "Engine" + _delay var
		_v - vehicle
		_s - engine state [0/1 - on/off]
		_delay - engine startup time

	a: reyhard
*/
params["_vehicle","_state"];


if(_state isEqualTo 1)then
{
	private _destructionEffects = allMissionObjects "#destructioneffects";
	_de
};