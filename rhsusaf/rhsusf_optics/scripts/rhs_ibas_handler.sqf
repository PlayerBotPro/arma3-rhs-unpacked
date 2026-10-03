/*
M2A3 IBAS and CIV sight handling script

a: Ballistic09, based heavily on scripts written by reyhard.
*/
disableSerialization;

uiNameSpace setVariable ["RHS_IBAS_Ctrl",_this select 0];

[] spawn
{
	disableSerialization;
    _p = call rhsusf_fnc_findPlayer;
    _v = vehicle _p;
	_mag = currentMagazine _v;

	_c = uiNamespace getVariable "RHS_IBAS_Ctrl";

	_d = (_c displayCtrl 198);

	//Vision mode text control
	_mode = (_c displayCtrl 3);
	//Ammo type text control
	_ammo = (_c displayCtrl 4);
	//Low Ammo text control
	_ammoLow = (_c displayCtrl 5);
	
	rhs_key_lase_tgt_GLB=(profileNamespace getVariable ["rhs_key_lase_tgt","LockTarget"]);

	while{not(isNull _d)}do
	{
		/// Vision mode handler ///

		if(cameraView == "gunner")then{
			if(currentVisionMode _p isEqualTo 2)then{
				_mode ctrlSetText "FL";
			}else{
				_mode ctrlSetText "TV";
			};
			
			
			//Alert Shtora when laser is used
			if(inputAction rhs_key_lase_tgt_GLB >0)then{
				call RHSUSF_fnc_laserTarget;
			};
			
			
			/// Selected ammo/weapon type handler ///

			_mag  = currentMagazine _v;

			// Skip if mag is not present - such situation may occur when i.e. you get into commander seat & there is no gunner
			if(_mag isEqualTo "")then
			{
				_ammo ctrlSetText "---"
			}else{
				switch (_mag) do {
					case "rhs_mag_230Rnd_25mm_M242_HEI": {_ammo ctrlSetText "HE"};
					case "rhs_mag_70Rnd_25mm_M242_APFSDS": {_ammo ctrlSetText "DU"};
					case "rhs_mag_70Rnd_25mm_M242_M791": {_ammo ctrlSetText "AP"};
					case "rhs_mag_1100Rnd_762x51_M240": {_ammo ctrlSetText "7.62"};
					default {_ammo ctrlSetText "TOW"};
				};


				/// Low ammo indicator handler ///

				/*
				Might want to look into a generaly less messy solution...


					At 0.75, indicator activates at:

					HE:    57 rounds
					DU:    17 rounds
					7.62:  275 rounds
					TOW:   0 rounds
				*/

				/*
					Need to handle ammo count this way as "ammo" scripting command has issues with weapons that
					use more than one magazine type (M242's AP and HE mags)
				*/
				_magCnt = getNumber (configFile >> "CfgMagazines" >> _mag >> "count" );
				_ammoCnt = 9999; //In case forEach fails to get count
				{
					if((_x select 2) AND {(_x select 0) == _mag})then{
						_ammoCnt = _x select 1;
					};
				}forEach (magazinesAmmoFull _v);
				//hint format ["Ammo count: %1", _ammoCnt];

				/*
					I would have used the "needReload" scripting command here, instead of the long workaround
					I used above and below this comment, but it too seems to have issues with vehicle weapons
					that accept multiple magiznes. It worked, mostly, but if you fired an M242 magazine until
					empty, it would constantly return "true", and the low ammo indicator would never turn off.
				*/
				if((_ammoCnt/_magCnt) < 0.25 AND {time%2 < 1})then{ //indicator on
					_ammoLow ctrlSetText "LOW AMMO";
				}else{ //indicator off
					_ammoLow ctrlSetText "";
				};
			};
		};

		private _towHoldster = _v animationSourcePhase "maxHoldsterValue";
		if((currentWeapon _v) == "rhs_weap_tow_launcher" && {_towHoldster != 1})then
		{
			_v setWeaponReloadingTime [_p,"rhs_weap_TOW_Launcher",1-_towHoldster];
		};

		sleep 0.01;
	};

	uiNameSpace setVariable ["RHS_IBAS_Ctrl",displayNull];
};