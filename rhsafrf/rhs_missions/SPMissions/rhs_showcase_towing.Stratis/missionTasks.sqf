// PARENT TASKS

case "RHS_tskPreparation": 
{ 

// Children: "RHS_tskMoveToZU", "RHS_tskPrepareWeapon", "RHS_tskMoveWeapon", "RHS_tskAttachWeapon", "RHS_tskBoardTruck"

	[_taskID, "whiteboard"] call bis_fnc_taskSetType; 

	[
		player,
		_taskID,
		[
			"",	// 1% 
			"Prepare to move"	// 2%
		],
		nil, 
		"CREATED", 
		-1,
		false
	] call BIS_fnc_taskCreate

};

case "RHS_tskMoveToTrainingArea": 
{ 

// Children: 

	[_taskID, "whiteboard"] call bis_fnc_taskSetType;

	[
		player,
		_taskID,
		[
			"",	// 1%
			"Move to Training Area"	// 2%
		],
		nil,
		"CREATED",
		-1, 
		false
	] call BIS_fnc_taskCreate

};

case "RHS_tskPrepareForFiring": 
{ 

// Children: 

	[_taskID, "whiteboard"] call bis_fnc_taskSetType;

	[
		player,
		_taskID,
		[
			"",	// 1%
			"Firing Drill"	// 2%
		],
		nil,
		"CREATED",
		-1, 
		false
	] call BIS_fnc_taskCreate

};

// CHILD TASKS

case "RHS_tskMoveToZU": 
{

	if (
	
		!(_taskExists)
		
	) then {

		[_taskID, "default"] call bis_fnc_taskSetType;

		[
			player,
			[
				_taskID, "RHS_tskPreparation"
			],
			[
				"Go to ZU-23 parked behind the truck",	// 1%
				"Go to ZU-23"	// 2%
			],
			RHS_ZU23_Player,
			"ASSIGNED",
			0,
			true
		] call BIS_fnc_taskCreate
		
	} else {
	
		if (
		
			_this isEqualTo "Current"
		
		) then {
		
		_taskID call BIS_fnc_taskSetCurrent

		} else {

		[_taskID, _this] call BIS_fnc_taskSetState

		};
	};
};
case "RHS_tskPrepareWeapon": 
{

	if (
	
		!(_taskExists)
		
	) then {

		[_taskID, "interact"] call bis_fnc_taskSetType;

		[
			player,
			[
				_taskID, "RHS_tskPreparation"
			],
			[
				"Switch ZU-23 to moving mode",	// 1%
				"Prepare ZU-23"	// 2%
			],
			RHS_ZU23_Player,
			"ASSIGNED",
			0,
			true
		] call BIS_fnc_taskCreate
		
	} else {
	
		if (
		
			_this isEqualTo "Current"
		
		) then {
		
		_taskID call BIS_fnc_taskSetCurrent

		} else {

		[_taskID, _this] call BIS_fnc_taskSetState

		};
	};
};

case "RHS_tskMoveWeapon": {

	if (
	
		!(_taskExists)
		
	) then {

		[_taskID, "interact"] call bis_fnc_taskSetType;

		[
			player,
			[
				_taskID, "RHS_tskPreparation"
			],
			[
				"Move ZU-23 closer to the truck using Drag Heavy Weapon action", // 1%
				"Move ZU-23"	// 2%
			],
			RHS_helperAction,
			"ASSIGNED",
			0, 
			true
		] call BIS_fnc_taskCreate
		
	} else {
	
		if (
		
			_this isEqualTo "Current"
		
		) then {
		
		_taskID call BIS_fnc_taskSetCurrent

		} else {

		[_taskID, _this] call BIS_fnc_taskSetState

		};
	};
};

case "RHS_tskAttachWeapon": {

	if (
	
		!(_taskExists)
		
	) then {

		[_taskID, "attack"] call bis_fnc_taskSetType;

		[
			player,
			[
				_taskID, "RHS_tskPreparation"
			],
			[
				"Attach ZU-23 to your truck",	// 1%
				"Attach ZU-23"	// 2%
			],
			RHS_helperAction,
			"ASSIGNED",
			0,
			true
		] call BIS_fnc_taskCreate
		
	} else {
	
		if (
		
			_this isEqualTo "Current"
		
		) then {
		
		_taskID call BIS_fnc_taskSetCurrent

		} else {

		[_taskID, _this] call BIS_fnc_taskSetState

		};
	};
};


case "RHS_tskBoardTruck": {

	if (
	
		!(_taskExists)
		
	) then {

		[_taskID, "getin"] call bis_fnc_taskSetType;

		[
			player,
			[
				_taskID, "RHS_tskPreparation"
			],
			[
				"Board KrAZ-255B1 together with your comrade",	// 1%
				"Board truck"	// 2%
			],
			RHS_Kraz255_player,
			"ASSIGNED",
			0,
			true
		] call BIS_fnc_taskCreate
		
	} else {
	
		if (
		
			_this isEqualTo "Current"
		
		) then {
		
		_taskID call BIS_fnc_taskSetCurrent

		} else {

		[_taskID, _this] call BIS_fnc_taskSetState

		};
	};
};


