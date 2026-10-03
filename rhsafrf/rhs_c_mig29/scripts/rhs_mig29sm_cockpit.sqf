/*
	temporary script
	a: reyhard
*/

private _vehicle = vehicle (call rhs_fnc_findPlayer);

//Black & White post processing effect
private _RHS_TVBW_ppEffect = ppEffectCreate ["colorCorrections", 1500];
_RHS_TVBW_ppEffect ppEffectAdjust [1,1,0,[1,1,1,0],[1,1,1,0],[0.75,0.25,0,1], false];
_RHS_TVBW_ppEffect ppEffectCommit 0;


//film grain effect
private _RHS_TV_ppEffect = ppEffectCreate ["FilmGrain", 1400];
_RHS_TV_ppEffect ppEffectAdjust [0.15,1,1,0.45,1, false];
_RHS_TV_ppEffect ppEffectCommit 0;

//RHS_TVBW_ppEffect = _RHS_TVBW_ppEffect;
//RHS_TV_ppEffect = _RHS_TV_ppEffect;

private _showHint = true;
private _cfgAmmo = configFile >> "CfgAmmo";
private _cfgMagazine = configFile >> "CfgMagazines";

// Main Loop
while{ not(isNull ( (uiNamespace getVariable "rhs_spo15_ctrl") displayCtrl 8655)) }do
//while{ player in _vehicle }do
{
	if (cameraView isEqualTo "GUNNER")then
	{
		private _modeAvailable = 0;
		{
			_ammoType		= getText (_cfgMagazine >> (_x # 0) >> "ammo");
			_guidanceType	= getText (_cfgAmmo >> _ammoType >> "rhs_tv_guidance");

			if( ((_x # 1) > 0) && (_guidanceType != ""))then
			{
				if(_guidanceType == "BW" && (_modeAvailable isEqualTo 0))then{_modeAvailable = 1;};
				if(_guidanceType == "TI")then{_modeAvailable = 2;};
			};
		} foreach (magazinesAmmo _vehicle);

		{_x ppEffectEnable true}foreach [_RHS_TV_ppEffect,_RHS_TVBW_ppEffect];
		if( _modeAvailable > 0)then
		{
			if(_vehicle animationSourcePhase "hide_tv" isEqualTo 1)then{_vehicle animateSource ["hide_tv",0]};
			_Vehicle disableTIEquipment (_modeAvailable isEqualTo 1);
		}else
		{
			if(_vehicle animationSourcePhase "hide_tv" isEqualTo 0)then
			{
				_vehicle animateSource ["hide_tv",1];
				if(_showHint)then{_showHint = false; hint "DEV HINT: TV channel is only available if aprioriate TV missile is equiped, capable of transmiting video from it's seeker"};
			};
		};
	}else{
		{_x ppEffectEnable false}foreach [_RHS_TV_ppEffect,_RHS_TVBW_ppEffect];
		if(_vehicle animationSourcePhase "hide_tv" isEqualTo 1)then
		{
			_vehicle animateSource ["hide_tv",0];
		};
	};
	sleep 0.01;
};

ppEffectDestroy [_RHS_TV_ppEffect,_RHS_TVBW_ppEffect];
