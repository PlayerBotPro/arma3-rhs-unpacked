params [
	"_shooter",
	"_grenade"
];

// Exit on bad input
if (not( local _shooter)) exitWith {};

// Generate event ID
private _pfh				= "RHS_pfh_rgno_" + str _grenade;
private _fuseTime			= getArray (configFile >> "cfgAmmo" >> typeOf _grenade >> "rhs_fuseTime");
private _selfDestructTime	= getArray (configFile >> "cfgAmmo" >> typeOf _grenade >> "rhs_selfDestructTime");

// On each frame
[_pfh, "onEachFrame", {
	params ["_timeToArm","_timeToSelfdestruct","_grenade","_shooter","_pfh"];

	if(!alive _grenade)exitWith
	{
		[_pfh, "onEachFrame"] call BIS_fnc_removeStackedEventHandler;
	};

	// Replace to armed model
	// Fuse time is randomized in 1 to 1.8s range delay
	if(time >= _timeToArm)then
	{
		private _velocity		= velocity _grenade;
		private _vectorDir		= vectorDir _grenade;
		private _vectorUp		= vectorUp _grenade;
		private _position		= getPosASLVisual _grenade;
		private _submunition	= getText (configFile >> "cfgAmmo" >> typeOf _grenade >> "rhs_submunition");

		// Grenade is deleted in next frame - we need to quickly move old one to [0,0,0] coord to avoid collision with newly created grenade
		_grenade setPosASL [0,0,0];
		deleteVehicle _grenade;

		_grenade = createVehicle [_submunition,ASLToAGL(_position),[],0,"CAN_COLLIDE"];;
		_grenade setPosASL _position;
		_grenade addForce [_velocity vectorMultiply 0.25,[0,0,0]];
		_grenade addTorque [100,0,0];
		_grenade setVelocity _velocity;
		_grenade setVectorDirAndUp [_vectorDir,_vectorUp];

		[_grenade,[vehicle _shooter,_shooter]]  remoteExecCall ["setShotParents",2];

		_this set [0,time+999];
		_this set [2,_grenade];
	};

	// Exit after 4 seconds - fuse safety
	if(time >= _timeToSelfdestruct)then
	{
		private _position		= getPosASLVisual _grenade;
		private _submunition	= getText (configFile >> "cfgAmmo" >> typeOf _grenade >> "rhs_submunition");

		deleteVehicle _grenade;

		_grenade =  createVehicle [_submunition,ASLToAGL(_position),[],0,"CAN_COLLIDE"];
		_grenade setPosASL _pos;
		[_grenade,[vehicle _shooter,_shooter]]  remoteExecCall ["setShotParents",2];

		[_pfh, "onEachFrame"] call BIS_fnc_removeStackedEventHandler;
	};

}, [time+random(_fuseTime),time+random(_selfDestructTime), _grenade,_shooter, _pfh]] call BIS_fnc_addStackedEventHandler;