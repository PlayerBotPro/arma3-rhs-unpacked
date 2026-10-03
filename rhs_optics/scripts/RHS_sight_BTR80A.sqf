//script is fired only once & is destroyed together with display

if(isNull (uiNamespace getVariable ["RHS_BTR80_Ctrl",displayNull]))then
{

	uiNameSpace setVariable ["RHS_BTR80_Ctrl",_this select 0];

	[] spawn {
		private["_v","_t","_c"];
		disableSerialization;
		_c = (uiNamespace getVariable "RHS_BTR80_Ctrl" displayCtrl 1);
		_v = vehicle (call rhs_fnc_findPlayer);

		rhs_key_opn_cmp_GLB=(profileNamespace getVariable ["rhs_key_opn_cmp","Binocular"]);
		rhs_key_rng_up_GLB=(profileNamespace getVariable ["rhs_key_rng_up","ZeroingUp"]);
		rhs_key_rng_dwn_GLB=(profileNamespace getVariable ["rhs_key_rng_dwn","ZeroingDown"]);
		rhs_key_lase_tgt_GLB=(profileNamespace getVariable ["rhs_key_lase_tgt","LockTarget"]);
		rhs_key_dmp_lead_GLB=(profileNamespace getVariable ["rhs_key_dmp_lead","Throw"]);
		rhs_key_nxt_rnd_GLB=(profileNamespace getVariable ["rhs_key_nxt_rnd","CarHandBrake"]);

		while{not(isNull _c)}do
		{
			waitUntil {sleep 0.01;inputAction rhs_key_rng_up_GLB>0 OR inputAction rhs_key_rng_dwn_GLB>0 OR ((call rhs_fnc_findPlayer)!=gunner _v AND (call rhs_fnc_findPlayer)!=driver _v)};
			_t=(ctrLPosition _c) select 1;
			if(inputAction rhs_key_rng_up_GLB>0 AND _t<=(16.86 *   (0.025 * SafezoneH)))then{
					_c ctrlSetPosition [(ctrLPosition _c) select 0,_t+0.003];
			};
			if(inputAction rhs_key_rng_dwn_GLB>0 AND _t>(3.66 *   (0.025 * SafezoneH)))then{
					_c ctrlSetPosition [(ctrLPosition _c) select 0,_t-0.003];
			};
			_c ctrlCommit 0.005;
			sleep 0.02;
		};
	};

	[] spawn {
		disableSerialization;

		private _p = call rhs_fnc_findPlayer;
		private _v = vehicle _p;
		private _c=(uiNamespace getVariable "RHS_BTR80_Ctrl" displayCtrl 154);
		private _c2=(uiNamespace getVariable "RHS_BTR80_Ctrl" displayCtrl 1);
		private _c3=(uiNamespace getVariable "RHS_BTR80_Ctrl" displayCtrl 2);
		private _mode = "";
		private _oldMode = "";

		while{not(isNull _c)}do
		{
			if(cameraView isEqualTo "GUNNER")then{
				_mode = (ctrlText _c);
				if(_mode != _oldMode)then{
					switch(_mode)do{
						case "DAY" : {
							_c2 ctrlSetText "rhsafrf\addons\rhs_optics\vehicles\data\rhs_bpk_1_42_sight.paa";
							_c3 ctrlSetText "rhsafrf\addons\rhs_optics\vehicles\data\rhs_bpk_1_42_bar.paa";
						};
						case "NIGHT" : {
							{_x ctrlSetText ""}foreach [_c2,_c3];
						};
					};
					//systemChat "switch";
					_oldMode = _mode;
				};
			};
			sleep 0.1;
		};
		uiNameSpace setVariable ["RHS_BTR80_Ctrl",displayNull];
	};
};