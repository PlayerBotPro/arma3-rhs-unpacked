/*
rhs_fnc_ah64_gunnerUI
AH64 camera handling script
should prevent for now from strange camera movement when directional stabilization is turned on

a: reyhard
*/
disableSerialization;

uiNameSpace setVariable ["RHS_AH64_Ctrl",_this select 0];

/*
gunner
high refresh rate loop [0.01 sec]
*/
[] spawn
{


	disableSerialization;
    private _p = call rhsusf_fnc_findPlayer;
    private _v = vehicle _p;

	private _c = uiNamespace getVariable "RHS_AH64_Ctrl";

	private _z = (_c displayCtrl 154);
	private _t = false;

	private _RHS_TV_ppEffect = ppEffectCreate ["FilmGrain", 1400];
	_RHS_TV_ppEffect ppEffectAdjust [0.15,1,1,0.45,1, false];
	_RHS_TV_ppEffect ppEffectCommit 0;
	private _RHS_TVBW_ppEffect = ppEffectCreate ["colorCorrections", 1500];
	_RHS_TVBW_ppEffect ppEffectAdjust [1,1,0,[1,1,1,0],[1,1,1,0],[0.75,0.25,0,1]];
	_RHS_TVBW_ppEffect ppEffectCommit 0;

	_lockPos = (positionCameraToWorld [0,0,4210]);
	while{not(isNull _z)}do
	{
		if(cameraView == "gunner")then
		{
			{_x ppEffectEnable true}foreach [_RHS_TV_ppEffect,_RHS_TVBW_ppEffect];
		}else{
			{_x ppEffectEnable false}foreach [_RHS_TV_ppEffect,_RHS_TVBW_ppEffect];
		};

		_r = (ctrlText _z);
		if(!(_r isEqualTo "W") && _t)then{
			_t=false;
			_v lockCameraTo [AGLtoASL _lockPos,[0]];
			sleep 0.01;
			_v lockCameraTo [objNull,[0]];
		}else{
			if(_r isEqualTo "W")then{
				_t=true;
			};
		};
		sleep 0.01;
		_lockPos = (positionCameraToWorld [0,0,4210]);
	};
	ppEffectDestroy _RHS_TV_ppEffect;
	ppEffectDestroy _RHS_TVBW_ppEffect;
	uiNameSpace setVariable ["RHS_AH64_Ctrl",displayNull];
};