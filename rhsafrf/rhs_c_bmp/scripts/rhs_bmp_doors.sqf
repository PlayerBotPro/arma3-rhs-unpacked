/*
a: reyhard

door handling script
while doors are opened by action make sure they stay in such state
*/

params["_v","_pos"];

if(_pos == "cargo")then
{
	if(_v doorPhase "doorR" !=0)then
	{
		[_v,"doorR",3.5] spawn rhs_fnc_rus_doorHandler;
	};
	if(_v doorPhase "doorL" !=0)then
	{
		[_v,"doorL",3.5] spawn rhs_fnc_rus_doorHandler;
	};
};