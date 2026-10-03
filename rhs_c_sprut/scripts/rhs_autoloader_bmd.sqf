/*
	autoloader animations handling

	i: EH fired input
	o: -

	a: reyhard
*/

params["_v","","","","_ammo"];

if (_ammo isKindOf 'rhs_ammo_3UOF17') then {
	//not necessary as it handles only those guns which has muzzleEffect defined
	//_this call (uinamespace getvariable 'BIS_fnc_effectFired');

	_v spawn {
		params["_v"];
		sleep 0.7;
		//autoloader sets gun at angle of 3 degrees
		//source: http://fofanov.armor.kiev.ua/Tanks/EQP/al-72.html
		_v animate ["autoloader",-(_v animationPhase "maingun")-0.08];

		waitUntil {(_v animationPhase "Recoil")< 0.69};

		private _p3d = "\rhsafrf\addons\rhs_c_heavyweapons\rhs_casing_100mm";

		private _shposmem1 = _v selectionPosition ["ejector_pos", "memory"];
		private _shposmem2 = _v selectionPosition ["ejector_dir", "memory"];

		private _ejectWorldPos = _v modelToWorldVisual _shposmem1;
		private _ejectWorldDir = _v modelToWorldVisual _shposmem2;

		private _vector = [((_ejectWorldDir select 0) - (_ejectWorldPos select 0))*29, ((_ejectWorldDir select 1) - (_ejectWorldPos select 1))*29, 4+random 1];

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
		   1, 6, 1, 0, //roation velocity, weight, volume, rubbing
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
		    0.3 //bounce on surface
		];
		_particle setDropInterval 60;
		waitUntil {(_v animationPhase "Recoil")< 0.09};

		_v animate ["autoloader",0];
		deleteVehicle _particle;
	};
};