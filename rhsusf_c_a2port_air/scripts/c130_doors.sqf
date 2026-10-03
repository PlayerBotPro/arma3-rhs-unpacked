/*
a: reyhard

door handling script
while doors are opened by action make sure they stay in such state
*/

if(_this select 1 == "cargo")then
{
	private["_v"];
	_v = _this select 0;

	if(_v getVariable ["doorhandler_R",0] ==1)then
	{
		_v animateDoor ["door_2_2",1];
	}else{
		if(_v doorPhase "door_2_2" !=0)then
		{
			[_v,"door_2_2"] spawn rhs_fnc_doorHandler;
		};
	};
	if(_v getVariable ["doorhandler_L",0] ==1)then
	{
		_v animateDoor ["door_2_1",1];
	}else{
		if(_v doorPhase "door_2_1" !=0)then
		{
			[_v,"door_2_1"] spawn rhs_fnc_doorHandler;
		};

	};

};