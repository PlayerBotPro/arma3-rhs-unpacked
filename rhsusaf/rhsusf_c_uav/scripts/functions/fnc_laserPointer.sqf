/*
**************************************************************************************************
FUNCTION - LASER - THIS IS CALLED FROM laserPointer.sqf - DENEGRATED
THIS FUNCTION DISPLAYS THE LASER BEAM
**************************************************************************************************
*/

if (surfaceIsWater [visiblePositionASL mavCurrentTargetSphere select 0,visiblePositionASL mavCurrentTargetSphere select 1]) then
               {
                        drawLine3D [visiblePositionASL mavCurrentTargetSphere, visiblePosition microAirVehicle, [0,1,0,1]];
               } else
               {
                        drawLine3D [visiblePosition mavCurrentTargetSphere, visiblePosition microAirVehicle, [0,1,0,1]];
               };


// drawLine3D [visiblePosition mavCurrentTargetSphere, visiblePosition microAirVehicle, [0,1,0,1]];