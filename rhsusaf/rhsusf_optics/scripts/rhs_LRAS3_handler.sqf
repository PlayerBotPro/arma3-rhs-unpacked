/*
Long Range Advanced Scout Sensor System (LRAS3) FCS handler

Advanced optic system that gets Far Target Location (FTL) information (range, target position, self position)
upon lase of a potential target. 

a: Ballistic09
*/
disableSerialization;

uiNameSpace setVariable ["RHS_LRAS3_Ctrl",_this select 0];

[] spawn
{
	disableSerialization;
	
	private["_p","_v","_c","_modeCtrl","_timeCtrl","_rngCtrl","_sPosCtrl","_tPosCtrl",/*"_azCtrl",*/"_elCtrl","_mode","_el","_tgtGrid","_laseTime","_sPos","_tgtPos"];
	
    _p = call rhsusf_fnc_findPlayer;
    _v = vehicle _p;

	_c = uiNamespace getVariable "RHS_LRAS3_Ctrl";

	//--- Display Controls ---//
	//FLIR mode
	_modeCtrl = (_c displayCtrl 1000);
	//Time
	_timeCtrl = (_c displayCtrl 1001);
	//Range
	_rngCtrl = (_c displayCtrl 1003);
	//Self Pos
	_sPosCtrl = (_c displayCtrl 1002);
	//Tgt Pos
	_tPosCtrl = (_c displayCtrl 1004);
	//Azimuth
	//_azCtrl = (_c displayCtrl 1005);
	//Elevation
	_elCtrl = (_c displayCtrl 1006);
	// FOV
	private _fov =  (_c displayCtrl 154);
	
	private _opticModel	= _c displayCtrl 901;
	
	
	//--- Hidden Displays ---//
	//Mode
	_mode = (_c displayCtrl 153);
	//Elevation
	_el = (_c displayCtrl 175); //Elevation of turret relative to vehicle
	//_el = (_c displayCtrl 182); //Elevation relative to ground, but bugged...
	
	//Target Grid
	_tgtGrid = (_c displayCtrl 172);
	//Range
	_rng = (_c displayCtrl 151);
	
	//Laser rangefinder functionality stuff
	_laseTime = 0;
	rhs_key_lase_tgt_GLB=(profileNamespace getVariable ["rhs_key_lase_tgt","LockTarget"]);

	while{not(isNull _rng)}do
	{	
		if(cameraView == "gunner")then{
			//Update FLIR mode
			_modeCtrl ctrlSetText (format ["FLIR - %1", (ctrlText _mode) select [0,2]]);
			_v setUserMFDtext [1,ctrlText _modeCtrl];
			//Update Time
			_timeCtrl ctrlSetText ([daytime, "HH:MM"] call BIS_fnc_timeToString);
			//Update Elevation
			_elCtrl ctrlSetText str(round(parseNumber(ctrlText _el))); //Ugly. There has to be a better way to shave off that decimal...
			
			//On lase, update target and self position and notify shtora (RIP)
			if(inputAction rhs_key_lase_tgt_GLB >0)then{
				//2 second laser cooldown
				if(time > _laseTime + 2)then{
					_laseTime = time;
					_rngCtrl ctrlSetText (ctrlText _rng);
					call RHSUSF_fnc_laserTarget;
					_sPos = mapGridPosition _p;
					_sPosCtrl ctrlSetText (format ["%1   %2", _sPos select [0,3], _sPos select [3,3]]);
					_tgtPos = ctrlText _tgtGrid;
					if(_tgtPos != "----") then{
						_tPosCtrl ctrlSetText (format ["%1   %2", _tgtPos select [0,3], _tgtPos select [3,3]]);
					}else{
						_tPosCtrl ctrlSetText "";
					};
					_v setUserMFDtext [2,ctrlText _tPosCtrl];
				};
			};
			private _fovLevel = parseNumber (ctrlText _fov);
			_opticModel ctrlAnimateModel ["LRAS3_Scale",_fovLevel];
			_v setUserMFDvalue [1,_fovLevel];
		};
		
		_opticModel ctrlShow (cameraView isEqualTo "GUNNER");

		sleep 0.01;
	};

	uiNameSpace setVariable ["RHS_LRAS3_Ctrl",displayNull];
};
