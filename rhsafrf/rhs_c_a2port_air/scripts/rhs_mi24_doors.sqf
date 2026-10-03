/*
a: reyhard

door handling script
while doors are opened by action make sure they stay in such state
*/

if(_this select 1 == "cargo")then
{
	params["_v"];

	[_v,"Door_cargo",3.5] spawn rhs_fnc_rus_doorHandler;
};