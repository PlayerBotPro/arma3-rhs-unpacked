/*
Moving cockpit map script
original idea by John_Spartan
rewritten by reyhard
*/

params["_plane"];

private _MAPdata = floor random 2;

[_plane,_MAPdata] spawn rhs_fnc_pakfa_mapData;

_plane animate ["display2_switch",(_MAPdata + 1)];

while {((call rhs_fnc_findPlayer) in _plane)} do
{
	if ((isengineon _plane) && {cameraView isEqualTo "INTERNAL"} && {_plane animationPhase "display2_switch" != 0} ) then
	{
		//hint format[ "updated map %1",time];
		private _pos = getpos _plane;
		_pos resize 2;
		_pos = _pos apply {(round _x)/worldSize};

		_plane animate ["Display_Glonass_Map_X",_pos select 0];
		_plane animate ["Display_Glonass_Map_Y",_pos select 1];
	};

	sleep 0.1;
};

