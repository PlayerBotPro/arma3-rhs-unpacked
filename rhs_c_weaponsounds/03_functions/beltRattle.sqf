params [
	"_unit",
	"_weapon",
	"_soundArray",
	"_bulletsLeft"
];
private _camPos = positionCameraToWorld [0,0,0];
if ((_camPos distance _unit) <= 30) then {
	if((_unit ammo _weapon) >= _bulletsLeft) then {
		private _sound = selectRandom _soundArray;
		if (((vehicle _unit == vehicle player) || (_unit == player)) && (cameraView != "EXTERNAL")) then {
			playSound _sound;
		} else {
			[_unit,_sound] spawn {
				params ["_unit","_sound"];
				private _dummy = "#particleSource" createVehicleLocal (eyePos _unit);
				_dummy say3d [_sound,65,1];
				sleep 1.5;
				deleteVehicle _dummy;
			};
		};
	};
};