/*
	Dynamic object drawing handler

	Small loop for crews of helicopters and planes which enables near zero pixel object drawing which was optimization brought with Apex DLC.

	a: reyhard
*/

// exit if Dynamic Object Drawing is disabled
if(['INIT'] call RHS_fnc_dynamicObjectDrawing)exitWith{};

// vehicle which player is currently using
private _v = vehicle (call rhs_fnc_findPlayer);

// main loop, refresh rate 60s
while{ ((call rhs_fnc_findPlayer) in _v) && !(isNil "RHS_dynamicOD_count")}do
{
	// do something if number of vehicles ingame is changed
	if(count vehicles != RHS_dynamicOD_count)then
	{
		['CHANGE'] call RHS_fnc_dynamicObjectDrawing;
	};
	//hint format["loop: %1\ncount: %2",time, count vehicles];
	sleep 60;
};

// deinitialize function
//hint format["exit: %1\ncount: %2",time, count vehicles];
['END'] call RHS_fnc_dynamicObjectDrawing;

