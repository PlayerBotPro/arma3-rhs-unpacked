/*
M2A2ODS ISU sight handling script

Features: 4-digit laser range finder display. Ammo/weapon indicators on both sides of the range display
(HE/TOW----762/AP). Switchable TOW and gun reticle, based on which weapon is currently selected. Reticle 
color changes based on day/thermal sight mode (Day: Gun = yellow, TOW = black. Thermal: both = yellow).
Notifies Shtora equiped tanks upon use of laser range finder.

Issues: The TOW reticle should always be visible in the day sight, but due to the fact that in Arma the  
TOW reticle can't be offset to the lower-left of the gun reticle like in real life, I've resorted to 
simply switching between to two like how it actually works in the thermal sight.

a: Ballistic09
*/
disableSerialization;

uiNameSpace setVariable ["RHS_ODS_ISU_Ctrl",_this select 0];

[] spawn
{
	disableSerialization;
    _p = call rhsusf_fnc_findPlayer;
    _v = vehicle _p;
	_mag = currentMagazine _v;

	_c = uiNamespace getVariable "RHS_ODS_ISU_Ctrl";

	_d = (_c displayCtrl 198);
	
	//HE Indicator
	_he = (_c displayCtrl 1);
	//TOW Indicator
	_tow = (_c displayCtrl 2);
	//762 Indicator
	_coax = (_c displayCtrl 3);
	//AP Indicator
	_ap = (_c displayCtrl 4);
	//Reticle
	_ret = (_c displayCtrl 5);
	//Current optics mode
	_mode = (_c displayCtrl 154);
	
	//Paths to reticles
	//Gun
	_gRet = "\rhsusf\addons\rhsusf_optics\data\tex\ISU\ISU_air_defence_reticle.paa";
	//TOW
	_tRet = "\rhsusf\addons\rhsusf_optics\data\tex\ISU\ISU_TOW_reticle.paa";
	//current
	_cRet = _tRet;
	
	//Reticle Dimensions
	//Gun - wide
	_gDim = [18.65 * (0.01875 * SafezoneH),12 * (0.025 * SafezoneH),16 * (0.01875 * SafezoneH),16 * (0.025 * SafezoneH)];
	//TOW - wide and narrow, same dimensions
	_tDim = [14.65 * (0.01875 * SafezoneH),8 * (0.025 * SafezoneH),24 * (0.01875 * SafezoneH),24 * (0.025 * SafezoneH)];
	//Current
	_cDim = _tDim;
	
	//Color selection for FCS elements
	//Invisible
	_inv = [0, 0, 0, 0];
	//Red
	_r = [1, 0.15, 0.15, 0.65];
	//Yellow
	_y = [0.85, 0.85, 0, 0.65];
	//Black
	_b = [0, 0, 0, 0.65];
	//Current
	_cCol = _b;
	
	//Current weapon
	_weap = 0;
	
	//Lase key for triggering Shtora
	rhs_key_lase_tgt_GLB=(profileNamespace getVariable ["rhs_key_lase_tgt","LockTarget"]);
	
	while{not(isNull _d)}do
	{
		/// Vision mode handler ///

		if(cameraView == "gunner")then{
			
			_view = ctrlText _mode;
			
			if(_view == "WIDE" OR _view == "NARROW")then{
				
				//Alert Shtora when laser is used
				if(inputAction rhs_key_lase_tgt_GLB >0)then{
					call RHSUSF_fnc_laserTarget;
				};
				
				_d ctrlSetTextColor _r;
				
				_mag  = currentMagazine _v;
				
				//Set the weapon/ammo type 0=Gun/HE, 1=TOW, 2=coax, 3=Gun/AP
				switch (_mag) do {
					case "rhs_mag_230Rnd_25mm_M242_HEI": {_weap = 0;};
					case "rhs_mag_70Rnd_25mm_M242_APFSDS": {_weap = 3;};
					//In the event that M791 APDS-T ammo is added...
					//case "rhs_mag_70Rnd_25mm_M242_APDS": {_weap = 3;};
					case "rhs_mag_1100Rnd_762x51_M240": {_weap = 2;};
					default {_weap = 1;};
				};
				
				//Set the correct weapon/ammo indicator color, hide the rest
				{
					if(_weap == _forEachIndex)then{
						_x ctrlSetTextColor _r;
					}else{
						_x ctrlSetTextColor _inv;
					};
				}forEach [_he, _tow, _coax, _ap];
				
				//Determine the correct reticle and set default color
				if(_weap != 1)then{
					if(_view == "NARROW")then{
						_cRet = _gRet;
						_cCol = _y;
						_cDim = _gDim;
					}else{
						_cRet = _tRet;
						_cCol = _b;
						_cDim = _tDim;
					};
				}else{
					_cRet = _tRet;
					_cCol = _b;
					_cDim = _tDim;
				};
				
				//Set reticle color to yellow if in thermals
				if(currentVisionMode _p isEqualTo 2)then{
					_cCol = _y;
				};
				
				//Possible TODO: BCIS IFF indicator. When a ODS Bradley lases a friendly armored target,
				//a red 'O' appears next to the range display. Can be seen when all display elements light
				//up in this video: https://youtu.be/uiOYpgHaJXg?t=18s
				
				//Commit reticle parameters
				_ret ctrlSetText _cRet;
				_ret ctrlSetTextColor _cCol;
				_ret ctrlSetPosition _cDim;
				_ret ctrlCommit 0;
			}else{
				{
					_x ctrlSetTextColor _inv;
					
				}forEach [_ret, _he, _tow, _coax, _ap, _d];
			};
		};

		private _towHoldster = _v animationSourcePhase "maxHoldsterValue";
		if((currentWeapon _v) == "rhs_weap_tow_launcher" && {_towHoldster != 1})then
		{
			_v setWeaponReloadingTime [_p,"rhs_weap_TOW_Launcher",1-_towHoldster];
		};

		sleep 0.01;
	};

	uiNameSpace setVariable ["RHS_ODS_ISU_Ctrl",displayNull];
};