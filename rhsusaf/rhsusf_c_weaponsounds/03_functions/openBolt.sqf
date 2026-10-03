/* Handles the simulation of weapons that fire from an open bolt. There is a slight delay between pulling the trigger and the actual shot and you can hear the bolt moving forward.
/* Probably ToDo: Implementation via unscheduled environment */

// Actual Script, to be called via addAction 
if ((inputAction "Action") > 0) exitWith {}; // Prevents that the shot is triggered via the invisible action menu entry
params [
	"_unit"
];
if (cameraOn != _unit) exitWith {};
if (_unit getVariable ["L_openBoltFiring",false]) exitWith {};
_unit setVariable ["L_openBoltFiring", true];

// Get weapon properties
private _currentWeapon = currentWeapon _unit;
private _mode = (weaponState _unit) select 2;
private _reloadTime     = getNumber 	(configFile/"CfgWeapons"/_currentWeapon/_mode/"reloadTime");

// Get values from config
private _soundName    	= getText       (configFile/"CfgWeapons"/_currentWeapon/"L_boltSnapSound");
private _delay			= getNumber     (configFile/"CfgWeapons"/_currentWeapon/"L_boltSnapDelay");

// Play the sound of the bolt snapping forward, wait a bit and then set of the actual shot
playSound _soundName;
sleep _delay;
_unit forceWeaponFire [_currentWeapon,_mode];

// Wait until the next shot can be fired, then check if the player wants to full auto (keeping the button pressed) and go full-auto if so
sleep _reloadTime;     
if (_mode != "Single") then {
	while {(inputAction "defaultAction" > 0) && {alive _unit} && {(needReload _unit) != 1}} do { 
		_unit setWeaponReloadingTime [_unit, _currentWeapon, 0];
		
		_unit forceWeaponFire [_currentWeapon,_mode];
		sleep _reloadTime;     
	};
};
_unit setVariable ["L_openBoltFiring", false];



// Add the eventhandler and disable the original function
