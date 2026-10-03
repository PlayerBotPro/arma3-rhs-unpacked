
uiNameSpace setVariable ["RHS_AT4_Ctrl",_this select 0];

[] spawn {
	//player globalChat "inicjalizacja";
	private["_c","_z"];
	disableSerialization;
	_c = uiNamespace getVariable "RHS_AT4_Ctrl";
	_z = (_c displayCtrl 168);

	private ["_t"];
	rhs_key_opt_int_GLB=(profileNamespace getVariable ["rhs_key_opt_int","opticsMode"]);

	_t =secondaryWeapon (call rhsusf_fnc_findPlayer);
	if(not(_t in ["rhs_weap_M136","rhs_weap_M136_hedp","rhs_weap_M136_hp"]))exitWith{};

	while{not(isNull _z)}do
	{
		_p=(call rhsusf_fnc_findPlayer);
		if(inputAction rhs_key_opt_int_GLB >0 AND {(secondaryWeapon _p) in ["rhs_weap_M136","rhs_weap_M136_hedp","rhs_weap_M136_hp"]})then
		{
		        waitUntil {inputAction rhs_key_opt_int_GLB == 0};

		      	if("rhs_acc_at4_handler" in secondaryWeaponItems _p)then{
		      		//command introduced in version 1.37
			      	_p removeSecondaryWeaponItem "rhs_acc_at4_handler";
		      	}else{
			      	_p addsecondaryWeaponItem "rhs_acc_at4_handler";
			      	//_p globalChat "dodaje";
			    };

		};
		sleep 0.1;
	};
	uiNameSpace setVariable ["RHS_AT4_Ctrl",displayNull];
	//player globalChat "kończe";

};
