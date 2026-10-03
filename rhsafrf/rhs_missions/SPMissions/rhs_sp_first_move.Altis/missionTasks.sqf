/* First LONG, then SHORT, last SUPER-SHORT */

case "briefing" : {

	if (_taskState == "") then {
		[
			player,
			_taskID,
			[
				"Be briefed by the Lt. Colonel Bradley.",
				"Be briefed.",
				"BRIEF"
			],
			getMarkerPos "Mrk_TOC",
			true
		] call BIS_fnc_taskCreate;
	} else {
		[_taskID, _this] call BIS_fnc_taskSetState;
	};

};

case "move" : {

	if (_taskState == "") then {
		[
			player,
			_taskID,
			[
				"Move to over-watch position.",
				"Move to position.",
				"MOVE"
			],
			getMarkerPos "Mrk_move",
			true
		] call BIS_fnc_taskCreate;
	} else {
		[_taskID, _this] call BIS_fnc_taskSetState;
	};

};

case "seize" : {

	if (_taskState == "") then {
		[
			player,
			_taskID,
			[
				"Seize the village of Panagia.",
				"Seize Panagia.",
				"SEIZE"
			],
			getMarkerPos "Mrk_seize",
			true
		] call BIS_fnc_taskCreate;
	} else {
		[_taskID, _this] call BIS_fnc_taskSetState;
	};

};

case "clear" : {

	if (_taskState == "") then {
		[
			player,
			_taskID,
			[
				"Clear the last resistance.",
				"Clear last resistance.",
				"CLEAR"
			],
			getMarkerPos "Mrk_clear",
			true
		] call BIS_fnc_taskCreate;
	} else {
		[_taskID, _this] call BIS_fnc_taskSetState;
	};

};