/*
M1A1 FCS

a: reyhard
need newer one for M1A2

*/
if(isNull (uiNamespace getVariable ["RHS_M1_Ctrl",displayNull]))then
{
	uiNameSpace setVariable ["RHS_M1_Ctrl",_this select 0];


	disableSerialization;
	//FCS
	private["_v","_t","_a","_s","_r","_m","_f","_tx"];
	_v = vehicle (call rhsusf_fnc_findPlayer);
	_c = uiNamespace getVariable "RHS_M1_Ctrl";

	//range finder value
	_s = (_c displayCtrl 151);
	//ready light
	_r=(_c displayCtrl 5);
	//multiple bar
	_m=(_c displayCtrl 6);
	//fault indicator
	_f=(_c displayCtrl 7);
	//texture path
	_tx= "rhsusf\addons\rhsusf_c_m1a1\scripts\data";

	rhsusf_m1_range=0;
	rhs_key_opn_cmp_GLB=(profileNamespace getVariable ["rhs_key_opn_cmp","Binocular"]);
	rhs_key_rng_up_GLB=(profileNamespace getVariable ["rhs_key_rng_up","ZeroingUp"]);
	rhs_key_rng_dwn_GLB=(profileNamespace getVariable ["rhs_key_rng_dwn","ZeroingDown"]);
	rhs_key_lase_tgt_GLB=(profileNamespace getVariable ["rhs_key_lase_tgt","LockTarget"]);
	rhs_key_dmp_lead_GLB=(profileNamespace getVariable ["rhs_key_dmp_lead","Throw"]);

	//fire on the move callculations
	_fireMove = _v addEventHandler ["fired",{_this call rhsusf_fnc_fireOnMove}];

	//first time startup
	[_r,_tx] spawn
	{
		_i=10;
		while{_i>0}do{ [floor(random(9)*1000)] spawn RHSusf_fnc_rf_M1_digit;_i=_i-1;sleep 0.5};
		[0] spawn RHSusf_fnc_rf_M1_digit;
		(_this select 0) ctrlSetText format["%1\green_circle.paa",_this select 1];
	};

	while{not(isNull _r)}do
	{
		//lase target
		if(inputAction rhs_key_lase_tgt_GLB >0)then
		{
			//komputer balistyczny
			if(ctrlText _r != "")then
			{
				_t=parseNumber ctrlText _s;
				//main cannon minimal range
				_minRange=200;
				//coax min range = 50m
				if( (currentWeapon _v) isEqualTo "rhs_weap_m240_abrams_coax")then{_minRange=50};
				if(_t>_minRange and _t<7900)then
				{
					[_t] call rhsusf_fnc_rf_m1_elev;
					rhsusf_m1_range = _t;
				}else{[-5] spawn RHSusf_fnc_rf_M1_digit};

				// Call laser target function
				call RHSUSF_fnc_laserTarget;

				_r ctrlSetText "";
				//5 seconds delay between lasing
				[_r,_tx] spawn {sleep 3;(_this select 0) ctrlSetText format["%1\green_circle.paa",_this select 1];};
			};
		};

		if(inputAction rhs_key_rng_up_GLB >0)then{
			if(rhsusf_m1_range<7900)then{
				rhsusf_m1_range=rhsusf_m1_range+10;
				sleep 0.1;
				[rhsusf_m1_range] call rhsusf_fnc_rf_m1_elev;
			};
		};

		if(inputAction rhs_key_rng_dwn_GLB >0)then{
			if(rhsusf_m1_range>0)then{
				rhsusf_m1_range=rhsusf_m1_range-10;
				sleep 0.1;
				[rhsusf_m1_range] call rhsusf_fnc_rf_m1_elev;
			};
		};

		//launch balistic computer
		if(inputAction rhs_key_opn_cmp_GLB > 0)then
		{
			waitUntil {inputAction rhs_key_opn_cmp_GLB == 0};
			_d= createDialog "RHS_m1_ccp_computer";
			{ctrlShow [_x, false]}foreach [1201,1202,1203,1204,1205];
			rhsusf_m1_range_ccp=[];

			sleep 0.1;
			//wait for dialog closure
			waitUntil {sleep 0.1;not dialog};
		};

		sleep 0.01;
	};

	_V removeEventHandler ["fired",_fireMove];
	uiNameSpace setVariable ["RHS_M1_Ctrl",displayNull];
	_v animate["lead",0];
	_v animate["elev",0];
};