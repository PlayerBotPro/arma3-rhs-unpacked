/*
	rhs_fnc_stryker_m1127_GLUA_UI

	a: reyhard
*/
params["_vehicle",["_action",""],["_param",[""]]];

// If there is no action then initialize UI
if(_action isEqualTo "")then{createDialog 'RHS_GrenadeLauncherUnitAssembly_Options';};

// Define basic variables
private _button_smoke_L1		= (findDisplay 201) displayCtrl 1600;
private _button_smoke_L2		= (findDisplay 201) displayCtrl 1601;
private _button_smoke_L3		= (findDisplay 201) displayCtrl 1602;
private _button_smoke_R1		= (findDisplay 201) displayCtrl 1603;
private _button_smoke_R2		= (findDisplay 201) displayCtrl 1604;
private _button_smoke_R3		= (findDisplay 201) displayCtrl 1605;
private _button_smoke_Fire		= (findDisplay 201) displayCtrl 1606;
private _model = (findDisplay 201) displayCtrl 901;

// If action is passed, then exit function
if(_action != "")exitWith{
	switch (_action) do 
	{
		// Switch on/off toggles
		case "TOGGLE": 
		{
			private _animteToState = abs(1 - (_vehicle animationSourcePhase (_param # 0)));
			_vehicle animateSource [(_param # 0),_animteToState];
			_model ctrlAnimateModel [(_param # 0),_animteToState];
		};
		// Fire toggle
		case "FIRE": 
		{
			[_vehicle,"rhsusf_weap_M6_GLUA",[0]] call bis_fnc_fire;
			_model ctrlAnimateModel [(_param # 0),1];
			// Animate back toggle
			[_model,_param # 0] spawn {sleep 0.5;(_this # 0) ctrlAnimateModel [_this # 1,0]};
		};
		default 
		{
			/* STATEMENT */
		};
	};
};

// Synchronize UI animation state
{_model ctrlAnimateModel [_x,_vehicle animationSourcePhase _x,true]}foreach 
[
	"rhsusf_weap_M6_active",
	"rhsusf_weap_M6_reload",
	"rhsusf_weap_M6_L1_active",
	"rhsusf_weap_M6_L2_active",
	"rhsusf_weap_M6_L3_active",
	"rhsusf_weap_M6_R1_active",
	"rhsusf_weap_M6_R2_active",
	"rhsusf_weap_M6_R3_active",
	"ind_smoke_override"
];
// Add event handlers to buttons
_button_smoke_L1 ctrladdeventhandler ["ButtonClick",{[cameraon,"TOGGLE",["rhsusf_weap_M6_L1_active"]] call rhs_fnc_stryker_m1127_GLUA_UI}];
_button_smoke_L2 ctrladdeventhandler ["ButtonClick",{[cameraon,"TOGGLE",["rhsusf_weap_M6_L2_active"]] call rhs_fnc_stryker_m1127_GLUA_UI}];
_button_smoke_L3 ctrladdeventhandler ["ButtonClick",{[cameraon,"TOGGLE",["rhsusf_weap_M6_L3_active"]] call rhs_fnc_stryker_m1127_GLUA_UI}];
_button_smoke_R1 ctrladdeventhandler ["ButtonClick",{[cameraon,"TOGGLE",["rhsusf_weap_M6_R1_active"]] call rhs_fnc_stryker_m1127_GLUA_UI}];
_button_smoke_R2 ctrladdeventhandler ["ButtonClick",{[cameraon,"TOGGLE",["rhsusf_weap_M6_R2_active"]] call rhs_fnc_stryker_m1127_GLUA_UI}];
_button_smoke_R3 ctrladdeventhandler ["ButtonClick",{[cameraon,"TOGGLE",["rhsusf_weap_M6_R3_active"]] call rhs_fnc_stryker_m1127_GLUA_UI}];
_button_smoke_Fire ctrladdeventhandler ["ButtonClick",{[cameraon,"FIRE",["rhsusf_weap_M6_reload"]] call rhs_fnc_stryker_m1127_GLUA_UI}];