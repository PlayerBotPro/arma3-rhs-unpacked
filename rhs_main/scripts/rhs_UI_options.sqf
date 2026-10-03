/*
	RHS_fnc_UI_Options

	a: reyhard
*/
params
[
	["_mode",profileNamespace getVariable ["RHS_UI_Targeting_Level",0],[0]]
];

#define IDC_LIST [1200,1000,1013,1202,120,208,113,1006,121,1004,1014,122,1005,205,186,111,112,168,149,382,152,151,1202,1001,1008,1203,118,187,184,185,155,152,151,150,2303,149,1243,10101]

// Hide scripted wheelbrakes if RTD is enabled
((uiNamespace getVariable "RscUnitInfo") displayCtrl 10101) ctrlShow (!difficultyEnabledRTD);

// read variable from profile name space
private _stored = profileNamespace getVariable ["RHS_UI_Targeting_Level",0];

switch (_mode) do
{
	case 0:
	{
		if(_mode != _stored)then
		{
			profileNamespace setVariable ["RHS_UI_Targeting",0];
			profileNamespace getVariable ["RHS_UI_Targeting_Level",_mode];
			saveProfileNamespace;
		};
	};
	case 1:
	{
		if(_stored isEqualTo 2)then
		{
			// Unhide UI
			disableSerialization;
			private _display = (uiNamespace getVariable "RscUnitInfo");
			{
				(_display displayCtrl _x) ctrlShow true;
				(_display displayCtrl _x) ctrlCommit 0;
			}foreach IDC_LIST;
		};
		if(_mode != _stored)then
		{
			profileNamespace setVariable ["RHS_UI_Targeting",-1];
			profileNamespace getVariable ["RHS_UI_Targeting_Level",_mode];
			saveProfileNamespace;
		};
	};
	case 2:
	{
		if(_mode != _stored)then
		{
			profileNamespace setVariable ["RHS_UI_Targeting",-1];
			profileNamespace getVariable ["RHS_UI_Targeting_Level",_mode];
			saveProfileNamespace;
		};

		// Hide UI
		disableSerialization;
		private _display = (uiNamespace getVariable "RscUnitInfo");
		{
			(_display displayCtrl _x) ctrlShow false;
			(_display displayCtrl _x) ctrlCommit 0;
		}foreach IDC_LIST;
	};

	default {};
};
