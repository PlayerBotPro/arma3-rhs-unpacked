class CfgPatches {
    class RHSUSF_c_vehicleSounds {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {
            "A3_sounds_f",
            "rhsusf_c_m1a1",
            "rhsusf_c_m1a2",
            "rhsusf_s_vehicleSounds"
        };
        version = "0.1";
    };
};
class cfgSound3DProcessors {
    class RHSUSF_armor_ext_base_3DProcessingType {
        type = "emitter";
        innerRange = 4;
        range = 10;
        radius = 4;
    };
    class RHSUSF_heavyBoat_water_base_3DProcessingType {
        type = "panner";
        innerRange = 20;
        range = 40;
    };
    class RHSUSF_Abrams_ext_3DProcessingType {
        type = "emitter";
        innerRange = 4;
        range = 30;
        radius = 4;
    };
    class RHSUSF_Abrams_exhaust_ext_3DProcessingType {
        type = "panner";
        innerRange = 4;
        range = 15;
        rangeCurve = "InverseSquare2Curve";
    };
};
class cfgSoundShaders {
    class RHSUSF_trackSurfaceSound_ext_soft_soundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\Tracks_Surface_Movement\Tracks_Surface_Movement_Grass", 1}};
        frequency = " (0.80 + (0.35 * ((abs(speed)) factor [0,  12]))) max (0.8 + 0.2 * ((((abs(speed)) factor [2,1]) * (angVelocity factor [0,1]))))";
        volume = "(mud + grass + (0.1*sand))  * (((abs(speed)) factor [0,5]) max  (((abs(speed)) factor [3,1.5]) * ((0.7 * (angVelocity factor [0,0.1])) +  (0.3 * (angVelocity factor [0.4,0.8])))))";
        range = 220;
        rangeCurve[] = {{0, 1}, {50, 0.75}, {220, 1}};
    };
    class RHSUSF_trackSurfaceSound_ext_hard_soundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\Tracks_Surface_Movement\Tracks_Surface_Movement_Asphalt", 1}};
        frequency = " (0.80 + (0.35 * ((abs(speed)) factor [0,  12]))) max (0.8 + 0.2 * ((((abs(speed)) factor [2,1]) * (angVelocity factor [0,1]))))";
        volume = "(rock + asphalt + (1.17*gravel)) * (((abs(speed)) factor [0,5]) max  (((abs(speed)) factor [3,1.5]) * ((0.7 * (angVelocity factor [0,0.1])) +  (0.3 * (angVelocity factor [0.4,0.8])))))";
        range = 220;
        rangeCurve[] = {{0, 1}, {50, 0.75}, {220, 1}};
    };
    class RHSUSF_trackSurfaceSound_ext_sand_soundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\Tracks_Surface_Movement\Tracks_Surface_Movement_Sand", 1}};
        frequency = " (0.80 + (0.35 * ((abs(speed)) factor [0,  12]))) max (0.8 + 0.2 * ((((abs(speed)) factor [2,1]) * (angVelocity factor [0,1]))))";
        volume = "sand  * (((abs(speed)) factor [0,5]) max  (((abs(speed)) factor [3,1.5]) * ((0.7 * (angVelocity factor [0,0.1])) +  (0.3 * (angVelocity factor [0.4,0.8])))))";
        range = 220;
        rangeCurve[] = {{0, 1}, {50, 0.75}, {220, 1}};
    };
    class RHSUSF_int_breakingStrain_soundShader {
        samples[] = {
            {"A3\Sounds_F\vehicles2\armor\shared\Material_Strain\Tanks_Brakes_Strain_Int_01", 1},
            {"A3\Sounds_F\vehicles2\armor\shared\Material_Strain\Tanks_Brakes_Strain_Int_02", 1},
            {"A3\Sounds_F\vehicles2\armor\shared\Material_Strain\Tanks_Brakes_Strain_Int_03", 1},
            {"A3\Sounds_F\vehicles2\armor\shared\Material_Strain\Tanks_Brakes_Strain_Int_04", 1},
            {"A3\Sounds_F\vehicles2\armor\shared\Material_Strain\Tanks_Brakes_Strain_Int_05", 1}
        };
        frequency = "1";
        volume = "1";
    };
    class RHSUSF_tankRattling_1_soundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\add_layers\Rattling_02_INT", 1}};
        frequency = "0.7 + (0.45 * ((abs(speed)) factor [0,13]))";
        volume = "(0.8 * (abs(speed)) factor [0.4,6]) + (0.2 * (abs(speed)) factor [6,10])";
    };
    class RHSUSF_curveStress_1_soundShader {
        samples[] = {{"a3\sounds_f\vehicles2\soft\shared\add_layers\Stress_02_Ext", 1}};
        frequency = "0.7 + (0.45 * (angVelocity factor [0,1]))";
        volume = "(angVelocity factor [0,0.9])";
    };
    class RHSUSF_heavyBoat_water_idle_soundShader {
        samples[] = {{"a3\sounds_f\vehicles\boat\SFX\voda-o-bok-lodi-0-speed", 1}};
        frequency = "0.7 + (0.3 * wind)";
        volume = "0.75 * water * ((abs(speed)) factor [2,1])";
        range = 100;
        rangeCurve[] = {{0, 1}, {120, 1}};
    };
    class RHSUSF_heavyBoat_water_slow_soundShader {
        samples[] = {{"a3\sounds_f\vehicles\boat\SFX\voda-o-bok-lodi-10-speed", 1}};
        frequency = "0.7 + (0.3 * wind)";
        volume = "water * ((abs(speed)) factor [1,1.5]) * ((abs(speed)) factor [2.5,1.5])";
        range = 200;
        rangeCurve[] = {{0, 1}, {200, 1}};
    };
    class RHSUSF_heavyBoat_water_mid_soundShader {
        samples[] = {{"a3\sounds_f\vehicles\boat\SFX\voda-o-bok-lodi-20-speed", 1}};
        frequency = "0.7 + (0.3 * wind)";
        volume = "water * ((abs(speed)) factor [1.5,2.5]) * ((abs(speed)) factor [4.5,2.5])";
        range = 380;
        rangeCurve[] = {{0, 1}, {380, 1}};
    };
    class RHSUSF_heavyBoat_water_fast_soundShader {
        samples[] = {{"a3\sounds_f\vehicles\boat\SFX\voda-o-bok-lodi-50-speed", 1}};
        frequency = "0.7 + (0.15 * wind) + (0.3 * ((abs(speed)) factor [4.5,8]))";
        volume = "water * ((abs(speed)) factor [2.5,4.5])";
        range = 420;
        rangeCurve[] = {{0, 1}, {420, 1}};
    };
    class RHSUSF_heavyBoat_int_stress_soundShader {
        samples[] = {{"a3\sounds_f\vehicles\noises\vehicle_stress2c", 1}};
        frequency = "0.7 + (0.4 * (angVelocity factor [0,0.1]))";
        volume = "1.2 * (angVelocity factor [0.03,0.05])";
    };
    class RHSUSF_heavyBoat_landScrub_soundShader {
        samples[] = {{"a3\sounds_f\vehicles2\armor\shared\Tracks_Surface_Movement\Tracks_Surface_Movement_Mud", 1}};
        frequency = "0.85 + (0.2 * (scrubLand factor [0.01, 0.90]))";
        volume = "scrubLand factor [0.01, 0.20]";
        range = 460;
        rangeCurve[] = {{0, 1}, {460, 1}};
    };
    class RHSUSF_boat_water_idle_soundShader {
        samples[] = {{"a3\sounds_f\vehicles\boat\SFX\voda-o-bok-lodi-0-speed", 1}};
        frequency = "1.1 + (0.3 * wind)";
        volume = "water * ((abs(speed)) factor [2,1])";
        range = 90;
        rangeCurve[] = {{0, 1}, {90, 1}};
    };
    class RHSUSF_boat_water_slow_soundShader {
        samples[] = {{"a3\sounds_f\vehicles\boat\SFX\voda-o-bok-lodi-10-speed", 1}};
        frequency = "0.8 + (0.3 * wind)";
        volume = "water * ((abs(speed)) factor [1,1.5]) * ((abs(speed)) factor [2.5,1.5])";
        range = 160;
        rangeCurve[] = {{0, 1}, {160, 1}};
    };
    class RHSUSF_boat_water_mid_soundShader {
        samples[] = {{"a3\sounds_f\vehicles\boat\SFX\voda-o-bok-lodi-20-speed", 1}};
        frequency = "0.8 + (0.3 * wind)";
        volume = "water * ((abs(speed)) factor [1.5,2.5]) * ((abs(speed)) factor [4.5,2.5])";
        range = 300;
        rangeCurve[] = {{0, 1}, {300, 1}};
    };
    class RHSUSF_boat_water_fast_soundShader {
        samples[] = {{"a3\sounds_f\vehicles\boat\SFX\voda-o-bok-lodi-50-speed", 1}};
        frequency = "0.8 + (0.15 * wind) + (0.3 * ((abs(speed)) factor [4.5,8]))";
        volume = "water * ((abs(speed)) factor [2.5,4.5])";
        range = 370;
        rangeCurve[] = {{0, 1}, {370, 1}};
    };
    class RHSUSF_boat_int_stress_soundShader {
        samples[] = {{"a3\sounds_f\vehicles2\soft\shared\add_layers\Rattling_02_Ext", 1}};
        frequency = "0.8 + (0.3 * (angVelocity factor [0,0.1]))";
        volume = "1 * (angVelocity factor [0.04,0.8])";
    };
    class RHSUSF_boat_landScrub_soundShader {
        samples[] = {{"a3\sounds_f\vehicles2\soft\shared\tires01\Tires_Grass_Fast_Ext", 1}};
        frequency = "0.95 + (0.2 * (scrubLand factor [0.01, 0.90]))";
        volume = "scrubLand factor [0.01, 0.10]";
        range = 360;
        rangeCurve[] = {{0, 1}, {360, 1}};
    };
    class RHSUSF_Abrams_int_idle_soundShader {
        samples[] = {{"RHSUSF\addons\rhsusf_s_vehicleSounds\tanks\abrams\int_Idle", 1}};
        frequency = "0.9 + ( 0.20 * (rpm factor [0   , 1400]))";
        volume = "1.00 * engineOn * (rpm factor [ 0, 400]) * (rpm factor [1400, 1000])* 0.25";
    };
    class RHSUSF_Abrams_int_slow_soundShader {
        samples[] = {{"RHSUSF\addons\rhsusf_s_vehicleSounds\tanks\abrams\int_slow", 1}};
        frequency = "0.8 + ((0.23 * (rpm factor [ 1000,1600])) max (0.3 * (angVelocity factor [0,1])))";
        volume = "1.05 * engineOn * ((rpm factor [ 1000, 1100]) * (rpm factor [1600, 1100])) max (((rpm factor [ 1000, 1100]) * (rpm factor [1600, 1100])) * (angVelocity factor [0,0.2]) * (angVelocity factor [0.4,0.2]))* 0.4";
    };
    class RHSUSF_Abrams_int_mid_soundShader {
        samples[] = {{"RHSUSF\addons\rhsusf_s_vehicleSounds\tanks\abrams\int_mid", 1}};
        frequency = "0.8 + ( 0.26 * (rpm factor [1600,2900]))";
        volume = "0.90 * engineOn * ((rpm factor [ 1100,1600]) * (rpm factor [2900,2300])) max (((rpm factor [ 1100, 1600]) * (rpm factor [2900,2300])) * (angVelocity factor [0.2,0.4]))* 0.4";
    };
    class RHSUSF_Abrams_int_fast_soundShader {
        samples[] = {{"RHSUSF\addons\rhsusf_s_vehicleSounds\tanks\abrams\int_fast", 1}};
        frequency = "0.8 + ( 0.25 * (rpm factor [2300,3000])) + (0.12 * ((abs(speed)) factor [9,13]))";
        volume = "0.90 * engineOn * (rpm factor [2300,2900])* 0.4";
    };
    class RHSUSF_Abrams_exhaust_int_idle_soundShader {
        samples[] = {{"RHSUSF\addons\rhsusf_s_vehicleSounds\tanks\abrams\exhaust_Ext_Idle", 1}};
        frequency = "0.9 + ( 0.20 * (rpm factor [0   , 1400]))";
        volume = "1.00 * engineOn * (rpm factor [ 0, 400]) * (rpm factor [1400, 1000])";
    };
    class RHSUSF_Abrams_exhaust_int_slow_soundShader {
        samples[] = {{"RHSUSF\addons\rhsusf_s_vehicleSounds\tanks\abrams\exhaust_Ext_Slow", 1}};
        frequency = "0.8 + ((0.23 * (rpm factor [ 1000,1600])) max (0.3 * (angVelocity factor [0,1])))";
        volume = "1.05 * engineOn * ((rpm factor [ 1000, 1100]) * (rpm factor [1600, 1100])) max (((rpm factor [ 1000, 1100]) * (rpm factor [1600, 1100])) * (angVelocity factor [0,0.2]) * (angVelocity factor [0.4,0.2]))";
    };
    class RHSUSF_Abrams_exhaust_int_mid_soundShader {
        samples[] = {{"RHSUSF\addons\rhsusf_s_vehicleSounds\tanks\abrams\exhaust_Ext_mid", 1}};
        frequency = "0.8 + ( 0.26 * (rpm factor [1600,2900]))";
        volume = "0.90 * engineOn * ((rpm factor [ 1100,1600]) * (rpm factor [2900,2300])) max (((rpm factor [ 1100, 1600]) * (rpm factor [2900,2300])) * (angVelocity factor [0.2,0.4]))";
    };
    class RHSUSF_Abrams_exhaust_int_fast_soundShader {
        samples[] = {{"RHSUSF\addons\rhsusf_s_vehicleSounds\tanks\abrams\exhaust_Ext_fast", 1}};
        frequency = "0.8 + ( 0.25 * (rpm factor [2300,3000])) + (0.12 * ((abs(speed)) factor [9,13]))";
        volume = "0.90 * engineOn * (rpm factor [2300,2900])";
    };
    class RHSUSF_Abrams_int_acce_soundShader {
        samples[] = {{"RHSUSF\addons\rhsusf_s_vehicleSounds\tanks\abrams\ext_acce_1", 1}, {"RHSUSF\addons\rhsusf_s_vehicleSounds\tanks\abrams\ext_acce_2", 1}, {"RHSUSF\addons\rhsusf_s_vehicleSounds\tanks\abrams\ext_acce_3", 1}};
        frequency = "1";
        volume = "1 * engineOn * (rpm factor [600,700]) * (rpm factor [1400,1100])";
    };
    class RHSUSF_Abrams_int_rain_soundShader {
        samples[] = {{"RHSUSF\addons\rhsusf_s_vehicleSounds\shared\rain\int_rain_light", 1}};
        frequency = "0.7 + (0.3 * rain)";
        volume = "rain";
    };
    class RHSUSF_Abrams_ext_idle_soundShader {
        samples[] = {{"RHSUSF\addons\rhsusf_s_vehicleSounds\tanks\abrams\engine_Ext_Idle", 1}};
        frequency = "0.9 + ( 0.20 * (rpm factor [0   , 1400]))";
        volume = "1.00 * engineOn * (rpm factor [ 0, 400]) * (rpm factor [1400, 1000])";
        range = 250;
        rangeCurve[] = {{0, 1}, {250, 1}};
    };
    class RHSUSF_Abrams_ext_slow_soundShader {
        samples[] = {{"RHSUSF\addons\rhsusf_s_vehicleSounds\tanks\abrams\engine_Ext_Slow", 1}};
        frequency = "0.8 + ((0.23 * (rpm factor [ 1000,1600])) max (0.3 * (angVelocity factor [0,1])))";
        volume = "1.05 * engineOn * ((rpm factor [ 1000, 1100]) * (rpm factor [1600, 1100])) max (((rpm factor [ 1000, 1100]) * (rpm factor [1600, 1100])) * (angVelocity factor [0,0.2]) * (angVelocity factor [0.4,0.2]))";
        range = 400;
        rangeCurve[] = {{0, 1}, {400, 1}};
    };
    class RHSUSF_Abrams_ext_mid_soundShader {
        samples[] = {{"RHSUSF\addons\rhsusf_s_vehicleSounds\tanks\abrams\engine_Ext_mid", 1}};
        frequency = "0.8 + ( 0.26 * (rpm factor [1600,2900]))";
        volume = "0.90 * engineOn * ((rpm factor [ 1100,1600]) * (rpm factor [2900,2300])) max (((rpm factor [ 1100, 1600]) * (rpm factor [2900,2300])) * (angVelocity factor [0.2,0.4]))";
        range = 500;
        rangeCurve[] = {{0, 1}, {500, 1}};
    };
    class RHSUSF_Abrams_ext_fast_soundShader {
        samples[] = {{"RHSUSF\addons\rhsusf_s_vehicleSounds\tanks\abrams\engine_Ext_fast", 1}};
        frequency = "0.8 + ( 0.25 * (rpm factor [2300,3000])) + (0.12 * ((abs(speed)) factor [9,13]))";
        volume = "0.90 * engineOn * (rpm factor [2300,2900])";
        range = 600;
        rangeCurve[] = {{0, 1}, {600, 1}};
    };
    class RHSUSF_Abrams_ext_rumble_soundShader {
        samples[] = {{"RHSUSF\addons\rhsusf_s_vehicleSounds\tanks\abrams\ext_rumble", 1}};
        frequency = "0.8 + (0.2 * ((abs(speed)) factor [0,4])) + (0.15 * ((abs(speed)) factor [4,13]))";
        volume = "((0.8 * ((abs(speed)) factor [0,2.3])) + (0.2 * ((abs(speed)) factor [2.3,6])))    max    (((abs(speed)) factor [3,1.5]) * ((0.5 * (angVelocity factor [0,0.1])) +  (0.3 * (angVelocity factor [0.4,0.8])))               )";
        range = 280;
        rangeCurve[] = {{0, 1}, {280, 1}};
    };
    class RHSUSF_Abrams_exhaust_ext_idle_soundShader {
        samples[] = {{"RHSUSF\addons\rhsusf_s_vehicleSounds\tanks\abrams\exhaust_Ext_Idle", 1}};
        frequency = "0.9 + ( 0.20 * (rpm factor [0   , 1400]))";
        volume = "1.00 * engineOn * (rpm factor [ 0, 400]) * (rpm factor [1400, 1000])";
        range = 300;
        rangeCurve[] = {{0, 1}, {300, 1}};
    };
    class RHSUSF_Abrams_exhaust_ext_slow_soundShader {
        samples[] = {{"RHSUSF\addons\rhsusf_s_vehicleSounds\tanks\abrams\exhaust_Ext_Slow", 1}};
        frequency = "0.8 + ((0.23 * (rpm factor [ 1000,1600])) max (0.3 * (angVelocity factor [0,1])))";
        volume = "1.05 * engineOn * ((rpm factor [ 1000, 1100]) * (rpm factor [1600, 1100])) max (((rpm factor [ 1000, 1100]) * (rpm factor [1600, 1100])) * (angVelocity factor [0,0.2]) * (angVelocity factor [0.4,0.2]))";
        range = 475;
        rangeCurve[] = {{0, 1}, {475, 1}};
    };
    class RHSUSF_Abrams_exhaust_ext_mid_soundShader {
        samples[] = {{"RHSUSF\addons\rhsusf_s_vehicleSounds\tanks\abrams\exhaust_Ext_mid", 1}};
        frequency = "0.8 + ( 0.26 * (rpm factor [1600,2900]))";
        volume = "0.90 * engineOn * ((rpm factor [ 1100,1600]) * (rpm factor [2900,2300])) max (((rpm factor [ 1100, 1600]) * (rpm factor [2900,2300])) * (angVelocity factor [0.2,0.4]))";
        range = 640;
        rangeCurve[] = {{0, 1}, {640, 1}};
    };
    class RHSUSF_Abrams_exhaust_ext_fast_soundShader {
        samples[] = {{"RHSUSF\addons\rhsusf_s_vehicleSounds\tanks\abrams\exhaust_Ext_fast", 1}};
        frequency = "0.8 + ( 0.25 * (rpm factor [2300,3000])) + (0.12 * ((abs(speed)) factor [9,13]))";
        volume = "0.90 * engineOn * (rpm factor [2300,2900])";
        range = 700;
        rangeCurve[] = {{0, 1}, {700, 1}};
    };
    class RHSUSF_Abrams_ext_tracks_slow_soundShader {
        samples[] = {{"RHSUSF\addons\rhsusf_s_vehicleSounds\tanks\abrams\tracks_ext_slow", 1}};
        frequency = " (0.80 + (0.3 * ((abs(speed)) factor [0,  12]))) max (0.8 + 0.2 * ((((abs(speed)) factor [5,3]) * (angVelocity factor [0,1]))))";
        volume = " (((abs(speed)) factor [   0, 1]) * ((abs(speed)) factor [6,  4]))  max (((abs(speed)) factor [5,3]) * 0.8 * (angVelocity factor [0,0.2]) * (angVelocity factor [0.4,0.2]))";
        range = 410;
        rangeCurve[] = {{0, 1}, {410, 1}};
    };
    class RHSUSF_Abrams_ext_tracks_mid_soundShader {
        samples[] = {{"RHSUSF\addons\rhsusf_s_vehicleSounds\tanks\abrams\tracks_ext_mid", 1}};
        frequency = " (0.80 + (0.3 * ((abs(speed)) factor [0,  12]))) max (0.8 + 0.2 * ((((abs(speed)) factor [5,3]) * (angVelocity factor [0,1]))))";
        volume = " (((abs(speed)) factor [   4, 6]) * ((abs(speed)) factor [8,  7]))  max (((abs(speed)) factor [5,3]) * 0.8 * (angVelocity factor [0.2,0.4]))";
        range = 570;
        rangeCurve[] = {{0, 1}, {570, 1}};
    };
    class RHSUSF_Abrams_ext_tracks_fast_soundShader {
        samples[] = {{"RHSUSF\addons\rhsusf_s_vehicleSounds\tanks\abrams\tracks_ext_fast", 1}};
        frequency = " (0.80 + (0.3 * ((abs(speed)) factor [0,  12]))) max (0.8 + 0.2 * ((((abs(speed)) factor [5,3]) * (angVelocity factor [0,1]))))";
        volume = "  ((abs(speed)) factor [   7, 8])";
        range = 640;
        rangeCurve[] = {{0, 1}, {640, 1}};
    };
    class RHSUSF_Abrams_dist_slow_soundShader {
        samples[] = {{"RHSUSF\addons\rhsusf_s_vehicleSounds\tanks\abrams\dist_Slow", 1}};
        frequency = "0.8 + ((0.23 * (rpm factor [ 1000,1600])) max (0.3 * (angVelocity factor [0,1])))";
        volume = "1.05 * engineOn * ((rpm factor [ 1000, 1100]) * (rpm factor [1600, 1100])) max (((rpm factor [ 1000, 1100]) * (rpm factor [1600, 1100])) * (angVelocity factor [0,0.2]) * (angVelocity factor [0.4,0.2]))";
        range = 1000;
        rangeCurve[] = {{0, 0}, {100, 0}, {475, 1}, {1400, 1}};
    };
    class RHSUSF_Abrams_dist_mid_soundShader {
        samples[] = {{"RHSUSF\addons\rhsusf_s_vehicleSounds\tanks\abrams\dist_mid", 1}};
        frequency = "0.8 + ( 0.26 * (rpm factor [1600,2900]))";
        volume = "0.90 * engineOn * ((rpm factor [ 1100,1600]) * (rpm factor [2900,2300])) max (((rpm factor [ 1100, 1600]) * (rpm factor [2900,2300])) * (angVelocity factor [0.2,0.4]))";
        range = 1300;
        rangeCurve[] = {{0, 0}, {100, 0}, {500, 1}, {1900, 1}};
    };
    class RHSUSF_Abrams_dist_fast_soundShader {
        samples[] = {{"RHSUSF\addons\rhsusf_s_vehicleSounds\tanks\abrams\dist_fast", 1}};
        frequency = "0.8 + ( 0.25 * (rpm factor [2300,3000])) + (0.12 * ((abs(speed)) factor [9,13]))";
        volume = "0.90 * engineOn * (rpm factor [2300,2900])";
        range = 1500;
        rangeCurve[] = {{0, 0}, {100, 0}, {600, 1}, {2200, 1}};
    };
    class RHSUSF_Abrams_ext_acce_soundShader {
        samples[] = {{"RHSUSF\addons\rhsusf_s_vehicleSounds\tanks\abrams\ext_acce_1", 1}, {"RHSUSF\addons\rhsusf_s_vehicleSounds\tanks\abrams\ext_acce_2", 1}, {"RHSUSF\addons\rhsusf_s_vehicleSounds\tanks\abrams\ext_acce_3", 1}};
        frequency = "1";
        volume = "0.92 * engineOn * (rpm factor [500,700]) * (rpm factor [1400,1200])";
        range = 325;
        rangeCurve[] = {{0, 1}, {50, 0.75}, {325, 1}};
    };
    class RHSUSF_Abrams_ext_acce_high_soundShader {
        samples[] = {{"RHSUSF\addons\rhsusf_s_vehicleSounds\tanks\abrams\ext_acce_1", 1}, {"RHSUSF\addons\rhsusf_s_vehicleSounds\tanks\abrams\ext_acce_2", 1}, {"RHSUSF\addons\rhsusf_s_vehicleSounds\tanks\abrams\ext_acce_3", 1}};
        frequency = "1 + 0.2 * (rpm factor [1400,3000])";
        volume = "1.0 * engineOn * (rpm factor [1200,1400])";
        range = 700;
        rangeCurve[] = {{0, 1}, {80, 0.85}, {700, 1}};
    };
    class RHSUSF_Abrams_ext_rain_soundShader {
        samples[] = {{"RHSUSF\addons\rhsusf_s_vehicleSounds\shared\rain\ext_rain_hard", 1}};
        frequency = "0.8 + (0.3 * rain)";
        volume = "rain";
        range = 50;
        rangeCurve[] = {{0, 1}, {50, 1}};
    };
};
class cfgSoundSets {
    class RHSUSF_trackSurfaceSound_ext_base_SoundSet {
        spatial = 1;
        loop = 1;
        occlusionObstruction = 1;
        occlusionFactor = 0.4;
        obstructionFactor = 0.5;
        sound3DProcessingType = "RHSUSF_armor_ext_base_3DProcessingType";
        volumeFactor = 0.68;
        volumeCurve = "InverseSquare2Curve";
    };
    class RHSUSF_waterNoise_ext_base_SoundSet {
        spatial = 1;
        loop = 1;
        occlusionObstruction = 1;
        occlusionFactor = 0.25;
        obstructionFactor = 0.15;
        sound3DProcessingType = "RHSUSF_heavyBoat_water_base_3DProcessingType";
        volumeFactor = 0.72;
        volumeCurve = "InverseSquare2Curve";
        posOffset[] = {0, 0, -1.8};
    };
    class RHSUSF_armor_Int_Base_SoundSet {
        spatial = 0;
        loop = 1;
        sound3DProcessingType = "VehicleInt_Middle_3DProcessingType";
        volumeFactor = 0.9;
    };
    class RHSUSF_trackSurfaceSound_ext_soft_soundSet: RHSUSF_trackSurfaceSound_ext_base_SoundSet {
        soundShaders[] = {"RHSUSF_trackSurfaceSound_ext_soft_SoundShader"};
        posOffset[] = {0, 0, -1};
    };
    class RHSUSF_trackSurfaceSound_ext_hard_soundSet: RHSUSF_trackSurfaceSound_ext_base_SoundSet {
        soundShaders[] = {"RHSUSF_trackSurfaceSound_ext_hard_SoundShader"};
        posOffset[] = {0, 0, -1};
    };
    class RHSUSF_trackSurfaceSound_ext_sand_soundSet: RHSUSF_trackSurfaceSound_ext_base_SoundSet {
        soundShaders[] = {"RHSUSF_trackSurfaceSound_ext_sand_soundShader"};
        posOffset[] = {0, 0, -1};
    };
    class RHSUSF_int_breakingStrain_soundSet: RHSUSF_armor_Int_Base_SoundSet {
        soundShaders[] = {"Tanks_Material_Strain_Int_SoundShader"};
        loop = 0;
        sound3DProcessingType = "VehicleInt_Middle_3DProcessingType";
        PlayTrigger = "(longSlip factor [-0.12,-0.13])";
        volumeFactor = 1;
    };
    class RHSUSF_tankRattling_1_soundSet: RHSUSF_armor_Int_Base_SoundSet {
        soundShaders[] = {"RHSUSF_tankRattling_1_soundShader"};
        volumeFactor = 0.93;
    };
    class RHSUSF_curveStress_1_soundSet: RHSUSF_armor_Int_Base_SoundSet {
        soundShaders[] = {"RHSUSF_curveStress_1_soundShader"};
        volumeFactor = 0.93;
    };
    class RHSUSF_heavyBoat_water_idle_soundSet: RHSUSF_waterNoise_ext_base_SoundSet {
        soundShaders[] = {"RHSUSF_heavyBoat_water_idle_soundShader"};
    };
    class RHSUSF_heavyBoat_water_slow_soundSet: RHSUSF_waterNoise_ext_base_SoundSet {
        soundShaders[] = {"RHSUSF_heavyBoat_water_slow_soundShader"};
    };
    class RHSUSF_heavyBoat_water_mid_soundSet: RHSUSF_waterNoise_ext_base_SoundSet {
        soundShaders[] = {"RHSUSF_heavyBoat_water_mid_soundShader"};
    };
    class RHSUSF_heavyBoat_water_fast_soundSet: RHSUSF_waterNoise_ext_base_SoundSet {
        soundShaders[] = {"RHSUSF_heavyBoat_water_fast_soundShader"};
    };
    class RHSUSF_heavyBoat_landScrub_soundSet: RHSUSF_waterNoise_ext_base_SoundSet {
        soundShaders[] = {"RHSUSF_heavyBoat_landScrub_soundShader"};
    };
    class RHSUSF_heavyBoat_int_stress_soundSet: RHSUSF_armor_Int_Base_SoundSet {
        soundShaders[] = {"RHSUSF_heavyBoat_int_stress_soundShader"};
        volumeFactor = 0.93;
    };
    class RHSUSF_boat_water_idle_soundSet: RHSUSF_waterNoise_ext_base_SoundSet {
        soundShaders[] = {"RHSUSF_boat_water_idle_soundShader"};
    };
    class RHSUSF_boat_water_slow_soundSet: RHSUSF_waterNoise_ext_base_SoundSet {
        soundShaders[] = {"RHSUSF_boat_water_slow_soundShader"};
    };
    class RHSUSF_boat_water_mid_soundSet: RHSUSF_waterNoise_ext_base_SoundSet {
        soundShaders[] = {"RHSUSF_boat_water_mid_soundShader"};
    };
    class RHSUSF_boat_water_fast_soundSet: RHSUSF_waterNoise_ext_base_SoundSet {
        soundShaders[] = {"RHSUSF_boat_water_fast_soundShader"};
    };
    class RHSUSF_boat_landScrub_soundSet: RHSUSF_waterNoise_ext_base_SoundSet {
        soundShaders[] = {"RHSUSF_boat_landScrub_soundShader"};
    };
    class RHSUSF_boat_int_stress_soundSet: RHSUSF_armor_Int_Base_SoundSet {
        soundShaders[] = {"RHSUSF_boat_int_stress_soundShader"};
        volumeFactor = 0.93;
    };
    class RHSUSF_Abrams_ext_base_SoundSet {
        spatial = 1;
        loop = 1;
        occlusionObstruction = 1;
        occlusionFactor = 0.2;
        obstructionFactor = 0.2;
        sound3DProcessingType = "RHSUSF_armor_ext_base_3DProcessingType";
        volumeFactor = 0.71;
        volumeCurve = "InverseSquare2Curve";
    };
    class RHSUSF_Abrams_dist_base_SoundSet {
        spatial = 1;
        loop = 1;
        occlusionObstruction = 1;
        occlusionFactor = 0.95;
        obstructionFactor = 1;
        sound3DProcessingType = "RHSUSF_armor_ext_base_3DProcessingType";
        volumeFactor = 0.5;
        volumeCurve = "InverseSquare2Curve";
    };
    class RHSUSF_Abrams_ext_exhaust_base_SoundSet {
        spatial = 1;
        loop = 1;
        occlusionObstruction = 1;
        occlusionFactor = 0.2;
        obstructionFactor = 0.2;
        sound3DProcessingType = "RHSUSF_armor_exhaust_ext_base_3DProcessingType";
        volumeFactor = 0.93;
        volumeCurve = "InverseSquare2Curve";
        shape = "RHSUSF_Abrams_exhaust_rearSemispace";
    };
    class RHSUSF_Abrams_Int_Base_SoundSet {
        spatial = 0;
        loop = 1;
        sound3DProcessingType = "VehicleInt_Middle_3DProcessingType";
        volumeFactor = 0.9;
    };
    class RHSUSF_Abrams_int_idle_soundSet: RHSUSF_Abrams_Int_Base_SoundSet {
        soundShaders[] = {"RHSUSF_Abrams_int_idle_soundShader"};
    };
    class RHSUSF_Abrams_int_slow_soundSet: RHSUSF_Abrams_Int_Base_SoundSet {
        soundShaders[] = {"RHSUSF_Abrams_int_slow_soundShader"};
    };
    class RHSUSF_Abrams_int_mid_soundSet: RHSUSF_Abrams_Int_Base_SoundSet {
        soundShaders[] = {"RHSUSF_Abrams_int_mid_soundShader"};
    };
    class RHSUSF_Abrams_int_fast_soundSet: RHSUSF_Abrams_Int_Base_SoundSet {
        soundShaders[] = {"RHSUSF_Abrams_int_fast_soundShader"};
    };
    class RHSUSF_Abrams_int_acce_soundSet: RHSUSF_Abrams_Int_Base_SoundSet {
        soundShaders[] = {"RHSUSF_Abrams_int_acce_soundShader"};
        playTrigger = "((thrust * (angVelocity factor[0.3,0.1]) * engineOn ) - 0.1)";
        loop = 0;
    };
    class RHSUSF_Abrams_exhaust_int_idle_SoundSet: RHSUSF_Abrams_Int_Base_SoundSet {
        soundShaders[] = {"RHSUSF_Abrams_exhaust_int_idle_SoundShader"};
        sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
        volumeFactor = 0.8;
    };
    class RHSUSF_Abrams_exhaust_int_slow_SoundSet: RHSUSF_Abrams_Int_Base_SoundSet {
        soundShaders[] = {"RHSUSF_Abrams_exhaust_int_slow_SoundShader"};
        sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
        volumeFactor = 0.8;
    };
    class RHSUSF_Abrams_exhaust_int_mid_SoundSet: RHSUSF_Abrams_Int_Base_SoundSet {
        soundShaders[] = {"RHSUSF_Abrams_exhaust_int_mid_SoundShader"};
        sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
        volumeFactor = 0.8;
    };
    class RHSUSF_Abrams_exhaust_int_fast_SoundSet: RHSUSF_Abrams_Int_Base_SoundSet {
        soundShaders[] = {"RHSUSF_Abrams_exhaust_int_fast_soundShader"};
        sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
        volumeFactor = 0.8;
    };
    class RHSUSF_Abrams_int_rain_soundSet: RHSUSF_Abrams_Int_Base_SoundSet {
        soundShaders[] = {"RHSUSF_Abrams_int_rain_soundShader"};
    };
    class RHSUSF_Abrams_ext_idle_SoundSet: RHSUSF_Abrams_ext_base_SoundSet {
        soundShaders[] = {"RHSUSF_Abrams_ext_idle_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHSUSF_Abrams_ext_slow_SoundSet: RHSUSF_Abrams_ext_base_SoundSet {
        soundShaders[] = {"RHSUSF_Abrams_ext_slow_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHSUSF_Abrams_ext_mid_SoundSet: RHSUSF_Abrams_ext_base_SoundSet {
        soundShaders[] = {"RHSUSF_Abrams_ext_mid_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHSUSF_Abrams_ext_fast_SoundSet: RHSUSF_Abrams_ext_base_SoundSet {
        soundShaders[] = {"RHSUSF_Abrams_ext_fast_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHSUSF_Abrams_exhaust_ext_idle_SoundSet: RHSUSF_Abrams_ext_exhaust_base_SoundSet {
        soundShaders[] = {"RHSUSF_Abrams_exhaust_ext_idle_SoundShader"};
        posOffset[] = {0, -1.8, 0};
    };
    class RHSUSF_Abrams_exhaust_ext_slow_SoundSet: RHSUSF_Abrams_ext_exhaust_base_SoundSet {
        soundShaders[] = {"RHSUSF_Abrams_exhaust_ext_slow_SoundShader"};
        posOffset[] = {0, -1.8, 0};
    };
    class RHSUSF_Abrams_exhaust_ext_mid_SoundSet: RHSUSF_Abrams_ext_exhaust_base_SoundSet {
        soundShaders[] = {"RHSUSF_Abrams_exhaust_ext_mid_SoundShader"};
        posOffset[] = {0, -1.8, 0};
    };
    class RHSUSF_Abrams_exhaust_ext_fast_SoundSet: RHSUSF_Abrams_ext_exhaust_base_SoundSet {
        soundShaders[] = {"RHSUSF_Abrams_exhaust_ext_fast_soundShader"};
        posOffset[] = {0, -1.8, 0};
    };
    class RHSUSF_Abrams_ext_tracks_slow_soundSet: RHSUSF_Abrams_ext_base_SoundSet {
        soundShaders[] = {"RHSUSF_Abrams_ext_tracks_slow_soundShader"};
        posOffset[] = {0, 0, 0};
        volumeFactor = 0.95;
    };
    class RHSUSF_Abrams_ext_tracks_mid_soundSet: RHSUSF_Abrams_ext_base_SoundSet {
        soundShaders[] = {"RHSUSF_Abrams_ext_tracks_mid_soundShader"};
        posOffset[] = {0, 0, 0};
        volumeFactor = 0.95;
    };
    class RHSUSF_Abrams_ext_tracks_fast_soundSet: RHSUSF_Abrams_ext_base_SoundSet {
        soundShaders[] = {"RHSUSF_Abrams_ext_tracks_fast_soundShader"};
        posOffset[] = {0, 0, 0};
        volumeFactor = 0.95;
    };
    class RHSUSF_Abrams_ext_rumble_soundSet: RHSUSF_Abrams_ext_base_SoundSet {
        soundShaders[] = {"RHSUSF_Abrams_ext_rumble_soundShader"};
        posOffset[] = {0, 0, -1};
        volumeFactor = 0.9;
    };
    class RHSUSF_Abrams_dist_slow_SoundSet: RHSUSF_Abrams_dist_base_SoundSet {
        soundShaders[] = {"RHSUSF_Abrams_dist_slow_SoundShader"};
    };
    class RHSUSF_Abrams_dist_mid_SoundSet: RHSUSF_Abrams_dist_base_SoundSet {
        soundShaders[] = {"RHSUSF_Abrams_dist_mid_SoundShader"};
    };
    class RHSUSF_Abrams_dist_fast_SoundSet: RHSUSF_Abrams_dist_base_SoundSet {
        soundShaders[] = {"RHSUSF_Abrams_dist_fast_SoundShader"};
    };
    class RHSUSF_Abrams_ext_acce_soundSet: RHSUSF_Abrams_ext_exhaust_base_SoundSet {
        soundShaders[] = {"RHSUSF_Abrams_ext_acce_soundShader"};
        posOffset[] = {0, -1.8, 0};
        loop = 0;
        playTrigger = "((thrust * (angVelocity factor[0.2,0.12]) * engineOn) - 0.1)";
    };
    class RHSUSF_Abrams_ext_acce_high_soundSet: RHSUSF_Abrams_ext_exhaust_base_SoundSet {
        soundShaders[] = {"RHSUSF_Abrams_ext_acce_high_soundShader"};
        posOffset[] = {0, -1.8, 0};
        loop = 0;
        playTrigger = "((thrust * (angVelocity factor[0.3,0.1]) * engineOn ) - 0.1)";
    };
    class RHSUSF_Abrams_ext_rain_SoundSet: RHSUSF_Abrams_ext_base_SoundSet {
        soundShaders[] = {"RHSUSF_Abrams_ext_rain_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
};
class cfgVehicles {
    class LandVehicle;
    class Tank: LandVehicle {};
    class Tank_F: Tank {};
    class MBT_01_base_F: Tank_F {};
    class rhsusf_m1a1tank_base: MBT_01_base_F {
        class Sounds {
            soundSetsExt[] = {
                "RHSUSF_Abrams_ext_idle_SoundSet",
                "RHSUSF_Abrams_ext_slow_SoundSet",
                "RHSUSF_Abrams_ext_mid_SoundSet",
                "RHSUSF_Abrams_ext_fast_SoundSet",
                "RHSUSF_Abrams_exhaust_ext_idle_SoundSet",
                "RHSUSF_Abrams_exhaust_ext_slow_SoundSet",
                "RHSUSF_Abrams_exhaust_ext_mid_SoundSet",
                "RHSUSF_Abrams_exhaust_ext_fast_SoundSet",
                "RHSUSF_Abrams_ext_acce_soundSet",
                "RHSUSF_Abrams_ext_acce_high_soundSet",
                "RHSUSF_Abrams_dist_slow_SoundSet",
                "RHSUSF_Abrams_dist_mid_SoundSet",
                "RHSUSF_Abrams_dist_high_SoundSet",
                "RHSUSF_Abrams_ext_tracks_slow_soundSet",
                "RHSUSF_Abrams_ext_tracks_mid_soundSet",
                "RHSUSF_Abrams_ext_tracks_fast_soundSet",
                "RHSUSF_Abrams_ext_rumble_soundSet",
                "RHSUSF_Abrams_ext_rain_soundSet",
                "RHSUSF_trackSurfaceSound_ext_soft_soundSet",
                "RHSUSF_trackSurfaceSound_ext_hard_soundSet",
                "RHSUSF_trackSurfaceSound_ext_sand_soundSet"
            };
            soundSetsInt[] = {
                "RHSUSF_Abrams_int_idle_SoundSet",
                "RHSUSF_Abrams_int_slow_SoundSet",
                "RHSUSF_Abrams_int_mid_SoundSet",
                "RHSUSF_Abrams_int_fast_SoundSet",
                "RHSUSF_Abrams_int_acce_soundSet",
                "RHSUSF_Abrams_exhaust_int_idle_SoundSet",
                "RHSUSF_Abrams_exhaust_int_slow_SoundSet",
                "RHSUSF_Abrams_exhaust_int_mid_SoundSet",
                "RHSUSF_Abrams_exhaust_int_fast_SoundSet",
                "RHSUSF_tankRattling_1_soundSet",
                "RHSUSF_Abrams_int_rain_soundSet",
                "RHSUSF_Abrams_ext_tracks_slow_soundSet",
                "RHSUSF_Abrams_ext_tracks_mid_soundSet",
                "RHSUSF_Abrams_ext_tracks_fast_soundSet",
                "RHSUSF_Abrams_ext_rumble_soundSet",
                "RHSUSF_int_breakingStrain_soundSet",
                "RHSUSF_curveStress_1_soundSet"
            };
        };
    };
    class rhsusf_m1a2tank_base: rhsusf_m1a1tank_base {
        class Sounds {
            soundSetsExt[] = {
                "RHSUSF_Abrams_ext_idle_SoundSet",
                "RHSUSF_Abrams_ext_slow_SoundSet",
                "RHSUSF_Abrams_ext_mid_SoundSet",
                "RHSUSF_Abrams_ext_fast_SoundSet",
                "RHSUSF_Abrams_exhaust_ext_idle_SoundSet",
                "RHSUSF_Abrams_exhaust_ext_slow_SoundSet",
                "RHSUSF_Abrams_exhaust_ext_mid_SoundSet",
                "RHSUSF_Abrams_exhaust_ext_fast_SoundSet",
                "RHSUSF_Abrams_ext_acce_soundSet",
                "RHSUSF_Abrams_ext_acce_high_soundSet",
                "RHSUSF_Abrams_dist_slow_SoundSet",
                "RHSUSF_Abrams_dist_mid_SoundSet",
                "RHSUSF_Abrams_dist_high_SoundSet",
                "RHSUSF_Abrams_ext_tracks_slow_soundSet",
                "RHSUSF_Abrams_ext_tracks_mid_soundSet",
                "RHSUSF_Abrams_ext_tracks_fast_soundSet",
                "RHSUSF_Abrams_ext_rumble_soundSet",
                "RHSUSF_Abrams_ext_rain_soundSet",
                "RHSUSF_trackSurfaceSound_ext_soft_soundSet",
                "RHSUSF_trackSurfaceSound_ext_hard_soundSet",
                "RHSUSF_trackSurfaceSound_ext_sand_soundSet"
            };
            soundSetsInt[] = {
                "RHSUSF_Abrams_int_idle_SoundSet",
                "RHSUSF_Abrams_int_slow_SoundSet",
                "RHSUSF_Abrams_int_mid_SoundSet",
                "RHSUSF_Abrams_int_fast_SoundSet",
                "RHSUSF_Abrams_int_acce_soundSet",
                "RHSUSF_Abrams_exhaust_int_idle_SoundSet",
                "RHSUSF_Abrams_exhaust_int_slow_SoundSet",
                "RHSUSF_Abrams_exhaust_int_mid_SoundSet",
                "RHSUSF_Abrams_exhaust_int_fast_SoundSet",
                "RHSUSF_tankRattling_1_soundSet",
                "RHSUSF_Abrams_int_rain_soundSet",
                "RHSUSF_Abrams_ext_tracks_slow_soundSet",
                "RHSUSF_Abrams_ext_tracks_mid_soundSet",
                "RHSUSF_Abrams_ext_tracks_fast_soundSet",
                "RHSUSF_Abrams_ext_rumble_soundSet",
                "RHSUSF_int_breakingStrain_soundSet",
                "RHSUSF_curveStress_1_soundSet"
            };
        };
    };
};
