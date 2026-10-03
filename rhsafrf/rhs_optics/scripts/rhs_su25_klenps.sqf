
if(not(isNull (uiNamespace getVariable ["RHS_Su25_KlenPS_Ctrl",displayNull])))exitWith{};

uiNameSpace setVariable ["RHS_Su25_KlenPS_Ctrl",_this select 0];

disableSerialization;
private _p = call rhs_fnc_findPlayer;
private _v = vehicle _p;

private _c = uiNamespace getVariable "RHS_Su25_KlenPS_Ctrl";

private _laserOn		= (_c displayCtrl 158);
private _cooldown = 0;
private _selectedWeapon = "";
private _laserActive = false;
private _refreshTick = 0;
private _laserPos = [0,0,0];
private _disengageLaser = false;


while{!(isNull _laserOn)}do
{
	if(_laserActive)then
	{
		// laser cooldown
		// automaticly disengage laser if no reflection is found
		if((time > _cooldown) OR (inputAction "vehLockTargets" > 0) or (isNull laserTarget _v) or _disengageLaser)then
		{
			_selectedWeapon = currentWeapon _v;
			_p forceWeaponFire ["rhs_weap_klen_ps","rhs_weap_klen_ps"];
			_v selectWeapon _selectedWeapon;
			_laserActive = false;
			// restart camera
			_v setPilotCameraTarget objNull;
			_v setPilotCameraRotation [0,0];

			// launch allowed & disengage lights
			_v setUserMFDvalue [1,0];
			_v setUserMFDvalue [4,0];

			_v setUserMFDvalue [0,1];
			// cool down time dependent on work time
			switch(true)do
			{
				case (_cooldown - time > 45): {sleep 15;};
				case (_cooldown - time > 30): {sleep 30;};
				default
				{
					sleep 60;
				};
			};

			_disengageLaser = false;
			_v setUserMFDvalue [0,0];
		};

		// current pilot camera rotation in degrees
		private _rot = (getPilotCameraRotation _v) apply {deg _x};

		// cross movement in internal view
		if( (getPilotCameraTarget _v) select 0)then
		{
			private _pos = (getPilotCameraTarget _v) select 1;

			// calculate vector to world
			_relDir = (getdir _v) - (_rot select 0);
			if(_relDir > 360)then{_relDir = _relDir - 360};
			if(_relDir < 0)then{_relDir = _relDir + 360};
			// grab input, transform it to vector & rotate it in 2d space
			_vec = [[(inputAction "user16" - inputAction "user15")*1.25,(inputAction "user17" - inputAction "user18")*1.55] ,-(_relDir)] call BIS_fnc_rotateVector2D;
			_vec = [_vec select 0,_vec select 1,0];
			// apply vector to current locked position
			_pos = _pos vectorAdd _vec;

			// update pos only if position was changed
			// this way lock won't be accidentialy broken
			if(not(_pos isEqualTo  ( (getPilotCameraTarget _v) select 1)))then
			{
				_v setPilotCameraTarget _pos;
			};

			private _laserDist = ((laserTarget _v) distance _v);
			_v setUserMFDvalue [4,_laserDist];
			// launch allowed & disengage lights
			if(_laserDist > 800)then{
				if(_laserDist < 8000)then{
					_v setUserMFDvalue [1,1];
				}else{
					_v setUserMFDvalue [1,0];
				};
			}else{
				_v setUserMFDvalue [1,-1];
			};

			// turn off grid lock
			if(inputAction "vehLockTurretView" > 0)then
			{
				_v setUserMFDvalue [1,0];
				_v setPilotCameraTarget objNull;
				waitUntil {inputAction "vehLockTurretView" isEqualTo 0};
			};
			if((laserTarget _v distance (ASLToAGL _laserPos)) > 100)then
			{
				_disengageLaser = true;
			};
		}else{
			// rotate pilot camera
			_v setPilotCameraRotation [rad((_rot select 0) + (inputAction "user15" - inputAction "user16")*0.15),rad((_rot select 1) + (inputAction "user18" - inputAction "user17")*0.15)];

			// engage grid lock
			if(inputAction "vehLockTurretView" > 0)then
			{
				_laserPos = (getposASL laserTarget _v);
				_v setPilotCameraTarget (getposASL laserTarget _v);
				waitUntil {inputAction "vehLockTurretView" isEqualTo 0};
			};
		};
	}else{
		// activate laser
		if(inputAction "vehLockTargets" > 0)then
		{
			waitUntil {inputAction "vehLockTargets" isEqualTo 0};
			_selectedWeapon = currentWeapon _v;
			_p forceWeaponFire ["rhs_weap_klen_ps","rhs_weap_klen_ps"];
			_v selectWeapon _selectedWeapon;
			_laserActive = true;
			sleep 0.1;
			_cooldown = time + 60;
		};
	};
	if(time > _refreshTick)then
	{
		if(_v animationSourcePhase "rpm" isEqualTo 1)then
		{
			private _throttleValue = _v animationSourcePhase "throttle";
			if(!(_v animationSourcePhase "throttle_source" isEqualTo _throttleValue))then{_v animateSource ["throttle_source",_throttleValue]};
		}else{
			if(_v animationSourcePhase "throttle_source" != 0)then{_v animateSource ["throttle_source",0]};
		};
		_refreshTick = time + 1;
	};
	sleep 0.01;
};

uiNameSpace setVariable ["RHS_Su25_KlenPS_Ctrl",displayNull];