/*
a: reyhard

door handling script
while doors are opened by action make sure they stay in such state
*/

if(_this select 1 == "cargo")then
{
	private["_v"];
	_v = _this select 0;

	[_v,"LeftDoor",3.5] spawn rhs_fnc_rus_doorHandler;
};