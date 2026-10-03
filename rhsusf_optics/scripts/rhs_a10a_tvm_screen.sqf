#define POS_X 25.9 * 		(0.01875 * SafezoneH)
#define POS_Y 18.8 * 		(0.025 * SafezoneH)
#define SIZE_C 1.8 *   (0.01875 * SafezoneH),1.8 *   (0.025 * SafezoneH)

if(not(isNull (uiNamespace getVariable ["RHS_A10A_Ctrl",displayNull])))exitWith{};

uiNameSpace setVariable ["RHS_A10A_Ctrl",_this select 0];

disableSerialization;
private _p = call rhs_fnc_findPlayer;
private _v = vehicle _p;

private _c = uiNamespace getVariable "RHS_A10A_Ctrl";

private _cross			= (_c displayCtrl 1);
private _bgr			= (_c displayCtrl 2);
private _currentMode	= (_c displayCtrl 180);

private _bgrPos = ctrlPosition _bgr;

//systemChat "start";

["rhs_a10a_tvm_pfm", "onEachFrame",
{
	params["_p","_v","_tick","_tick2","_delay","_cross","_bgr","_currentMode","_visMode","_trackMode","_mavEnabled","_zoomLvl","_maverickChange","_bgrPos","_showHint"];

	if(isNull _bgr)exitWith
	{
		uiNameSpace setVariable ["RHS_A10A_Ctrl",displayNull];
		["rhs_a10a_tvm_pfm", "onEachFrame"] call BIS_fnc_removeStackedEventHandler;
	};

	if(time > _tick)then
	{
		// current pilot camera rotation in degrees
		private _rot = (getPilotCameraRotation _v) apply {deg _x};
		private _maverickCount = {(_x select 0) isKindOf ["rhs_mag_agm65",configFile >> "cfgMagazines"] && (_x select 1) > 0} count (magazinesAmmo _v);

		if(cameraView == "GUNNER")then
		{
			private _curVisMode = currentVisionMode _p;
			// check if vision mode was changed
			if((_curVisMode != _visMode) OR (_maverickCount != _maverickChange))then
			{
				_this set [8,_curVisMode];
				_this set [11,_maverickCount];
				// first time turn on due to view mode bug
				if((currentVisionMode _p isEqualTo 2) && (_maverickCount > 0))then
				{
					_bgr ctrlSetPosition [0,0,0,0];
					_bgr ctrlCommit 0;
					_v animateSource ["Hide_Monitor",1,true];
					_v setObjectTexture [3,"#(argb,512,512,1)r2t(transportpipviewdriver,1.0)"];
					_this set [10,true];
				}else{
					_bgr ctrlSetPosition _bgrPos;
					_bgr ctrlCommit 0;
					_v animateSource ["Hide_Monitor",0,true];

					// One time hint about necessity to activate TI
					if(_showHint)then
					{
						hint format["Press %1 to activate TVM camera",actionKeysNames "nightVision"];
						_this set [14,false];
					};
				};
			};
			//hintSilent format["zoom %1 m1 %2 m2 %2",parseNumber ctrlText _currentMode,ctrlShown _lockGround,ctrlShown _lockPoint];
			// check if zoom changed
			// if yes, change cross type depending on zoom level
			private _curZoomLvl = parseNumber (ctrlText _currentMode);
			if(_curZoomLvl != _zoomLvl)then
			{
				_this set [11,_curZoomLvl];
				if(_curZoomLvl > 3)then
				{
					_v setObjectTexture [2,"\rhsusf\addons\rhsusf_a2port_air\a10\data\rhs_tvm6_ca.paa"];
				}else{
					_v setObjectTexture [2,"\rhsusf\addons\rhsusf_a2port_air\a10\data\rhs_tvm3_ca.paa"];
				};
			};
			// cross movement
			_cross ctrlSetPosition [(-( (_rot select 0))/3.68+25.9) * (0.01875 * SafezoneH),(( (_rot select 1))/4+18.8) * (0.025 * SafezoneH), SIZE_C];
			_cross ctrlCommit 0.0;
			//(uiNamespace getVariable "RHS_A10A_Ctrl" displayCtrl 1) ctrlSetPosition [9.8 *   (0.01875 * Safezoneh),3.8 *   (0.025 * SafezoneH),1.8 *   (0.01875 * SafezoneH),1.8 *   (0.025 * SafezoneH)];(uiNamespace getVariable "RHS_A10A_Ctrl"    displayCtrl 1) ctrlCommit 1;
			if( (getPilotCameraTarget _v) select 0)then
			{
				// cross is flashing when valid lock is applied
				if(time>_delay)then
				{
					if(ctrlText _cross isEqualTo "")then{
						_cross ctrlSetText "\rhsusf\addons\rhsusf_a2port_air\A10\data\rhs_tvm_cross_ca.paa";
					}else{
						_cross ctrlSetText "";
					};
					_this set [4,time + 0.5];
					if(_v animationSourcePhase "tvm_locked" isEqualTo 0)then{ _v animateSource ["tvm_locked",1,true]};
				};
			}else{
				//
				if(_v animationSourcePhase "tvm_locked" isEqualTo 1)then{
					_v animateSource ["tvm_locked",0,true];
					_cross ctrlSetText "\rhsusf\addons\rhsusf_a2port_air\A10\data\rhs_tvm_cross_ca.paa";
				};
			};
		}else{
			// cross movement in internal view
			if( (getPilotCameraTarget _v) select 0)then
			{
				private _pos = (getPilotCameraTarget _v) select 1;

				// calculate vector to world
				_relDir = (getdir _v) - (_rot select 0);
				if(_relDir > 360)then{_relDir = _relDir - 360};
				if(_relDir < 0)then{_relDir = _relDir + 360};
				// grab input, transform it to vector & rotate it in 2d space
				_vec = [[(inputAction "user16" - inputAction "user15")*1.25,(inputAction "user17" - inputAction "user18")*2.25] ,-(_relDir)] call BIS_fnc_rotateVector2D;
				_vec = [_vec select 0,_vec select 1,0];
				// apply vector to current locked position
				_pos = _pos vectorAdd _vec;

				// update pos only if position was changed
				// this way lock won't be accidentialy broken
				if(not(_pos isEqualTo  ( (getPilotCameraTarget _v) select 1)))then
				{
					_v setPilotCameraTarget _pos;
				};
			}else{
				_v setPilotCameraRotation [rad((_rot select 0) + (inputAction "user15" - inputAction "user16")*0.35),rad((_rot select 1) + (inputAction "user18" - inputAction "user17")*0.35)];
			};
		};

		// disable PiP if no mavericks are available
		if(_maverickCount isEqualTo 0)then
		{
			if(_mavEnabled)then{_v setObjectTexture [3,"#(argb,8,8,3)color(0,0,0,1.0,CO)"];_this set [10,false];_this set [8,0];};
		};

		_this set [2, time + 0.01];
	};

	if(time > _tick2)then
	{
		private _source = _v animationSourcePhase "throttle";
		if(_source != (_v animationSourcePhase "throttle_source"))then{_v animateSource ["throttle_source",_source]};
		_this set [3, time + 1];
	};
}, [_p,_v,time,time,time,_cross,_bgr,_currentMode,-1,false,false,0,0,_bgrPos,true]] call BIS_fnc_addStackedEventHandler;