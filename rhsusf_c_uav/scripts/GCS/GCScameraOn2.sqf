/*
***********************************************************************************
RAVEN MAIN CAMERA SCRIPT - THIS IS CALLED FROM THE GCS AND ACTIVATES THE CAMERA DISPLAY
***********************************************************************************
*/

private ["_newCamPos","_microAirVehicle","_microAirVehicleCam","_displayEH_keydown","_caller","_currentVisionMode","_cameraFOVLevel","_upperBoxText","_dspl","_batteryBoxText","_clockBoxText","_markerMavCurrentTargetPos","_northLocationX","_northLocationY","_southLocationX","_southLocationY","_westLocationX","_westLocationY","_eastLocationX","_eastLocationY","_northOnDisplayPos","_northDisplayText","_southOnDisplayPos","_southDisplayText","_westOnDisplayPos","_westDisplayText","_eastOnDisplayPos","_eastDisplayText","_staticGCS","_display","_mavVisionMode","_mavCameraOn","_mavCurrentTarget","_mavCurrentHeight","_radiusMultiplier","_mavSoundOn","_openingCamText","_mavTargetVisibleSphere","_mavAltAGL","_mavAltASL","_zLocation","_laserOnOffText","_altitudeDisplayResults","_compassSize","_leftSideAltBarGraphResults","_altitudeRibbon","_targetPos","_targetPosA","_targetPosB"];
_staticGCS = _this select 0;
_caller = _this select 1;


