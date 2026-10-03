/*
	rhs_fnc_a29_flir_handler

	a: reyhard
*/
params["_ctrl"];


disableserialization;
// define all controls
private _display			= ctrlparent _ctrl;
private _turretIndicator	= _display displayCtrl 1;
private _arrowElevation		= _display displayCtrl 5;
private _arrowTraversee		= _display displayCtrl 6;
private _ctrlGroup			= _display displayCtrl 170;

//hintSilent format["time2: %1\n%2\n%3",time,_this,cameraView];


#define GUI_GRID_OLD_OPTICS_W		(0.01875 * SafezoneH)
#define GUI_GRID_OLD_OPTICS_H		(0.025 * SafezoneH)
#define ARROW_SIZE 0.7 * GUI_GRID_OLD_OPTICS_W,1.1 * GUI_GRID_OLD_OPTICS_H
#define ARROW_SIZE2 1.1 * GUI_GRID_OLD_OPTICS_W,0.7 * GUI_GRID_OLD_OPTICS_H

private _trav = deg (cameraon animationSourcePhase "MainTurret");
private _elev = deg (cameraon animationSourcePhase "MainGun");
_arrowElevation ctrlSetPosition [12.9 * GUI_GRID_OLD_OPTICS_W,(14.65-(_elev*0.091)) * GUI_GRID_OLD_OPTICS_H,ARROW_SIZE];
_arrowTraversee ctrlSetPosition [(26.1-_trav*0.0678) * GUI_GRID_OLD_OPTICS_W,26.8 * GUI_GRID_OLD_OPTICS_H,ARROW_SIZE2];

_turretIndicator ctrlSetAngle [-_trav, 0.5, 0.5];

//private _noise	= _display displayCtrl 2;
//_noise ctrlSetText format["#(ai,512,512,1)perlinNoise(1024,%1,0,1)",512+random(333)];
{_x ctrlCommit 0}foreach [_arrowElevation,_arrowTraversee,_turretIndicator];
