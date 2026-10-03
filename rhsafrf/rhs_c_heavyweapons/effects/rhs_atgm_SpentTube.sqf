/*
	spent ATGM tube ejection upon reloading new tube
	hooked to reloaded EH
	a: reyhard
*/


params["_v","_w",["_oM",[1,1,1]],"_wT"];

// only for local vehicles
if(!local _v)exitWith{};

// launch script only when proper weapon is reloaded
if(_w == _wT)then{

	// no tube or changing mag? exit then
	if((_oM select 1) isEqualTo 1)exitWith{};

	_this spawn {
		params["_v","_w","","","_used","_anim","_animT"];


		private _time = time + 20;
		waitUntil {(_v animationPhase _anim < _animT) OR (time > _time)};
		//exit if vehicle is destroyed (timeout variant)
		if(!alive _v)exitWith{};

		// create tube
		private _tube = _used createVehicle [0,0,0];
		private _cp = AGLtoASL (_v modelToWorldVisual (_v selectionPosition "spent_tube"));
		private _cd = AGLtoASL (_v modelToWorldVisual (_v selectionPosition "spent_tube_dir"));

		_tube setposASL _cp;
		private _dir =  (_v modelToWorldVisual (_v selectionPosition "spice rakety"))
					vectorFromTo
				(_v modelToWorldVisual (_v selectionPosition "konec rakety"));
		_tube setVectorDirAndUp [
				_dir,
				_dir vectorCrossProduct [-(_dir select 1), _dir select 0, 0]
			];

		_tube setVelocity (_cp vectorFromTo _cd);

		//delete spent tube after 3 minutes
		sleep 180;
		deleteVehicle _tube;
	};
};