// CHECK IF GCS WAS ASSIGNED THE NAME OF THE PAIRED RAVEN (IF SOMEONE PLACES THE GCS ONTO THE MAP IN THE EDITOR)
if (isNil{_staticGCS getVariable "nameOfFlyingRaven"}) then
{
      hint "RQ-11 NOT DETECTED";
      _staticGCS say ["zoom_fail",1];

} else
{
      _staticGCS say ["button_large",1];
      sleep 0.2;
      _staticGCS say ["zoom_in",1];

      _microAirVehicle = _staticGCS getVariable "nameOfFlyingRaven";

      // MAV IS NOW AIRBORN - WE NEED TO CREATE AN INVISIBLE SPHERE NEAR IT TO PLAY SOUNDS FROM THE GCS WHILE IN THE CAMERA VIEW
      // THIS IS TOO QUIET OR IT JUST DOESN'T WORK, I DON'T KNOW.
      // [_staticGCS,_microAirVehicle] execVM "\rhsusf\addons\rhsusf_c_uav\scripts\gcsSoundGenerator.sqf";

      // TURN OFF MINICAM IF ON
      if !(isNil{_caller getVariable "miniCamOn"}) then
      {
               [_staticGCS,_caller] execVM "\rhsusf\addons\rhsusf_c_uav\scripts\miniCam\miniCam_OFF.sqf";
               //sleep 2;
               waitUntil {(isNil "BIS_liveFeed")};
      };

      5004 cutText [" ","BLACK IN",2];

      // LOWER THE SOUND OF THE ENGINE
      2 fadeSound 0.4;

      /*
      //  STATIC INTRO START - REMOVED BECAUSE I DIDN'T LIKE IT
      ("BIS_layerStatic" call BIS_fnc_rscLayer) cutRsc ["RscStatic", "PLAIN"];
         waitUntil {!(isNull (uiNamespace getVariable "RscStatic_display"))};
         waitUntil {isNull (uiNamespace getVariable "RscStatic_display")};
      //  STATIC INTRO END
      */


      // Create logic to play sounds
      rhsusf_logic_group = createGroup sideLogic;
      rhsusf_logic1 = rhsusf_logic_group createUnit ["Logic", [10,10,10], [], 0, "NONE"];  // MAIN SOUND SOURCE FOR BUTTONS AND STUFF
      rhsusf_logic2 = rhsusf_logic_group createUnit ["Logic", [10,10,10], [], 0, "NONE"];  // EXTRA
      rhsusf_logic3 = rhsusf_logic_group createUnit ["Logic", [10,10,10], [], 0, "NONE"];  // EXTRA


      // Apply post-process effects
      private ["_ppColor"];
      _ppColor = ppEffectCreate ["colorCorrections", 1999];
      _ppColor ppEffectEnable true;
      _ppColor ppEffectAdjust [1, 1, 0, [1, 1, 1, 0], [0.8, 0.8, 0.8, 0.65], [1, 1, 1, 1.0]];
      _ppColor ppEffectCommit 0;

      private ["_ppGrain"];
      _ppGrain = ppEffectCreate ["filmGrain", 2012];
      _ppGrain ppEffectEnable true;
      _ppGrain ppEffectAdjust [0.1, 1, 1, 0, 1];
      _ppGrain ppEffectCommit 0;



      // HIDE UAV SO YOU DON'T ACCIDENTALLY SEE IT WHILE IN CAMERA VIEW
      _microAirVehicle hideObject true;

      // _mavCurrentTargetSphere = _staticGCS getVariable "mavCurrentTarget";
      _mavTargetVisibleSphere = _staticGCS getVariable "mavTargetVisibleSphere";
      _mavTargetVisibleSphere hideObject false;

      _microAirVehicleCam = "camera" camCreate (position _microAirVehicle);
      _staticGCS setVariable ["nameOfMAVCamera",_microAirVehicleCam,false];

      _newCamPos = position _microAirVehicle;
      _microAirVehicleCam camPreparePos _newCamPos;
      _microAirVehicleCam camPrepareTarget (_staticGCS getVariable "mavCurrentTarget");
      _microAirVehicleCam cameraEffect ["Internal", "BACK"];
      _microAirVehicleCam camCommitPrepared 0;
      showCinemaBorder false;
      // _caller setVariable ["mavCameraOn",1,true];



      _mavVisionMode = _staticGCS getVariable "mavVisionMode";
      switch (_mavVisionMode) do
      {
               case 0 : {camUseNVG false;false setCamUseTi 1;false setCamUseTi 0;};
               case 1 : {camUseNVG true;false setCamUseTi 1;false setCamUseTi 0;};
               case 2 : {camUseNVG false;false setCamUseTi 1;true setCamUseTi 0;};
               case 3 : {camUseNVG false;false setCamUseTi 0;true setCamUseTi 1;};
      };



      //=====DISPLAY STUFF===INIT=========================
      202020 cutRsc ["rhsusf_RQ11_display","PLAIN"];
      disableSerialization;
      waituntil {!isnil {uinamespace getvariable "d_rhsusf_RQ11_display"}};
      progressLoadingScreen 0.5;
      _dspl = uiNamespace getVariable "d_rhsusf_RQ11_display";

      sleep 0.01;


      /*
      //=====STATIC DISPLAY==BOTTOM WINDOW================
      if (typeOf _microAirVehicle == "rhsusf_RQ11RAVEN") then
      {
               _instructions =
               "<br />"+
               "[<t underline='true'>RQ-11 A CONTROLS</t>]" + "<br />"
               +"<br />"+
               "· [+][-] · ZOOM"
               +"<br />"+
               "· [M] · MARKER"
               +"<br />"+
               "· [N] · VISION"
               +"<br />"+
               "· [A][D] · RADIUS"
               +"<br />"+
               "· [W][S] · ALT"
               +"<br />"+
               "· [U] · UNITS"
               +"<br />"+
               "· [G] · EXIT";
      } else
      {
               _instructions =
               "<br />"+
               "[<t underline='true'>RQ-11 B CONTROLS</t>]"
               +"<br />"
               +"<br />"+ "KEYBOARD"
               +"<br />"+ "· [A][D] · RADIUS"
               +"<br />"+ "· [W][S] · ALTITUDE"
               +"<br />"+ "· [M] · MARKER"
               +"<br />"+ "· [N] · VISION"
               +"<br />"+ "· [U] · UNITS"
               +"<br />"+ "· [G] · EXIT"
               +"<br />"
               +"<br />"+ "NUMPAD"
               +"<br />"+ "· [+][-] · ZOOM"
               +"<br />"+ "· [8,2,4,6] · TARGET POSITION"
               +"<br />"+ "· [7,1] · TARGET HEIGHT"
               +"<br />"+ "· [5] · TARGET RESET"
               +"<br />"+ "· [SHIFT 5] · HOME"
               +"<br />"+ "· [0] · TARGET LOCK"
               +"<br />"+ "· [.] · TACTICAL LASER"
               +"<br />"+ "· [ENTER] · LASER DESG"
               ;
      };

      (_dspl displayCtrl 2020667) ctrlSetStructuredText parseText _instructions;
      */
      (_dspl displayCtrl 2020667) ctrlSetBackgroundColor [0,0,0,0];

      _altitudeRibbon =
      "<t  align='right' size='2' shadow='2' > 300—</t>" + "<br />"
      + "<t  align='right' size='2' shadow='2' > -</t>" + "<br />"
      + "<t  align='right' size='2' shadow='2' > -</t>" + "<br />"
      + "<t  align='right' size='2' shadow='2' > -</t>" + "<br />"
      + "<t  align='right' size='2' shadow='2' > -</t>" + "<br />"
      + "<t  align='right' size='2' shadow='2' > 250—</t>" + "<br />"
      + "<t  align='right' size='2' shadow='2' > -</t>" + "<br />"
      + "<t  align='right' size='2' shadow='2' > -</t>" + "<br />"
      + "<t  align='right' size='2' shadow='2' > -</t>" + "<br />"
      + "<t  align='right' size='2' shadow='2' > -</t>" + "<br />"
      + "<t  align='right' size='2' shadow='2' > 200—</t>" + "<br />"
      + "<t  align='right' size='2' shadow='2' > -</t>" + "<br />"
      + "<t  align='right' size='2' shadow='2' > -</t>" + "<br />"
      + "<t  align='right' size='2' shadow='2' > -</t>" + "<br />"
      + "<t  align='right' size='2' shadow='2' > -</t>" + "<br />"
      + "<t  align='right' size='2' shadow='2' > 150—</t>" + "<br />"
      + "<t  align='right' size='2' shadow='2' > -</t>" + "<br />"
      + "<t  align='right' size='2' shadow='2' > -</t>" + "<br />"
      + "<t  align='right' size='2' shadow='2' > -</t>" + "<br />"
      + "<t  align='right' size='2' shadow='2' > -</t>" + "<br />"
      + "<t  align='right' size='2' shadow='2' > 100—</t>" + "<br />"
      + "<t  align='right' size='2' shadow='2' > -</t>" + "<br />"
      + "<t  align='right' size='2' shadow='2' > -</t>" + "<br />"
      + "<t  align='right' size='2' shadow='2' > -</t>" + "<br />"
      + "<t  align='right' size='2' shadow='2' > -</t>" + "<br />"
      + "<t  align='right' size='2' shadow='2' > 50—</t>" + "<br />"
      + "<t  align='right' size='2' shadow='2' > -</t>" + "<br />"
      + "<t  align='right' size='2' shadow='2' > -</t>" + "<br />"
      + "<t  align='right' size='2' shadow='2' > -</t>" + "<br />"
      + "<t  align='right' size='2' shadow='2' > -</t>" + "<br />"
      + "<t  align='right' size='2' shadow='2' > 0—</t>" + "<br />"
      ;

      (_dspl displayCtrl 2020672) ctrlSetStructuredText parseText _altitudeRibbon;

      player setVariable ["nameOfAccessedGCS",_staticGCS,false];

      //=====CONTROLS WHILE IN CAMERA VIEW==================
      if (typeOf _microAirVehicle == "rhsusf_RQ11_B_RAVEN") then
      {

               ravenKeysPressed = compile preprocessFile "\rhsusf\addons\rhsusf_c_uav\scripts\ravenBKeysPressed.sqf";
               _display = findDisplay 46;
               _displayEH_keydown = _display displayAddEventHandler ["KeyDown","_this call ravenKeysPressed"];

      } else
      {

               ravenKeysPressed = compile preprocessFile "\rhsusf\addons\rhsusf_c_uav\scripts\ravenAKeysPressed.sqf";
               _display = findDisplay 46;
               _displayEH_keydown = _display displayAddEventHandler ["KeyDown","_this call ravenKeysPressed"];

      };



      // END STUFF FROM UAV  ===============================================


      _staticGCS setVariable ["mavCameraOn",1,true];
      if (typeOf _microAirVehicle == "rhsusf_RQ11RAVEN") then {_openingCamText ="RQ-11A SIDE CAMERA ACTIVE"} else{_openingCamText ="RQ-11B STEERABLE CAMERA ACTIVE"};
      cutText [_openingCamText,'PLAIN DOWN',0];

      /*
      // FOR TESTING PURPOSES ONLY
      _staticGCS setVariable ["GCSnumber",69,false];
      _ravenNameTestText = format ["GCS NAME = %1 and VARIABLE ASSIGNED IS %2",_staticGCS, _staticGCS getVariable "GCSnumber"];
      cutText [_ravenNameTestText,'PLAIN DOWN',0];
      // FOR TESTING PURPOSES ONLY
      */


// -------------------------------------------------------------------------BEGIN CAMERA LOOP-------------------------------------------------------------------------------------
      for "_i" from 0 to 1 step 0 do
      {

               if (_staticGCS getVariable "mavCameraOn" == 0)  exitWith
               {
                        _staticGCS say ["zoom_fail",1];
               };

               _newCamPos = position _microAirVehicle;
               _microAirVehicleCam camPreparePos _newCamPos;
                _microAirVehicleCam camPrepareTarget (_staticGCS getVariable "mavCurrentTarget");
                if ((_staticGCS getVariable "birdRecall") == 1) then {_microAirVehicleCam camPrepareTarget _staticGCS};
               _microAirVehicleCam camPrepareFov (_staticGCS getVariable "cameraFOVLevel");
               _microAirVehicleCam camCommitPrepared 1;

               sleep 0.1; // WAS 0.5

               if ((!alive _caller) or (_staticGCS getVariable "ravenBatteryLevel" <=0) or (!alive _microAirVehicle)) exitWith
               {
                        _staticGCS setVariable ["mavCameraOn",0,true];
                        _staticGCS say ["zoom_fail",1];
               };

               //================DISPLAY STUFF=======================

               // TIME DISPLAY
               _clockBoxText = call rhsusf_fnc_cameraTime;

               // CLOCK DISPLAY
               (_dspl displayCtrl 2020669) ctrlSetStructuredText parseText _clockBoxText;

               // VISION MODE DISPLAY
               _currentVisionMode = [_staticGCS] call rhsusf_fnc_visionMode;

               // CAMERA FOV DISPLAY
               _cameraFOVLevel = [_staticGCS] call rhsusf_fnc_cameraFOVLevel;

               // ASSIGNED CODE DATA STREAM TITLE
               _upperBoxText = [_staticGCS,_microAirVehicle] call rhsusf_fnc_dataStreamTitle;


               /*
               // DISTANCE DISPLAY
               _distanceDisplayResults = [_microAirVehicle,_caller,_mavTargetVisibleSphere,_staticGCS] call rhsusf_fnc_distanceDisplay;
               _mavCallerDistance = _distanceDisplayResults select 0;
               _mavCallerDistanceUnits = _distanceDisplayResults select 1;
               _mavTargetDistance = _distanceDisplayResults select 2;
               _mavTargetDistanceUnits = _distanceDisplayResults select 3;
               */

               // ALTITUDE DISPLAY FOR RAVEN*********************************************
               _altitudeDisplayResults = [_staticGCS,_microAirVehicle] call rhsusf_fnc_altitudeDisplay;
               _mavAltAGL = _altitudeDisplayResults select 0;
               _mavAltASL = _altitudeDisplayResults select 1;
               // _mavCallerAltUnits = _altitudeDisplayResults select 2;


               // LEFT SIDE ALTITUDE DISPLAY BAR GRAPH
               _leftSideAltBarGraphResults = [_mavAltAGL,_mavAltASL] call rhsusf_fnc_leftSideAltBarGraph;

               (_dspl displayCtrl 2020671) ctrlSetStructuredText parseText _leftSideAltBarGraphResults;

               /*
               // ALTITUDE DISPLAY FOR TARGET*********************************************

               _tarAltAGL = round (visiblePosition _mavTargetVisibleSphere select 2);
               _tarAltASL = round (visiblePositionASL _mavTargetVisibleSphere select 2);
               _tarCallerAltUnits = "m";

               if !(isNil{_staticGCS getVariable "GCSUnits"}) then
               {
                        // CONVERT TO FEET
                        _tarAltAGL = round (_tarAltAGL * 3.28084);
                        _tarAltASL = round (_tarAltASL * 3.28084);
                        _tarCallerAltUnits = "ft";
               };

               _altitudeDisplayResults = [_staticGCS,_mavTargetVisibleSphere] call rhsusf_fnc_altitudeDisplay;
               _tarAltAGL = _altitudeDisplayResults select 0;
               _tarAltASL = _altitudeDisplayResults select 1;
               _tarCallerAltUnits = _altitudeDisplayResults select 2;


               */
               // SPEED DISPLAY************************************************
               _speedDisplayResults = [_staticGCS,_microAirVehicle] call rhsusf_fnc_speedDisplay;
               _mavCallerSpeed= _speedDisplayResults select 0;
               _mavCallerSpeedUnits= _speedDisplayResults select 1;



               // CREATE THE RIGHT SIDE DISPLAY
               // _upperBoxText = _upperBoxText + "<t  align='right'>DISTANCE FROM</t>" + "<br />";
               // _upperBoxText = _upperBoxText + format ["<t  align='right'>%1%2 · TAR ·</t>", _mavTargetDistance,_mavTargetDistanceUnits] + "<br />";
               // _upperBoxText = _upperBoxText + "<br />" + "<t  align='right'>ALT - HDG - SPEED - POS</t>" + "<br />";
               _upperBoxText = _upperBoxText + "<br />" + "<t  align='right' size='2' shadow='2' >RAVEN INFO</t>" + "<br />";
               //_upperBoxText = _upperBoxText + format ["<t  align='right'>%1%2 · AGL ·</t>",_mavAltAGL,_mavCallerAltUnits] + "<br />";
               //_upperBoxText = _upperBoxText + format ["<t  align='right'>%1%2 · ASL ·</t>",_mavAltASL,_mavCallerAltUnits] + "<br />";
               _upperBoxText = _upperBoxText + format ["<t  align='right' size='2' shadow='2' >%1º · HDG ·</t>",round getDir _microAirVehicleCam] + "<br />";
               _upperBoxText = _upperBoxText + format ["<t  align='right' size='2' shadow='2' >%1%2 · SPD ·</t>",_mavCallerSpeed,_mavCallerSpeedUnits] + "<br />";
               //_upperBoxText = _upperBoxText + format ["<t  align='right'>%1 · POS ·</t>",(position _microAirVehicle) call BIS_fnc_PosToGrid] + "<br />";
               _upperBoxText = _upperBoxText +
               "<br />" +
               "<br />" +
               "<t  align='right' size='2' shadow='2' >CAMERA INFO</t>" +
               "<br />" +
               format ["<t  align='right' size='2' shadow='2' >[%1] · FOC ·</t>",_cameraFOVLevel] +
               "<br />" +
               format ["<t  align='right' size='2' shadow='2' >[%1] · VIS ·</t>",_currentVisionMode] +
               "<br />" +
               "<br />" +
               "<br />" +
               "<t  align='right' size='2' shadow='2' >TARPOS</t>" +
               "<br />";

               _targetPos = (visiblePosition _mavTargetVisibleSphere) call BIS_fnc_PosToGrid;
               _targetPosA = _targetPos select 0;
               _targetPosB = _targetPos select 1;
               _upperBoxText = _upperBoxText + format ["<t  align='right' size='2' shadow='2' >[%1-%2]</t>",_targetPosA,_targetPosB] + "<br />" + "<br />";
               // _upperBoxText = _upperBoxText + format ["<t  align='right' size='2'>%1%2 · DIST ·</t>", _mavCallerDistance,_mavCallerDistanceUnits] + "<br />";
               //_upperBoxText = _upperBoxText + format ["<t  align='right'>%1%2 · AGL ·</t>",_tarAltAGL,_tarCallerAltUnits] + "<br />";
               //_upperBoxText = _upperBoxText + format ["<t  align='right'>%1%2 · ASL ·</t>",_tarAltASL,_tarCallerAltUnits] + "<br />";

               if !(isNil{_mavTargetVisibleSphere getVariable "sphereAttached"}) then
               {
                        _upperBoxText = _upperBoxText + ("<t  align='right' size='2' shadow='2' >**[LOCKED]**</t>")+ "<br />";
                        (_dspl displayCtrl 2020658) ctrlSetBackgroundColor [1,0,0,0.632];
                        (_dspl displayCtrl 2020659) ctrlSetBackgroundColor [1,0,0,0.632];
                        (_dspl displayCtrl 2020660) ctrlSetBackgroundColor [1,0,0,0.632];
                        (_dspl displayCtrl 2020661) ctrlSetBackgroundColor [1,0,0,0.632];

               } else
               {
                        (_dspl displayCtrl 2020658) ctrlSetBackgroundColor [1,1,1,0.632];
                        (_dspl displayCtrl 2020659) ctrlSetBackgroundColor [1,1,1,0.632];
                        (_dspl displayCtrl 2020660) ctrlSetBackgroundColor [1,1,1,0.632];
                        (_dspl displayCtrl 2020661) ctrlSetBackgroundColor [1,1,1,0.632];
               } ;

               (_dspl displayCtrl 2020666) ctrlSetStructuredText parseText _upperBoxText;


               // LASER DESIGNATOR AND TACTICAL DISPLAY
               switch (true) do
               {
                  case (!(isNil{_staticGCS getVariable "LaserDesignatorName"}) and !(isNil{_staticGCS getVariable "TacticalLaserVisible"})) : {_laserOnOffText = "" + "<br />" + "<t  align='center' shadow='2' >**|LASER DESIGNATOR ON|**</t>" + "<br />" + "<t  align='center' shadow='2' >**|TACTICAL LASER ON|**</t>";}; // DESIGNATOR ON - TACTICAL ON
                  case (!(isNil{_staticGCS getVariable "LaserDesignatorName"}) and (isNil{_staticGCS getVariable "TacticalLaserVisible"})) : {_laserOnOffText = "" + "<br />" + "<t  align='center' shadow='2' >**|LASER DESIGNATOR ON|**</t>";}; // DESIGNATOR ON - TACTICAL OFF
                  case ((isNil{_staticGCS getVariable "LaserDesignatorName"}) and !(isNil{_staticGCS getVariable "TacticalLaserVisible"})) : {_laserOnOffText = "" + "<br />" + "<t  align='center' shadow='2' >**|TACTICAL LASER ON|**</t>";}; // DESIGNATOR OFF - TACTICAL ON
                  case ((isNil{_staticGCS getVariable "LaserDesignatorName"}) and (isNil{_staticGCS getVariable "TacticalLaserVisible"})) : {_laserOnOffText = "" + "<br />" + "";}; // DESIGNATOR OFF - TACTICAL OFF

               };
               (_dspl displayCtrl 2020670) ctrlSetStructuredText parseText _laserOnOffText;

               // BATTERY DISPLAY
               _batteryBoxText = [_staticGCS] call rhsusf_fnc_batteryDisplay;
               (_dspl displayCtrl 2020668) ctrlSetStructuredText parseText _batteryBoxText;

               // COMPASS DISPLAY
               _mavCurrentTarget = _staticGCS getVariable "mavCurrentTarget";
               _markerMavCurrentTargetPos = visiblePositionASL _mavCurrentTarget;
               _compassSize = _staticGCS getVariable "compassSize";

               _northLocationX = _markerMavCurrentTargetPos select 0;
               _northLocationY = (_markerMavCurrentTargetPos select 1) + _compassSize;
               _southLocationX = _markerMavCurrentTargetPos select 0;
               _southLocationY = (_markerMavCurrentTargetPos select 1) - _compassSize;
               _westLocationX = (_markerMavCurrentTargetPos select 0) - _compassSize;
               _westLocationY = _markerMavCurrentTargetPos select 1;
               _eastLocationX = (_markerMavCurrentTargetPos select 0) + _compassSize;
               _eastLocationY = _markerMavCurrentTargetPos select 1;

               if (surfaceIsWater [visiblePositionASL _mavCurrentTarget select 0,visiblePositionASL _mavCurrentTarget select 1]) then
               {
                        _zLocation = visiblePositionASL _mavCurrentTarget select 2;
               } else
               {
                        _zLocation = visiblePosition _mavCurrentTarget select 2;
               };

               //=====NORTH
               _northOnDisplayPos = worldToScreen [_northLocationX,_northLocationY,_zLocation];
               _northDisplayText = "<t align='LEFT' valign='TOP' color='#FF0000' size='1.2' >N</t>";
               (_dspl displayCtrl 2020662) ctrlSetStructuredText parseText _northDisplayText;
               (_dspl displayCtrl 2020662) ctrlSetPosition _northOnDisplayPos;
               (_dspl displayCtrl 2020662) ctrlCommit 0;

               //=====SOUTH
               _southOnDisplayPos = worldToScreen [_southLocationX,_southLocationY,_zLocation];
               _southDisplayText = "<t align='LEFT' valign='TOP' color='#00FF00' size='1.2' >S</t>";
               (_dspl displayCtrl 2020663) ctrlSetStructuredText parseText _southDisplayText;
               (_dspl displayCtrl 2020663) ctrlSetPosition _southOnDisplayPos;
               (_dspl displayCtrl 2020663) ctrlCommit 0;

               //=====WEST
               _westOnDisplayPos = worldToScreen [_westLocationX,_westLocationY,_zLocation];
               _westDisplayText = "<t align='LEFT' valign='TOP' color='#00FF00' size='1.2' >W</t>";
               (_dspl displayCtrl 2020664) ctrlSetStructuredText parseText _westDisplayText;
               (_dspl displayCtrl 2020664) ctrlSetPosition _westOnDisplayPos;
               (_dspl displayCtrl 2020664) ctrlCommit 0;

               //=====EAST
               _eastOnDisplayPos = worldToScreen [_eastLocationX,_eastLocationY,_zLocation];
               _eastDisplayText = "<t align='LEFT' valign='TOP' color='#00FF00' size='1.2' >E</t>";
               (_dspl displayCtrl 2020665) ctrlSetStructuredText parseText _eastDisplayText;
               (_dspl displayCtrl 2020665) ctrlSetPosition _eastOnDisplayPos;
               (_dspl displayCtrl 2020665) ctrlCommit 0;

      };

// -------------------------------------------------------------------------END CAMERA LOOP-------------------------------------------------------------------------------------

      //  STATIC OUTRO START


      ("BIS_layerStatic" call BIS_fnc_rscLayer) cutRsc ["RscStatic", "PLAIN"];
         waitUntil {!(isNull (uiNamespace getVariable "RscStatic_display"))};
         waitUntil {isNull (uiNamespace getVariable "RscStatic_display")};


      //  STATIC OUTRO END



      //=====END DISPLAY STUFF==================================
      202020 cutText ["","PLAIN"];
      _display = findDisplay 46;
      _display displayRemoveEventHandler ["keydown",_displayEH_keydown];

      //_staticGCS setVariable ["soundGeneratingSphereOn",nil,false];
      //sleep 0.1;

      _microAirVehicleCam cameraEffect ["Terminate", "BACK"];
      _microAirVehicleCam camCommit 0;
      camDestroy _microAirVehicleCam;
      _microAirVehicle hideObject false;

      _mavTargetVisibleSphere hideObject true;


      ppEffectDestroy _ppColor;
      ppEffectDestroy _ppGrain;


      5004 cutText [" ","BLACK IN",2];

      // RAISE SOUND BACK UP
      2 fadeSound 1;


      // Delete sound logics and group
      {if (!(isNil _x)) then {deleteVehicle (missionNamespace getVariable _x)}} forEach ["rhsusf_logic1", "rhsusf_logic2", "rhsusf_logic3"];
      if (!(isNil "rhsusf_logic_group")) then {deleteGroup rhsusf_logic_group};


      // BROADCAST VARIABLES
      // CURRENT VISION MODE
      _mavVisionMode = _staticGCS getVariable "mavVisionMode";
      _staticGCS setVariable ["mavVisionMode",_mavVisionMode,true];
      sleep 0.1;

      //  THE MAV CAMERA STATE
      _mavCameraOn = _staticGCS getVariable "mavCameraOn";
      _staticGCS setVariable ["mavCameraOn",_mavCameraOn,true];
      sleep 0.1;

      //  CAMERA FOV -- The default zoom level is 0.7, 0.01 is the nearest and 2 the furthest zoom value
      _cameraFOVLevel = _staticGCS getVariable "cameraFOVLevel";
      _staticGCS setVariable ["cameraFOVLevel",_cameraFOVLevel,true];
      sleep 0.1;

      //  THE CURRENT TARGET
      _mavCurrentTarget = _staticGCS getVariable "mavCurrentTarget";
      _staticGCS setVariable ["mavCurrentTarget",_mavCurrentTarget,true];
      sleep 0.1;

      //  STARTING HEIGHT AS 30
      _mavCurrentHeight = _staticGCS getVariable"mavCurrentHeight";
      _staticGCS setVariable ["mavCurrentHeight",_mavCurrentHeight,true];
      sleep 0.1;

      //   RADIUS MULTIPLIER AT 1.5
      _radiusMultiplier = _staticGCS getVariable "radiusMultiplier";
      _staticGCS setVariable ["radiusMultiplier",_radiusMultiplier,true];
      sleep 0.1;

      //  ENGINE SOUND FOR MAV
      _mavSoundOn = _staticGCS getVariable "mavSoundOn";
      _staticGCS setVariable ["mavSoundOn",_mavSoundOn,true];
      sleep 0.1;


};
