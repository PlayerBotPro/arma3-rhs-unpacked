// CURRENTLY THIS SCRIPT IS NOT IMPLEMENTED

/*
// CHECK IF GCS IS ALIVE OR NOT
if !(alive _staticGCS) then
{
         hint "GCS not functional";
         _staticGCS say ["button_large",1];
         sleep 0.2;
         _staticGCS say ["zoom_fail",1];
};


// MAYBE INSERT SOME CODE IN HERE THAT WILL ALLOW YOU TO CONTROL MORE THAN ONE RAVEN FROM THE SAME CONTROLLER

// Like, when you have a raven near a GCS, you can "pair" that GCS and Raven.  That way, if you have a random Raven and you have a random GCS, you can pair them up and fly them


When the Raven is paired to the GCS, here is the procedure:
Go to the Raven.
Activate addAction "Pair with GCS"
_staticRaven setVariable ["pairingInitiated",1,true];

Go to the GCS:
// FIND THE NEAREST STATIC RAVENS WITHIN 5 METERS OF THE STATIC GCS
_nearestRavens = nearestObjects [_staticGCS,["rhsusf_RQ11RAVEN_STATIC","rhsusf_RQ11RAVEN_B_STATIC"],5];

_numberOfPairableRavens = {!(isNil{_x getVariable "pairingInitiated"})} count _nearestRavens;

hint format ["Number of Pairable Ravens is %1",_numberOfPairableRavens];

// CHECK IF THERE ARE TOO MANY RAVENS TO PAIR WITH
if !(_numberOfPairableRavens == 1) then {hint "ERROR - Too many OR not enough pairable Ravens nearby"} else
{
         // PROCEED WITH THE PAIRING
         {
                  if  !(isNil{_x getVariable "pairingInitiated"}) then
                  {
                           _staticGCS setVariable ["nameOfFlyingRaven",_x,true];
                           _assignedCode = _x getVariable "assignedCode";
                           _staticGCS setVariable ["assignedCode",_assignedCode,true];
                           hint format ["GCS paired to Raven with code: %1",_assignedCode];
                           _x setVariable ["pairingInitiated",nil,true];
                  };
         } forEach _nearestRavens;
};

*/