/*
l2a2 illumination handler

a: reyhard
*/

[] call RHS_fnc_preferedOptic;

private _type = missionNameSpace getVariable ["rhs_preferedOptic",profileNamespace getVariable ["rhs_preferedOptic",0]];

if(_type isEqualTo 1)exitWith{};

if(isNull (uiNamespace getVariable ["rhs_l2a2_ctrl",displayNull]))then
{
	uiNameSpace setVariable ["rhs_l2a2_ctrl",_this # 0];

	[] spawn
	{

		private["_v","_t"];
		disableSerialization;
		_c = uiNamespace getVariable "rhs_l2a2_ctrl";

		//illumination
		_g = _c displayCtrl 1;

		while{not(isNull _g)}do
		{
			_g ctrlSetTextColor [0.9,0.1,0.1,(0 max (abs((daytime-12)/14)-(0.2*sunOrMoon))) min 0.65];
			sleep 2;
			//player globalChat format["%1",abs((daytime-12)/14)];
		};
		uiNameSpace setVariable ["rhs_l2a2_ctrl",displayNull];
	};
};