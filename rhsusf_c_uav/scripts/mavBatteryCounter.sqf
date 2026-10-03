/*
*********************************************************************************************************
RAVEN BATTERY COUNTDOWN  SCRIPT - THIS IS CALLED WHEN THE RAVEN STARTS TO FLY AND STOPS WHEN THE RAVEN LANDS
*********************************************************************************************************
*/

private ["_battlvl","_nameOfGCS"];
_nameOfGCS = _this select 1;
// _groupCaller = (group _caller);

//  CHECK TO SEE IF THIS SCRIPT IS ALREADY RUNNING
if (isNil{_nameOfGCS getVariable "batteryCountdownIsRunning"}) then
{
        _nameOfGCS setVariable ["batteryCountdownIsRunning", 1, true];
        
        // =====================================================START BATTERY COUNTDOWN LOOP
        
        while {!(isNil{_nameOfGCS getVariable "batteryCountdownIsRunning"})} do
        {
                
                // GET BATTERY LEVEL
                _battlvl = _nameOfGCS getVariable "ravenBatteryLevel";
                                
                // THIS CHECKS TO SEE IF THE RAVEN ENGINE IS ON OR OFF
                 if ((_nameOfGCS getVariable "mavSoundOn") == 0) exitWith {_nameOfGCS setVariable ["batteryCountdownIsRunning", nil, true]};
                
                // CHECK THE BATTERY LEVEL - IF IT IS AT ZERO THEN EXIT
                if (_battlvl <= 0) exitWith {_nameOfGCS setVariable ["batteryCountdownIsRunning", nil, true]};
                
                // 9 SECONDS DELAY
                sleep 9;
                
                //REDUCE BATTERY LEVEL BY 0.25 PERCENT - 60 MINUTES FLIGHT TIME
                _battlvl = _battlvl - 0.25;
                
                // UPDATE THE VARIABLE
                _nameOfGCS setVariable ["ravenBatteryLevel",_battlvl,true];
    
        };
};