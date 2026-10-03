/*
M1117 Gunner feed for commander station

a: reyhard
*/
disableSerialization;

uiNameSpace setVariable ["RHS_M1117_Com_Ctrl",_this select 0];

[] spawn
{
	sleep 0.1;

	disableSerialization;
	private _c = uiNamespace getVariable "RHS_M1117_Com_Ctrl";
	private _z = (_c displayCtrl 180);

	private _zoom = 3;
	private _mode = 2;

	private _p = call rhsusf_fnc_findPlayer;
	private _v = vehicle _p;



	while{not(isNull _z)}do
	{
        //send zoom or vision mode changes so driver have synced view
        if(cameraView == "GUNNER")then{
    		if(_zoom != (parseNumber  (ctrlText _z)) )then
    		{
                _zoom = (parseNumber  (ctrlText _z));
                _v setVariable ["rhs_zoom",_zoom,true];
    		};
            if(_mode != (currentVisionMode _p))then{
                _mode = currentVisionMode _p;
                _v setVariable ["rhs_tmode",_mode,true];
            };
        };
		sleep 1;
	};

	uiNameSpace setVariable ["RHS_M1117_Com_Ctrl",displayNull];
};


