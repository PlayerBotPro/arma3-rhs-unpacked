/*
	RHS_fnc_sight_1PZ32
*/

if(isNull (uiNamespace getVariable ["RHS_1PZ32_Ctrl",displayNull]))then
{

	uiNameSpace setVariable ["RHS_1PZ32_Ctrl",_this select 0];

	[] spawn {

		disableSerialization;

		private _c			= (uiNamespace getVariable "RHS_1PZ32_Ctrl" displayCtrl 1);
		private _modeCtrl	= (uiNamespace getVariable "RHS_1PZ32_Ctrl" displayCtrl 154);
		private _p			= call rhs_fnc_findPlayer;
		private _v			= vehicle _p;

		rhs_key_rng_up_GLB	= (profileNamespace getVariable ["rhs_key_rng_up","ZeroingUp"]);
		rhs_key_rng_dwn_GLB	= (profileNamespace getVariable ["rhs_key_rng_dwn","ZeroingDown"]);

		private _range = 6.3;

		while{not(isNull _c)}do
		{
			if(_p != gunner _v)then{continue};

			private _t		= (ctrLPosition _c) # 1;
			private _mode	= ctrlText _modeCtrl;


			if(inputAction rhs_key_rng_up_GLB>0 AND _t<=((-2.95+ _range) *   (0.025 * SafezoneH)))then{
				_c ctrlSetPosition [(ctrLPosition _c) # 0,_t+0.001];
				_c ctrlCommit 0;
				//systemChat format["move up %1", time] ;
			};
			if(inputAction rhs_key_rng_dwn_GLB>0 AND _t>=(-2.95  *   (0.025 * SafezoneH)))then{
				_c ctrlSetPosition [(ctrLPosition _c) # 0,_t-0.001];
				_c ctrlCommit 0;
				//systemChat format["move down %1", time] ;
			};

			sleep 0.05;

			if(_mode != ctrlText _modeCtrl)then
			{
				private _curretRange = linearConversion [(-2.95 *   (0.025 * SafezoneH)),((-2.95 + _range) *   (0.025 * SafezoneH)),(ctrLPosition _c) # 1,0,1,true];
				//hintSilent format["%1 v: %2 max:%3 min:%4 %5",_mode,(ctrLPosition _c) # 1,(3.35 *   (0.025 * SafezoneH)),((3.35 - _range) *   (0.025 * SafezoneH)),time];
				switch(_mode)do{
					case "DAY": {_range = 6.3;};
					case "DAY4": {_range = 1.89;};
					default {_range = 6.3;};
				};

				if(_mode == "NIGHT" || ctrlText _modeCtrl == "NIGHT")then{continue};

				_c ctrlSetPosition [(ctrLPosition _c) # 0,((-2.95 + _range*_curretRange) *   (0.025 * SafezoneH))];
				_c ctrlCommit 0;
			};
		};
	};

	[] spawn {
		disableSerialization;

		private _v			= vehicle (call rhs_fnc_findPlayer);
		private _c			= (uiNamespace getVariable "RHS_1PZ32_Ctrl" displayCtrl 180);
		private _c2			= (uiNamespace getVariable "RHS_1PZ32_Ctrl" displayCtrl 1);
		private _c3			= (uiNamespace getVariable "RHS_1PZ32_Ctrl" displayCtrl 2);
		private _modeCtrl	= (uiNamespace getVariable "RHS_1PZ32_Ctrl" displayCtrl 154);
		private _s			= true;

		while{not(isNull _c)}do
		{

			private _p		= (call rhs_fnc_findPlayer);
			private _mode	= ctrlText _modeCtrl;

			if(currentVisionMode _p == 1)then{
				if(_s)then{
					if(_p == gunner _v)then{_c2 ctrlSetText "";_c3 ctrlSetText "";_s=false;};
				};
			}else{
				if(_mode isEqualTo "DAY" || _mode isEqualTo "DAY4")then
				{
					if(!_s)then{
						if(_p== gunner _v)then{_c2 ctrlSetText "rhsafrf\addons\rhs_optics\vehicles\data\rhs_1pz32_horizontal.paa";_c3 ctrlSetText "rhsafrf\addons\rhs_optics\vehicles\data\rhs_1pz32_vertical.paa";_s=true;};
					};
				};
			};
			sleep 0.1;
		};
		uiNameSpace setVariable ["RHS_1pz32_Ctrl",displayNull];
	};
};