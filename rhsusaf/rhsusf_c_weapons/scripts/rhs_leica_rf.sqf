/*
LRF script

a: reyhard
*/

if(isNull (uiNamespace getVariable ["RHS_LeicaLRF_Ctrl",displayNull]))then
{
	uiNameSpace setVariable ["RHS_LeicaLRF_Ctrl",_this select 0];

	[] spawn
	{
		private["_v","_t"];
		disableSerialization;
		_c = uiNamespace getVariable "RHS_LeicaLRF_Ctrl";
		rhs_key_lase_int_GLB=(profileNamespace getVariable ["rhs_key_lase_int","LockTarget"]);
		//emergency sight
		//range finder text
		_r = (_c displayCtrl 4);
		//range finder value
		_s = (_c displayCtrl 151);


		while{not(isNull _r)}do
		{
			sleep 0.01;

			//lasing target
			//you cannot lase target in non auto mode. see balistic computer
			if(inputAction rhs_key_lase_int_GLB > 0 AND {cameraView == "GUNNER"})then
			{
				_t=parseNumber ctrlText _s;
				sleep 0.5;
				if(_t>15 AND _t <1097)then{
					_r ctrlSetText format["%1",_t];
				}else{
					_r ctrlSetText "----";
				};
				[call rhsusf_fnc_findPlayer, _t] call RHSUSF_fnc_laserTarget;
			};
			if(inputAction "Throw" > 0 AND {cameraView == "GUNNER"})then
			{
				_r ctrlSetText "";
			};
		};

		uiNameSpace setVariable ["RHS_LeicaLRF_Ctrl",displayNull];
	};
};