case "RHS_tskMoveToTarget": {

	if (
	
		!(_taskExists)
		
	) then {

		[_taskID, "navigate"] call bis_fnc_taskSetType;

		[
			player,
			[
				_taskID, "RHS_tskMoveToTrainingArea"
			],
			[
				"Move east through the training area to live firing zone",	// 1%
				"Move to training area"	// 2%
			],
			rhs_trainingZone,
			"ASSIGNED",
			0,
			true
		] call BIS_fnc_taskCreate
		
	} else {
	
		if (
		
			_this isEqualTo "Current"
		
		) then {
		
		_taskID call BIS_fnc_taskSetCurrent

		} else {

		[_taskID, _this] call BIS_fnc_taskSetState

		};
	};
};

case "RHS_tskReattachWeapon": {

	if (
	
		!(_taskExists)
		
	) then {

		[_taskID, "use"] call bis_fnc_taskSetType;

		[
			player,
			[
				_taskID, "RHS_tskMoveToTrainingArea"
			],
			[
				"Attach ZU-23 to your truck",	// 1%
				"Reattach ZU-23"	// 2%
			],
			RHS_helperAction,
			"ASSIGNED",
			0,
			true
		] call BIS_fnc_taskCreate
		
	} else {
	
		if (
		
			_this isEqualTo "Current"
		
		) then {
		
		_taskID call BIS_fnc_taskSetCurrent

		} else {

		[_taskID, _this] call BIS_fnc_taskSetState

		};
	};
};


case "RHS_tskDetachWeapon": {

	if (
	
		!(_taskExists)
		
	) then {

		[_taskID, "getout"] call bis_fnc_taskSetType;

		[
			player,
			[
				_taskID, "RHS_tskMoveToTrainingArea"
			],
			[
				"Stop the truck and detach ZU-23",	// 1%
				"Detach ZU-23"	// 2%
			],
			RHS_helperAction,
			"ASSIGNED",
			0,
			true
		] call BIS_fnc_taskCreate
		
	} else {
	
		if (
		
			_this isEqualTo "Current"
		
		) then {
		
		_taskID call BIS_fnc_taskSetCurrent

		} else {

		[_taskID, _this] call BIS_fnc_taskSetState

		};
	};
};

case "RHS_tskMoveWeaponToFiringZone": {

	if (
	
		!(_taskExists)
		
	) then {

		[_taskID, "move"] call bis_fnc_taskSetType;

		[
			player,
			[
				_taskID, "RHS_tskPrepareForFiring"
			],
			[
				"Move ZU-23 to prepared firing area",	// 1%
				"Move up ZU-23"	// 2%
			],
			rhs_trainingZone,
			"ASSIGNED",
			0,
			true
		] call BIS_fnc_taskCreate
		
	} else {
	
		if (
		
			_this isEqualTo "Current"
		
		) then {
		
		_taskID call BIS_fnc_taskSetCurrent

		} else {

		[_taskID, _this] call BIS_fnc_taskSetState

		};
	};
};



case "RHS_tskUnfoldWeapon": {

	if (
	
		!(_taskExists)
		
	) then {

		[_taskID, "use"] call bis_fnc_taskSetType;

		[
			player,
			[
				_taskID, "RHS_tskPrepareForFiring"
			],
			[
				"Switch ZU-23 to static mode",	// 1%
				"Prepare ZU-23 for firing"	// 2%
			],
			RHS_ZU23_Player,
			"ASSIGNED",
			0,
			true
		] call BIS_fnc_taskCreate
		
	} else {
	
		if (
		
			_this isEqualTo "Current"
		
		) then {
		
		_taskID call BIS_fnc_taskSetCurrent

		} else {

		[_taskID, _this] call BIS_fnc_taskSetState

		};
	};
};


case "RHS_tskEngageTargets": {

	if (
	
		!(_taskExists)
		
	) then {

		[_taskID, "target"] call bis_fnc_taskSetType;

		[
			player,
			[
				_taskID, "RHS_tskPrepareForFiring"
			],
			[
				"Engage and destroy Pchela-1T UAV",	// 1%
				"Engage UAV"	// 2%
			],
			rhs_drone_01,
			"ASSIGNED",
			0,
			true
		] call BIS_fnc_taskCreate
		
	} else {
	
		if (
		
			_this isEqualTo "Current"
		
		) then {
		
		_taskID call BIS_fnc_taskSetCurrent

		} else {

		[_taskID, _this] call BIS_fnc_taskSetState

		};
	};
};




case "RHS_tskEngageTargets2nd": {

	if (
	
		!(_taskExists)
		
	) then {

		[_taskID, "target"] call bis_fnc_taskSetType;

		[
			player,
			[
				_taskID, "RHS_tskPrepareForFiring"
			],
			[
				"Engage and destroy 2nd Pchela-1T UAV",	// 1%
				"Engage 2nd UAV"	// 2%
			],
			rhs_drone_02,
			"ASSIGNED",
			0,
			true
		] call BIS_fnc_taskCreate
		
	} else {
	
		if (
		
			_this isEqualTo "Current"
		
		) then {
		
		_taskID call BIS_fnc_taskSetCurrent

		} else {

		[_taskID, _this] call BIS_fnc_taskSetState

		};
	};
};









