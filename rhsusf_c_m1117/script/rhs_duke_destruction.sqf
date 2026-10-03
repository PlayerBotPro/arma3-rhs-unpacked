/*
	duke antenna destruction handled with handleDamage EH

	i: handleDamage EH
	o: none

	a: reyhard
*/

params["_u","_s","_d","","_p","_h"];

// exit for non local units
if(!local _u)exitWith{};

// exit on crash damage
if(_p isEqualTo "")exitWith{};

// exit if antennas are hidden
if(_u animationPhase "Duke_Hide" > 0)exitWith{};

// exit if vehicle is already destroyed
if(damage _u isEqualTo 1)exitWith{};

// perform action only for duke selections
if(_s in ["duke1","duke2"])then{
	//systemChat format["d %1, d2 %2",_u getHitIndex _h,_d];
	// if resulting damage is 1 & previous damage is different than this then create destroyed antenna
	if((_d >= 1) && (_d != _u getHitIndex _h))then{
		//systemChat format["%1",_this select 5];

		// pick right colour version
		private _tex = getObjectTextures _u;
		private _dukeType = getText (configFile >> "cfgVehicles" >> typeOf _u >> "rhs_duke_type");
		private _dukeObj = format["%1_wd",_dukeType];
		if((_tex findIf {_x find "_d_" >= 0}) >= 0)then{
			_dukeObj = format["%1_d",_dukeType];
		};

		private _duke = _dukeObj createVehicle [0,0,0];
		_duke setpos (_u modelToWorld (_u selectionPosition format["%1_pos",_s]));
		_duke allowDamage false;
		// auto delete after 240 seconds
		_duke spawn {
			sleep 240;
			deleteVehicle _this;
		};
	};
};
