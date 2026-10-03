/*
	autoloader animations handling

	i: EH fired input
	o: -

	a: reyhard
*/


params["_v","","","","_ammo"];

if (_ammo isKindOf 'M_Titan_AT') then {
	_V animateDoor ["recoil_source",1,true];
	_V animateDoor ["recoil_source",0];
};

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

		if(time>_timeOut)exitWith{};

		if((_v animationPhase "reload_handler") isEqualTo 0)then{
			_magAnim ="reload_handler_magazine";
		};
		waitUntil {(_v animationPhase _magAnim)< 0.87};
		if(!alive _v)exitWith{};

		//autoloader sets gun at angle of 5 degrees
		_v animate ["RHS_T80B_autoloader",-(_v animationPhase "RHS_T80B_MainGun")+0.09];

		waitUntil {(_v animationPhase _magAnim)< 0.09};

		_v animate ["RHS_T80B_autoloader",0];
	};
};