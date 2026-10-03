// Recoil per caliber
#define Recoil_152		2000
#define Recoil_125		2500
#define Recoil_100		1100
#define Recoil_30		150

class RHS_UserAction_Towing_Detach
{
	displayNameDefault	= <img image='\rhsafrf\addons\rhs_main\data\actions\rhs_tow_detach_ca.paa' size='3.5' />;
	displayName			= "<img image='\rhsafrf\addons\rhs_main\data\actions\rhs_tow_detach_ca.paa' size='1.5' /> <t color='#00FF7F'>Detach vehicle</t>";
	position			= "";
	radius				= 2.5;
	onlyForplayer		= 1;
	priority			= 15;
	showWindow			= 1;
	condition			= "(alive this) && {speed this < 3}  && {this getVariable ['rhs_towing_detach',true]}";
	statement			= "[this] spawn rhs_fnc_towing_detach;";
};
class RHS_UserAction_Towing_Attach
{
	displayNameDefault	= <img image='\rhsafrf\addons\rhs_main\data\actions\rhs_tow_attach_ca.paa' size='3.5' />;
	displayName			= "<img image='\rhsafrf\addons\rhs_main\data\actions\rhs_tow_attach_ca.paa' size='1.5' /> <t color='#00FF7F'>Select towing vehicle</t>";
	position			= "";
	radius				= 2.5;
	onlyForplayer		= 1;
	priority			= 15;
	showWindow			= 1;
	condition			= "(alive this) && (this  animationPhase 'Unfold' == 1) && {this getVariable ['rhs_towing_enabled',true]}";
	statement			= "[this] call rhs_fnc_towing_selectVehicle";
};
class RHS_UserAction_Towing_Drag
{
	displayNameDefault	= <img image='\a3\Ui_f\data\IGUI\Cfg\Actions\ladderup_ca.paa' size='2.5' />;
	displayName			= "<img image='\a3\Ui_f\data\IGUI\Cfg\Actions\ladderup_ca.paa' /> <t color='#00FF7F'>Drag heavy weapon</t>";
	position			= "";
	radius				= 1.5;
	onlyForplayer		= 1;
	priority			= 15;
	showWindow			= 1;
	condition			= "(alive this) && (this  animationPhase 'Unfold' == 1) && {this getVariable ['rhs_towing_enabled',true]}";
	statement			= "[this] call rhs_fnc_towing_drag";
};