class CfgPatches {
    class rhsusf_weapon_sounds {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.32;
        requiredAddons[] = {
            "A3_sounds_f",
            "rhsusf_c_weapons",
            "rhsusf_c_heavyweapons",
            "rhsusf_c_airweapons",
            "rhsusf_sounds"
        };
        version = "0.1";
        name = "USF Sounds";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        url = "http://www.rhsmods.org/";
    };
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgSound3DProcessors {
    class RHSUSF_Default_3DProcessingType {
        type = "panner";
        innerRange = 10;
        rangeCurve = "LinearCurve";
        range = 1800;
    };
    class RHSUSF_Shot_light_3DProcessingType {
        type = "panner";
        innerRange = 0;
        range = 5;
        rangeCurve = "Smooth1Curve";
    };
    class RHSUSF_Shot_medium_3DProcessingType {
        type = "panner";
        innerRange = 0;
        range = 5;
        rangeCurve = "LinearCurve";
    };
    class RHSUSF_Tail_3DProcessingType {
        type = "panner";
        innerRange = 5;
        range = 190;
        rangeCurve = "InverseSquare2Curve";
    };
};
class CfgSoundCurves {
    class RHSUSF_soundCurve {
        points[] = {{0, 1}, {1, 0}};
    };
    class RHSUSF_tailSoundCurve {
        points[] = {
            {0, 1},
            {0.2, 0.85},
            {0.5, 0.4},
            {0.8, 0.1},
            {1, 0}
        };
    };
    class RHSUSF_rifleSoundCurve {
        points[] = {
            {0, 1},
            {0.001, 0.92},
            {0.005, 0.84},
            {0.1, 0.5875},
            {0.2, 0.4196},
            {0.4, 0.2633},
            {0.6, 0.1015},
            {0.8, 0.0568},
            {0.9, 0.0368},
            {1, 0}
        };
    };
};
class cfgDistanceFilters {
    class RHSUSF_defaultDistanceFilter {
        type = "lowPassFilter";
        minCutoffFrequency = 150;
        qFactor = 1.3;
        innerRange = 400;
        range = 2600;
        powerFactor = 32;
    };
    class RHSUSF_rifleShotDistanceFilter {
        type = "lowPassFilter";
        minCutoffFrequency = 250;
        qFactor = 1.3;
        innerRange = 150;
        range = 1800;
        powerFactor = 32;
    };
    class RHSUSF_vehicletDistanceFilter {
        type = "lowPassFilter";
        minCutoffFrequency = 550;
        qFactor = 1;
        innerRange = 0;
        range = 2;
        powerFactor = 16;
    };
};
class CfgSoundShaders {
    class RHSUSF_M240_punch_close_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\punch\LMG762\close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\LMG762\close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\LMG762\close_3", 1}};
        volume = 1.24;
        range = 150;
        rangeCurve[] = {{0, 1}, {7, 1}, {15, 0}, {150, 0}};
    };
    class RHSUSF_M240_punch_close_interior_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\punch\LMG762\close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\LMG762\close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\LMG762\close_3", 1}};
        volume = "1.24 * (1 - (0.15 * interior))";
        range = 150;
        rangeCurve[] = {{0, 0}, {7, 0}, {15, 1}, {150, 0}};
    };
    class RHSUSF_M240_punch_mid_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\punch\LMG762\mid_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\LMG762\mid_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\LMG762\mid_3", 1}};
        volume = "1.24 * (1 - (0.2 * interior))";
        range = 800;
        rangeCurve[] = {{0, 0}, {150, 1}, {800, 0}};
    };
    class RHSUSF_M240_punch_far_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\punch\LMG762\far_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\LMG762\far_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\LMG762\far_3", 1}};
        volume = "1.24 * (1 - (0.25 * interior))";
        range = 3300;
        rangeCurve[] = {{0, 1}, {150, 0}, {800, 1}, {3300, 1}};
    };
    class RHSUSF_M240_character_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\character\M240\character_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\character\M240\character_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\character\M240\character_3", 1}};
        volume = 0.69;
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
    };
    class RHSUSF_M240_Closure_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\closure\M240\Closure_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\closure\M240\Closure_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\closure\M240\Closure_3", 1}};
        volume = 0.95;
        range = 45;
        rangeCurve[] = {{0, 1}, {45, 0}};
    };
    class RHSUSF_M240_Interior_closeMono_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\mmg1\Interior_close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\mmg1\Interior_close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\mmg1\Interior_close_3", 1}};
        volume = "1 * 2.8 * interior";
        range = 150;
        rangeCurve[] = {{1, 0}, {3, 0}, {7, 1}, {150, 0}};
    };
    class RHSUSF_M240_Interior_far_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\mmg1\Interior_far_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\mmg1\Interior_far_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\mmg1\Interior_far_3", 1}};
        volume = "1 * 2.2 * interior";
        range = 3300;
        rangeCurve[] = {{0, 0}, {150, 1}, {3300, 1}};
    };
    class RHSUSF_veh_M240_punch_close_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\punch\LMG762\close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\LMG762\close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\LMG762\close_3", 1}};
        volume = "1.24 * campos";
        range = 150;
        rangeCurve[] = {{0, 1}, {7, 1}, {15, 0}, {150, 0}};
    };
    class RHSUSF_veh_M240_punch_close_interior_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\punch\LMG762\close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\LMG762\close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\LMG762\close_3", 1}};
        volume = "1.24 * (1 - campos)";
        range = 150;
        rangeCurve[] = {{0, 1}, {7, 1}, {15, 0}, {150, 0}};
    };
    class RHSUSF_veh_M240_punch_mid_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\punch\LMG762\mid_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\LMG762\mid_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\LMG762\mid_3", 1}};
        volume = "1.24 * (1 - (0.2 * interior))";
        range = 800;
        rangeCurve[] = {{0, 0}, {150, 1}, {800, 0}};
    };
    class RHSUSF_veh_M240_punch_far_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\punch\LMG762\far_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\LMG762\far_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\LMG762\far_3", 1}};
        volume = "1.24 * (1 - (0.25 * interior))";
        range = 3300;
        rangeCurve[] = {{0, 1}, {150, 0}, {800, 1}, {3300, 1}};
    };
    class RHSUSF_veh_M240_character_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\character\M240\character_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\character\M240\character_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\character\M240\character_3", 1}};
        volume = "0.69 * (campos max 0.2)";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
    };
    class RHSUSF_veh_M240_Closure_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\closure\M240\Closure_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\closure\M240\Closure_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\closure\M240\Closure_3", 1}};
        volume = "0.95 * (campos max 0.2)";
        range = 45;
        rangeCurve[] = {{0, 1}, {45, 0}};
    };
    class RHSUSF_veh_M240_Interior_closeMono_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\mmg1\Interior_close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\mmg1\Interior_close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\mmg1\Interior_close_3", 1}};
        volume = "1 * 2.8 * interior";
        range = 150;
        rangeCurve[] = {{1, 0}, {3, 0}, {7, 1}, {150, 0}};
    };
    class RHSUSF_veh_M240_Interior_far_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\mmg1\Interior_far_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\mmg1\Interior_far_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\mmg1\Interior_far_3", 1}};
        volume = "1 * 2.2 * interior";
        range = 3300;
        rangeCurve[] = {{0, 0}, {150, 1}, {3300, 1}};
    };
    class RHSUSF_sd_m240_punch_close_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\punch\sd_LMG762\close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\sd_LMG762\close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\sd_LMG762\close_3", 1}};
        volume = 0.91;
        range = 100;
        rangeCurve[] = {{0, 1}, {7, 1}, {15, 0}, {100, 0}};
    };
    class RHSUSF_sd_m240_punch_close_interior_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\punch\sd_LMG762\close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\sd_LMG762\close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\sd_LMG762\close_3", 1}};
        volume = "0.91 * (1 - (0.15 * interior))";
        range = 100;
        rangeCurve[] = {{0, 0}, {7, 0}, {15, 1}, {100, 0}};
    };
    class RHSUSF_sd_m240_punch_mid_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\punch\sd_LMG762\mid_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\sd_LMG762\mid_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\sd_LMG762\mid_3", 1}};
        volume = "0.91 * (1 - (0.2 * interior))";
        range = 250;
        rangeCurve[] = {{0, 0}, {100, 1}, {250, 0}};
    };
    class RHSUSF_sd_m240_punch_far_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\punch\sd_LMG762\far_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\sd_LMG762\far_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\sd_LMG762\far_3", 1}};
        volume = "0.91 * (1 - (0.25 * interior))";
        range = 900;
        rangeCurve[] = {{0, 1}, {100, 0}, {250, 1}, {900, 1}};
    };
    class RHSUSF_sd_m240_character_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\character\sd_M4\character_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\character\sd_M4\character_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\character\sd_M4\character_3", 1}};
        volume = 0.45;
        range = 60;
        rangeCurve[] = {{0, 1}, {60, 0}};
    };
    class RHSUSF_sd_m240_Closure_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\closure\M240\Closure_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\closure\M240\Closure_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\closure\M240\Closure_3", 1}};
        volume = 0.84;
        range = 45;
        rangeCurve[] = {{0, 1}, {45, 0}};
    };
    class RHSUSF_sd_m240_Interior_closeMono_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\sd_mmg1\Interior_close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\sd_mmg1\Interior_close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\sd_mmg1\Interior_close_3", 1}};
        volume = "0.8 * 2.8 * interior";
        range = 100;
        rangeCurve[] = {{1, 0}, {3, 0}, {7, 1}, {100, 0}};
    };
    class RHSUSF_sd_m240_Interior_far_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\sd_mmg1\Interior_far_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\sd_mmg1\Interior_far_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\sd_mmg1\Interior_far_3", 1}};
        volume = "0.8 * 2.2 * interior";
        range = 900;
        rangeCurve[] = {{0, 0}, {100, 1}, {900, 1}};
    };
    class RHSUSF_M4_punch_close_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\punch\LMG556\close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\LMG556\close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\LMG556\close_3", 1}};
        volume = 1.18;
        range = 150;
        rangeCurve[] = {{0, 1}, {7, 1}, {15, 0}, {150, 0}};
    };
    class RHSUSF_M4_punch_close_interior_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\punch\LMG556\close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\LMG556\close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\LMG556\close_3", 1}};
        volume = "1.18 * (1 - (0.15 * interior))";
        range = 150;
        rangeCurve[] = {{0, 0}, {7, 0}, {15, 1}, {150, 0}};
    };
    class RHSUSF_M4_punch_mid_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\punch\LMG556\mid_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\LMG556\mid_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\LMG556\mid_3", 1}};
        volume = "1.18 * (1 - (0.2 * interior))";
        range = 800;
        rangeCurve[] = {{0, 0}, {150, 1}, {800, 0}};
    };
    class RHSUSF_M4_punch_far_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\punch\LMG556\far_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\LMG556\far_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\LMG556\far_3", 1}};
        volume = "1.18 * (1 - (0.25 * interior))";
        range = 3000;
        rangeCurve[] = {{0, 1}, {150, 0}, {800, 1}, {3000, 1}};
    };
    class RHSUSF_M4_character_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\character\M249\character_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\character\M249\character_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\character\M249\character_3", 1}};
        volume = 0.54;
        range = 100;
        rangeCurve[] = {{0, 1}, {100, 0}};
    };
    class RHSUSF_M4_Closure_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\closure\M4\Closure_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\closure\M4\Closure_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\closure\M4\Closure_3", 1}};
        volume = 0.94;
        range = 35;
        rangeCurve[] = {{0, 1}, {35, 0}};
    };
    class RHSUSF_M4_Interior_closeMono_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle1\Interior_close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle1\Interior_close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle1\Interior_close_3", 1}};
        volume = "1 * 2.8 * interior";
        range = 150;
        rangeCurve[] = {{1, 0}, {3, 0}, {7, 1}, {150, 0}};
    };
    class RHSUSF_M4_Interior_far_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle1\Interior_far_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle1\Interior_far_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle1\Interior_far_3", 1}};
        volume = "1 * 2.2 * interior";
        range = 3000;
        rangeCurve[] = {{0, 0}, {150, 1}, {3000, 1}};
    };
    class RHSUSF_sd_M4_punch_close_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\punch\sd_LMG556\close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\sd_LMG556\close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\sd_LMG556\close_3", 1}};
        volume = 0.8;
        range = 100;
        rangeCurve[] = {{0, 1}, {7, 1}, {15, 0}, {100, 0}};
    };
    class RHSUSF_sd_M4_punch_close_interior_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\punch\sd_LMG556\close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\sd_LMG556\close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\sd_LMG556\close_3", 1}};
        volume = "0.8 * (1 - (0.15 * interior))";
        range = 100;
        rangeCurve[] = {{0, 0}, {7, 0}, {15, 1}, {100, 0}};
    };
    class RHSUSF_sd_M4_punch_mid_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\punch\sd_LMG556\mid_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\sd_LMG556\mid_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\sd_LMG556\mid_3", 1}};
        volume = "0.8 * (1 - (0.2 * interior))";
        range = 250;
        rangeCurve[] = {{0, 0}, {100, 1}, {250, 0}};
    };
    class RHSUSF_sd_M4_punch_far_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\punch\sd_LMG556\far_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\sd_LMG556\far_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\sd_LMG556\far_3", 1}};
        volume = "0.8 * (1 - (0.25 * interior))";
        range = 700;
        rangeCurve[] = {{0, 1}, {100, 0}, {250, 1}, {700, 1}};
    };
    class RHSUSF_sd_M4_character_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\character\sd_M4\character_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\character\sd_M4\character_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\character\sd_M4\character_3", 1}};
        volume = 0.45;
        range = 60;
        rangeCurve[] = {{0, 1}, {60, 0}};
    };
    class RHSUSF_sd_M4_Closure_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\closure\M4\Closure_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\closure\M4\Closure_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\closure\M4\Closure_3", 1}};
        volume = 0.94;
        range = 35;
        rangeCurve[] = {{0, 1}, {35, 0}};
    };
    class RHSUSF_sd_M4_Interior_closeMono_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\sd_rifle1\Interior_close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\sd_rifle1\Interior_close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\sd_rifle1\Interior_close_3", 1}};
        volume = "0.8 * 2.8 * interior";
        range = 100;
        rangeCurve[] = {{1, 0}, {3, 0}, {7, 1}, {100, 0}};
    };
    class RHSUSF_sd_M4_Interior_far_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\sd_rifle1\Interior_far_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\sd_rifle1\Interior_far_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\sd_rifle1\Interior_far_3", 1}};
        volume = "0.8 * 2.2 * interior";
        range = 700;
        rangeCurve[] = {{0, 0}, {100, 1}, {700, 1}};
    };
    class RHSUSF_M249_punch_close_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\punch\LMG556\close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\LMG556\close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\LMG556\close_3", 1}};
        volume = 1.2;
        range = 150;
        rangeCurve[] = {{0, 1}, {7, 1}, {15, 0}, {150, 0}};
    };
    class RHSUSF_M249_punch_close_interior_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\punch\LMG556\close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\LMG556\close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\LMG556\close_3", 1}};
        volume = "1.20 * (1 - (0.15 * interior))";
        range = 150;
        rangeCurve[] = {{0, 0}, {7, 0}, {15, 1}, {150, 0}};
    };
    class RHSUSF_M249_punch_mid_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\punch\LMG556\mid_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\LMG556\mid_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\LMG556\mid_3", 1}};
        volume = "1.20 * (1 - (0.2 * interior))";
        range = 800;
        rangeCurve[] = {{0, 0}, {150, 1}, {800, 0}};
    };
    class RHSUSF_M249_punch_far_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\punch\LMG556\far_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\LMG556\far_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\LMG556\far_3", 1}};
        volume = "1.20 * (1 - (0.25 * interior))";
        range = 3000;
        rangeCurve[] = {{0, 1}, {150, 0}, {800, 1}, {3000, 1}};
    };
    class RHSUSF_M249_character_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\character\M249\character_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\character\M249\character_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\character\M249\character_3", 1}};
        volume = 0.56;
        range = 125;
        rangeCurve[] = {{0, 1}, {125, 0}};
    };
    class RHSUSF_M249_Closure_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\closure\M249\Closure_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\closure\M249\Closure_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\closure\M249\Closure_3", 1}};
        volume = 0.79;
        range = 35;
        rangeCurve[] = {{0, 1}, {35, 0}};
    };
    class RHSUSF_M249_Interior_closeMono_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle1\Interior_close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle1\Interior_close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle1\Interior_close_3", 1}};
        volume = "1 * 2.8 * interior";
        range = 150;
        rangeCurve[] = {{1, 0}, {3, 0}, {7, 1}, {150, 0}};
    };
    class RHSUSF_M249_Interior_far_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle1\Interior_far_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle1\Interior_far_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle1\Interior_far_3", 1}};
        volume = "1 * 2.2 * interior";
        range = 3000;
        rangeCurve[] = {{0, 0}, {150, 1}, {3000, 1}};
    };
    class RHSUSF_sd_M249_punch_close_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\punch\sd_LMG556\close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\sd_LMG556\close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\sd_LMG556\close_3", 1}};
        volume = 0.8;
        range = 100;
        rangeCurve[] = {{0, 1}, {7, 1}, {15, 0}, {100, 0}};
    };
    class RHSUSF_sd_M249_punch_close_interior_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\punch\sd_LMG556\close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\sd_LMG556\close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\sd_LMG556\close_3", 1}};
        volume = "0.8 * (1 - (0.15 * interior))";
        range = 100;
        rangeCurve[] = {{0, 0}, {7, 0}, {15, 1}, {100, 0}};
    };
    class RHSUSF_sd_M249_punch_mid_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\punch\sd_LMG556\mid_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\sd_LMG556\mid_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\sd_LMG556\mid_3", 1}};
        volume = "0.8 * (1 - (0.2 * interior))";
        range = 250;
        rangeCurve[] = {{0, 0}, {100, 1}, {250, 0}};
    };
    class RHSUSF_sd_M249_punch_far_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\punch\sd_LMG556\far_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\sd_LMG556\far_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\sd_LMG556\far_3", 1}};
        volume = "0.8 * (1 - (0.25 * interior))";
        range = 700;
        rangeCurve[] = {{0, 1}, {100, 0}, {250, 1}, {700, 1}};
    };
    class RHSUSF_sd_M249_character_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\character\sd_M4\character_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\character\sd_M4\character_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\character\sd_M4\character_3", 1}};
        volume = 0.45;
        range = 60;
        rangeCurve[] = {{0, 1}, {60, 0}};
    };
    class RHSUSF_sd_M249_Closure_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\closure\M249\Closure_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\closure\M249\Closure_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\closure\M249\Closure_3", 1}};
        volume = 0.79;
        range = 35;
        rangeCurve[] = {{0, 1}, {35, 0}};
    };
    class RHSUSF_sd_M249_Interior_closeMono_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\sd_rifle1\Interior_close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\sd_rifle1\Interior_close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\sd_rifle1\Interior_close_3", 1}};
        volume = "0.8 * 2.8 * interior";
        range = 100;
        rangeCurve[] = {{1, 0}, {3, 0}, {7, 1}, {100, 0}};
    };
    class RHSUSF_sd_M249_Interior_far_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\sd_rifle1\Interior_far_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\sd_rifle1\Interior_far_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\sd_rifle1\Interior_far_3", 1}};
        volume = "0.8 * 2.2 * interior";
        range = 700;
        rangeCurve[] = {{0, 0}, {100, 1}, {700, 1}};
    };
    class RHSUSF_M16_punch_close_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\punch\LMG556\close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\LMG556\close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\LMG556\close_3", 1}};
        volume = 1.2;
        range = 150;
        rangeCurve[] = {{0, 1}, {7, 1}, {15, 0}, {150, 0}};
    };
    class RHSUSF_M16_punch_close_interior_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\punch\LMG556\close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\LMG556\close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\LMG556\close_3", 1}};
        volume = "1.20 * (1 - (0.15 * interior))";
        range = 150;
        rangeCurve[] = {{0, 0}, {7, 0}, {15, 1}, {150, 0}};
    };
    class RHSUSF_M16_punch_mid_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\punch\LMG556\mid_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\LMG556\mid_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\LMG556\mid_3", 1}};
        volume = "1.20 * (1 - (0.2 * interior))";
        range = 800;
        rangeCurve[] = {{0, 0}, {150, 1}, {800, 0}};
    };
    class RHSUSF_M16_punch_far_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\punch\LMG556\far_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\LMG556\far_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\LMG556\far_3", 1}};
        volume = "1.20 * (1 - (0.25 * interior))";
        range = 3000;
        rangeCurve[] = {{0, 1}, {150, 0}, {800, 1}, {3000, 1}};
    };
    class RHSUSF_M16_character_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\character\M249\character_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\character\M249\character_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\character\M249\character_3", 1}};
        volume = 0.59;
        range = 100;
        rangeCurve[] = {{0, 1}, {100, 0}};
    };
    class RHSUSF_M16_Closure_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\closure\M4\Closure_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\closure\M4\Closure_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\closure\M4\Closure_3", 1}};
        volume = 0.94;
        range = 35;
        rangeCurve[] = {{0, 1}, {35, 0}};
    };
    class RHSUSF_M16_Interior_closeMono_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle1\Interior_close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle1\Interior_close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle1\Interior_close_3", 1}};
        volume = "1 * 2.8 * interior";
        range = 150;
        rangeCurve[] = {{1, 0}, {3, 0}, {7, 1}, {150, 0}};
    };
    class RHSUSF_M16_Interior_far_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle1\Interior_far_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle1\Interior_far_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle1\Interior_far_3", 1}};
        volume = "1 * 2.2 * interior";
        range = 3000;
        rangeCurve[] = {{0, 0}, {150, 1}, {3000, 1}};
    };
    class RHSUSF_m242_punch_close_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\punch\autocannon\close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\autocannon\close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\autocannon\close_3", 1}};
        volume = 1.35;
        range = 200;
        rangeCurve[] = {{0, 1}, {7, 1}, {15, 0}, {200, 0}};
    };
    class RHSUSF_m242_punch_close_interior_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\punch\autocannon\close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\autocannon\close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\autocannon\close_3", 1}};
        volume = "1.35 * (1 - (0.15 * interior))";
        range = 200;
        rangeCurve[] = {{0, 0}, {7, 0}, {15, 1}, {200, 0}};
    };
    class RHSUSF_m242_punch_mid_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\punch\autocannon\mid_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\autocannon\mid_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\autocannon\mid_3", 1}};
        volume = "1.35 * (1 - (0.2 * interior))";
        range = 1000;
        rangeCurve[] = {{0, 0}, {200, 1}, {1000, 0}};
    };
    class RHSUSF_m242_punch_far_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\punch\autocannon\far_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\autocannon\far_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\autocannon\far_3", 1}};
        volume = "1.35 * (1 - (0.25 * interior))";
        range = 3700;
        rangeCurve[] = {{0, 1}, {200, 0}, {1000, 1}, {3700, 1}};
    };
    class RHSUSF_m242_character_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\character\m242\character_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\character\m242\character_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\character\m242\character_3", 1}};
        volume = 0.62;
        range = 180;
        rangeCurve[] = {{0, 1}, {180, 0}};
    };
    class RHSUSF_m242_Closure_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\closure\m242\Closure_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\closure\m242\Closure_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\closure\m242\Closure_3", 1}};
        volume = 0.98;
        range = 56;
        rangeCurve[] = {{0, 1}, {56, 0}};
    };
    class RHSUSF_m242_Interior_closeMono_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\autocannon\Interior_close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\autocannon\Interior_close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\autocannon\Interior_close_3", 1}};
        volume = "1 * 2.8 * interior";
        range = 300;
        rangeCurve[] = {{1, 0}, {3, 0}, {7, 1}, {300, 0}};
    };
    class RHSUSF_m242_Interior_far_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\autocannon\Interior_far_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\autocannon\Interior_far_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\autocannon\Interior_far_3", 1}};
        volume = "1 * 2.2 * interior";
        range = 3700;
        rangeCurve[] = {{0, 0}, {300, 1}, {3700, 1}};
    };
    class RHSUSF_veh_m242_punch_close_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\punch\autocannon\close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\autocannon\close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\autocannon\close_3", 1}};
        volume = "1.35 * campos";
        range = 200;
        rangeCurve[] = {{0, 1}, {7, 1}, {15, 0}, {200, 0}};
    };
    class RHSUSF_veh_m242_punch_close_interior_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\punch\autocannon\close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\autocannon\close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\autocannon\close_3", 1}};
        volume = "1.35 * (1 - campos)";
        range = 200;
        rangeCurve[] = {{0, 1}, {7, 1}, {15, 0}, {200, 0}};
    };
    class RHSUSF_veh_m242_punch_mid_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\punch\autocannon\mid_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\autocannon\mid_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\autocannon\mid_3", 1}};
        volume = "1.35 * (1 - (0.2 * interior))";
        range = 1000;
        rangeCurve[] = {{0, 0}, {200, 1}, {1000, 0}};
    };
    class RHSUSF_veh_m242_punch_far_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\punch\autocannon\far_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\autocannon\far_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\autocannon\far_3", 1}};
        volume = "1.35 * (1 - (0.25 * interior))";
        range = 3700;
        rangeCurve[] = {{0, 1}, {200, 0}, {1000, 1}, {3700, 1}};
    };
    class RHSUSF_veh_m242_character_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\character\m242\character_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\character\m242\character_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\character\m242\character_3", 1}};
        volume = "0.62 * (campos max 0.2)";
        range = 180;
        rangeCurve[] = {{0, 1}, {180, 0}};
    };
    class RHSUSF_veh_m242_Closure_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\closure\m242\Closure_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\closure\m242\Closure_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\closure\m242\Closure_3", 1}};
        volume = "0.98 * (campos max 0.2)";
        range = 56;
        rangeCurve[] = {{0, 1}, {56, 0}};
    };
    class RHSUSF_veh_m242_Interior_closeMono_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\autocannon\Interior_close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\autocannon\Interior_close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\autocannon\Interior_close_3", 1}};
        volume = "1 * 2.8 * interior";
        range = 300;
        rangeCurve[] = {{1, 0}, {3, 0}, {7, 1}, {300, 0}};
    };
    class RHSUSF_veh_m242_Interior_far_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\autocannon\Interior_far_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\autocannon\Interior_far_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\autocannon\Interior_far_3", 1}};
        volume = "1 * 2.2 * interior";
        range = 3700;
        rangeCurve[] = {{0, 0}, {300, 1}, {3700, 1}};
    };
    class RHSUSF_MP7_punch_close_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\punch\9mm\close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\9mm\close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\9mm\close_3", 1}};
        volume = 1.2;
        range = 150;
        rangeCurve[] = {{0, 1}, {7, 1}, {15, 0}, {150, 0}};
    };
    class RHSUSF_MP7_punch_close_interior_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\punch\9mm\close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\9mm\close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\9mm\close_3", 1}};
        volume = "1.20 * (1 - (0.15 * interior))";
        range = 150;
        rangeCurve[] = {{0, 0}, {7, 0}, {15, 1}, {150, 0}};
    };
    class RHSUSF_MP7_punch_mid_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\punch\9mm\mid_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\9mm\mid_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\9mm\mid_3", 1}};
        volume = "1.20 * (1 - (0.2 * interior))";
        range = 800;
        rangeCurve[] = {{0, 0}, {150, 1}, {800, 0}};
    };
    class RHSUSF_MP7_punch_far_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\punch\9mm\far_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\9mm\far_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\9mm\far_3", 1}};
        volume = "1.20 * (1 - (0.25 * interior))";
        range = 2600;
        rangeCurve[] = {{0, 1}, {150, 0}, {800, 1}, {2600, 1}};
    };
    class RHSUSF_MP7_character_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\character\MP7\character_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\character\MP7\character_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\character\MP7\character_3", 1}};
        volume = 0.59;
        range = 100;
        rangeCurve[] = {{0, 1}, {100, 0}};
    };
    class RHSUSF_MP7_Closure_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\closure\MP7\Closure_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\closure\MP7\Closure_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\closure\MP7\Closure_3", 1}};
        volume = 0.82;
        range = 29;
        rangeCurve[] = {{0, 1}, {29, 0}};
    };
    class RHSUSF_MP7_Interior_closeMono_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\pistol1\Interior_close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\pistol1\Interior_close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\pistol1\Interior_close_3", 1}};
        volume = "1 * 2.8 * interior";
        range = 150;
        rangeCurve[] = {{1, 0}, {3, 0}, {7, 1}, {150, 0}};
    };
    class RHSUSF_MP7_Interior_far_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\pistol1\Interior_far_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\pistol1\Interior_far_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\pistol1\Interior_far_3", 1}};
        volume = "1 * 2.2 * interior";
        range = 2600;
        rangeCurve[] = {{0, 0}, {150, 1}, {2600, 1}};
    };
    class RHSUSF_M590_punch_close_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\punch\shotgun\close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\shotgun\close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\shotgun\close_3", 1}};
        volume = 1.29;
        range = 150;
        rangeCurve[] = {{0, 1}, {7, 1}, {15, 0}, {150, 0}};
    };
    class RHSUSF_M590_punch_close_interior_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\punch\shotgun\close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\shotgun\close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\shotgun\close_3", 1}};
        volume = "1.29 * (1 - (0.15 * interior))";
        range = 150;
        rangeCurve[] = {{0, 0}, {7, 0}, {15, 1}, {150, 0}};
    };
    class RHSUSF_M590_punch_mid_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\punch\shotgun\mid_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\shotgun\mid_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\shotgun\mid_3", 1}};
        volume = "1.29 * (1 - (0.2 * interior))";
        range = 800;
        rangeCurve[] = {{0, 0}, {150, 1}, {800, 0}};
    };
    class RHSUSF_M590_punch_far_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\punch\shotgun\far_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\shotgun\far_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\shotgun\far_3", 1}};
        volume = "1.29 * (1 - (0.25 * interior))";
        range = 3150;
        rangeCurve[] = {{0, 1}, {150, 0}, {800, 1}, {3150, 1}};
    };
    class RHSUSF_M590_character_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\character\M590\character_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\character\M590\character_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\character\M590\character_3", 1}};
        volume = 0.65;
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
    };
    class RHSUSF_M590_Closure_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\closure\M590\Closure_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\closure\M590\Closure_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\closure\M590\Closure_3", 1}};
        volume = 0.82;
        range = 35;
        rangeCurve[] = {{0, 1}, {35, 0}};
    };
    class RHSUSF_M590_Interior_closeMono_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\mmg1\Interior_close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\mmg1\Interior_close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\mmg1\Interior_close_3", 1}};
        volume = "1 * 2.8 * interior";
        range = 150;
        rangeCurve[] = {{1, 0}, {3, 0}, {7, 1}, {150, 0}};
    };
    class RHSUSF_M590_Interior_far_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\mmg1\Interior_far_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\mmg1\Interior_far_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\mmg1\Interior_far_3", 1}};
        volume = "1 * 2.2 * interior";
        range = 3150;
        rangeCurve[] = {{0, 0}, {150, 1}, {3150, 1}};
    };
    class RHSUSF_M2_punch_close_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\punch\50cal\close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\50cal\close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\50cal\close_3", 1}};
        volume = 1.27;
        range = 150;
        rangeCurve[] = {{0, 1}, {7, 1}, {15, 0}, {150, 0}};
    };
    class RHSUSF_M2_punch_close_interior_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\punch\50cal\close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\50cal\close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\50cal\close_3", 1}};
        volume = "1.27 * (1 - (0.15 * interior))";
        range = 150;
        rangeCurve[] = {{0, 0}, {7, 0}, {15, 1}, {150, 0}};
    };
    class RHSUSF_M2_punch_mid_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\punch\50cal\mid_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\50cal\mid_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\50cal\mid_3", 1}};
        volume = "1.27 * (1 - (0.2 * interior))";
        range = 800;
        rangeCurve[] = {{0, 0}, {150, 1}, {800, 0}};
    };
    class RHSUSF_M2_punch_far_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\punch\50cal\far_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\50cal\far_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\50cal\far_3", 1}};
        volume = "1.27 * (1 - (0.25 * interior))";
        range = 3900;
        rangeCurve[] = {{0, 1}, {150, 0}, {800, 1}, {3900, 1}};
    };
    class RHSUSF_M2_character_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\character\M2\character_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\character\M2\character_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\character\M2\character_3", 1}};
        volume = 0.72;
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
    };
    class RHSUSF_M2_Closure_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\closure\M2\Closure_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\closure\M2\Closure_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\closure\M2\Closure_3", 1}};
        volume = 0.97;
        range = 45;
        rangeCurve[] = {{0, 1}, {45, 0}};
    };
    class RHSUSF_M2_Interior_closeMono_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle2\Interior_close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle2\Interior_close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle2\Interior_close_3", 1}};
        volume = "1 * 2.8 * interior";
        range = 150;
        rangeCurve[] = {{1, 0}, {3, 0}, {7, 1}, {150, 0}};
    };
    class RHSUSF_M2_Interior_far_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle2\Interior_far_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle2\Interior_far_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle2\Interior_far_3", 1}};
        volume = "1 * 2.2 * interior";
        range = 3900;
        rangeCurve[] = {{0, 0}, {150, 1}, {3900, 1}};
    };
    class RHSUSF_veh_M2_punch_close_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\punch\50cal\close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\50cal\close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\50cal\close_3", 1}};
        volume = "1.27 * campos";
        range = 150;
        rangeCurve[] = {{0, 1}, {7, 1}, {15, 0}, {150, 0}};
    };
    class RHSUSF_veh_M2_punch_close_interior_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\punch\50cal\close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\50cal\close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\50cal\close_3", 1}};
        volume = "1.27 * (1 - campos)";
        range = 150;
        rangeCurve[] = {{0, 1}, {7, 1}, {15, 0}, {150, 0}};
    };
    class RHSUSF_veh_M2_punch_mid_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\punch\50cal\mid_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\50cal\mid_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\50cal\mid_3", 1}};
        volume = "1.27 * (1 - (0.2 * interior))";
        range = 800;
        rangeCurve[] = {{0, 0}, {150, 1}, {800, 0}};
    };
    class RHSUSF_veh_M2_punch_far_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\punch\50cal\far_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\50cal\far_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\50cal\far_3", 1}};
        volume = "1.27 * (1 - (0.25 * interior))";
        range = 3900;
        rangeCurve[] = {{0, 1}, {150, 0}, {800, 1}, {3900, 1}};
    };
    class RHSUSF_veh_M2_character_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\character\M2\character_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\character\M2\character_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\character\M2\character_3", 1}};
        volume = "0.72 * (campos max 0.2)";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
    };
    class RHSUSF_veh_M2_Closure_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\closure\M2\Closure_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\closure\M2\Closure_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\closure\M2\Closure_3", 1}};
        volume = "0.97 * (campos max 0.2)";
        range = 45;
        rangeCurve[] = {{0, 1}, {45, 0}};
    };
    class RHSUSF_veh_M2_Interior_closeMono_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle2\Interior_close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle2\Interior_close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle2\Interior_close_3", 1}};
        volume = "1 * 2.8 * interior";
        range = 150;
        rangeCurve[] = {{1, 0}, {3, 0}, {7, 1}, {150, 0}};
    };
    class RHSUSF_veh_M2_Interior_far_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle2\Interior_far_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle2\Interior_far_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle2\Interior_far_3", 1}};
        volume = "1 * 2.2 * interior";
        range = 3900;
        rangeCurve[] = {{0, 0}, {150, 1}, {3900, 1}};
    };
    class RHSUSF_M24_punch_close_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\punch\rifle2\close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\rifle2\close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\rifle2\close_3", 1}};
        volume = 1.27;
        range = 150;
        rangeCurve[] = {{0, 1}, {7, 1}, {15, 0}, {150, 0}};
    };
    class RHSUSF_M24_punch_close_interior_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\punch\rifle2\close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\rifle2\close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\rifle2\close_3", 1}};
        volume = "1.27 * (1 - (0.15 * interior))";
        range = 150;
        rangeCurve[] = {{0, 0}, {7, 0}, {15, 1}, {150, 0}};
    };
    class RHSUSF_M24_punch_mid_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\punch\rifle2\mid_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\rifle2\mid_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\rifle2\mid_3", 1}};
        volume = "1.27 * (1 - (0.2 * interior))";
        range = 800;
        rangeCurve[] = {{0, 0}, {150, 1}, {800, 0}};
    };
    class RHSUSF_M24_punch_far_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\punch\rifle2\far_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\rifle2\far_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\rifle2\far_3", 1}};
        volume = "1.27 * (1 - (0.25 * interior))";
        range = 3300;
        rangeCurve[] = {{0, 1}, {150, 0}, {800, 1}, {3300, 1}};
    };
    class RHSUSF_M24_character_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\character\M24\character_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\character\M24\character_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\character\M24\character_3", 1}};
        volume = 0.72;
        range = 130;
        rangeCurve[] = {{0, 1}, {130, 0}};
    };
    class RHSUSF_M24_Closure_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\closure\M24\Closure_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\closure\M24\Closure_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\closure\M24\Closure_3", 1}};
        volume = 0.84;
        range = 45;
        rangeCurve[] = {{0, 1}, {45, 0}};
    };
    class RHSUSF_M24_Interior_closeMono_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle2\Interior_close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle2\Interior_close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle2\Interior_close_3", 1}};
        volume = "1 * 2.8 * interior";
        range = 150;
        rangeCurve[] = {{1, 0}, {3, 0}, {7, 1}, {150, 0}};
    };
    class RHSUSF_M24_Interior_far_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle2\Interior_far_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle2\Interior_far_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle2\Interior_far_3", 1}};
        volume = "1 * 2.2 * interior";
        range = 3300;
        rangeCurve[] = {{0, 0}, {150, 1}, {3300, 1}};
    };
    class RHSUSF_sd_M24_punch_close_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\punch\sd_LMG762\close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\sd_LMG762\close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\sd_LMG762\close_3", 1}};
        volume = 0.91;
        range = 100;
        rangeCurve[] = {{0, 1}, {7, 1}, {15, 0}, {100, 0}};
    };
    class RHSUSF_sd_M24_punch_close_interior_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\punch\sd_LMG762\close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\sd_LMG762\close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\sd_LMG762\close_3", 1}};
        volume = "0.91 * (1 - (0.15 * interior))";
        range = 100;
        rangeCurve[] = {{0, 0}, {7, 0}, {15, 1}, {100, 0}};
    };
    class RHSUSF_sd_M24_punch_mid_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\punch\sd_LMG762\mid_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\sd_LMG762\mid_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\sd_LMG762\mid_3", 1}};
        volume = "0.91 * (1 - (0.2 * interior))";
        range = 250;
        rangeCurve[] = {{0, 0}, {100, 1}, {250, 0}};
    };
    class RHSUSF_sd_M24_punch_far_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\punch\sd_LMG762\far_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\sd_LMG762\far_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\sd_LMG762\far_3", 1}};
        volume = "0.91 * (1 - (0.25 * interior))";
        range = 900;
        rangeCurve[] = {{0, 1}, {100, 0}, {250, 1}, {900, 1}};
    };
    class RHSUSF_sd_M24_character_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\character\sd_M4\character_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\character\sd_M4\character_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\character\sd_M4\character_3", 1}};
        volume = 0.45;
        range = 60;
        rangeCurve[] = {{0, 1}, {60, 0}};
    };
    class RHSUSF_sd_M24_Closure_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\closure\M24\Closure_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\closure\M24\Closure_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\closure\M24\Closure_3", 1}};
        volume = 0.84;
        range = 35;
        rangeCurve[] = {{0, 1}, {35, 0}};
    };
    class RHSUSF_sd_M24_Interior_closeMono_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\sd_mmg1\Interior_close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\sd_mmg1\Interior_close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\sd_mmg1\Interior_close_3", 1}};
        volume = "0.8 * 2.8 * interior";
        range = 100;
        rangeCurve[] = {{1, 0}, {3, 0}, {7, 1}, {100, 0}};
    };
    class RHSUSF_sd_M24_Interior_far_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\sd_mmg1\Interior_far_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\sd_mmg1\Interior_far_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\sd_mmg1\Interior_far_3", 1}};
        volume = "0.8 * 2.2 * interior";
        range = 900;
        rangeCurve[] = {{0, 0}, {100, 1}, {900, 1}};
    };
    class RHSUSF_xm2010_punch_close_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\punch\rifle2\close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\rifle2\close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\rifle2\close_3", 1}};
        volume = 1.27;
        range = 150;
        rangeCurve[] = {{0, 1}, {7, 1}, {15, 0}, {150, 0}};
    };
    class RHSUSF_xm2010_punch_close_interior_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\punch\rifle2\close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\rifle2\close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\rifle2\close_3", 1}};
        volume = "1.27 * (1 - (0.15 * interior))";
        range = 150;
        rangeCurve[] = {{0, 0}, {7, 0}, {15, 1}, {150, 0}};
    };
    class RHSUSF_xm2010_punch_mid_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\punch\rifle2\mid_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\rifle2\mid_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\rifle2\mid_3", 1}};
        volume = "1.27 * (1 - (0.2 * interior))";
        range = 800;
        rangeCurve[] = {{0, 0}, {150, 1}, {800, 0}};
    };
    class RHSUSF_xm2010_punch_far_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\punch\rifle2\far_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\rifle2\far_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\rifle2\far_3", 1}};
        volume = "1.27 * (1 - (0.25 * interior))";
        range = 3300;
        rangeCurve[] = {{0, 1}, {150, 0}, {800, 1}, {3300, 1}};
    };
    class RHSUSF_xm2010_character_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\character\k98\character_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\character\k98\character_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\character\k98\character_3", 1}};
        volume = 0.72;
        range = 130;
        rangeCurve[] = {{0, 1}, {130, 0}};
    };
    class RHSUSF_xm2010_Closure_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\closure\m4\Closure_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\closure\m4\Closure_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\closure\m4\Closure_3", 1}};
        volume = 0.84;
        range = 45;
        rangeCurve[] = {{0, 1}, {45, 0}};
    };
    class RHSUSF_xm2010_Interior_closeMono_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle2\Interior_close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle2\Interior_close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle2\Interior_close_3", 1}};
        volume = "1 * 2.8 * interior";
        range = 150;
        rangeCurve[] = {{1, 0}, {3, 0}, {7, 1}, {150, 0}};
    };
    class RHSUSF_xm2010_Interior_far_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle2\Interior_far_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle2\Interior_far_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle2\Interior_far_3", 1}};
        volume = "1 * 2.2 * interior";
        range = 3300;
        rangeCurve[] = {{0, 0}, {150, 1}, {3300, 1}};
    };
    class RHSUSF_sd_xm2010_punch_close_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\punch\sd_LMG762\close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\sd_LMG762\close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\sd_LMG762\close_3", 1}};
        volume = 0.91;
        range = 100;
        rangeCurve[] = {{0, 1}, {7, 1}, {15, 0}, {100, 0}};
    };
    class RHSUSF_sd_xm2010_punch_close_interior_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\punch\sd_LMG762\close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\sd_LMG762\close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\sd_LMG762\close_3", 1}};
        volume = "0.91 * (1 - (0.15 * interior))";
        range = 100;
        rangeCurve[] = {{0, 0}, {7, 0}, {15, 1}, {100, 0}};
    };
    class RHSUSF_sd_xm2010_punch_mid_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\punch\sd_LMG762\mid_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\sd_LMG762\mid_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\sd_LMG762\mid_3", 1}};
        volume = "0.91 * (1 - (0.2 * interior))";
        range = 250;
        rangeCurve[] = {{0, 0}, {100, 1}, {250, 0}};
    };
    class RHSUSF_sd_xm2010_punch_far_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\punch\sd_LMG762\far_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\sd_LMG762\far_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\sd_LMG762\far_3", 1}};
        volume = "0.91 * (1 - (0.25 * interior))";
        range = 900;
        rangeCurve[] = {{0, 1}, {100, 0}, {250, 1}, {900, 1}};
    };
    class RHSUSF_sd_xm2010_character_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\character\sd_M4\character_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\character\sd_M4\character_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\character\sd_M4\character_3", 1}};
        volume = 0.45;
        range = 60;
        rangeCurve[] = {{0, 1}, {60, 0}};
    };
    class RHSUSF_sd_xm2010_Closure_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\closure\M4\Closure_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\closure\M4\Closure_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\closure\M4\Closure_3", 1}};
        volume = 0.84;
        range = 35;
        rangeCurve[] = {{0, 1}, {35, 0}};
    };
    class RHSUSF_sd_xm2010_Interior_closeMono_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\sd_mmg1\Interior_close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\sd_mmg1\Interior_close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\sd_mmg1\Interior_close_3", 1}};
        volume = "0.8 * 2.8 * interior";
        range = 100;
        rangeCurve[] = {{1, 0}, {3, 0}, {7, 1}, {100, 0}};
    };
    class RHSUSF_sd_xm2010_Interior_far_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\sd_mmg1\Interior_far_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\sd_mmg1\Interior_far_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\sd_mmg1\Interior_far_3", 1}};
        volume = "0.8 * 2.2 * interior";
        range = 900;
        rangeCurve[] = {{0, 0}, {100, 1}, {900, 1}};
    };
    class RHSUSF_SCARH_punch_close_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\punch\LMG762\close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\LMG762\close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\LMG762\close_3", 1}};
        volume = 1.24;
        range = 150;
        rangeCurve[] = {{0, 1}, {7, 1}, {15, 0}, {150, 0}};
    };
    class RHSUSF_SCARH_punch_close_interior_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\punch\LMG762\close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\LMG762\close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\LMG762\close_3", 1}};
        volume = "1.24 * (1 - (0.15 * interior))";
        range = 150;
        rangeCurve[] = {{0, 0}, {7, 0}, {15, 1}, {150, 0}};
    };
    class RHSUSF_SCARH_punch_mid_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\punch\LMG762\mid_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\LMG762\mid_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\LMG762\mid_3", 1}};
        volume = "1.24 * (1 - (0.2 * interior))";
        range = 800;
        rangeCurve[] = {{0, 0}, {150, 1}, {800, 0}};
    };
    class RHSUSF_SCARH_punch_far_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\punch\LMG762\far_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\LMG762\far_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\LMG762\far_3", 1}};
        volume = "1.24 * (1 - (0.25 * interior))";
        range = 3300;
        rangeCurve[] = {{0, 1}, {150, 0}, {800, 1}, {3300, 1}};
    };
    class RHSUSF_SCARH_character_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\character\M24\character_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\character\M24\character_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\character\M24\character_3", 1}};
        volume = 0.69;
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
    };
    class RHSUSF_SCARH_Closure_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\closure\stg44\Closure_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\closure\stg44\Closure_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\closure\stg44\Closure_3", 1}};
        volume = 0.95;
        range = 45;
        rangeCurve[] = {{0, 1}, {45, 0}};
    };
    class RHSUSF_SCARH_Interior_closeMono_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle2\Interior_close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle2\Interior_close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle2\Interior_close_3", 1}};
        volume = "1 * 2.8 * interior";
        range = 150;
        rangeCurve[] = {{1, 0}, {3, 0}, {7, 1}, {150, 0}};
    };
    class RHSUSF_SCARH_Interior_far_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle2\Interior_far_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle2\Interior_far_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle2\Interior_far_3", 1}};
        volume = "1 * 2.2 * interior";
        range = 3300;
        rangeCurve[] = {{0, 0}, {150, 1}, {3300, 1}};
    };
    class RHSUSF_sd_SCARH_punch_close_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\punch\sd_LMG762\close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\sd_LMG762\close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\sd_LMG762\close_3", 1}};
        volume = 0.84;
        range = 100;
        rangeCurve[] = {{0, 1}, {7, 1}, {15, 0}, {100, 0}};
    };
    class RHSUSF_sd_SCARH_punch_close_interior_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\punch\sd_LMG762\close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\sd_LMG762\close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\sd_LMG762\close_3", 1}};
        volume = "0.84 * (1 - (0.15 * interior))";
        range = 100;
        rangeCurve[] = {{0, 0}, {7, 0}, {15, 1}, {100, 0}};
    };
    class RHSUSF_sd_SCARH_punch_mid_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\punch\sd_LMG762\mid_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\sd_LMG762\mid_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\sd_LMG762\mid_3", 1}};
        volume = "0.84 * (1 - (0.2 * interior))";
        range = 250;
        rangeCurve[] = {{0, 0}, {100, 1}, {250, 0}};
    };
    class RHSUSF_sd_SCARH_punch_far_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\punch\sd_LMG762\far_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\sd_LMG762\far_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\punch\sd_LMG762\far_3", 1}};
        volume = "0.84 * (1 - (0.25 * interior))";
        range = 900;
        rangeCurve[] = {{0, 1}, {100, 0}, {250, 1}, {900, 1}};
    };
    class RHSUSF_sd_SCARH_character_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\character\sd_M4\character_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\character\sd_M4\character_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\character\sd_M4\character_3", 1}};
        volume = 0.45;
        range = 60;
        rangeCurve[] = {{0, 1}, {60, 0}};
    };
    class RHSUSF_sd_SCARH_Closure_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\closure\stg44\Closure_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\closure\stg44\Closure_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\closure\stg44\Closure_3", 1}};
        volume = 0.95;
        range = 45;
        rangeCurve[] = {{0, 1}, {45, 0}};
    };
    class RHSUSF_sd_SCARH_Interior_closeMono_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\sd_mmg1\Interior_close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\sd_mmg1\Interior_close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\sd_mmg1\Interior_close_3", 1}};
        volume = "0.8 * 2.8 * interior";
        range = 100;
        rangeCurve[] = {{1, 0}, {3, 0}, {7, 1}, {100, 0}};
    };
    class RHSUSF_sd_SCARH_Interior_far_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\sd_mmg1\Interior_far_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\sd_mmg1\Interior_far_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\sd_mmg1\Interior_far_3", 1}};
        volume = "0.8 * 2.2 * interior";
        range = 900;
        rangeCurve[] = {{0, 0}, {100, 1}, {900, 1}};
    };
    class RHSUSF_pistol1_Meadows_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\pistol1\Meadows_close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\pistol1\Meadows_close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\pistol1\Meadows_close_3", 1}};
        volume = "1 * (meadows max sea) * (1 - (interior * 0.7))";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHSUSF_pistol1_Meadows_far_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\pistol1\Meadows_far_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\pistol1\Meadows_far_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\pistol1\Meadows_far_3", 1}};
        volume = "1 * (meadows max sea) * (1 - (interior * 0.7))";
        range = 2700;
        rangeCurve[] = {{0, 0}, {150, 1}, {2700, 1}};
        limitation = 1;
    };
    class RHSUSF_pistol1_Houses_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\pistol1\Houses_close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\pistol1\Houses_close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\pistol1\Houses_close_3", 1}};
        volume = "1 * houses * (1 - (interior * 0.7))";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHSUSF_pistol1_Houses_far_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\pistol1\Houses_far_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\pistol1\Houses_far_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\pistol1\Houses_far_3", 1}};
        volume = "1 * houses * (1 - (interior * 0.7))";
        range = 2700;
        rangeCurve[] = {{0, 0}, {150, 1}, {2700, 1}};
        limitation = 1;
    };
    class RHSUSF_pistol1_Forest_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\pistol1\Forest_close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\pistol1\Forest_close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\pistol1\Forest_close_3", 1}};
        volume = "1 * (forest max trees) * (1 - (interior * 0.7))";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHSUSF_pistol1_Forest_far_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\pistol1\Forest_far_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\pistol1\Forest_far_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\pistol1\Forest_far_3", 1}};
        volume = "1 * (forest max trees) * (1 - (interior * 0.7))";
        range = 2700;
        rangeCurve[] = {{0, 0}, {150, 1}, {2700, 1}};
        limitation = 1;
    };
    class RHSUSF_pistol1_Interior_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\pistol1\Interior_close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\pistol1\Interior_close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\pistol1\Interior_close_3", 1}};
        volume = "1 * 3.20 * interior";
        range = 7;
        rangeCurve[] = {{0, 1}, {3, 1}, {7, 0}};
        limitation = 1;
    };
    class RHSUSF_pistol1_noise_meadows_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\noise\small\meadows_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\small\meadows_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\small\meadows_3", 1}};
        volume = "(1.35 * (meadows max sea)) * (1 - interior)";
        range = 200;
        rangeCurve[] = {{0, 1}, {200, 0}};
    };
    class RHSUSF_pistol1_noise_meadows_interior_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\noise\small\meadows_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\small\meadows_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\small\meadows_3", 1}};
        volume = "(1.35 * (meadows max sea)) * (1 - interior)";
        range = 200;
        rangeCurve[] = {{0, 1}, {200, 0}};
    };
    class RHSUSF_pistol1_noise_forest_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\noise\small\forest_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\small\forest_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\small\forest_3", 1}};
        volume = "(1.35 * (forest max trees)) * (1 - interior)";
        range = 200;
        rangeCurve[] = {{0, 1}, {200, 0}};
    };
    class RHSUSF_pistol1_noise_houses_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\noise\small\houses_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\small\houses_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\small\houses_3", 1}};
        volume = "(1.35 * houses)) * (1 - interior)";
        range = 200;
        rangeCurve[] = {{0, 1}, {200, 0}};
    };
    class RHSUSF_rifle1_Meadows_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle1\Meadows_close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle1\Meadows_close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle1\Meadows_close_3", 1}};
        volume = "0.72 * (meadows max sea) * (1 - (interior * 0.7))";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHSUSF_rifle1_Meadows_far_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle1\Meadows_far_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle1\Meadows_far_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle1\Meadows_far_3", 1}};
        volume = "0.72 * (meadows max sea) * (1 - (interior * 0.7))";
        range = 2800;
        rangeCurve[] = {{0, 0}, {150, 1}, {2800, 1}};
        limitation = 1;
    };
    class RHSUSF_rifle1_Houses_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle1\Houses_close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle1\Houses_close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle1\Houses_close_3", 1}};
        volume = "0.72 * houses * (1 - (interior * 0.7))";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHSUSF_rifle1_Houses_far_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle1\Houses_far_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle1\Houses_far_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle1\Houses_far_3", 1}};
        volume = "0.72 * houses * (1 - (interior * 0.7))";
        range = 2800;
        rangeCurve[] = {{0, 0}, {150, 1}, {2800, 1}};
        limitation = 1;
    };
    class RHSUSF_rifle1_Forest_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle1\Forest_close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle1\Forest_close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle1\Forest_close_3", 1}};
        volume = "0.72 * (forest max trees) * (1 - (interior * 0.7))";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHSUSF_rifle1_Forest_far_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle1\Forest_far_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle1\Forest_far_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle1\Forest_far_3", 1}};
        volume = "0.72 * (forest max trees) * (1 - (interior * 0.7))";
        range = 2800;
        rangeCurve[] = {{0, 0}, {150, 1}, {2800, 1}};
        limitation = 1;
    };
    class RHSUSF_rifle1_Interior_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle1\Interior_close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle1\Interior_close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle1\Interior_close_3", 1}};
        volume = "0.72 * 3.20 * interior";
        range = 7;
        rangeCurve[] = {{0, 1}, {3, 1}, {7, 0}};
        limitation = 1;
    };
    class RHSUSF_rifle1_noise_meadows_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\noise\mid\meadows_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\mid\meadows_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\mid\meadows_3", 1}};
        volume = "(1.35 * (meadows max sea)) * (1 - interior)";
        range = 230;
        rangeCurve[] = {{0, 1}, {230, 0}};
    };
    class RHSUSF_rifle1_noise_meadows_interior_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\noise\mid\meadows_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\mid\meadows_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\mid\meadows_3", 1}};
        volume = "(1.35 * (meadows max sea)) * (1 - interior)";
        range = 230;
        rangeCurve[] = {{0, 1}, {230, 0}};
    };
    class RHSUSF_rifle1_noise_forest_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\noise\mid\forest_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\mid\forest_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\mid\forest_3", 1}};
        volume = "(1.35 * (forest max trees)) * (1 - interior)";
        range = 230;
        rangeCurve[] = {{0, 1}, {230, 0}};
    };
    class RHSUSF_rifle1_noise_houses_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\noise\mid\houses_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\mid\houses_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\mid\houses_3", 1}};
        volume = "(1.35 * houses)) * (1 - interior)";
        range = 230;
        rangeCurve[] = {{0, 1}, {230, 0}};
    };
    class RHSUSF_sd_rifle1_Meadows_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\sd_rifle1\Meadows_close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\sd_rifle1\Meadows_close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\sd_rifle1\Meadows_close_3", 1}};
        volume = "0.72 * (meadows max sea) * (1 - (interior * 0.7))";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHSUSF_sd_rifle1_Meadows_far_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\sd_rifle1\Meadows_far_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\sd_rifle1\Meadows_far_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\sd_rifle1\Meadows_far_3", 1}};
        volume = "0.72 * (meadows max sea) * (1 - (interior * 0.7))";
        range = 600;
        rangeCurve[] = {{0, 0}, {150, 1}, {600, 1}};
        limitation = 1;
    };
    class RHSUSF_sd_rifle1_Houses_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\sd_rifle1\Houses_close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\sd_rifle1\Houses_close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\sd_rifle1\Houses_close_3", 1}};
        volume = "0.72 * houses * (1 - (interior * 0.7))";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHSUSF_sd_rifle1_Houses_far_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\sd_rifle1\Houses_far_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\sd_rifle1\Houses_far_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\sd_rifle1\Houses_far_3", 1}};
        volume = "0.72 * houses * (1 - (interior * 0.7))";
        range = 600;
        rangeCurve[] = {{0, 0}, {150, 1}, {600, 1}};
        limitation = 1;
    };
    class RHSUSF_sd_rifle1_Forest_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\sd_rifle1\Forest_close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\sd_rifle1\Forest_close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\sd_rifle1\Forest_close_3", 1}};
        volume = "0.72 * (forest max trees) * (1 - (interior * 0.7))";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHSUSF_sd_rifle1_Forest_far_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\sd_rifle1\Forest_far_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\sd_rifle1\Forest_far_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\sd_rifle1\Forest_far_3", 1}};
        volume = "0.72 * (forest max trees) * (1 - (interior * 0.7))";
        range = 600;
        rangeCurve[] = {{0, 0}, {150, 1}, {600, 1}};
        limitation = 1;
    };
    class RHSUSF_sd_rifle1_Interior_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\sd_rifle1\Interior_close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\sd_rifle1\Interior_close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\sd_rifle1\Interior_close_3", 1}};
        volume = "0.72 * 3.20 * interior";
        range = 7;
        rangeCurve[] = {{0, 1}, {3, 1}, {7, 0}};
        limitation = 1;
    };
    class RHSUSF_sd_rifle1_noise_meadows_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\noise\small\meadows_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\small\meadows_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\small\meadows_3", 1}};
        volume = "(1.35 * (meadows max sea)) * (1 - interior)";
        range = 180;
        rangeCurve[] = {{0, 1}, {180, 0}};
    };
    class RHSUSF_sd_rifle1_noise_meadows_interior_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\noise\small\meadows_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\small\meadows_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\small\meadows_3", 1}};
        volume = "(1.35 * (meadows max sea)) * (1 - interior)";
        range = 180;
        rangeCurve[] = {{0, 1}, {180, 0}};
    };
    class RHSUSF_sd_rifle1_noise_forest_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\noise\small\forest_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\small\forest_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\small\forest_3", 1}};
        volume = "(1.35 * (forest max trees)) * (1 - interior)";
        range = 180;
        rangeCurve[] = {{0, 1}, {180, 0}};
    };
    class RHSUSF_sd_rifle1_noise_houses_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\noise\small\houses_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\small\houses_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\small\houses_3", 1}};
        volume = "(1.35 * houses)) * (1 - interior)";
        range = 180;
        rangeCurve[] = {{0, 1}, {180, 0}};
    };
    class RHSUSF_sd_mmg1_Meadows_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\sd_mmg1\Meadows_close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\sd_mmg1\Meadows_close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\sd_mmg1\Meadows_close_3", 1}};
        volume = "0.72 * (meadows max sea) * (1 - (interior * 0.7))";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHSUSF_sd_mmg1_Meadows_far_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\sd_mmg1\Meadows_far_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\sd_mmg1\Meadows_far_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\sd_mmg1\Meadows_far_3", 1}};
        volume = "0.72 * (meadows max sea) * (1 - (interior * 0.7))";
        range = 800;
        rangeCurve[] = {{0, 0}, {150, 1}, {800, 1}};
        limitation = 1;
    };
    class RHSUSF_sd_mmg1_Houses_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\sd_mmg1\Houses_close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\sd_mmg1\Houses_close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\sd_mmg1\Houses_close_3", 1}};
        volume = "0.72 * houses * (1 - (interior * 0.7))";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHSUSF_sd_mmg1_Houses_far_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\sd_mmg1\Houses_far_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\sd_mmg1\Houses_far_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\sd_mmg1\Houses_far_3", 1}};
        volume = "0.72 * houses * (1 - (interior * 0.7))";
        range = 800;
        rangeCurve[] = {{0, 0}, {150, 1}, {800, 1}};
        limitation = 1;
    };
    class RHSUSF_sd_mmg1_Forest_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\sd_mmg1\Forest_close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\sd_mmg1\Forest_close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\sd_mmg1\Forest_close_3", 1}};
        volume = "0.72 * (forest max trees) * (1 - (interior * 0.7))";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHSUSF_sd_mmg1_Forest_far_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\sd_mmg1\Forest_far_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\sd_mmg1\Forest_far_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\sd_mmg1\Forest_far_3", 1}};
        volume = "0.72 * (forest max trees) * (1 - (interior * 0.7))";
        range = 800;
        rangeCurve[] = {{0, 0}, {150, 1}, {800, 1}};
        limitation = 1;
    };
    class RHSUSF_sd_mmg1_Interior_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\sd_mmg1\Interior_close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\sd_mmg1\Interior_close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\sd_mmg1\Interior_close_3", 1}};
        volume = "0.72 * 3.20 * interior";
        range = 7;
        rangeCurve[] = {{0, 1}, {3, 1}, {7, 0}};
        limitation = 1;
    };
    class RHSUSF_sd_mmg1_noise_meadows_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\noise\small\meadows_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\small\meadows_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\small\meadows_3", 1}};
        volume = "(1.35 * (meadows max sea)) * (1 - interior)";
        range = 180;
        rangeCurve[] = {{0, 1}, {180, 0}};
    };
    class RHSUSF_sd_mmg1_noise_meadows_interior_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\noise\small\meadows_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\small\meadows_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\small\meadows_3", 1}};
        volume = "(1.35 * (meadows max sea)) * (1 - interior)";
        range = 180;
        rangeCurve[] = {{0, 1}, {180, 0}};
    };
    class RHSUSF_sd_mmg1_noise_forest_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\noise\small\forest_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\small\forest_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\small\forest_3", 1}};
        volume = "(1.35 * (forest max trees)) * (1 - interior)";
        range = 180;
        rangeCurve[] = {{0, 1}, {180, 0}};
    };
    class RHSUSF_sd_mmg1_noise_houses_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\noise\small\houses_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\small\houses_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\small\houses_3", 1}};
        volume = "(1.35 * houses)) * (1 - interior)";
        range = 180;
        rangeCurve[] = {{0, 1}, {180, 0}};
    };
    class RHSUSF_mmg1_Meadows_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\mmg1\Meadows_close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\mmg1\Meadows_close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\mmg1\Meadows_close_3", 1}};
        volume = "0.88 * (meadows max sea) * (1 - (interior * 0.7))";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHSUSF_mmg1_Meadows_far_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\mmg1\Meadows_far_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\mmg1\Meadows_far_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\mmg1\Meadows_far_3", 1}};
        volume = "0.88 * (meadows max sea) * (1 - (interior * 0.7))";
        range = 3100;
        rangeCurve[] = {{0, 0}, {150, 1}, {3100, 1}};
        limitation = 1;
    };
    class RHSUSF_mmg1_Houses_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\mmg1\Houses_close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\mmg1\Houses_close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\mmg1\Houses_close_3", 1}};
        volume = "0.88 * houses * (1 - (interior * 0.7))";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHSUSF_mmg1_Houses_far_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\mmg1\Houses_far_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\mmg1\Houses_far_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\mmg1\Houses_far_3", 1}};
        volume = "0.88 * houses * (1 - (interior * 0.7))";
        range = 3100;
        rangeCurve[] = {{0, 0}, {150, 1}, {3100, 1}};
        limitation = 1;
    };
    class RHSUSF_mmg1_Forest_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\mmg1\Forest_close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\mmg1\Forest_close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\mmg1\Forest_close_3", 1}};
        volume = "0.88 * (forest max trees) * (1 - (interior * 0.7))";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHSUSF_mmg1_Forest_far_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\mmg1\Forest_far_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\mmg1\Forest_far_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\mmg1\Forest_far_3", 1}};
        volume = "0.88 * (forest max trees) * (1 - (interior * 0.7))";
        range = 3100;
        rangeCurve[] = {{0, 0}, {150, 1}, {3100, 1}};
        limitation = 1;
    };
    class RHSUSF_mmg1_Interior_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\mmg1\Interior_close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\mmg1\Interior_close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\mmg1\Interior_close_3", 1}};
        volume = "0.88 * 3.20 * interior";
        range = 7;
        rangeCurve[] = {{0, 1}, {3, 1}, {7, 0}};
        limitation = 1;
    };
    class RHSUSF_mmg1_noise_meadows_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\noise\big\meadows_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\big\meadows_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\big\meadows_3", 1}};
        volume = "(1.35 * (meadows max sea)) * (1 - interior)";
        range = 250;
        rangeCurve[] = {{0, 1}, {250, 0}};
    };
    class RHSUSF_mmg1_noise_meadows_interior_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\noise\big\meadows_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\big\meadows_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\big\meadows_3", 1}};
        volume = "(1.35 * (meadows max sea)) * (1 - interior)";
        range = 250;
        rangeCurve[] = {{0, 1}, {250, 0}};
    };
    class RHSUSF_mmg1_noise_forest_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\noise\big\forest_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\big\forest_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\big\forest_3", 1}};
        volume = "(1.35 * (forest max trees)) * (1 - interior)";
        range = 250;
        rangeCurve[] = {{0, 1}, {250, 0}};
    };
    class RHSUSF_mmg1_noise_houses_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\noise\big\houses_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\big\houses_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\big\houses_3", 1}};
        volume = "(1.35 * houses)) * (1 - interior)";
        range = 250;
        rangeCurve[] = {{0, 1}, {250, 0}};
    };
    class RHSUSF_veh_mmg1_Meadows_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\mmg1\Meadows_close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\mmg1\Meadows_close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\mmg1\Meadows_close_3", 1}};
        volume = "0.88 * (meadows max sea) * (1 - (interior * 0.7)) * (campos max 0.2)";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHSUSF_veh_mmg1_Meadows_far_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\mmg1\Meadows_far_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\mmg1\Meadows_far_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\mmg1\Meadows_far_3", 1}};
        volume = "0.88 * (meadows max sea) * (1 - (interior * 0.7))";
        range = 3100;
        rangeCurve[] = {{0, 0}, {150, 1}, {3100, 1}};
        limitation = 1;
    };
    class RHSUSF_veh_mmg1_Houses_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\mmg1\Houses_close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\mmg1\Houses_close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\mmg1\Houses_close_3", 1}};
        volume = "0.88 * houses * (1 - (interior * 0.7))";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHSUSF_veh_mmg1_Houses_far_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\mmg1\Houses_far_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\mmg1\Houses_far_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\mmg1\Houses_far_3", 1}};
        volume = "0.88 * houses * (1 - (interior * 0.7))";
        range = 3100;
        rangeCurve[] = {{0, 0}, {150, 1}, {3100, 1}};
        limitation = 1;
    };
    class RHSUSF_veh_mmg1_Forest_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\mmg1\Forest_close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\mmg1\Forest_close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\mmg1\Forest_close_3", 1}};
        volume = "0.88 * (forest max trees) * (1 - (interior * 0.7)) * (campos max 0.2)";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHSUSF_veh_mmg1_Forest_far_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\mmg1\Forest_far_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\mmg1\Forest_far_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\mmg1\Forest_far_3", 1}};
        volume = "0.88 * (forest max trees) * (1 - (interior * 0.7))";
        range = 3100;
        rangeCurve[] = {{0, 0}, {150, 1}, {3100, 1}};
        limitation = 1;
    };
    class RHSUSF_veh_mmg1_Interior_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\mmg1\Interior_close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\mmg1\Interior_close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\mmg1\Interior_close_3", 1}};
        volume = "0.88 * 3.20 * interior * (campos max 0.2)";
        range = 7;
        rangeCurve[] = {{0, 1}, {3, 1}, {7, 0}};
        limitation = 1;
    };
    class RHSUSF_veh_mmg1_noise_meadows_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\noise\big\meadows_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\big\meadows_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\big\meadows_3", 1}};
        volume = "(1.35 * (meadows max sea)) * (1 - interior)";
        range = 250;
        rangeCurve[] = {{0, 1}, {250, 0}};
    };
    class RHSUSF_veh_mmg1_noise_meadows_interior_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\noise\big\meadows_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\big\meadows_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\big\meadows_3", 1}};
        volume = "(1.35 * (meadows max sea)) * (1 - interior)";
        range = 250;
        rangeCurve[] = {{0, 1}, {250, 0}};
    };
    class RHSUSF_veh_mmg1_noise_forest_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\noise\big\forest_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\big\forest_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\big\forest_3", 1}};
        volume = "(1.35 * (forest max trees)) * (1 - interior)";
        range = 250;
        rangeCurve[] = {{0, 1}, {250, 0}};
    };
    class RHSUSF_veh_mmg1_noise_houses_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\noise\big\houses_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\big\houses_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\big\houses_3", 1}};
        volume = "(1.35 * houses)) * (1 - interior)";
        range = 250;
        rangeCurve[] = {{0, 1}, {250, 0}};
    };
    class RHSUSF_mmg1_delayed_Meadows_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\mmg1_delayed\Meadows_close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\mmg1_delayed\Meadows_close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\mmg1_delayed\Meadows_close_3", 1}};
        volume = "0.88 * (meadows max sea) * (1 - (interior * 0.7))";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHSUSF_mmg1_delayed_Meadows_far_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\mmg1_delayed\Meadows_far_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\mmg1_delayed\Meadows_far_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\mmg1_delayed\Meadows_far_3", 1}};
        volume = "0.88 * (meadows max sea) * (1 - (interior * 0.7))";
        range = 3100;
        rangeCurve[] = {{0, 0}, {150, 1}, {3100, 1}};
        limitation = 1;
    };
    class RHSUSF_mmg1_delayed_Houses_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\mmg1_delayed\Houses_close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\mmg1_delayed\Houses_close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\mmg1_delayed\Houses_close_3", 1}};
        volume = "0.88 * houses * (1 - (interior * 0.7))";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHSUSF_mmg1_delayed_Houses_far_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\mmg1_delayed\Houses_far_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\mmg1_delayed\Houses_far_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\mmg1_delayed\Houses_far_3", 1}};
        volume = "0.88 * houses * (1 - (interior * 0.7))";
        range = 3100;
        rangeCurve[] = {{0, 0}, {150, 1}, {3100, 1}};
        limitation = 1;
    };
    class RHSUSF_mmg1_delayed_Forest_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\mmg1_delayed\Forest_close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\mmg1_delayed\Forest_close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\mmg1_delayed\Forest_close_3", 1}};
        volume = "0.88 * (forest max trees) * (1 - (interior * 0.7))";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHSUSF_mmg1_delayed_Forest_far_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\mmg1_delayed\Forest_far_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\mmg1_delayed\Forest_far_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\mmg1_delayed\Forest_far_3", 1}};
        volume = "0.88 * (forest max trees) * (1 - (interior * 0.7))";
        range = 3100;
        rangeCurve[] = {{0, 0}, {150, 1}, {3100, 1}};
        limitation = 1;
    };
    class RHSUSF_mmg1_delayed_Interior_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\mmg1_delayed\Interior_close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\mmg1_delayed\Interior_close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\mmg1_delayed\Interior_close_3", 1}};
        volume = "0.88 * 3.20 * interior";
        range = 7;
        rangeCurve[] = {{0, 1}, {3, 1}, {7, 0}};
        limitation = 1;
    };
    class RHSUSF_mmg1_delayed_noise_meadows_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\noise\big\meadows_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\big\meadows_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\big\meadows_3", 1}};
        volume = "(1.35 * (meadows max sea)) * (1 - interior)";
        range = 250;
        rangeCurve[] = {{0, 1}, {250, 0}};
    };
    class RHSUSF_mmg1_delayed_noise_meadows_interior_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\noise\big\meadows_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\big\meadows_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\big\meadows_3", 1}};
        volume = "(1.35 * (meadows max sea)) * (1 - interior)";
        range = 250;
        rangeCurve[] = {{0, 1}, {250, 0}};
    };
    class RHSUSF_mmg1_delayed_noise_forest_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\noise\big\forest_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\big\forest_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\big\forest_3", 1}};
        volume = "(1.35 * (forest max trees)) * (1 - interior)";
        range = 250;
        rangeCurve[] = {{0, 1}, {250, 0}};
    };
    class RHSUSF_mmg1_delayed_noise_houses_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\noise\big\houses_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\big\houses_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\big\houses_3", 1}};
        volume = "(1.35 * houses)) * (1 - interior)";
        range = 250;
        rangeCurve[] = {{0, 1}, {250, 0}};
    };
    class RHSUSF_rifle2_Meadows_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle2\Meadows_close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle2\Meadows_close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle2\Meadows_close_3", 1}};
        volume = "0.93 * (meadows max sea) * (1 - (interior * 0.7))";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHSUSF_rifle2_Meadows_far_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle2\Meadows_far_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle2\Meadows_far_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle2\Meadows_far_3", 1}};
        volume = "0.93 * (meadows max sea) * (1 - (interior * 0.7))";
        range = 3100;
        rangeCurve[] = {{0, 0}, {150, 1}, {3100, 1}};
        limitation = 1;
    };
    class RHSUSF_rifle2_Houses_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle2\Houses_close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle2\Houses_close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle2\Houses_close_3", 1}};
        volume = "0.93 * houses * (1 - (interior * 0.7))";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHSUSF_rifle2_Houses_far_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle2\Houses_far_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle2\Houses_far_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle2\Houses_far_3", 1}};
        volume = "0.93 * houses * (1 - (interior * 0.7))";
        range = 3100;
        rangeCurve[] = {{0, 0}, {150, 1}, {3100, 1}};
        limitation = 1;
    };
    class RHSUSF_rifle2_Forest_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle2\Forest_close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle2\Forest_close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle2\Forest_close_3", 1}};
        volume = "0.93 * (forest max trees) * (1 - (interior * 0.7))";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHSUSF_rifle2_Forest_far_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle2\Forest_far_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle2\Forest_far_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle2\Forest_far_3", 1}};
        volume = "0.93 * (forest max trees) * (1 - (interior * 0.7))";
        range = 3100;
        rangeCurve[] = {{0, 0}, {150, 1}, {3100, 1}};
        limitation = 1;
    };
    class RHSUSF_rifle2_Interior_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle2\Interior_close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle2\Interior_close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle2\Interior_close_3", 1}};
        volume = "0.93 * 3.20 * interior";
        range = 7;
        rangeCurve[] = {{0, 1}, {3, 1}, {7, 0}};
        limitation = 1;
    };
    class RHSUSF_rifle2_noise_meadows_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\noise\big\meadows_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\big\meadows_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\big\meadows_3", 1}};
        volume = "(1.35 * (meadows max sea)) * (1 - interior)";
        range = 250;
        rangeCurve[] = {{0, 1}, {250, 0}};
    };
    class RHSUSF_rifle2_noise_meadows_interior_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\noise\big\meadows_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\big\meadows_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\big\meadows_3", 1}};
        volume = "(1.35 * (meadows max sea)) * (1 - interior)";
        range = 250;
        rangeCurve[] = {{0, 1}, {250, 0}};
    };
    class RHSUSF_rifle2_noise_forest_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\noise\big\forest_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\big\forest_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\big\forest_3", 1}};
        volume = "(1.35 * (forest max trees)) * (1 - interior)";
        range = 250;
        rangeCurve[] = {{0, 1}, {250, 0}};
    };
    class RHSUSF_rifle2_noise_houses_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\noise\big\houses_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\big\houses_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\big\houses_3", 1}};
        volume = "(1.35 * houses)) * (1 - interior)";
        range = 250;
        rangeCurve[] = {{0, 1}, {250, 0}};
    };
    class RHSUSF_veh_rifle2_Meadows_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle2\Meadows_close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle2\Meadows_close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle2\Meadows_close_3", 1}};
        volume = "0.93 * (meadows max sea) * (1 - (interior * 0.7)) * (campos max 0.2)";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHSUSF_veh_rifle2_Meadows_far_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle2\Meadows_far_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle2\Meadows_far_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle2\Meadows_far_3", 1}};
        volume = "0.93 * (meadows max sea) * (1 - (interior * 0.7))";
        range = 3100;
        rangeCurve[] = {{0, 0}, {150, 1}, {3100, 1}};
        limitation = 1;
    };
    class RHSUSF_veh_rifle2_Houses_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle2\Houses_close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle2\Houses_close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle2\Houses_close_3", 1}};
        volume = "0.93 * houses * (1 - (interior * 0.7))";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHSUSF_veh_rifle2_Houses_far_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle2\Houses_far_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle2\Houses_far_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle2\Houses_far_3", 1}};
        volume = "0.93 * houses * (1 - (interior * 0.7))";
        range = 3100;
        rangeCurve[] = {{0, 0}, {150, 1}, {3100, 1}};
        limitation = 1;
    };
    class RHSUSF_veh_rifle2_Forest_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle2\Forest_close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle2\Forest_close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle2\Forest_close_3", 1}};
        volume = "0.93 * (forest max trees) * (1 - (interior * 0.7)) * (campos max 0.2)";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHSUSF_veh_rifle2_Forest_far_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle2\Forest_far_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle2\Forest_far_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle2\Forest_far_3", 1}};
        volume = "0.93 * (forest max trees) * (1 - (interior * 0.7))";
        range = 3100;
        rangeCurve[] = {{0, 0}, {150, 1}, {3100, 1}};
        limitation = 1;
    };
    class RHSUSF_veh_rifle2_Interior_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle2\Interior_close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle2\Interior_close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\rifle2\Interior_close_3", 1}};
        volume = "0.93 * 3.20 * interior * (campos max 0.2)";
        range = 7;
        rangeCurve[] = {{0, 1}, {3, 1}, {7, 0}};
        limitation = 1;
    };
    class RHSUSF_veh_rifle2_noise_meadows_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\noise\big\meadows_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\big\meadows_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\big\meadows_3", 1}};
        volume = "(1.35 * (meadows max sea)) * (1 - interior)";
        range = 250;
        rangeCurve[] = {{0, 1}, {250, 0}};
    };
    class RHSUSF_veh_rifle2_noise_meadows_interior_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\noise\big\meadows_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\big\meadows_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\big\meadows_3", 1}};
        volume = "(1.35 * (meadows max sea)) * (1 - interior)";
        range = 250;
        rangeCurve[] = {{0, 1}, {250, 0}};
    };
    class RHSUSF_veh_rifle2_noise_forest_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\noise\big\forest_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\big\forest_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\big\forest_3", 1}};
        volume = "(1.35 * (forest max trees)) * (1 - interior)";
        range = 250;
        rangeCurve[] = {{0, 1}, {250, 0}};
    };
    class RHSUSF_veh_rifle2_noise_houses_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\noise\big\houses_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\big\houses_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\big\houses_3", 1}};
        volume = "(1.35 * houses)) * (1 - interior)";
        range = 250;
        rangeCurve[] = {{0, 1}, {250, 0}};
    };
    class RHSUSF_cannon_Meadows_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\cannon\Meadows_close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\cannon\Meadows_close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\cannon\Meadows_close_3", 1}};
        volume = "1.3 * (meadows max sea) * (1 - (interior * 0.7))";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHSUSF_cannon_Meadows_far_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\cannon\Meadows_far_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\cannon\Meadows_far_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\cannon\Meadows_far_3", 1}};
        volume = "1.3 * (meadows max sea) * (1 - (interior * 0.7))";
        range = 4500;
        rangeCurve[] = {{0, 0}, {150, 1}, {4500, 1}};
        limitation = 1;
    };
    class RHSUSF_cannon_Houses_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\cannon\Houses_close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\cannon\Houses_close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\cannon\Houses_close_3", 1}};
        volume = "1.3 * houses * (1 - (interior * 0.7))";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHSUSF_cannon_Houses_far_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\cannon\Houses_far_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\cannon\Houses_far_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\cannon\Houses_far_3", 1}};
        volume = "1.3 * houses * (1 - (interior * 0.7))";
        range = 4500;
        rangeCurve[] = {{0, 0}, {150, 1}, {4500, 1}};
        limitation = 1;
    };
    class RHSUSF_cannon_Forest_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\cannon\Forest_close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\cannon\Forest_close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\cannon\Forest_close_3", 1}};
        volume = "1.3 * (forest max trees) * (1 - (interior * 0.7))";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHSUSF_cannon_Forest_far_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\cannon\Forest_far_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\cannon\Forest_far_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\cannon\Forest_far_3", 1}};
        volume = "1.3 * (forest max trees) * (1 - (interior * 0.7))";
        range = 4500;
        rangeCurve[] = {{0, 0}, {150, 1}, {4500, 1}};
        limitation = 1;
    };
    class RHSUSF_cannon_Interior_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\cannon\Interior_close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\cannon\Interior_close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\cannon\Interior_close_3", 1}};
        volume = "1.3 * 3.20 * interior";
        range = 7;
        rangeCurve[] = {{0, 1}, {3, 1}, {7, 0}};
        limitation = 1;
    };
    class RHSUSF_cannon_noise_meadows_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\noise\big\meadows_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\big\meadows_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\big\meadows_3", 1}};
        volume = "(1.35 * (meadows max sea)) * (1 - interior)";
        range = 300;
        rangeCurve[] = {{0, 1}, {300, 0}};
    };
    class RHSUSF_cannon_noise_meadows_interior_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\noise\big\meadows_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\big\meadows_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\big\meadows_3", 1}};
        volume = "(1.35 * (meadows max sea)) * (1 - interior)";
        range = 300;
        rangeCurve[] = {{0, 1}, {300, 0}};
    };
    class RHSUSF_cannon_noise_forest_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\noise\big\forest_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\big\forest_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\big\forest_3", 1}};
        volume = "(1.35 * (forest max trees)) * (1 - interior)";
        range = 300;
        rangeCurve[] = {{0, 1}, {300, 0}};
    };
    class RHSUSF_cannon_noise_houses_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\noise\big\houses_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\big\houses_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\big\houses_3", 1}};
        volume = "(1.35 * houses)) * (1 - interior)";
        range = 300;
        rangeCurve[] = {{0, 1}, {300, 0}};
    };
    class RHSUSF_autocannon_Meadows_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\autocannon\Meadows_close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\autocannon\Meadows_close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\autocannon\Meadows_close_3", 1}};
        volume = "1.10 * (meadows max sea) * (1 - (interior * 0.7))";
        range = 300;
        rangeCurve[] = {{0, 1}, {300, 0}};
        limitation = 1;
    };
    class RHSUSF_autocannon_Meadows_far_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\autocannon\Meadows_far_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\autocannon\Meadows_far_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\autocannon\Meadows_far_3", 1}};
        volume = "1.10 * (meadows max sea) * (1 - (interior * 0.7))";
        range = 4200;
        rangeCurve[] = {{0, 0}, {300, 1}, {4200, 1}};
        limitation = 1;
    };
    class RHSUSF_autocannon_Houses_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\autocannon\Houses_close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\autocannon\Houses_close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\autocannon\Houses_close_3", 1}};
        volume = "1.10 * houses * (1 - (interior * 0.7))";
        range = 300;
        rangeCurve[] = {{0, 1}, {300, 0}};
        limitation = 1;
    };
    class RHSUSF_autocannon_Houses_far_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\autocannon\Houses_far_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\autocannon\Houses_far_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\autocannon\Houses_far_3", 1}};
        volume = "1.10 * houses * (1 - (interior * 0.7))";
        range = 4200;
        rangeCurve[] = {{0, 0}, {300, 1}, {4200, 1}};
        limitation = 1;
    };
    class RHSUSF_autocannon_Forest_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\autocannon\Forest_close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\autocannon\Forest_close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\autocannon\Forest_close_3", 1}};
        volume = "1.10 * (forest max trees) * (1 - (interior * 0.7))";
        range = 300;
        rangeCurve[] = {{0, 1}, {300, 0}};
        limitation = 1;
    };
    class RHSUSF_autocannon_Forest_far_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\autocannon\Forest_far_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\autocannon\Forest_far_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\autocannon\Forest_far_3", 1}};
        volume = "1.10 * (forest max trees) * (1 - (interior * 0.7))";
        range = 4200;
        rangeCurve[] = {{0, 0}, {300, 1}, {4200, 1}};
        limitation = 1;
    };
    class RHSUSF_autocannon_Interior_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\autocannon\Interior_close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\autocannon\Interior_close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\autocannon\Interior_close_3", 1}};
        volume = "1.10 * 3.20 * interior";
        range = 7;
        rangeCurve[] = {{0, 1}, {3, 1}, {7, 0}};
        limitation = 1;
    };
    class RHSUSF_autocannon_noise_meadows_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\noise\big\meadows_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\big\meadows_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\big\meadows_3", 1}};
        volume = "(1.35 * (meadows max sea)) * (1 - interior)";
        range = 300;
        rangeCurve[] = {{0, 1}, {300, 0}};
    };
    class RHSUSF_autocannon_noise_meadows_interior_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\noise\big\meadows_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\big\meadows_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\big\meadows_3", 1}};
        volume = "(1.35 * (meadows max sea)) * (1 - interior)";
        range = 300;
        rangeCurve[] = {{0, 1}, {300, 0}};
    };
    class RHSUSF_autocannon_noise_forest_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\noise\big\forest_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\big\forest_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\big\forest_3", 1}};
        volume = "(1.35 * (forest max trees)) * (1 - interior)";
        range = 300;
        rangeCurve[] = {{0, 1}, {300, 0}};
    };
    class RHSUSF_autocannon_noise_houses_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\noise\big\houses_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\big\houses_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\big\houses_3", 1}};
        volume = "(1.35 * houses)) * (1 - interior)";
        range = 300;
        rangeCurve[] = {{0, 1}, {300, 0}};
    };
    class RHSUSF_veh_autocannon_Meadows_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\autocannon\Meadows_close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\autocannon\Meadows_close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\autocannon\Meadows_close_3", 1}};
        volume = "1.10 * (meadows max sea) * (1 - (interior * 0.7)) * (campos max 0.2)";
        range = 300;
        rangeCurve[] = {{0, 1}, {300, 0}};
        limitation = 1;
    };
    class RHSUSF_veh_autocannon_Meadows_far_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\autocannon\Meadows_far_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\autocannon\Meadows_far_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\autocannon\Meadows_far_3", 1}};
        volume = "1.10 * (meadows max sea) * (1 - (interior * 0.7))";
        range = 4200;
        rangeCurve[] = {{0, 0}, {300, 1}, {4200, 1}};
        limitation = 1;
    };
    class RHSUSF_veh_autocannon_Houses_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\autocannon\Houses_close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\autocannon\Houses_close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\autocannon\Houses_close_3", 1}};
        volume = "1.10 * houses * (1 - (interior * 0.7))";
        range = 300;
        rangeCurve[] = {{0, 1}, {300, 0}};
        limitation = 1;
    };
    class RHSUSF_veh_autocannon_Houses_far_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\autocannon\Houses_far_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\autocannon\Houses_far_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\autocannon\Houses_far_3", 1}};
        volume = "1.10 * houses * (1 - (interior * 0.7))";
        range = 4200;
        rangeCurve[] = {{0, 0}, {300, 1}, {4200, 1}};
        limitation = 1;
    };
    class RHSUSF_veh_autocannon_Forest_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\autocannon\Forest_close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\autocannon\Forest_close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\autocannon\Forest_close_3", 1}};
        volume = "1.10 * (forest max trees) * (1 - (interior * 0.7)) * (campos max 0.2)";
        range = 300;
        rangeCurve[] = {{0, 1}, {300, 0}};
        limitation = 1;
    };
    class RHSUSF_veh_autocannon_Forest_far_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\autocannon\Forest_far_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\autocannon\Forest_far_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\autocannon\Forest_far_3", 1}};
        volume = "1.10 * (forest max trees) * (1 - (interior * 0.7))";
        range = 4200;
        rangeCurve[] = {{0, 0}, {300, 1}, {4200, 1}};
        limitation = 1;
    };
    class RHSUSF_veh_autocannon_Interior_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\autocannon\Interior_close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\autocannon\Interior_close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\autocannon\Interior_close_3", 1}};
        volume = "1.10 * 3.20 * interior * (campos max 0.2)";
        range = 7;
        rangeCurve[] = {{0, 1}, {3, 1}, {7, 0}};
        limitation = 1;
    };
    class RHSUSF_veh_autocannon_noise_meadows_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\noise\big\meadows_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\big\meadows_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\big\meadows_3", 1}};
        volume = "(1.35 * (meadows max sea)) * (1 - interior)";
        range = 300;
        rangeCurve[] = {{0, 1}, {300, 0}};
    };
    class RHSUSF_veh_autocannon_noise_meadows_interior_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\noise\big\meadows_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\big\meadows_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\big\meadows_3", 1}};
        volume = "(1.35 * (meadows max sea)) * (1 - interior)";
        range = 300;
        rangeCurve[] = {{0, 1}, {300, 0}};
    };
    class RHSUSF_veh_autocannon_noise_forest_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\noise\big\forest_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\big\forest_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\big\forest_3", 1}};
        volume = "(1.35 * (forest max trees)) * (1 - interior)";
        range = 300;
        rangeCurve[] = {{0, 1}, {300, 0}};
    };
    class RHSUSF_veh_autocannon_noise_houses_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\noise\big\houses_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\big\houses_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\big\houses_3", 1}};
        volume = "(1.35 * houses)) * (1 - interior)";
        range = 300;
        rangeCurve[] = {{0, 1}, {300, 0}};
    };
    class RHSUSF_20mm_Meadows_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\20mm\Meadows_close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\20mm\Meadows_close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\20mm\Meadows_close_3", 1}};
        volume = "1 * (meadows max sea) * (1 - (interior * 0.7))";
        range = 300;
        rangeCurve[] = {{0, 1}, {300, 0}};
        limitation = 1;
    };
    class RHSUSF_20mm_Meadows_far_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\20mm\Meadows_far_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\20mm\Meadows_far_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\20mm\Meadows_far_3", 1}};
        volume = "1 * (meadows max sea) * (1 - (interior * 0.7))";
        range = 4200;
        rangeCurve[] = {{0, 0}, {300, 1}, {4200, 1}};
        limitation = 1;
    };
    class RHSUSF_20mm_Houses_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\20mm\Houses_close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\20mm\Houses_close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\20mm\Houses_close_3", 1}};
        volume = "1 * houses * (1 - (interior * 0.7))";
        range = 300;
        rangeCurve[] = {{0, 1}, {300, 0}};
        limitation = 1;
    };
    class RHSUSF_20mm_Houses_far_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\20mm\Houses_far_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\20mm\Houses_far_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\20mm\Houses_far_3", 1}};
        volume = "1 * houses * (1 - (interior * 0.7))";
        range = 4200;
        rangeCurve[] = {{0, 0}, {300, 1}, {4200, 1}};
        limitation = 1;
    };
    class RHSUSF_20mm_Forest_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\20mm\Forest_close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\20mm\Forest_close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\20mm\Forest_close_3", 1}};
        volume = "1 * (forest max trees) * (1 - (interior * 0.7))";
        range = 300;
        rangeCurve[] = {{0, 1}, {300, 0}};
        limitation = 1;
    };
    class RHSUSF_20mm_Forest_far_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\20mm\Forest_far_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\20mm\Forest_far_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\20mm\Forest_far_3", 1}};
        volume = "1 * (forest max trees) * (1 - (interior * 0.7))";
        range = 4200;
        rangeCurve[] = {{0, 0}, {300, 1}, {4200, 1}};
        limitation = 1;
    };
    class RHSUSF_20mm_Interior_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\tails\20mm\Interior_close_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\20mm\Interior_close_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\tails\20mm\Interior_close_3", 1}};
        volume = "1 * 3.20 * interior";
        range = 7;
        rangeCurve[] = {{0, 1}, {3, 1}, {7, 0}};
        limitation = 1;
    };
    class RHSUSF_20mm_noise_meadows_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\noise\big\meadows_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\big\meadows_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\big\meadows_3", 1}};
        volume = "(1.35 * (meadows max sea)) * (1 - interior)";
        range = 300;
        rangeCurve[] = {{0, 1}, {300, 0}};
    };
    class RHSUSF_20mm_noise_meadows_interior_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\noise\big\meadows_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\big\meadows_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\big\meadows_3", 1}};
        volume = "(1.35 * (meadows max sea)) * (1 - interior)";
        range = 300;
        rangeCurve[] = {{0, 1}, {300, 0}};
    };
    class RHSUSF_20mm_noise_forest_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\noise\big\forest_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\big\forest_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\big\forest_3", 1}};
        volume = "(1.35 * (forest max trees)) * (1 - interior)";
        range = 300;
        rangeCurve[] = {{0, 1}, {300, 0}};
    };
    class RHSUSF_20mm_noise_houses_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_weapon_sounds\noise\big\houses_1", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\big\houses_2", 1}, {"rhsusf\addons\rhsusf_weapon_sounds\noise\big\houses_3", 1}};
        volume = "(1.35 * houses)) * (1 - interior)";
        range = 300;
        rangeCurve[] = {{0, 1}, {300, 0}};
    };
};
class CfgSoundSets {
    class RHSUSF_M240_Shot_SoundSet {
        soundShaders[] = {
            "RHSUSF_M240_punch_close_SoundShader",
            "RHSUSF_M240_punch_close_interior_SoundShader",
            "RHSUSF_M240_punch_mid_SoundShader",
            "RHSUSF_M240_punch_far_SoundShader",
            "RHSUSF_M240_character_SoundShader",
            "RHSUSF_M240_Closure_SoundShader",
            "RHSUSF_M240_Interior_closeMono_SoundShader",
            "RHSUSF_M240_Interior_far_SoundShader"
        };
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        volumeFactor = 1.25;
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "RHSUSF_Shot_light_3DProcessingType";
        distanceFilter = "RHSUSF_rifleShotDistanceFilter";
        frequencyRandomizer = 0.5;
        frequencyRandomizerMin = 0.1;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHSUSF_sd_M240_Shot_SoundSet {
        soundShaders[] = {
            "RHSUSF_sd_M240_punch_close_SoundShader",
            "RHSUSF_sd_M240_punch_close_interior_SoundShader",
            "RHSUSF_sd_M240_punch_mid_SoundShader",
            "RHSUSF_sd_M240_punch_far_SoundShader",
            "RHSUSF_sd_M240_character_SoundShader",
            "RHSUSF_sd_M240_Closure_SoundShader",
            "RHSUSF_sd_M240_Interior_closeMono_SoundShader",
            "RHSUSF_sd_M240_Interior_far_SoundShader"
        };
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        volumeFactor = 1.25;
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "RHSUSF_Shot_light_3DProcessingType";
        distanceFilter = "RHSUSF_rifleShotDistanceFilter";
        frequencyRandomizer = 0.5;
        frequencyRandomizerMin = 0.1;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHSUSF_veh_M240_Shot_SoundSet {
        soundShaders[] = {
            "RHSUSF_veh_M240_punch_close_SoundShader",
            "RHSUSF_veh_M240_punch_close_interior_SoundShader",
            "RHSUSF_veh_M240_punch_mid_SoundShader",
            "RHSUSF_veh_M240_punch_far_SoundShader",
            "RHSUSF_veh_M240_character_SoundShader",
            "RHSUSF_veh_M240_Closure_SoundShader",
            "RHSUSF_M240_Interior_closeMono_SoundShader",
            "RHSUSF_M240_Interior_far_SoundShader"
        };
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        volumeFactor = 1.25;
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "RHSUSF_Shot_light_3DProcessingType";
        distanceFilter = "RHSUSF_rifleShotDistanceFilter";
        frequencyRandomizer = 0.5;
        frequencyRandomizerMin = 0.1;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHSUSF_veh_M240_Int_Shot_SoundSet {
        soundShaders[] = {"RHSUSF_veh_M240_punch_close_interior_SoundShader"};
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        volumeFactor = "1.25*0.7";
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "RHSUSF_Shot_light_3DProcessingType";
        distanceFilter = "RHSUSF_vehicletDistanceFilter";
        frequencyRandomizer = 0.5;
        frequencyRandomizerMin = 0.1;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHSUSF_M4_Shot_SoundSet {
        soundShaders[] = {
            "RHSUSF_M4_punch_close_SoundShader",
            "RHSUSF_M4_punch_close_interior_SoundShader",
            "RHSUSF_M4_punch_mid_SoundShader",
            "RHSUSF_M4_punch_far_SoundShader",
            "RHSUSF_M4_character_SoundShader",
            "RHSUSF_M4_Closure_SoundShader",
            "RHSUSF_M4_Interior_closeMono_SoundShader",
            "RHSUSF_M4_Interior_far_SoundShader"
        };
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        volumeFactor = 1.25;
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "RHSUSF_Shot_light_3DProcessingType";
        distanceFilter = "RHSUSF_rifleShotDistanceFilter";
        frequencyRandomizer = 0.5;
        frequencyRandomizerMin = 0.1;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHSUSF_sd_M4_Shot_SoundSet {
        soundShaders[] = {
            "RHSUSF_sd_M4_punch_close_SoundShader",
            "RHSUSF_sd_M4_punch_close_interior_SoundShader",
            "RHSUSF_sd_M4_punch_mid_SoundShader",
            "RHSUSF_sd_M4_punch_far_SoundShader",
            "RHSUSF_sd_M4_character_SoundShader",
            "RHSUSF_sd_M4_Closure_SoundShader",
            "RHSUSF_sd_M4_Interior_closeMono_SoundShader",
            "RHSUSF_sd_M4_Interior_far_SoundShader"
        };
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        volumeFactor = 1.25;
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "RHSUSF_Shot_light_3DProcessingType";
        distanceFilter = "RHSUSF_rifleShotDistanceFilter";
        frequencyRandomizer = 0.5;
        frequencyRandomizerMin = 0.1;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHSUSF_M16_Shot_SoundSet {
        soundShaders[] = {
            "RHSUSF_M16_punch_close_SoundShader",
            "RHSUSF_M16_punch_close_interior_SoundShader",
            "RHSUSF_M16_punch_mid_SoundShader",
            "RHSUSF_M16_punch_far_SoundShader",
            "RHSUSF_M16_character_SoundShader",
            "RHSUSF_M16_Closure_SoundShader",
            "RHSUSF_M16_Interior_closeMono_SoundShader",
            "RHSUSF_M16_Interior_far_SoundShader"
        };
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        volumeFactor = 1.25;
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "RHSUSF_Shot_light_3DProcessingType";
        distanceFilter = "RHSUSF_rifleShotDistanceFilter";
        frequencyRandomizer = 0.5;
        frequencyRandomizerMin = 0.1;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHSUSF_M249_Shot_SoundSet {
        soundShaders[] = {
            "RHSUSF_M249_punch_close_SoundShader",
            "RHSUSF_M249_punch_close_interior_SoundShader",
            "RHSUSF_M249_punch_mid_SoundShader",
            "RHSUSF_M249_punch_far_SoundShader",
            "RHSUSF_M249_character_SoundShader",
            "RHSUSF_M249_Closure_SoundShader",
            "RHSUSF_M249_Interior_closeMono_SoundShader",
            "RHSUSF_M249_Interior_far_SoundShader"
        };
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        volumeFactor = 1.25;
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "RHSUSF_Shot_light_3DProcessingType";
        distanceFilter = "RHSUSF_rifleShotDistanceFilter";
        frequencyRandomizer = 0.5;
        frequencyRandomizerMin = 0.1;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHSUSF_sd_M249_Shot_SoundSet {
        soundShaders[] = {
            "RHSUSF_sd_M249_punch_close_SoundShader",
            "RHSUSF_sd_M249_punch_close_interior_SoundShader",
            "RHSUSF_sd_M249_punch_mid_SoundShader",
            "RHSUSF_sd_M249_punch_far_SoundShader",
            "RHSUSF_sd_M249_character_SoundShader",
            "RHSUSF_sd_M249_Closure_SoundShader",
            "RHSUSF_sd_M249_Interior_closeMono_SoundShader",
            "RHSUSF_sd_M249_Interior_far_SoundShader"
        };
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        volumeFactor = 1.25;
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "RHSUSF_Shot_light_3DProcessingType";
        distanceFilter = "RHSUSF_rifleShotDistanceFilter";
        frequencyRandomizer = 0.5;
        frequencyRandomizerMin = 0.1;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHSUSF_M242_Shot_SoundSet {
        soundShaders[] = {
            "RHSUSF_M242_punch_close_SoundShader",
            "RHSUSF_M242_punch_close_interior_SoundShader",
            "RHSUSF_M242_punch_mid_SoundShader",
            "RHSUSF_M242_punch_far_SoundShader",
            "RHSUSF_M242_character_SoundShader",
            "RHSUSF_M242_Closure_SoundShader",
            "RHSUSF_M242_Interior_closeMono_SoundShader",
            "RHSUSF_M242_Interior_far_SoundShader"
        };
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        volumeFactor = 1.25;
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "RHSUSF_Shot_light_3DProcessingType";
        distanceFilter = "RHSUSF_rifleShotDistanceFilter";
        frequencyRandomizer = 0.5;
        frequencyRandomizerMin = 0.1;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHSUSF_veh_M242_Shot_SoundSet {
        soundShaders[] = {
            "RHSUSF_veh_M242_punch_close_SoundShader",
            "RHSUSF_veh_M242_punch_close_interior_SoundShader",
            "RHSUSF_veh_M242_punch_mid_SoundShader",
            "RHSUSF_veh_M242_punch_far_SoundShader",
            "RHSUSF_veh_M242_character_SoundShader",
            "RHSUSF_veh_M242_Closure_SoundShader",
            "RHSUSF_M242_Interior_closeMono_SoundShader",
            "RHSUSF_M242_Interior_far_SoundShader"
        };
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        volumeFactor = 1.25;
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "RHSUSF_Shot_light_3DProcessingType";
        distanceFilter = "RHSUSF_rifleShotDistanceFilter";
        frequencyRandomizer = 0.5;
        frequencyRandomizerMin = 0.1;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHSUSF_veh_M242_Int_Shot_SoundSet {
        soundShaders[] = {"RHSUSF_veh_M242_punch_close_interior_SoundShader"};
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        volumeFactor = "1.25*0.7";
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "RHSUSF_Shot_light_3DProcessingType";
        distanceFilter = "RHSUSF_vehicletDistanceFilter";
        frequencyRandomizer = 0.5;
        frequencyRandomizerMin = 0.1;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHSUSF_MP7_Shot_SoundSet {
        soundShaders[] = {
            "RHSUSF_MP7_punch_close_SoundShader",
            "RHSUSF_MP7_punch_close_interior_SoundShader",
            "RHSUSF_MP7_punch_mid_SoundShader",
            "RHSUSF_MP7_punch_far_SoundShader",
            "RHSUSF_MP7_character_SoundShader",
            "RHSUSF_MP7_Closure_SoundShader",
            "RHSUSF_MP7_Interior_closeMono_SoundShader",
            "RHSUSF_MP7_Interior_far_SoundShader"
        };
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        volumeFactor = 1.25;
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "RHSUSF_Shot_light_3DProcessingType";
        distanceFilter = "RHSUSF_rifleShotDistanceFilter";
        frequencyRandomizer = 0.5;
        frequencyRandomizerMin = 0.1;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHSUSF_M590_Shot_SoundSet {
        soundShaders[] = {
            "RHSUSF_M590_punch_close_SoundShader",
            "RHSUSF_M590_punch_close_interior_SoundShader",
            "RHSUSF_M590_punch_mid_SoundShader",
            "RHSUSF_M590_punch_far_SoundShader",
            "RHSUSF_M590_character_SoundShader",
            "RHSUSF_M590_Closure_SoundShader",
            "RHSUSF_M590_Interior_closeMono_SoundShader",
            "RHSUSF_M590_Interior_far_SoundShader"
        };
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        volumeFactor = 1.25;
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "RHSUSF_Shot_light_3DProcessingType";
        distanceFilter = "RHSUSF_rifleShotDistanceFilter";
        frequencyRandomizer = 0.5;
        frequencyRandomizerMin = 0.1;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHSUSF_M2_Shot_SoundSet {
        soundShaders[] = {
            "RHSUSF_M2_punch_close_SoundShader",
            "RHSUSF_M2_punch_close_interior_SoundShader",
            "RHSUSF_M2_punch_mid_SoundShader",
            "RHSUSF_M2_punch_far_SoundShader",
            "RHSUSF_M2_character_SoundShader",
            "RHSUSF_M2_Closure_SoundShader",
            "RHSUSF_M2_Interior_closeMono_SoundShader",
            "RHSUSF_M2_Interior_far_SoundShader"
        };
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        volumeFactor = 1.25;
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "RHSUSF_Shot_light_3DProcessingType";
        distanceFilter = "RHSUSF_rifleShotDistanceFilter";
        frequencyRandomizer = 0.5;
        frequencyRandomizerMin = 0.1;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHSUSF_veh_M2_Shot_SoundSet {
        soundShaders[] = {
            "RHSUSF_veh_M2_punch_close_SoundShader",
            "RHSUSF_veh_M2_punch_close_interior_SoundShader",
            "RHSUSF_veh_M2_punch_mid_SoundShader",
            "RHSUSF_veh_M2_punch_far_SoundShader",
            "RHSUSF_veh_M2_character_SoundShader",
            "RHSUSF_veh_M2_Closure_SoundShader",
            "RHSUSF_M2_Interior_closeMono_SoundShader",
            "RHSUSF_M2_Interior_far_SoundShader"
        };
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        volumeFactor = 1.25;
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "RHSUSF_Shot_light_3DProcessingType";
        distanceFilter = "RHSUSF_rifleShotDistanceFilter";
        frequencyRandomizer = 0.5;
        frequencyRandomizerMin = 0.1;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHSUSF_veh_M2_Int_Shot_SoundSet {
        soundShaders[] = {"RHSUSF_veh_M2_punch_close_interior_SoundShader"};
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        volumeFactor = "1.25*0.7";
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "RHSUSF_Shot_light_3DProcessingType";
        distanceFilter = "RHSUSF_vehicletDistanceFilter";
        frequencyRandomizer = 0.5;
        frequencyRandomizerMin = 0.1;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHSUSF_M24_Shot_SoundSet {
        soundShaders[] = {
            "RHSUSF_M24_punch_close_SoundShader",
            "RHSUSF_M24_punch_close_interior_SoundShader",
            "RHSUSF_M24_punch_mid_SoundShader",
            "RHSUSF_M24_punch_far_SoundShader",
            "RHSUSF_M24_character_SoundShader",
            "RHSUSF_M24_Closure_SoundShader",
            "RHSUSF_M24_Interior_closeMono_SoundShader",
            "RHSUSF_M24_Interior_far_SoundShader"
        };
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        volumeFactor = 1.25;
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "RHSUSF_Shot_light_3DProcessingType";
        distanceFilter = "RHSUSF_rifleShotDistanceFilter";
        frequencyRandomizer = 0.5;
        frequencyRandomizerMin = 0.1;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHSUSF_xm2010_Shot_SoundSet {
        soundShaders[] = {
            "RHSUSF_xm2010_punch_close_SoundShader",
            "RHSUSF_xm2010_punch_close_interior_SoundShader",
            "RHSUSF_xm2010_punch_mid_SoundShader",
            "RHSUSF_xm2010_punch_far_SoundShader",
            "RHSUSF_xm2010_character_SoundShader",
            "RHSUSF_xm2010_Closure_SoundShader",
            "RHSUSF_xm2010_Interior_closeMono_SoundShader",
            "RHSUSF_xm2010_Interior_far_SoundShader"
        };
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        volumeFactor = 1.25;
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "RHSUSF_Shot_light_3DProcessingType";
        distanceFilter = "RHSUSF_rifleShotDistanceFilter";
        frequencyRandomizer = 0.5;
        frequencyRandomizerMin = 0.1;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHSUSF_sd_xm2010_Shot_SoundSet {
        soundShaders[] = {
            "RHSUSF_sd_xm2010_punch_close_SoundShader",
            "RHSUSF_sd_xm2010_punch_close_interior_SoundShader",
            "RHSUSF_sd_xm2010_punch_mid_SoundShader",
            "RHSUSF_sd_xm2010_punch_far_SoundShader",
            "RHSUSF_sd_xm2010_character_SoundShader",
            "RHSUSF_sd_xm2010_Closure_SoundShader",
            "RHSUSF_sd_xm2010_Interior_closeMono_SoundShader",
            "RHSUSF_sd_xm2010_Interior_far_SoundShader"
        };
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        volumeFactor = 1.25;
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "RHSUSF_Shot_light_3DProcessingType";
        distanceFilter = "RHSUSF_rifleShotDistanceFilter";
        frequencyRandomizer = 0.5;
        frequencyRandomizerMin = 0.1;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHSUSF_SCARH_Shot_SoundSet {
        soundShaders[] = {
            "RHSUSF_SCARH_punch_close_SoundShader",
            "RHSUSF_SCARH_punch_close_interior_SoundShader",
            "RHSUSF_SCARH_punch_mid_SoundShader",
            "RHSUSF_SCARH_punch_far_SoundShader",
            "RHSUSF_SCARH_character_SoundShader",
            "RHSUSF_SCARH_Closure_SoundShader",
            "RHSUSF_SCARH_Interior_closeMono_SoundShader",
            "RHSUSF_SCARH_Interior_far_SoundShader"
        };
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        volumeFactor = 1.25;
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "RHSUSF_Shot_light_3DProcessingType";
        distanceFilter = "RHSUSF_rifleShotDistanceFilter";
        frequencyRandomizer = 0.5;
        frequencyRandomizerMin = 0.1;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHSUSF_sd_SCARH_Shot_SoundSet {
        soundShaders[] = {
            "RHSUSF_sd_SCARH_punch_close_SoundShader",
            "RHSUSF_sd_SCARH_punch_close_interior_SoundShader",
            "RHSUSF_sd_SCARH_punch_mid_SoundShader",
            "RHSUSF_sd_SCARH_punch_far_SoundShader",
            "RHSUSF_sd_SCARH_character_SoundShader",
            "RHSUSF_sd_SCARH_Closure_SoundShader",
            "RHSUSF_sd_SCARH_Interior_closeMono_SoundShader",
            "RHSUSF_sd_SCARH_Interior_far_SoundShader"
        };
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        volumeFactor = 1.25;
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "RHSUSF_Shot_light_3DProcessingType";
        distanceFilter = "RHSUSF_rifleShotDistanceFilter";
        frequencyRandomizer = 0.5;
        frequencyRandomizerMin = 0.1;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHSUSF_pistol1_Tail_SoundSet {
        soundShaders[] = {
            "RHSUSF_pistol1_Meadows_close_SoundShader",
            "RHSUSF_pistol1_Meadows_far_SoundShader",
            "RHSUSF_pistol1_Houses_close_SoundShader",
            "RHSUSF_pistol1_Houses_far_SoundShader",
            "RHSUSF_pistol1_Forest_close_SoundShader",
            "RHSUSF_pistol1_Forest_far_SoundShader",
            "RHSUSF_pistol1_Interior_close_SoundShader",
            "RHSUSF_pistol1_noise_meadows_SoundShader",
            "RHSUSF_pistol1_noise_forest_SoundShader",
            "RHSUSF_pistol1_noise_houses_SoundShader"
        };
        volumeFactor = "1 * 0.8";
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        sound3DProcessingType = "RHSUSF_Tail_3DProcessingType";
        soundShadersLimit = 2;
        distanceFilter = "RHSUSF_rifleShotDistanceFilter";
        frequencyRandomizer = 2;
        frequencyRandomizerMin = 0.2;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHSUSF_rifle1_Tail_SoundSet {
        soundShaders[] = {
            "RHSUSF_rifle1_Meadows_close_SoundShader",
            "RHSUSF_rifle1_Meadows_far_SoundShader",
            "RHSUSF_rifle1_Houses_close_SoundShader",
            "RHSUSF_rifle1_Houses_far_SoundShader",
            "RHSUSF_rifle1_Forest_close_SoundShader",
            "RHSUSF_rifle1_Forest_far_SoundShader",
            "RHSUSF_rifle1_Interior_close_SoundShader",
            "RHSUSF_rifle1_noise_meadows_SoundShader",
            "RHSUSF_rifle1_noise_forest_SoundShader",
            "RHSUSF_rifle1_noise_houses_SoundShader"
        };
        volumeFactor = "1 * 0.64";
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        sound3DProcessingType = "RHSUSF_Tail_3DProcessingType";
        soundShadersLimit = 2;
        distanceFilter = "RHSUSF_rifleShotDistanceFilter";
        frequencyRandomizer = 2;
        frequencyRandomizerMin = 0.2;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHSUSF_sd_rifle1_Tail_SoundSet {
        soundShaders[] = {
            "RHSUSF_sd_rifle1_Meadows_close_SoundShader",
            "RHSUSF_sd_rifle1_Meadows_far_SoundShader",
            "RHSUSF_sd_rifle1_Houses_close_SoundShader",
            "RHSUSF_sd_rifle1_Houses_far_SoundShader",
            "RHSUSF_sd_rifle1_Forest_close_SoundShader",
            "RHSUSF_sd_rifle1_Forest_far_SoundShader",
            "RHSUSF_sd_rifle1_Interior_close_SoundShader",
            "RHSUSF_sd_rifle1_noise_meadows_SoundShader",
            "RHSUSF_sd_rifle1_noise_forest_SoundShader",
            "RHSUSF_sd_rifle1_noise_houses_SoundShader"
        };
        volumeFactor = "1 * 0.58";
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        sound3DProcessingType = "RHSUSF_Tail_3DProcessingType";
        soundShadersLimit = 2;
        distanceFilter = "RHSUSF_rifleShotDistanceFilter";
        frequencyRandomizer = 2;
        frequencyRandomizerMin = 0.2;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHSUSF_sd_mmg1_Tail_SoundSet {
        soundShaders[] = {
            "RHSUSF_sd_mmg1_Meadows_close_SoundShader",
            "RHSUSF_sd_mmg1_Meadows_far_SoundShader",
            "RHSUSF_sd_mmg1_Houses_close_SoundShader",
            "RHSUSF_sd_mmg1_Houses_far_SoundShader",
            "RHSUSF_sd_mmg1_Forest_close_SoundShader",
            "RHSUSF_sd_mmg1_Forest_far_SoundShader",
            "RHSUSF_sd_mmg1_Interior_close_SoundShader",
            "RHSUSF_sd_mmg1_noise_meadows_SoundShader",
            "RHSUSF_sd_mmg1_noise_forest_SoundShader",
            "RHSUSF_sd_mmg1_noise_houses_SoundShader"
        };
        volumeFactor = "1 * 0.63";
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        sound3DProcessingType = "RHSUSF_Tail_3DProcessingType";
        soundShadersLimit = 2;
        distanceFilter = "RHSUSF_rifleShotDistanceFilter";
        frequencyRandomizer = 2;
        frequencyRandomizerMin = 0.2;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHSUSF_mmg1_Tail_SoundSet {
        soundShaders[] = {
            "RHSUSF_mmg1_Meadows_close_SoundShader",
            "RHSUSF_mmg1_Meadows_far_SoundShader",
            "RHSUSF_mmg1_Houses_close_SoundShader",
            "RHSUSF_mmg1_Houses_far_SoundShader",
            "RHSUSF_mmg1_Forest_close_SoundShader",
            "RHSUSF_mmg1_Forest_far_SoundShader",
            "RHSUSF_mmg1_Interior_close_SoundShader",
            "RHSUSF_mmg1_noise_meadows_SoundShader",
            "RHSUSF_mmg1_noise_forest_SoundShader",
            "RHSUSF_mmg1_noise_houses_SoundShader"
        };
        volumeFactor = "1 * 0.68";
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        sound3DProcessingType = "RHSUSF_Tail_3DProcessingType";
        soundShadersLimit = 2;
        distanceFilter = "RHSUSF_rifleShotDistanceFilter";
        frequencyRandomizer = 2;
        frequencyRandomizerMin = 0.2;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHSUSF_veh_mmg1_Tail_SoundSet {
        soundShaders[] = {
            "RHSUSF_veh_mmg1_Meadows_close_SoundShader",
            "RHSUSF_veh_mmg1_Meadows_far_SoundShader",
            "RHSUSF_veh_mmg1_Houses_close_SoundShader",
            "RHSUSF_veh_mmg1_Houses_far_SoundShader",
            "RHSUSF_veh_mmg1_Forest_close_SoundShader",
            "RHSUSF_veh_mmg1_Forest_far_SoundShader",
            "RHSUSF_veh_mmg1_Interior_close_SoundShader",
            "RHSUSF_veh_mmg1_noise_meadows_SoundShader",
            "RHSUSF_veh_mmg1_noise_forest_SoundShader",
            "RHSUSF_veh_mmg1_noise_houses_SoundShader"
        };
        volumeFactor = "1 * 0.68";
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        sound3DProcessingType = "RHSUSF_Tail_3DProcessingType";
        soundShadersLimit = 2;
        distanceFilter = "RHSUSF_rifleShotDistanceFilter";
        frequencyRandomizer = 2;
        frequencyRandomizerMin = 0.2;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHSUSF_mmg1_delayed_Tail_SoundSet {
        soundShaders[] = {
            "RHSUSF_mmg1_delayed_Meadows_close_SoundShader",
            "RHSUSF_mmg1_delayed_Meadows_far_SoundShader",
            "RHSUSF_mmg1_delayed_Houses_close_SoundShader",
            "RHSUSF_mmg1_delayed_Houses_far_SoundShader",
            "RHSUSF_mmg1_delayed_Forest_close_SoundShader",
            "RHSUSF_mmg1_delayed_Forest_far_SoundShader",
            "RHSUSF_mmg1_delayed_Interior_close_SoundShader",
            "RHSUSF_mmg1_delayed_noise_meadows_SoundShader",
            "RHSUSF_mmg1_delayed_noise_forest_SoundShader",
            "RHSUSF_mmg1_delayed_noise_houses_SoundShader"
        };
        volumeFactor = "1 * 0.68";
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        sound3DProcessingType = "RHSUSF_Tail_3DProcessingType";
        soundShadersLimit = 2;
        distanceFilter = "RHSUSF_rifleShotDistanceFilter";
        frequencyRandomizer = 2;
        frequencyRandomizerMin = 0.2;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHSUSF_rifle2_Tail_SoundSet {
        soundShaders[] = {
            "RHSUSF_rifle2_Meadows_close_SoundShader",
            "RHSUSF_rifle2_Meadows_far_SoundShader",
            "RHSUSF_rifle2_Houses_close_SoundShader",
            "RHSUSF_rifle2_Houses_far_SoundShader",
            "RHSUSF_rifle2_Forest_close_SoundShader",
            "RHSUSF_rifle2_Forest_far_SoundShader",
            "RHSUSF_rifle2_Interior_close_SoundShader",
            "RHSUSF_rifle2_noise_meadows_SoundShader",
            "RHSUSF_rifle2_noise_forest_SoundShader",
            "RHSUSF_rifle2_noise_houses_SoundShader"
        };
        volumeFactor = "1 * 0.7";
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        sound3DProcessingType = "RHSUSF_Tail_3DProcessingType";
        soundShadersLimit = 2;
        distanceFilter = "RHSUSF_rifleShotDistanceFilter";
        frequencyRandomizer = 2;
        frequencyRandomizerMin = 0.2;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHSUSF_veh_rifle2_Tail_SoundSet {
        soundShaders[] = {
            "RHSUSF_veh_rifle2_Meadows_close_SoundShader",
            "RHSUSF_veh_rifle2_Meadows_far_SoundShader",
            "RHSUSF_veh_rifle2_Houses_close_SoundShader",
            "RHSUSF_veh_rifle2_Houses_far_SoundShader",
            "RHSUSF_veh_rifle2_Forest_close_SoundShader",
            "RHSUSF_veh_rifle2_Forest_far_SoundShader",
            "RHSUSF_veh_rifle2_Interior_close_SoundShader",
            "RHSUSF_veh_rifle2_noise_meadows_SoundShader",
            "RHSUSF_veh_rifle2_noise_forest_SoundShader",
            "RHSUSF_veh_rifle2_noise_houses_SoundShader"
        };
        volumeFactor = "1 * 0.7";
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        sound3DProcessingType = "RHSUSF_Tail_3DProcessingType";
        soundShadersLimit = 2;
        distanceFilter = "RHSUSF_rifleShotDistanceFilter";
        frequencyRandomizer = 2;
        frequencyRandomizerMin = 0.2;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHSUSF_cannon_Tail_SoundSet {
        soundShaders[] = {
            "RHSUSF_cannon_Meadows_close_SoundShader",
            "RHSUSF_cannon_Meadows_far_SoundShader",
            "RHSUSF_cannon_Houses_close_SoundShader",
            "RHSUSF_cannon_Houses_far_SoundShader",
            "RHSUSF_cannon_Forest_close_SoundShader",
            "RHSUSF_cannon_Forest_far_SoundShader",
            "RHSUSF_cannon_Interior_close_SoundShader",
            "RHSUSF_cannon_noise_meadows_SoundShader",
            "RHSUSF_cannon_noise_forest_SoundShader",
            "RHSUSF_cannon_noise_houses_SoundShader"
        };
        volumeFactor = "1 * 1";
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        sound3DProcessingType = "RHSUSF_Tail_3DProcessingType";
        soundShadersLimit = 2;
        distanceFilter = "RHSUSF_rifleShotDistanceFilter";
        frequencyRandomizer = 2;
        frequencyRandomizerMin = 0.2;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHSUSF_autocannon_Tail_SoundSet {
        soundShaders[] = {
            "RHSUSF_autocannon_Meadows_close_SoundShader",
            "RHSUSF_autocannon_Meadows_far_SoundShader",
            "RHSUSF_autocannon_Houses_close_SoundShader",
            "RHSUSF_autocannon_Houses_far_SoundShader",
            "RHSUSF_autocannon_Forest_close_SoundShader",
            "RHSUSF_autocannon_Forest_far_SoundShader",
            "RHSUSF_autocannon_Interior_close_SoundShader",
            "RHSUSF_autocannon_noise_meadows_SoundShader",
            "RHSUSF_autocannon_noise_forest_SoundShader",
            "RHSUSF_autocannon_noise_houses_SoundShader"
        };
        volumeFactor = "1 * 1";
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        sound3DProcessingType = "RHSUSF_Tail_3DProcessingType";
        soundShadersLimit = 2;
        distanceFilter = "RHSUSF_rifleShotDistanceFilter";
        frequencyRandomizer = 2;
        frequencyRandomizerMin = 0.2;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHSUSF_veh_autocannon_Tail_SoundSet {
        soundShaders[] = {
            "RHSUSF_veh_autocannon_Meadows_close_SoundShader",
            "RHSUSF_veh_autocannon_Meadows_far_SoundShader",
            "RHSUSF_veh_autocannon_Houses_close_SoundShader",
            "RHSUSF_veh_autocannon_Houses_far_SoundShader",
            "RHSUSF_veh_autocannon_Forest_close_SoundShader",
            "RHSUSF_veh_autocannon_Forest_far_SoundShader",
            "RHSUSF_veh_autocannon_Interior_close_SoundShader",
            "RHSUSF_veh_autocannon_noise_meadows_SoundShader",
            "RHSUSF_veh_autocannon_noise_forest_SoundShader",
            "RHSUSF_veh_autocannon_noise_houses_SoundShader"
        };
        volumeFactor = "1 * 1";
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        sound3DProcessingType = "RHSUSF_Tail_3DProcessingType";
        soundShadersLimit = 2;
        distanceFilter = "RHSUSF_rifleShotDistanceFilter";
        frequencyRandomizer = 2;
        frequencyRandomizerMin = 0.2;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHSUSF_20mm_Tail_SoundSet {
        soundShaders[] = {
            "RHSUSF_20mm_Meadows_close_SoundShader",
            "RHSUSF_20mm_Meadows_far_SoundShader",
            "RHSUSF_20mm_Houses_close_SoundShader",
            "RHSUSF_20mm_Houses_far_SoundShader",
            "RHSUSF_20mm_Forest_close_SoundShader",
            "RHSUSF_20mm_Forest_far_SoundShader",
            "RHSUSF_20mm_Interior_close_SoundShader",
            "RHSUSF_20mm_noise_meadows_SoundShader",
            "RHSUSF_20mm_noise_forest_SoundShader",
            "RHSUSF_20mm_noise_houses_SoundShader"
        };
        volumeFactor = "1 * 1";
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        sound3DProcessingType = "RHSUSF_Tail_3DProcessingType";
        soundShadersLimit = 2;
        distanceFilter = "RHSUSF_rifleShotDistanceFilter";
        frequencyRandomizer = 2;
        frequencyRandomizerMin = 0.2;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
};
class CfgWeapons {
    class Rifle;
    class Rifle_Base_F: Rifle {
        class Eventhandlers;
    };
    class Pistol_Base_F;
    class arifle_MX_Base_F: Rifle_Base_F {};
    class Rifle_Short_Base_F: Rifle_Base_F {};
    class Rifle_Long_Base_F: Rifle_Base_F {};
    class UGL_F;
    class srifle_EBR_F;
    class LMG_Mk200_F: Rifle_Long_Base_F {};
    class MGun;
    class LMG_RCWS: MGun {};
    class SMG_02_base_F: Rifle_Short_Base_F {
        class Single;
        class FullAuto;
        class WeaponSlotsInfo;
    };
    class Launcher;
    class Launcher_Base_F: Launcher {};
    class launch_O_Titan_F;
    class rhsusf_weap_MP7A1_base_f: SMG_02_base_F {
        class Single: Single {
            class StandardSound {
                soundSetShot[] = {"RHSUSF_MP7_Shot_SoundSet", "RHSUSF_pistol1_Tail_SoundSet"};
            };
            class SilencedSound {
                soundSetShot[] = {"RHSUSF_MP7_Closure_SoundSet", "RHSUSF_MP7_ShotSD_SoundSet", "RHSUSF_rifle1_SD_Tail_SoundSet"};
            };
        };
        class FullAuto: FullAuto {
            class StandardSound {
                soundSetShot[] = {"RHSUSF_MP7_Shot_SoundSet", "RHSUSF_pistol1_Tail_SoundSet"};
            };
            class SilencedSound {
                soundSetShot[] = {"RHSUSF_MP7_Closure_SoundSet", "RHSUSF_MP7_ShotSD_SoundSet", "RHSUSF_rifle1_SD_Tail_SoundSet"};
            };
        };
    };
    class rhs_weap_M590_5RD: Rifle_Base_F {
        class Single: Mode_SemiAuto {
            sounds[] = {"StandardSound"};
            class StandardSound {
                soundSetShot[] = {"RHSUSF_m590_Shot_SoundSet", "RHSUSF_MMG1_Tail_SoundSet"};
            };
        };
    };
    class rhs_weap_M590_8RD: rhs_weap_M590_5RD {
        class Single: Single {
            sounds[] = {"StandardSound"};
            class StandardSound {
                soundSetShot[] = {"RHSUSF_m590_Shot_SoundSet", "RHSUSF_MMG1_Tail_SoundSet"};
            };
        };
    };
    class rhs_weap_XM2010_Base_F: Rifle_Base_F {
        class Single: Mode_SemiAuto {
            sounds[] = {"StandardSound", "SilencedSound"};
            class StandardSound {
                soundSetShot[] = {"RHSUSF_xm2010_Shot_SoundSet", "RHSUSF_rifle2_Tail_SoundSet"};
            };
            class SilencedSound {
                soundSetShot[] = {"RHSUSF_sd_xm2010_Shot_SoundSet", "RHSUSF_sd_mmg1_Tail_SoundSet"};
            };
        };
    };
    class rhs_weap_m24sws: rhs_weap_XM2010_Base_F {
        class Single: Single {
            class StandardSound {
                soundSetShot[] = {"RHSUSF_m24_Shot_SoundSet", "RHSUSF_rifle2_Tail_SoundSet"};
            };
            class SilencedSound {
                soundSetShot[] = {"RHSUSF_sd_M24_Shot_SoundSet", "RHSUSF_sd_mmg1_Tail_SoundSet"};
            };
        };
    };
    class rhs_weap_m40a5: rhs_weap_XM2010_Base_F {
        class Single: Single {
            class StandardSound {
                soundSetShot[] = {"RHSUSF_m24_Shot_SoundSet", "RHSUSF_rifle2_Tail_SoundSet"};
            };
            class SilencedSound {
                soundSetShot[] = {"RHSUSF_sd_M24_Shot_SoundSet", "RHSUSF_sd_mmg1_Tail_SoundSet"};
            };
        };
    };
    class rhs_weap_SCAR_Base: arifle_MX_Base_F {
        class Single;
        class FullAuto;
    };
    class rhs_weap_SCAR_L_Base: rhs_weap_SCAR_Base {
        class Single: Single {
            sounds[] = {"Standardsound", "SilencedSound"};
            class StandardSound {
                soundSetShot[] = {"RHSUSF_M4_Shot_SoundSet", "RHSUSF_Rifle1_Tail_SoundSet"};
            };
            class SilencedSound {
                soundSetShot[] = {"RHSUSF_sd_M4_Shot_SoundSet", "RHSUSF_sd_Rifle1_Tail_SoundSet"};
            };
        };
        class FullAuto: FullAuto {
            sounds[] = {"Standardsound", "SilencedSound"};
            class StandardSound {
                soundSetShot[] = {"RHSUSF_M4_Shot_SoundSet", "RHSUSF_Rifle1_Tail_SoundSet"};
            };
            class SilencedSound {
                soundSetShot[] = {"RHSUSF_sd_M4_Shot_SoundSet", "RHSUSF_sd_Rifle1_Tail_SoundSet"};
            };
        };
    };
    class rhs_weap_SCAR_H_Base: rhs_weap_SCAR_Base {
        class Single: Single {
            sounds[] = {"Standardsound", "SilencedSound"};
            class StandardSound {
                soundSetShot[] = {"RHSUSF_SCARH_Shot_SoundSet", "RHSUSF_rifle2_Tail_SoundSet"};
            };
            class SilencedSound {
                soundSetShot[] = {"RHSUSF_sd_SCARH_Shot_SoundSet", "RHSUSF_sd_Rifle1_Tail_SoundSet"};
            };
        };
        class FullAuto: FullAuto {
            sounds[] = {"Standardsound", "SilencedSound"};
            class StandardSound {
                soundSetShot[] = {"RHSUSF_SCARH_Shot_SoundSet", "RHSUSF_rifle2_Tail_SoundSet"};
            };
            class SilencedSound {
                soundSetShot[] = {"RHSUSF_sd_SCARH_Shot_SoundSet", "RHSUSF_sd_Rifle1_Tail_SoundSet"};
            };
        };
    };
    class rhs_weap_M249_base: LMG_Mk200_F {
        class Eventhandlers: Eventhandlers {};
    };
    class rhs_weap_m240_base: rhs_weap_M249_base {
        class manual: Mode_FullAuto {
            sounds[] = {"StandardSound", "SilencedSound"};
            class StandardSound {
                soundSetShot[] = {"RHSUSF_M240_Shot_SoundSet", "RHSUSF_MMG1_Tail_SoundSet"};
            };
            class SilencedSound {
                soundSetShot[] = {"RHSUSF_sd_M240_Shot_SoundSet", "RHSUSF_sd_mmg1_Tail_SoundSet"};
            };
        };
        class Eventhandlers: Eventhandlers {
            class RHSUSF_m240_beltIntake {
                fired = "_this params ['_unit','_weapon']; private _sound = 'rhsusf_beltIntake_m240'; [_unit,_weapon,_sound] call RHSUSF_fnc_beltIntake;";
            };
        };
    };
    class LMG_M200: LMG_RCWS {
        class manual;
        class close;
        class short;
        class medium;
        class far;
    };
    class rhs_weap_m240veh: LMG_M200 {
        class manual: manual {
            class StandardSound {
                soundSetShot[] = {"RHSUSF_veh_M240_Shot_SoundSet", "RHSUSF_veh_M240_int_Shot_SoundSet", "RHSUSF_VEH_MMG1_Tail_SoundSet"};
            };
        };
        class close: close {
            class StandardSound {
                soundSetShot[] = {"RHSUSF_veh_M240_Shot_SoundSet", "RHSUSF_veh_M240_int_Shot_SoundSet", "RHSUSF_VEH_MMG1_Tail_SoundSet"};
            };
        };
        class short: short {
            class StandardSound {
                soundSetShot[] = {"RHSUSF_veh_M240_Shot_SoundSet", "RHSUSF_veh_M240_int_Shot_SoundSet", "RHSUSF_VEH_MMG1_Tail_SoundSet"};
            };
        };
        class medium: medium {
            class StandardSound {
                soundSetShot[] = {"RHSUSF_veh_M240_Shot_SoundSet", "RHSUSF_veh_M240_int_Shot_SoundSet", "RHSUSF_VEH_MMG1_Tail_SoundSet"};
            };
        };
        class far: far {
            class StandardSound {
                soundSetShot[] = {"RHSUSF_veh_M240_Shot_SoundSet", "RHSUSF_veh_M240_int_Shot_SoundSet", "RHSUSF_VEH_MMG1_Tail_SoundSet"};
            };
        };
    };
    class HMG_127: LMG_RCWS {};
    class HMG_01: HMG_127 {};
    class HMG_M2: HMG_01 {
        class manual;
        class close;
        class short;
        class medium;
        class far;
    };
    class RHS_M2_Abrams_Commander: HMG_M2 {
        class manual: manual {
            class StandardSound {
                soundSetShot[] = {"RHSUSF_veh_m2_Shot_SoundSet", "RHSUSF_veh_m2_int_Shot_SoundSet", "RHSUSF_veh_rifle2_Tail_SoundSet"};
            };
        };
        class close: close {
            class StandardSound {
                soundSetShot[] = {"RHSUSF_veh_m2_Shot_SoundSet", "RHSUSF_veh_m2_int_Shot_SoundSet", "RHSUSF_veh_rifle2_Tail_SoundSet"};
            };
        };
        class short: short {
            class StandardSound {
                soundSetShot[] = {"RHSUSF_veh_m2_Shot_SoundSet", "RHSUSF_veh_m2_int_Shot_SoundSet", "RHSUSF_veh_rifle2_Tail_SoundSet"};
            };
        };
        class medium: medium {
            class StandardSound {
                soundSetShot[] = {"RHSUSF_veh_m2_Shot_SoundSet", "RHSUSF_veh_m2_int_Shot_SoundSet", "RHSUSF_veh_rifle2_Tail_SoundSet"};
            };
        };
        class far: far {
            class StandardSound {
                soundSetShot[] = {"RHSUSF_veh_m2_Shot_SoundSet", "RHSUSF_veh_m2_int_Shot_SoundSet", "RHSUSF_veh_rifle2_Tail_SoundSet"};
            };
        };
    };
    class RHS_M2_Abrams_Gunner: HMG_M2 {
        class manual: manual {
            class StandardSound {
                soundSetShot[] = {"RHSUSF_veh_m2_Shot_SoundSet", "RHSUSF_veh_m2_int_Shot_SoundSet", "RHSUSF_veh_rifle2_Tail_SoundSet"};
            };
        };
        class close: close {
            class StandardSound {
                soundSetShot[] = {"RHSUSF_veh_m2_Shot_SoundSet", "RHSUSF_veh_m2_int_Shot_SoundSet", "RHSUSF_veh_rifle2_Tail_SoundSet"};
            };
        };
        class short: short {
            class StandardSound {
                soundSetShot[] = {"RHSUSF_veh_m2_Shot_SoundSet", "RHSUSF_veh_m2_int_Shot_SoundSet", "RHSUSF_veh_rifle2_Tail_SoundSet"};
            };
        };
        class medium: medium {
            class StandardSound {
                soundSetShot[] = {"RHSUSF_veh_m2_Shot_SoundSet", "RHSUSF_veh_m2_int_Shot_SoundSet", "RHSUSF_veh_rifle2_Tail_SoundSet"};
            };
        };
        class far: far {
            class StandardSound {
                soundSetShot[] = {"RHSUSF_veh_m2_Shot_SoundSet", "RHSUSF_veh_m2_int_Shot_SoundSet", "RHSUSF_veh_rifle2_Tail_SoundSet"};
            };
        };
    };
    class RHS_M2: HMG_M2 {
        class manual: manual {
            class StandardSound {
                soundSetShot[] = {"RHSUSF_veh_m2_Shot_SoundSet", "RHSUSF_veh_m2_int_Shot_SoundSet", "RHSUSF_veh_rifle2_Tail_SoundSet"};
            };
        };
        class close: close {
            class StandardSound {
                soundSetShot[] = {"RHSUSF_veh_m2_Shot_SoundSet", "RHSUSF_veh_m2_int_Shot_SoundSet", "RHSUSF_veh_rifle2_Tail_SoundSet"};
            };
        };
        class short: short {
            class StandardSound {
                soundSetShot[] = {"RHSUSF_veh_m2_Shot_SoundSet", "RHSUSF_veh_m2_int_Shot_SoundSet", "RHSUSF_veh_rifle2_Tail_SoundSet"};
            };
        };
        class medium: medium {
            class StandardSound {
                soundSetShot[] = {"RHSUSF_veh_m2_Shot_SoundSet", "RHSUSF_veh_m2_int_Shot_SoundSet", "RHSUSF_veh_rifle2_Tail_SoundSet"};
            };
        };
        class far: far {
            class StandardSound {
                soundSetShot[] = {"RHSUSF_veh_m2_Shot_SoundSet", "RHSUSF_veh_m2_int_Shot_SoundSet", "RHSUSF_veh_rifle2_Tail_SoundSet"};
            };
        };
    };
    class autocannon_Base_F;
    class autocannon_30mm_CTWS: autocannon_Base_F {
        class HE: autocannon_Base_F {
            class player;
            class close;
            class short;
            class medium;
            class far;
        };
        class AP: autocannon_Base_F {
            class player;
            class close;
            class short;
            class medium;
            class far;
        };
    };
    class RHS_weap_M242BC: autocannon_30mm_CTWS {
        class HE: HE {
            class player: player {
                class StandardSound {
                    soundSetShot[] = {"RHSUSF_veh_m242_Shot_SoundSet", "RHSUSF_veh_m242_int_Shot_SoundSet", "RHSUSF_VEH_autocannon_Tail_SoundSet"};
                };
            };
            class close: close {
                class StandardSound {
                    soundSetShot[] = {"RHSUSF_veh_m242_Shot_SoundSet", "RHSUSF_veh_m242_int_Shot_SoundSet", "RHSUSF_VEH_autocannon_Tail_SoundSet"};
                };
            };
            class short: short {
                class StandardSound {
                    soundSetShot[] = {"RHSUSF_veh_m242_Shot_SoundSet", "RHSUSF_veh_m242_int_Shot_SoundSet", "RHSUSF_VEH_autocannon_Tail_SoundSet"};
                };
            };
            class medium: medium {
                class StandardSound {
                    soundSetShot[] = {"RHSUSF_veh_m242_Shot_SoundSet", "RHSUSF_veh_m242_int_Shot_SoundSet", "RHSUSF_VEH_autocannon_Tail_SoundSet"};
                };
            };
            class far: far {
                class StandardSound {
                    soundSetShot[] = {"RHSUSF_veh_m242_Shot_SoundSet", "RHSUSF_veh_m242_int_Shot_SoundSet", "RHSUSF_VEH_autocannon_Tail_SoundSet"};
                };
            };
        };
        class AP: AP {
            class player: player {
                class StandardSound {
                    soundSetShot[] = {"RHSUSF_veh_m242_Shot_SoundSet", "RHSUSF_veh_m242_int_Shot_SoundSet", "RHSUSF_VEH_autocannon_Tail_SoundSet"};
                };
            };
            class close: close {
                class StandardSound {
                    soundSetShot[] = {"RHSUSF_veh_m242_Shot_SoundSet", "RHSUSF_veh_m242_int_Shot_SoundSet", "RHSUSF_VEH_autocannon_Tail_SoundSet"};
                };
            };
            class short: short {
                class StandardSound {
                    soundSetShot[] = {"RHSUSF_veh_m242_Shot_SoundSet", "RHSUSF_veh_m242_int_Shot_SoundSet", "RHSUSF_VEH_autocannon_Tail_SoundSet"};
                };
            };
            class medium: medium {
                class StandardSound {
                    soundSetShot[] = {"RHSUSF_veh_m242_Shot_SoundSet", "RHSUSF_veh_m242_int_Shot_SoundSet", "RHSUSF_VEH_autocannon_Tail_SoundSet"};
                };
            };
            class far: far {
                class StandardSound {
                    soundSetShot[] = {"RHSUSF_veh_m242_Shot_SoundSet", "RHSUSF_veh_m242_int_Shot_SoundSet", "RHSUSF_VEH_autocannon_Tail_SoundSet"};
                };
            };
        };
    };
};
class CfgSounds {
    sounds[] = {};
    class rhsusf_beltIntake_m249 {
        name = "rhsusf_beltIntake_m249";
        sound[] = {
            "rhsusf\addons\rhsusf_weapon_sounds\closure\m249\beltIntake",
            1.95,
            1,
            36
        };
        titles[] = {};
    };
    class rhsusf_beltIntake_m240 {
        name = "rhsusf_beltIntake_m240";
        sound[] = {
            "rhsusf\addons\rhsusf_weapon_sounds\closure\m240\beltIntake",
            1.95,
            1,
            36
        };
        titles[] = {};
    };
};
class CfgFunctions {
    class RHSUSF {
        tag = "RHSUSF";
        class functions {
            class beltIntake {
                file = "rhsusf\addons\rhsusf_weapon_sounds\03_functions\beltIntake.sqf";
                description = "Handles the belt intake sounds.";
            };
        };
    };
};
