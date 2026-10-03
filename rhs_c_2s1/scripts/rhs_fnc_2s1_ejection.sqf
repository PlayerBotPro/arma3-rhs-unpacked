/*
	autoloader animations handling

	i: EH fired input
	o: -

	a: reyhard
*/


params["_v","","","","_ammo"];

if (_ammo isKindOf 'ShellBase') then {
	//not necessary as it handles only those guns which has muzzleEffect defined
	//_this call (uinamespace getvariable 'BIS_fnc_effectFired');
	_v spawn {
		params["_v"];

		_V animateDoor ["recoil_source",1,true];
		_V animateDoor ["recoil_source",0];

		sleep 0.1;
		//5 minutes timeout - in case vehicle is destroyed or whatever
		private _timeOut=time+300;

		private _magAnim= "reload_handler";
		waitUntil { (( (_v animationPhase _magAnim)< 0.98) OR ( time>_timeOut) ) };

		if(time>_timeOut)exitWith{hint "timeout"};

		if((_v animationPhase "reload_handler") isEqualTo 0)then{
			_magAnim ="reload_handler_magazine";
		};
		waitUntil {(_v animationPhase _magAnim)< 0.69};
		if(!alive _v)exitWith{};

		private _p3d = "\rhsafrf\addons\rhs_c_heavyweapons\rhs_casing_122mm";

		private _shposmem1 = _v selectionPosition ["ejector_pos", "memory"];
		private _shposmem2 = _v selectionPosition ["ejector_dir", "memory"];

		private _ejectWorldPos = _v modelToWorldVisual _shposmem1;
		private _ejectWorldDir = _v modelToWorldVisual _shposmem2;

		private _vector = [((_ejectWorldDir select 0) - (_ejectWorldPos select 0))*12, ((_ejectWorldDir select 1) - (_ejectWorldPos select 1))*12, 1+random 1];

		private _particle = "#particlesource" createVehicleLocal _ejectWorldPos;
		_particle setParticleClass "RHS_tank_Catridge";
		_particle setParticleParams
		[
			[_p3d, 1, 0, 1], //shape name
			"", //animation name
		 	"SpaceObject", //type
		  	1, 42.5, //timer period & life time
		   [0, 0, 0], //position
		   _vector, //moveVelocity
		   0.6, 9, 1, 0.2, //roation velocity, weight, volume, rubbing
		   [1, 1], //size
		   [[0.9,0.9,0.9,1]], //color
		   [1000], //animationPhase (animation speed in config)
		   0.1, //randomdirection period
		   0.05, //random direction intensity
		    "", //onTimer
		    "", //befor destory
		    _ejectWorldDir, //object
		    0, //angle
		    true, //on surface
		    0.2 //bounce on surface
		];
		_particle setDropInterval 60;
		waitUntil {(_v animationPhase _magAnim)< 0.09};

		_v animate ["autoloader",0];
		deleteVehicle _particle;
	};
};