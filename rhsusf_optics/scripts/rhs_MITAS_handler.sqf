/*
Modified Improved Target Acquisition System (ITAS) FCS handler

TOW missile guidance system with advanced day and night optics, capable of target auto-tracking and 
gathering Far Target Location (FTL) information through the use of an integrated laser rangfinder and 
GPS reciever.

Same as ITAS sight, but without color changing UI elements.

Used by M1134 Stryker, & LAV-ATM gunners.

a: Ballistic09
*/
disableSerialization;

uiNameSpace setVariable ["RHS_MITAS_Ctrl",_this select 0];

[] spawn
{
	disableSerialization;
	
	private["_p","_v","_c","_fovMode","_rng",//Main vars
			"_modeTxt","_modeBox",//Mode vars
			"_stTxt","_stBox","_zmTxt",//State vars
			"_rngTxt",
			"_sght","_fov","_laseTime","_mode","_mag"];//Misc vars
	
    _p = call rhsusf_fnc_findPlayer;
    _v = vehicle _p;

	_c = uiNamespace getVariable "RHS_MITAS_Ctrl";

	//--- Display Controls ---//
	//Mode box text
	_modeTxt = (_c displayCtrl 1000);
	//Mode box border
	_modeBox = (_c displayCtrl 1001);
	//State box text
	_stTxt = (_c displayCtrl 1002);
	//State box border
	_stBox = (_c displayCtrl 1003);
	//Digital zoom level text
	_zmTxt = (_c displayCtrl 1004);
	//Range
	_rngTxt = (_c displayCtrl 1005);
	//Missile type icon
	_mslIcn = (_c displayCtrl 1006);
	//Missile type text
	_mslTxt = (_c displayCtrl 1007);
	
	//--- Hidden Displays ---//
	//FOV mode
	_fovMode = (_c displayCtrl 154);
	//Range
	_rng = (_c displayCtrl 151);
	
	//Laser rangefinder functionality stuff
	_laseTime = 0;
	rhs_key_lase_tgt_GLB=(profileNamespace getVariable ["rhs_key_lase_tgt","LockTarget"]);
	
	//Sight mode
	//_v setVariable ["rhsusf_ITAS_mode", "MANUAL\nENGAGE", false];
	_mode = "MANUAL\nENGAGE";
	//Optic
	_sght = "DAY";
	
	_mag  = currentMagazine _v;

	while{not(isNull _rng)}do
	{
		if(cameraView == "gunner")then{	
			//Make sure we're in an ITAS optic
			_fov = ctrlText _fovMode;
			if(!(_fov isEqualTo ""))then{
				//Update Mode box
				_modeTxt ctrlSetText _mode;  //TODO - Sight modes... Handle SURV mode AZ, EL, & time here?
				
				//Missile Indicator
				_mag = currentMagazine _v;
				switch(_mag)do{
					case "rhs_mag_TOW2a";
					case "rhs_mag_2Rnd_TOW2A": {	
													_mslTxt ctrlSetText "TOW 2A";
													_mslIcn ctrlSetText "\rhsusf\addons\rhsusf_optics\data\tex\ITAS\rhsusf_itas_tow_icon.paa";
												};
					case "rhs_mag_TOW2b";
					case "rhs_mag_TOW2b_aero";
					case "rhs_mag_2Rnd_TOW2B";
					case "rhs_mag_2Rnd_TOW2B_AERO": {	
														_mslTxt ctrlSetText "TOW 2B";
														_mslIcn ctrlSetText "\rhsusf\addons\rhsusf_optics\data\tex\ITAS\rhsusf_itas_tow_icon.paa";
													};	
					default {_mslIcn ctrlSetText "";_mslTxt ctrlSetText ""; /* _mslTxt ctrlSetBackgroundColor [0, 0, 0, 0]; */};
				};
				
				//Set text and background colors for sight type
				if(currentVisionMode _p isEqualTo 2)then{
					_sght = "NIGHT";
				}else{
					_sght = "DAY";
				};
				
				//Update State box
				_stTxt ctrlSetText (format ["%1\n%2\nFIRST", _sght, _fov select [0,4]]);
				
				cameraon setUserMFDtext [1,_sght];
				cameraon setUserMFDtext [2,_fov select [0,4]];
				cameraon setUserMFDtext [3,ctrlText _mslTxt];
				cameraon setUserMFDvalue [1,parseNumber (_fov select [4,1])];
				if((cameraon animationSourcePhase "view_CROWS_PIP_move") != currentVisionMode _p)then{cameraOn animateSource ["view_CROWS_PIP_move",currentVisionMode _p,true]};

				//Update digital zoom
				if(count(_fov) > 5)then{
					_zmTxt ctrlSetText "2X";
				}else{
					_zmTxt ctrlSetText "";
				};
				
				//On lase, display range and position data if in SURV mode
				if(inputAction rhs_key_lase_tgt_GLB >0)then{
					//2 second laser cooldown
					if(time > _laseTime + 2)then{
						_laseTime = time;
						call RHSUSF_fnc_laserTarget;
						_rngTxt ctrlSetText (ctrlText _rng);
						//_v setVariable ["rhsusf_ITAS_lase_time", _laseTime, false];
						//[] spawn rhsusf_fnc_itas_surv;
					};
				};

			}else{ //Hide everything because we're not in ITAS anymore...
				{
					_x ctrlSetTextColor [0, 0, 0, 0];
					_x ctrlSetBackgroundColor [0, 0, 0, 0];
				}forEach [_modeTxt, _modeBox, _stTxt, _stBox, _rngTxt, _mslIcn, _mslTxt]; //no need for _zmTxt as it should always be off at this point...
			};
		};
		

		sleep 0.01;
	};

	uiNameSpace setVariable ["RHS_MITAS_Ctrl",displayNull];
};