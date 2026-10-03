/*
a: reyhard
adjust searchlight script
adjustments are applied by catching input from mounts and converting it to ingame movement

*/

params["_v"];

// script is already running
if(! isNil "rhs_adjustSearchlight")exitWith{};

private _angle = 0;
private _left = 0;
private _right = 0;
private _anim = (_v animationPhase 'searchlight_rot');
private _player = call rhs_fnc_findPlayer;

rhs_adjustSearchlight = true;

hint "Move your mouse to left or right to rotate searchlight. Press right mouse button to finish adjusments";

// add EventHandler responsible for mouse clicking handling
_id =  (findDisplay 46) displayAddEventHandler ["MouseButtonUp", {
	private _handled = false;
	// 1 = RMB click
	if((_this select 1) isEqualTo 1)then{
		rhs_adjustSearchlight=false;
	};
	_handled;
}];


while{rhs_adjustSearchlight && (_player isEqualTo (driver _v))}do{
	_left = inputAction "aimLeft";
	_right = inputAction "aimRight";
	_anim = (_v animationPhase 'searchlight_rot');

	// rotate searchlight depending on mouse movement
	// movement limited to 150 degrees to the left & 30 degs to the right
	if(_left>0)then{
		// check rotation limits
		if(_anim < rad(150))then{_v animate ['searchlight_rot',(_anim+_left/10)min(rad(150))]};
	};
	if(_right>0)then{
		if(_anim > -rad(30))then{_v animate ['searchlight_rot',(_anim-_right/10)max(-rad(30))]};
	};

	sleep 0.01;
};

// deinitialize variable & remove display EH
(findDisplay 46) displayRemoveEventHandler ["MouseButtonUp",_id];
rhs_adjustSearchlight = nil;