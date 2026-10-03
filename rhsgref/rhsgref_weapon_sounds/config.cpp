class CfgPatches {
    class RHSGREF_weapon_sounds {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.32;
        requiredAddons[] = {
            "A3_sounds_f",
            "RHSGREF_c_weapons",
            "RHSGREF_c_airweapons",
            "RHSGREF_sounds"
        };
        version = "0.1";
        name = "GREF Weapon Sounds";
        author = "$STR_RHS_AUTHOR_FULL";
        url = "http://www.rhsmods.org/";
    };
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgSound3DProcessors {
    class RHSGREF_Default_3DProcessingType {
        type = "panner";
        innerRange = 10;
        rangeCurve = "LinearCurve";
        range = 1800;
    };
    class RHSGREF_Shot_light_3DProcessingType {
        type = "panner";
        innerRange = 0;
        range = 5;
        rangeCurve = "Smooth1Curve";
    };
    class RHSGREF_Shot_medium_3DProcessingType {
        type = "panner";
        innerRange = 0;
        range = 5;
        rangeCurve = "LinearCurve";
    };
    class RHSGREF_Tail_3DProcessingType {
        type = "panner";
        innerRange = 5;
        range = 190;
        rangeCurve = "InverseSquare2Curve";
    };
};
class CfgSoundCurves {
    class RHSGREF_soundCurve {
        points[] = {{0, 1}, {1, 0}};
    };
    class RHSGREF_tailSoundCurve {
        points[] = {
            {0, 1},
            {0.2, 0.85},
            {0.5, 0.4},
            {0.8, 0.1},
            {1, 0}
        };
    };
    class RHSGREF_rifleSoundCurve {
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
    class RHSGREF_defaultDistanceFilter {
        type = "lowPassFilter";
        minCutoffFrequency = 150;
        qFactor = 1.3;
        innerRange = 400;
        range = 2600;
        powerFactor = 32;
    };
    class RHSGREF_rifleShotDistanceFilter {
        type = "lowPassFilter";
        minCutoffFrequency = 250;
        qFactor = 1.3;
        innerRange = 150;
        range = 1800;
        powerFactor = 32;
    };
};
class CfgSoundShaders {
    class RHSGREF_M70_punch_close_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\LMG762rus\close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\LMG762rus\close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\LMG762rus\close_3", 1}};
        volume = 1.28;
        range = 150;
        rangeCurve[] = {{0, 1}, {7, 1}, {15, 0}, {150, 0}};
    };
    class RHSGREF_M70_punch_close_interior_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\LMG762rus\close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\LMG762rus\close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\LMG762rus\close_3", 1}};
        volume = "1.28 * (1 - (0.15 * interior))";
        range = 150;
        rangeCurve[] = {{0, 0}, {7, 0}, {15, 1}, {150, 0}};
    };
    class RHSGREF_M70_punch_mid_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\LMG762rus\mid_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\LMG762rus\mid_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\LMG762rus\mid_3", 1}};
        volume = "1.28 * (1 - (0.2 * interior))";
        range = 800;
        rangeCurve[] = {{0, 0}, {150, 1}, {800, 0}};
    };
    class RHSGREF_M70_punch_far_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\LMG762rus\far_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\LMG762rus\far_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\LMG762rus\far_3", 1}};
        volume = "1.28 * (1 - (0.25 * interior))";
        range = 3000;
        rangeCurve[] = {{0, 1}, {150, 0}, {800, 1}, {3000, 1}};
    };
    class RHSGREF_M70_character_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\character\dp\character_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\character\dp\character_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\character\dp\character_3", 1}};
        volume = 0.54;
        range = 120;
        rangeCurve[] = {{0, 1}, {120, 0}};
    };
    class RHSGREF_M70_Closure_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\closure\AK74\Closure_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\closure\AK74\Closure_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\closure\AK74\Closure_3", 1}};
        volume = 0.925;
        range = 35;
        rangeCurve[] = {{0, 1}, {35, 0}};
    };
    class RHSGREF_M70_Interior_closeMono_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\mmg1\Interior_close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\mmg1\Interior_close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\mmg1\Interior_close_3", 1}};
        volume = "1 * 2.8 * interior";
        range = 150;
        rangeCurve[] = {{1, 0}, {3, 0}, {7, 1}, {150, 0}};
    };
    class RHSGREF_M70_Interior_far_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\mmg1\Interior_far_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\mmg1\Interior_far_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\mmg1\Interior_far_3", 1}};
        volume = "1 * 2.2 * interior";
        range = 3000;
        rangeCurve[] = {{0, 0}, {150, 1}, {3000, 1}};
    };
    class RHSGREF_sd_M70_punch_close_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\sd_LMG762\close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\sd_LMG762\close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\sd_LMG762\close_3", 1}};
        volume = 1.1;
        range = 100;
        rangeCurve[] = {{0, 1}, {7, 1}, {15, 0}, {100, 0}};
    };
    class RHSGREF_sd_M70_punch_close_interior_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\sd_LMG762\close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\sd_LMG762\close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\sd_LMG762\close_3", 1}};
        volume = "1.1 * (1 - (0.15 * interior))";
        range = 100;
        rangeCurve[] = {{0, 0}, {7, 0}, {15, 1}, {100, 0}};
    };
    class RHSGREF_sd_M70_punch_mid_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\sd_LMG762\mid_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\sd_LMG762\mid_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\sd_LMG762\mid_3", 1}};
        volume = "1.1 * (1 - (0.2 * interior))";
        range = 250;
        rangeCurve[] = {{0, 0}, {100, 1}, {250, 0}};
    };
    class RHSGREF_sd_M70_punch_far_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\sd_LMG762\far_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\sd_LMG762\far_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\sd_LMG762\far_3", 1}};
        volume = "1.1 * (1 - (0.25 * interior))";
        range = 900;
        rangeCurve[] = {{0, 1}, {100, 0}, {250, 1}, {900, 1}};
    };
    class RHSGREF_sd_M70_character_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\character\sd_M4\character_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\character\sd_M4\character_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\character\sd_M4\character_3", 1}};
        volume = 0.45;
        range = 60;
        rangeCurve[] = {{0, 1}, {60, 0}};
    };
    class RHSGREF_sd_M70_Closure_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\closure\AK74\Closure_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\closure\AK74\Closure_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\closure\AK74\Closure_3", 1}};
        volume = 0.925;
        range = 35;
        rangeCurve[] = {{0, 1}, {35, 0}};
    };
    class RHSGREF_sd_M70_Interior_closeMono_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\sd_mmg1\Interior_close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\sd_mmg1\Interior_close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\sd_mmg1\Interior_close_3", 1}};
        volume = "0.8 * 2.8 * interior";
        range = 100;
        rangeCurve[] = {{1, 0}, {3, 0}, {7, 1}, {100, 0}};
    };
    class RHSGREF_sd_M70_Interior_far_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\sd_mmg1\Interior_far_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\sd_mmg1\Interior_far_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\sd_mmg1\Interior_far_3", 1}};
        volume = "0.8 * 2.2 * interior";
        range = 900;
        rangeCurve[] = {{0, 0}, {100, 1}, {900, 1}};
    };
    class RHSGREF_M21_punch_close_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\LMG545\close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\LMG545\close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\LMG545\close_3", 1}};
        volume = 1.23;
        range = 150;
        rangeCurve[] = {{0, 1}, {7, 1}, {15, 0}, {150, 0}};
    };
    class RHSGREF_M21_punch_close_interior_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\LMG545\close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\LMG545\close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\LMG545\close_3", 1}};
        volume = "1.23 * (1 - (0.15 * interior))";
        range = 150;
        rangeCurve[] = {{0, 0}, {7, 0}, {15, 1}, {150, 0}};
    };
    class RHSGREF_M21_punch_mid_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\LMG545\mid_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\LMG545\mid_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\LMG545\mid_3", 1}};
        volume = "1.23 * (1 - (0.2 * interior))";
        range = 800;
        rangeCurve[] = {{0, 0}, {150, 1}, {800, 0}};
    };
    class RHSGREF_M21_punch_far_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\LMG545\far_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\LMG545\far_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\LMG545\far_3", 1}};
        volume = "1.23 * (1 - (0.25 * interior))";
        range = 3000;
        rangeCurve[] = {{0, 1}, {150, 0}, {800, 1}, {3000, 1}};
    };
    class RHSGREF_M21_character_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\character\AK74\character_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\character\AK74\character_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\character\AK74\character_3", 1}};
        volume = 0.54;
        range = 120;
        rangeCurve[] = {{0, 1}, {120, 0}};
    };
    class RHSGREF_M21_Closure_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\closure\AK74\Closure_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\closure\AK74\Closure_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\closure\AK74\Closure_3", 1}};
        volume = 0.87;
        range = 35;
        rangeCurve[] = {{0, 1}, {35, 0}};
    };
    class RHSGREF_M21_Interior_closeMono_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle1\Interior_close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle1\Interior_close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle1\Interior_close_3", 1}};
        volume = "1 * 2.8 * interior";
        range = 150;
        rangeCurve[] = {{1, 0}, {3, 0}, {7, 1}, {150, 0}};
    };
    class RHSGREF_M21_Interior_far_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle1\Interior_far_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle1\Interior_far_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle1\Interior_far_3", 1}};
        volume = "1 * 2.2 * interior";
        range = 3000;
        rangeCurve[] = {{0, 0}, {150, 1}, {3000, 1}};
    };
    class RHSGREF_sd_M21_punch_close_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\sd_LMG556\close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\sd_LMG556\close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\sd_LMG556\close_3", 1}};
        volume = 0.9;
        range = 100;
        rangeCurve[] = {{0, 1}, {7, 1}, {15, 0}, {100, 0}};
    };
    class RHSGREF_sd_M21_punch_close_interior_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\sd_LMG556\close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\sd_LMG556\close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\sd_LMG556\close_3", 1}};
        volume = "0.9 * (1 - (0.15 * interior))";
        range = 100;
        rangeCurve[] = {{0, 0}, {7, 0}, {15, 1}, {100, 0}};
    };
    class RHSGREF_sd_M21_punch_mid_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\sd_LMG556\mid_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\sd_LMG556\mid_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\sd_LMG556\mid_3", 1}};
        volume = "0.9 * (1 - (0.2 * interior))";
        range = 250;
        rangeCurve[] = {{0, 0}, {100, 1}, {250, 0}};
    };
    class RHSGREF_sd_M21_punch_far_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\sd_LMG556\far_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\sd_LMG556\far_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\sd_LMG556\far_3", 1}};
        volume = "0.9 * (1 - (0.25 * interior))";
        range = 700;
        rangeCurve[] = {{0, 1}, {100, 0}, {250, 1}, {700, 1}};
    };
    class RHSGREF_sd_M21_character_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\character\sd_M4\character_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\character\sd_M4\character_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\character\sd_M4\character_3", 1}};
        volume = 0.45;
        range = 60;
        rangeCurve[] = {{0, 1}, {60, 0}};
    };
    class RHSGREF_sd_M21_Closure_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\closure\AK74\Closure_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\closure\AK74\Closure_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\closure\AK74\Closure_3", 1}};
        volume = 0.87;
        range = 35;
        rangeCurve[] = {{0, 1}, {35, 0}};
    };
    class RHSGREF_sd_M21_Interior_closeMono_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\sd_rifle1\Interior_close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\sd_rifle1\Interior_close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\sd_rifle1\Interior_close_3", 1}};
        volume = "0.8 * 2.8 * interior";
        range = 100;
        rangeCurve[] = {{1, 0}, {3, 0}, {7, 1}, {100, 0}};
    };
    class RHSGREF_sd_M21_Interior_far_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\sd_rifle1\Interior_far_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\sd_rifle1\Interior_far_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\sd_rifle1\Interior_far_3", 1}};
        volume = "0.8 * 2.2 * interior";
        range = 700;
        rangeCurve[] = {{0, 0}, {100, 1}, {700, 1}};
    };
    class RHSGREF_M76_punch_close_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\Rifle2\close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\Rifle2\close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\Rifle2\close_3", 1}};
        volume = 1.28;
        range = 150;
        rangeCurve[] = {{0, 1}, {7, 1}, {15, 0}, {150, 0}};
    };
    class RHSGREF_M76_punch_close_interior_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\Rifle2\close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\Rifle2\close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\Rifle2\close_3", 1}};
        volume = "1.28 * (1 - (0.15 * interior))";
        range = 150;
        rangeCurve[] = {{0, 0}, {7, 0}, {15, 1}, {150, 0}};
    };
    class RHSGREF_M76_punch_mid_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\Rifle2\mid_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\Rifle2\mid_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\Rifle2\mid_3", 1}};
        volume = "1.28 * (1 - (0.2 * interior))";
        range = 800;
        rangeCurve[] = {{0, 0}, {150, 1}, {800, 0}};
    };
    class RHSGREF_M76_punch_far_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\Rifle2\far_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\Rifle2\far_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\Rifle2\far_3", 1}};
        volume = "1.28 * (1 - (0.25 * interior))";
        range = 3300;
        rangeCurve[] = {{0, 1}, {150, 0}, {800, 1}, {3300, 1}};
    };
    class RHSGREF_M76_character_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\character\AK74\character_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\character\AK74\character_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\character\AK74\character_3", 1}};
        volume = 0.63;
        range = 120;
        rangeCurve[] = {{0, 1}, {120, 0}};
    };
    class RHSGREF_M76_Closure_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\closure\AK74\Closure_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\closure\AK74\Closure_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\closure\AK74\Closure_3", 1}};
        volume = 0.85;
        range = 45;
        rangeCurve[] = {{0, 1}, {45, 0}};
    };
    class RHSGREF_M76_Interior_closeMono_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle2\Interior_close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle2\Interior_close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle2\Interior_close_3", 1}};
        volume = "1 * 2.8 * interior";
        range = 150;
        rangeCurve[] = {{1, 0}, {3, 0}, {7, 1}, {150, 0}};
    };
    class RHSGREF_M76_Interior_far_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle2\Interior_far_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle2\Interior_far_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle2\Interior_far_3", 1}};
        volume = "1 * 2.2 * interior";
        range = 3300;
        rangeCurve[] = {{0, 0}, {150, 1}, {3300, 1}};
    };
    class RHSGREF_sd_M76_punch_close_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\sd_LMG762\close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\sd_LMG762\close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\sd_LMG762\close_3", 1}};
        volume = 1.1;
        range = 100;
        rangeCurve[] = {{0, 1}, {7, 1}, {15, 0}, {100, 0}};
    };
    class RHSGREF_sd_M76_punch_close_interior_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\sd_LMG762\close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\sd_LMG762\close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\sd_LMG762\close_3", 1}};
        volume = "1.10 * (1 - (0.15 * interior))";
        range = 100;
        rangeCurve[] = {{0, 0}, {7, 0}, {15, 1}, {100, 0}};
    };
    class RHSGREF_sd_M76_punch_mid_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\sd_LMG762\mid_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\sd_LMG762\mid_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\sd_LMG762\mid_3", 1}};
        volume = "1.10 * (1 - (0.2 * interior))";
        range = 250;
        rangeCurve[] = {{0, 0}, {100, 1}, {250, 0}};
    };
    class RHSGREF_sd_M76_punch_far_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\sd_LMG762\far_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\sd_LMG762\far_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\sd_LMG762\far_3", 1}};
        volume = "1.10 * (1 - (0.25 * interior))";
        range = 700;
        rangeCurve[] = {{0, 1}, {100, 0}, {250, 1}, {700, 1}};
    };
    class RHSGREF_sd_M76_character_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\character\sd_M4\character_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\character\sd_M4\character_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\character\sd_M4\character_3", 1}};
        volume = 0.63;
        range = 120;
        rangeCurve[] = {{0, 1}, {120, 0}};
    };
    class RHSGREF_sd_M76_Closure_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\closure\AK74\Closure_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\closure\AK74\Closure_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\closure\AK74\Closure_3", 1}};
        volume = 0.85;
        range = 45;
        rangeCurve[] = {{0, 1}, {45, 0}};
    };
    class RHSGREF_sd_M76_Interior_closeMono_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\sd_mmg1\Interior_close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\sd_mmg1\Interior_close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\sd_mmg1\Interior_close_3", 1}};
        volume = "1 * 2.8 * interior";
        range = 150;
        rangeCurve[] = {{1, 0}, {3, 0}, {7, 1}, {150, 0}};
    };
    class RHSGREF_sd_M76_Interior_far_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\sd_mmg1\Interior_far_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\sd_mmg1\Interior_far_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\sd_mmg1\Interior_far_3", 1}};
        volume = "1 * 2.2 * interior";
        range = 700;
        rangeCurve[] = {{0, 0}, {150, 1}, {700, 1}};
    };
    class RHSGREF_k98_punch_close_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\rifle2\close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\rifle2\close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\rifle2\close_3", 1}};
        volume = 1.31;
        range = 150;
        rangeCurve[] = {{0, 1}, {7, 1}, {15, 0}, {150, 0}};
    };
    class RHSGREF_k98_punch_close_interior_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\rifle2\close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\rifle2\close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\rifle2\close_3", 1}};
        volume = "1.31 * (1 - (0.15 * interior))";
        range = 150;
        rangeCurve[] = {{0, 0}, {7, 0}, {15, 1}, {150, 0}};
    };
    class RHSGREF_k98_punch_mid_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\rifle2\mid_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\rifle2\mid_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\rifle2\mid_3", 1}};
        volume = "1.31 * (1 - (0.2 * interior))";
        range = 800;
        rangeCurve[] = {{0, 0}, {150, 1}, {800, 0}};
    };
    class RHSGREF_k98_punch_far_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\rifle2\far_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\rifle2\far_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\rifle2\far_3", 1}};
        volume = "1.31 * (1 - (0.25 * interior))";
        range = 3100;
        rangeCurve[] = {{0, 1}, {150, 0}, {800, 1}, {3100, 1}};
    };
    class RHSGREF_k98_character_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\character\k98\character_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\character\k98\character_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\character\k98\character_3", 1}};
        volume = 0.61;
        range = 130;
        rangeCurve[] = {{0, 1}, {130, 0}};
    };
    class RHSGREF_k98_Closure_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\closure\k98\Closure_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\closure\k98\Closure_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\closure\k98\Closure_3", 1}};
        volume = 0.89;
        range = 45;
        rangeCurve[] = {{0, 1}, {45, 0}};
    };
    class RHSGREF_k98_Interior_closeMono_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle2\Interior_close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle2\Interior_close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle2\Interior_close_3", 1}};
        volume = "1 * 2.8 * interior";
        range = 150;
        rangeCurve[] = {{1, 0}, {3, 0}, {7, 1}, {150, 0}};
    };
    class RHSGREF_k98_Interior_far_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle2\Interior_far_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle2\Interior_far_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle2\Interior_far_3", 1}};
        volume = "1 * 2.2 * interior";
        range = 3100;
        rangeCurve[] = {{0, 0}, {150, 1}, {3100, 1}};
    };
    class RHSGREF_nagant_punch_close_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\rifle2\close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\rifle2\close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\rifle2\close_3", 1}};
        volume = 1.31;
        range = 150;
        rangeCurve[] = {{0, 1}, {7, 1}, {15, 0}, {150, 0}};
    };
    class RHSGREF_nagant_punch_close_interior_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\rifle2\close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\rifle2\close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\rifle2\close_3", 1}};
        volume = "1.31 * (1 - (0.15 * interior))";
        range = 150;
        rangeCurve[] = {{0, 0}, {7, 0}, {15, 1}, {150, 0}};
    };
    class RHSGREF_nagant_punch_mid_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\rifle2\mid_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\rifle2\mid_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\rifle2\mid_3", 1}};
        volume = "1.31 * (1 - (0.2 * interior))";
        range = 800;
        rangeCurve[] = {{0, 0}, {150, 1}, {800, 0}};
    };
    class RHSGREF_nagant_punch_far_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\rifle2\far_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\rifle2\far_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\rifle2\far_3", 1}};
        volume = "1.31 * (1 - (0.25 * interior))";
        range = 3100;
        rangeCurve[] = {{0, 1}, {150, 0}, {800, 1}, {3100, 1}};
    };
    class RHSGREF_nagant_character_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\character\nagant\character_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\character\nagant\character_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\character\nagant\character_3", 1}};
        volume = 0.63;
        range = 160;
        rangeCurve[] = {{0, 1}, {160, 0}};
    };
    class RHSGREF_nagant_Closure_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\closure\nagant\Closure_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\closure\nagant\Closure_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\closure\nagant\Closure_3", 1}};
        volume = 0.9;
        range = 45;
        rangeCurve[] = {{0, 1}, {45, 0}};
    };
    class RHSGREF_nagant_Interior_closeMono_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle2\Interior_close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle2\Interior_close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle2\Interior_close_3", 1}};
        volume = "1 * 2.8 * interior";
        range = 150;
        rangeCurve[] = {{1, 0}, {3, 0}, {7, 1}, {150, 0}};
    };
    class RHSGREF_nagant_Interior_far_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle2\Interior_far_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle2\Interior_far_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle2\Interior_far_3", 1}};
        volume = "1 * 2.2 * interior";
        range = 3100;
        rangeCurve[] = {{0, 0}, {150, 1}, {3100, 1}};
    };
    class RHSGREF_sbr_punch_close_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\LMG762rus\close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\LMG762rus\close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\LMG762rus\close_3", 1}};
        volume = 1.31;
        range = 150;
        rangeCurve[] = {{0, 1}, {7, 1}, {15, 0}, {150, 0}};
    };
    class RHSGREF_sbr_punch_close_interior_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\LMG762rus\close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\LMG762rus\close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\LMG762rus\close_3", 1}};
        volume = "1.31 * (1 - (0.15 * interior))";
        range = 150;
        rangeCurve[] = {{0, 0}, {7, 0}, {15, 1}, {150, 0}};
    };
    class RHSGREF_sbr_punch_mid_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\LMG762rus\mid_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\LMG762rus\mid_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\LMG762rus\mid_3", 1}};
        volume = "1.31 * (1 - (0.2 * interior))";
        range = 800;
        rangeCurve[] = {{0, 0}, {150, 1}, {800, 0}};
    };
    class RHSGREF_sbr_punch_far_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\LMG762rus\far_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\LMG762rus\far_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\LMG762rus\far_3", 1}};
        volume = "1.31 * (1 - (0.25 * interior))";
        range = 3100;
        rangeCurve[] = {{0, 1}, {150, 0}, {800, 1}, {3100, 1}};
    };
    class RHSGREF_sbr_character_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\character\nagant\character_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\character\nagant\character_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\character\nagant\character_3", 1}};
        volume = 0.63;
        range = 140;
        rangeCurve[] = {{0, 1}, {140, 0}};
    };
    class RHSGREF_sbr_Closure_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\closure\nagant\Closure_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\closure\nagant\Closure_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\closure\nagant\Closure_3", 1}};
        volume = 0.9;
        range = 45;
        rangeCurve[] = {{0, 1}, {45, 0}};
    };
    class RHSGREF_sbr_Interior_closeMono_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle1\Interior_close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle1\Interior_close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle1\Interior_close_3", 1}};
        volume = "1 * 2.8 * interior";
        range = 150;
        rangeCurve[] = {{1, 0}, {3, 0}, {7, 1}, {150, 0}};
    };
    class RHSGREF_sbr_Interior_far_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle1\Interior_far_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle1\Interior_far_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle1\Interior_far_3", 1}};
        volume = "1 * 2.2 * interior";
        range = 3100;
        rangeCurve[] = {{0, 0}, {150, 1}, {3100, 1}};
    };
    class RHSGREF_sd_sbr_punch_close_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\sd_LMG762\close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\sd_LMG762\close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\sd_LMG762\close_3", 1}};
        volume = 1.1;
        range = 100;
        rangeCurve[] = {{0, 1}, {7, 1}, {15, 0}, {100, 0}};
    };
    class RHSGREF_sd_sbr_punch_close_interior_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\sd_LMG762\close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\sd_LMG762\close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\sd_LMG762\close_3", 1}};
        volume = "1.10 * (1 - (0.15 * interior))";
        range = 100;
        rangeCurve[] = {{0, 0}, {7, 0}, {15, 1}, {100, 0}};
    };
    class RHSGREF_sd_sbr_punch_mid_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\sd_LMG762\mid_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\sd_LMG762\mid_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\sd_LMG762\mid_3", 1}};
        volume = "1.10 * (1 - (0.2 * interior))";
        range = 250;
        rangeCurve[] = {{0, 0}, {100, 1}, {250, 0}};
    };
    class RHSGREF_sd_sbr_punch_far_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\sd_LMG762\far_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\sd_LMG762\far_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\sd_LMG762\far_3", 1}};
        volume = "1.10 * (1 - (0.25 * interior))";
        range = 700;
        rangeCurve[] = {{0, 1}, {100, 0}, {250, 1}, {700, 1}};
    };
    class RHSGREF_sd_sbr_character_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\character\sd_M4\character_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\character\sd_M4\character_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\character\sd_M4\character_3", 1}};
        volume = 0.63;
        range = 120;
        rangeCurve[] = {{0, 1}, {120, 0}};
    };
    class RHSGREF_sd_sbr_Closure_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\closure\nagant\Closure_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\closure\nagant\Closure_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\closure\nagant\Closure_3", 1}};
        volume = 0.9;
        range = 45;
        rangeCurve[] = {{0, 1}, {45, 0}};
    };
    class RHSGREF_sd_sbr_Interior_closeMono_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\sd_mmg1\Interior_close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\sd_mmg1\Interior_close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\sd_mmg1\Interior_close_3", 1}};
        volume = "1 * 2.8 * interior";
        range = 150;
        rangeCurve[] = {{1, 0}, {3, 0}, {7, 1}, {150, 0}};
    };
    class RHSGREF_sd_sbr_Interior_far_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\sd_mmg1\Interior_far_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\sd_mmg1\Interior_far_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\sd_mmg1\Interior_far_3", 1}};
        volume = "1 * 2.2 * interior";
        range = 700;
        rangeCurve[] = {{0, 0}, {150, 1}, {700, 1}};
    };
    class RHSGREF_scorp_punch_close_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\9mm\close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\9mm\close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\9mm\close_3", 1}};
        volume = 1.2;
        range = 150;
        rangeCurve[] = {{0, 1}, {7, 1}, {15, 0}, {150, 0}};
    };
    class RHSGREF_scorp_punch_close_interior_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\9mm\close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\9mm\close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\9mm\close_3", 1}};
        volume = "1.20 * (1 - (0.15 * interior))";
        range = 150;
        rangeCurve[] = {{0, 0}, {7, 0}, {15, 1}, {150, 0}};
    };
    class RHSGREF_scorp_punch_mid_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\9mm\mid_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\9mm\mid_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\9mm\mid_3", 1}};
        volume = "1.20 * (1 - (0.2 * interior))";
        range = 800;
        rangeCurve[] = {{0, 0}, {150, 1}, {800, 0}};
    };
    class RHSGREF_scorp_punch_far_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\9mm\far_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\9mm\far_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\9mm\far_3", 1}};
        volume = "1.20 * (1 - (0.25 * interior))";
        range = 2600;
        rangeCurve[] = {{0, 1}, {150, 0}, {800, 1}, {2600, 1}};
    };
    class RHSGREF_scorp_character_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\character\luger\character_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\character\luger\character_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\character\luger\character_3", 1}};
        volume = 0.59;
        range = 100;
        rangeCurve[] = {{0, 1}, {100, 0}};
    };
    class RHSGREF_scorp_Closure_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\closure\luger\Closure_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\closure\luger\Closure_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\closure\luger\Closure_3", 1}};
        volume = 0.82;
        range = 29;
        rangeCurve[] = {{0, 1}, {29, 0}};
    };
    class RHSGREF_scorp_Interior_closeMono_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\pistol1\Interior_close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\pistol1\Interior_close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\pistol1\Interior_close_3", 1}};
        volume = "1 * 2.8 * interior";
        range = 150;
        rangeCurve[] = {{1, 0}, {3, 0}, {7, 1}, {150, 0}};
    };
    class RHSGREF_scorp_Interior_far_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\pistol1\Interior_far_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\pistol1\Interior_far_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\pistol1\Interior_far_3", 1}};
        volume = "1 * 2.2 * interior";
        range = 2600;
        rangeCurve[] = {{0, 0}, {150, 1}, {2600, 1}};
    };
    class RHSGREF_thompson_punch_close_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\45ACP_thmpsn\close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\45ACP_thmpsn\close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\45ACP_thmpsn\close_3", 1}};
        volume = 1.36;
        range = 150;
        rangeCurve[] = {{0, 1}, {7, 1}, {15, 0}, {150, 0}};
    };
    class RHSGREF_thompson_punch_close_interior_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\45ACP_thmpsn\close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\45ACP_thmpsn\close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\45ACP_thmpsn\close_3", 1}};
        volume = "1.36 * (1 - (0.15 * interior))";
        range = 150;
        rangeCurve[] = {{0, 0}, {7, 0}, {15, 1}, {150, 0}};
    };
    class RHSGREF_thompson_punch_mid_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\45ACP_thmpsn\mid_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\45ACP_thmpsn\mid_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\45ACP_thmpsn\mid_3", 1}};
        volume = "1.36 * (1 - (0.2 * interior))";
        range = 800;
        rangeCurve[] = {{0, 0}, {150, 1}, {800, 0}};
    };
    class RHSGREF_thompson_punch_far_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\45ACP_thmpsn\far_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\45ACP_thmpsn\far_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\45ACP_thmpsn\far_3", 1}};
        volume = "1.36 * (1 - (0.25 * interior))";
        range = 2400;
        rangeCurve[] = {{0, 1}, {150, 0}, {800, 1}, {2400, 1}};
    };
    class RHSGREF_thompson_character_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\character\thompson\character_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\character\thompson\character_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\character\thompson\character_3", 1}};
        volume = 0.9;
        range = 130;
        rangeCurve[] = {{0, 1}, {130, 0}};
    };
    class RHSGREF_thompson_Closure_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\closure\thompson\Closure_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\closure\thompson\Closure_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\closure\thompson\Closure_3", 1}};
        volume = 0.9;
        range = 30;
        rangeCurve[] = {{0, 1}, {30, 0}};
    };
    class RHSGREF_thompson_Interior_closeMono_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle1\Interior_close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle1\Interior_close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle1\Interior_close_3", 1}};
        volume = "1 * 2.8 * interior";
        range = 150;
        rangeCurve[] = {{1, 0}, {3, 0}, {7, 1}, {150, 0}};
    };
    class RHSGREF_thompson_Interior_far_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle1\Interior_far_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle1\Interior_far_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle1\Interior_far_3", 1}};
        volume = "1 * 2.2 * interior";
        range = 2400;
        rangeCurve[] = {{0, 0}, {150, 1}, {2400, 1}};
    };
    class RHSGREF_STG44_punch_close_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\lmg762\close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\lmg762\close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\lmg762\close_3", 1}};
        volume = 1.33;
        range = 150;
        rangeCurve[] = {{0, 1}, {7, 1}, {15, 0}, {150, 0}};
    };
    class RHSGREF_STG44_punch_close_interior_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\lmg762\close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\lmg762\close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\lmg762\close_3", 1}};
        volume = "1.33 * (1 - (0.15 * interior))";
        range = 150;
        rangeCurve[] = {{0, 0}, {7, 0}, {15, 1}, {150, 0}};
    };
    class RHSGREF_STG44_punch_mid_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\lmg762\mid_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\lmg762\mid_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\lmg762\mid_3", 1}};
        volume = "1.33 * (1 - (0.2 * interior))";
        range = 800;
        rangeCurve[] = {{0, 0}, {150, 1}, {800, 0}};
    };
    class RHSGREF_STG44_punch_far_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\lmg762\far_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\lmg762\far_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\lmg762\far_3", 1}};
        volume = "1.33 * (1 - (0.25 * interior))";
        range = 3150;
        rangeCurve[] = {{0, 1}, {150, 0}, {800, 1}, {3150, 1}};
    };
    class RHSGREF_STG44_character_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\character\STG44\character_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\character\STG44\character_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\character\STG44\character_3", 1}};
        volume = 0.5;
        range = 130;
        rangeCurve[] = {{0, 1}, {130, 0}};
    };
    class RHSGREF_STG44_Closure_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\closure\STG44\Closure_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\closure\STG44\Closure_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\closure\STG44\Closure_3", 1}};
        volume = 0.93;
        range = 35;
        rangeCurve[] = {{0, 1}, {35, 0}};
    };
    class RHSGREF_STG44_Interior_closeMono_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\mmg1\Interior_close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\mmg1\Interior_close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\mmg1\Interior_close_3", 1}};
        volume = "1 * 2.8 * interior";
        range = 150;
        rangeCurve[] = {{1, 0}, {3, 0}, {7, 1}, {150, 0}};
    };
    class RHSGREF_STG44_Interior_far_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\mmg1\Interior_far_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\mmg1\Interior_far_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\mmg1\Interior_far_3", 1}};
        volume = "1 * 2.2 * interior";
        range = 3150;
        rangeCurve[] = {{0, 0}, {150, 1}, {3150, 1}};
    };
    class RHSGREF_MG42_punch_close_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\MG42\close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\MG42\close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\MG42\close_3", 1}};
        volume = 1.35;
        range = 150;
        rangeCurve[] = {{0, 1}, {7, 1}, {15, 0}, {150, 0}};
    };
    class RHSGREF_MG42_punch_close_interior_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\MG42\close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\MG42\close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\MG42\close_3", 1}};
        volume = "1.35 * (1 - (0.15 * interior))";
        range = 150;
        rangeCurve[] = {{0, 0}, {7, 0}, {15, 1}, {150, 0}};
    };
    class RHSGREF_MG42_punch_mid_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\MG42\mid_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\MG42\mid_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\MG42\mid_3", 1}};
        volume = "1.35 * (1 - (0.2 * interior))";
        range = 800;
        rangeCurve[] = {{0, 0}, {150, 1}, {800, 0}};
    };
    class RHSGREF_MG42_punch_far_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\MG42\far_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\MG42\far_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\MG42\far_3", 1}};
        volume = "1.35 * (1 - (0.25 * interior))";
        range = 3300;
        rangeCurve[] = {{0, 1}, {150, 0}, {800, 1}, {3300, 1}};
    };
    class RHSGREF_MG42_character_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\character\MG42\character_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\character\MG42\character_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\character\MG42\character_3", 1}};
        volume = 0.68;
        range = 110;
        rangeCurve[] = {{0, 1}, {110, 0}};
    };
    class RHSGREF_MG42_Closure_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\closure\MG42\Closure_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\closure\MG42\Closure_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\closure\MG42\Closure_3", 1}};
        volume = 1.08;
        range = 45;
        rangeCurve[] = {{0, 1}, {45, 0}};
    };
    class RHSGREF_MG42_Interior_closeMono_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\mmg1\Interior_close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\mmg1\Interior_close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\mmg1\Interior_close_3", 1}};
        volume = "1 * 2.8 * interior";
        range = 150;
        rangeCurve[] = {{1, 0}, {3, 0}, {7, 1}, {150, 0}};
    };
    class RHSGREF_MG42_Interior_far_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\mmg1\Interior_far_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\mmg1\Interior_far_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\mmg1\Interior_far_3", 1}};
        volume = "1 * 2.2 * interior";
        range = 3300;
        rangeCurve[] = {{0, 0}, {150, 1}, {3300, 1}};
    };
    class RHSGREF_MG42_delayed_punch_close_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\MG42_delayed\close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\MG42_delayed\close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\MG42_delayed\close_3", 1}};
        volume = 1.35;
        range = 150;
        rangeCurve[] = {{0, 1}, {7, 1}, {15, 0}, {150, 0}};
    };
    class RHSGREF_MG42_delayed_punch_close_interior_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\MG42_delayed\close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\MG42_delayed\close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\MG42_delayed\close_3", 1}};
        volume = "1.35 * (1 - (0.15 * interior))";
        range = 150;
        rangeCurve[] = {{0, 0}, {7, 0}, {15, 1}, {150, 0}};
    };
    class RHSGREF_MG42_delayed_punch_mid_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\MG42_delayed\mid_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\MG42_delayed\mid_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\MG42_delayed\mid_3", 1}};
        volume = "1.35 * (1 - (0.2 * interior))";
        range = 800;
        rangeCurve[] = {{0, 0}, {150, 1}, {800, 0}};
    };
    class RHSGREF_MG42_delayed_punch_far_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\MG42_delayed\far_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\MG42_delayed\far_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\MG42_delayed\far_3", 1}};
        volume = "1.35 * (1 - (0.25 * interior))";
        range = 3300;
        rangeCurve[] = {{0, 1}, {150, 0}, {800, 1}, {3300, 1}};
    };
    class RHSGREF_MG42_delayed_character_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\character\MG42_delayed\character_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\character\MG42_delayed\character_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\character\MG42_delayed\character_3", 1}};
        volume = 0.68;
        range = 110;
        rangeCurve[] = {{0, 1}, {110, 0}};
    };
    class RHSGREF_MG42_delayed_Closure_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\closure\MG42_delayed\Closure_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\closure\MG42_delayed\Closure_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\closure\MG42_delayed\Closure_3", 1}};
        volume = 1.08;
        range = 45;
        rangeCurve[] = {{0, 1}, {45, 0}};
    };
    class RHSGREF_MG42_delayed_Interior_closeMono_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\mmg1_delayed\Interior_close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\mmg1_delayed\Interior_close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\mmg1_delayed\Interior_close_3", 1}};
        volume = "1 * 2.8 * interior";
        range = 150;
        rangeCurve[] = {{1, 0}, {3, 0}, {7, 1}, {150, 0}};
    };
    class RHSGREF_MG42_delayed_Interior_far_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\mmg1_delayed\Interior_far_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\mmg1_delayed\Interior_far_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\mmg1_delayed\Interior_far_3", 1}};
        volume = "1 * 2.2 * interior";
        range = 3300;
        rangeCurve[] = {{0, 0}, {150, 1}, {3300, 1}};
    };
    class RHSGREF_tokarev_punch_close_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\9mm\close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\9mm\close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\9mm\close_3", 1}};
        volume = 1.32;
        range = 150;
        rangeCurve[] = {{0, 1}, {7, 1}, {15, 0}, {150, 0}};
    };
    class RHSGREF_tokarev_punch_close_interior_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\9mm\close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\9mm\close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\9mm\close_3", 1}};
        volume = "1.32 * (1 - (0.15 * interior))";
        range = 150;
        rangeCurve[] = {{0, 0}, {7, 0}, {15, 1}, {150, 0}};
    };
    class RHSGREF_tokarev_punch_mid_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\9mm\mid_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\9mm\mid_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\9mm\mid_3", 1}};
        volume = "1.32 * (1 - (0.2 * interior))";
        range = 800;
        rangeCurve[] = {{0, 0}, {150, 1}, {800, 0}};
    };
    class RHSGREF_tokarev_punch_far_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\9mm\far_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\9mm\far_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\9mm\far_3", 1}};
        volume = "1.32 * (1 - (0.25 * interior))";
        range = 2400;
        rangeCurve[] = {{0, 1}, {150, 0}, {800, 1}, {2400, 1}};
    };
    class RHSGREF_tokarev_character_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\character\tokarev\character_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\character\tokarev\character_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\character\tokarev\character_3", 1}};
        volume = 0.61;
        range = 130;
        rangeCurve[] = {{0, 1}, {130, 0}};
    };
    class RHSGREF_tokarev_Closure_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\closure\tokarev\Closure_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\closure\tokarev\Closure_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\closure\tokarev\Closure_3", 1}};
        volume = 1.03;
        range = 35;
        rangeCurve[] = {{0, 1}, {35, 0}};
    };
    class RHSGREF_tokarev_Interior_closeMono_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\pistol1\Interior_close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\pistol1\Interior_close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\pistol1\Interior_close_3", 1}};
        volume = "1 * 2.8 * interior";
        range = 150;
        rangeCurve[] = {{1, 0}, {3, 0}, {7, 1}, {150, 0}};
    };
    class RHSGREF_tokarev_Interior_far_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\pistol1\Interior_far_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\pistol1\Interior_far_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\pistol1\Interior_far_3", 1}};
        volume = "1 * 2.2 * interior";
        range = 2400;
        rangeCurve[] = {{0, 0}, {150, 1}, {2400, 1}};
    };
    class RHSGREF_m1_punch_close_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\lmg762x63\close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\lmg762x63\close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\lmg762x63\close_3", 1}};
        volume = 1.31;
        range = 150;
        rangeCurve[] = {{0, 1}, {7, 1}, {15, 0}, {150, 0}};
    };
    class RHSGREF_m1_punch_close_interior_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\lmg762x63\close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\lmg762x63\close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\lmg762x63\close_3", 1}};
        volume = "1.31 * (1 - (0.15 * interior))";
        range = 150;
        rangeCurve[] = {{0, 0}, {7, 0}, {15, 1}, {150, 0}};
    };
    class RHSGREF_m1_punch_mid_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\lmg762x63\mid_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\lmg762x63\mid_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\lmg762x63\mid_3", 1}};
        volume = "1.31 * (1 - (0.2 * interior))";
        range = 800;
        rangeCurve[] = {{0, 0}, {150, 1}, {800, 0}};
    };
    class RHSGREF_m1_punch_far_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\lmg762x63\far_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\lmg762x63\far_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\lmg762x63\far_3", 1}};
        volume = "1.31 * (1 - (0.25 * interior))";
        range = 3100;
        rangeCurve[] = {{0, 1}, {150, 0}, {800, 1}, {3100, 1}};
    };
    class RHSGREF_m1_character_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\character\m1\character_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\character\m1\character_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\character\m1\character_3", 1}};
        volume = 0.76;
        range = 160;
        rangeCurve[] = {{0, 1}, {160, 0}};
    };
    class RHSGREF_m1_Closure_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\closure\m1\Closure_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\closure\m1\Closure_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\closure\m1\Closure_3", 1}};
        volume = 0.92;
        range = 45;
        rangeCurve[] = {{0, 1}, {45, 0}};
    };
    class RHSGREF_m1_Interior_closeMono_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle2\Interior_close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle2\Interior_close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle2\Interior_close_3", 1}};
        volume = "1 * 2.8 * interior";
        range = 150;
        rangeCurve[] = {{1, 0}, {3, 0}, {7, 1}, {150, 0}};
    };
    class RHSGREF_m1_Interior_far_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle2\Interior_far_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle2\Interior_far_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle2\Interior_far_3", 1}};
        volume = "1 * 2.2 * interior";
        range = 3100;
        rangeCurve[] = {{0, 0}, {150, 1}, {3100, 1}};
    };
    class RHSGREF_VHS2_punch_close_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\LMG556\close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\LMG556\close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\LMG556\close_3", 1}};
        volume = 1.23;
        range = 150;
        rangeCurve[] = {{0, 1}, {7, 1}, {15, 0}, {150, 0}};
    };
    class RHSGREF_VHS2_punch_close_interior_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\LMG556\close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\LMG556\close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\LMG556\close_3", 1}};
        volume = "1.23 * (1 - (0.15 * interior))";
        range = 150;
        rangeCurve[] = {{0, 0}, {7, 0}, {15, 1}, {150, 0}};
    };
    class RHSGREF_VHS2_punch_mid_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\LMG556\mid_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\LMG556\mid_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\LMG556\mid_3", 1}};
        volume = "1.23 * (1 - (0.2 * interior))";
        range = 800;
        rangeCurve[] = {{0, 0}, {150, 1}, {800, 0}};
    };
    class RHSGREF_VHS2_punch_far_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\LMG556\far_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\LMG556\far_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\LMG556\far_3", 1}};
        volume = "1.23 * (1 - (0.25 * interior))";
        range = 3000;
        rangeCurve[] = {{0, 1}, {150, 0}, {800, 1}, {3000, 1}};
    };
    class RHSGREF_VHS2_character_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\character\lmg556\character_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\character\lmg556\character_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\character\lmg556\character_3", 1}};
        volume = 0.54;
        range = 120;
        rangeCurve[] = {{0, 1}, {120, 0}};
    };
    class RHSGREF_VHS2_Closure_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\closure\katiba\Closure_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\closure\katiba\Closure_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\closure\katiba\Closure_3", 1}};
        volume = 0.87;
        range = 35;
        rangeCurve[] = {{0, 1}, {35, 0}};
    };
    class RHSGREF_VHS2_Interior_closeMono_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle1\Interior_close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle1\Interior_close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle1\Interior_close_3", 1}};
        volume = "1 * 2.8 * interior";
        range = 150;
        rangeCurve[] = {{1, 0}, {3, 0}, {7, 1}, {150, 0}};
    };
    class RHSGREF_VHS2_Interior_far_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle1\Interior_far_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle1\Interior_far_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle1\Interior_far_3", 1}};
        volume = "1 * 2.2 * interior";
        range = 3000;
        rangeCurve[] = {{0, 0}, {150, 1}, {3000, 1}};
    };
    class RHSGREF_sd_VHS2_punch_close_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\sd_LMG556\close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\sd_LMG556\close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\sd_LMG556\close_3", 1}};
        volume = 0.9;
        range = 100;
        rangeCurve[] = {{0, 1}, {7, 1}, {15, 0}, {100, 0}};
    };
    class RHSGREF_sd_VHS2_punch_close_interior_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\sd_LMG556\close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\sd_LMG556\close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\sd_LMG556\close_3", 1}};
        volume = "0.9 * (1 - (0.15 * interior))";
        range = 100;
        rangeCurve[] = {{0, 0}, {7, 0}, {15, 1}, {100, 0}};
    };
    class RHSGREF_sd_VHS2_punch_mid_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\sd_LMG556\mid_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\sd_LMG556\mid_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\sd_LMG556\mid_3", 1}};
        volume = "0.9 * (1 - (0.2 * interior))";
        range = 250;
        rangeCurve[] = {{0, 0}, {100, 1}, {250, 0}};
    };
    class RHSGREF_sd_VHS2_punch_far_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\sd_LMG556\far_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\sd_LMG556\far_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\sd_LMG556\far_3", 1}};
        volume = "0.9 * (1 - (0.25 * interior))";
        range = 700;
        rangeCurve[] = {{0, 1}, {100, 0}, {250, 1}, {700, 1}};
    };
    class RHSGREF_sd_VHS2_character_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\character\sd_m4\character_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\character\sd_m4\character_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\character\sd_m4\character_3", 1}};
        volume = 0.45;
        range = 60;
        rangeCurve[] = {{0, 1}, {60, 0}};
    };
    class RHSGREF_sd_VHS2_Closure_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\closure\katiba\Closure_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\closure\katiba\Closure_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\closure\katiba\Closure_3", 1}};
        volume = 0.87;
        range = 35;
        rangeCurve[] = {{0, 1}, {35, 0}};
    };
    class RHSGREF_sd_VHS2_Interior_closeMono_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\sd_rifle1\Interior_close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\sd_rifle1\Interior_close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\sd_rifle1\Interior_close_3", 1}};
        volume = "0.8 * 2.8 * interior";
        range = 100;
        rangeCurve[] = {{1, 0}, {3, 0}, {7, 1}, {100, 0}};
    };
    class RHSGREF_sd_VHS2_Interior_far_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\sd_rifle1\Interior_far_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\sd_rifle1\Interior_far_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\sd_rifle1\Interior_far_3", 1}};
        volume = "0.8 * 2.2 * interior";
        range = 700;
        rangeCurve[] = {{0, 0}, {100, 1}, {700, 1}};
    };
    class RHSGREF_m3a1_punch_close_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\45ACP_thmpsn\close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\45ACP_thmpsn\close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\45ACP_thmpsn\close_3", 1}};
        volume = 1.36;
        range = 150;
        rangeCurve[] = {{0, 1}, {7, 1}, {15, 0}, {150, 0}};
    };
    class RHSGREF_m3a1_punch_close_interior_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\45ACP_thmpsn\close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\45ACP_thmpsn\close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\45ACP_thmpsn\close_3", 1}};
        volume = "1.36 * (1 - (0.15 * interior))";
        range = 150;
        rangeCurve[] = {{0, 0}, {7, 0}, {15, 1}, {150, 0}};
    };
    class RHSGREF_m3a1_punch_mid_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\45ACP_thmpsn\mid_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\45ACP_thmpsn\mid_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\45ACP_thmpsn\mid_3", 1}};
        volume = "1.36 * (1 - (0.2 * interior))";
        range = 800;
        rangeCurve[] = {{0, 0}, {150, 1}, {800, 0}};
    };
    class RHSGREF_m3a1_punch_far_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\45ACP_thmpsn\far_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\45ACP_thmpsn\far_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\45ACP_thmpsn\far_3", 1}};
        volume = "1.36 * (1 - (0.25 * interior))";
        range = 2400;
        rangeCurve[] = {{0, 1}, {150, 0}, {800, 1}, {2400, 1}};
    };
    class RHSGREF_m3a1_character_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\character\thompson\character_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\character\thompson\character_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\character\thompson\character_3", 1}};
        volume = 0.9;
        range = 130;
        rangeCurve[] = {{0, 1}, {130, 0}};
    };
    class RHSGREF_m3a1_Closure_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\closure\m3a1\Closure_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\closure\m3a1\Closure_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\closure\m3a1\Closure_3", 1}};
        volume = 0.9;
        range = 30;
        rangeCurve[] = {{0, 1}, {30, 0}};
    };
    class RHSGREF_m3a1_Interior_closeMono_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\pistol1\Interior_close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\pistol1\Interior_close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\pistol1\Interior_close_3", 1}};
        volume = "1 * 2.8 * interior";
        range = 150;
        rangeCurve[] = {{1, 0}, {3, 0}, {7, 1}, {150, 0}};
    };
    class RHSGREF_m3a1_Interior_far_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\pistol1\Interior_far_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\pistol1\Interior_far_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\pistol1\Interior_far_3", 1}};
        volume = "1 * 2.2 * interior";
        range = 2400;
        rangeCurve[] = {{0, 0}, {150, 1}, {2400, 1}};
    };
    class RHSGREF_sd_m3a1_punch_close_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\sd_m3a1\close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\sd_m3a1\close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\sd_m3a1\close_3", 1}};
        volume = 1.06;
        range = 100;
        rangeCurve[] = {{0, 1}, {7, 1}, {15, 0}, {100, 0}};
    };
    class RHSGREF_sd_m3a1_punch_close_interior_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\sd_m3a1\close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\sd_m3a1\close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\sd_m3a1\close_3", 1}};
        volume = "1.06 * (1 - (0.15 * interior))";
        range = 100;
        rangeCurve[] = {{0, 0}, {7, 0}, {15, 1}, {100, 0}};
    };
    class RHSGREF_sd_m3a1_punch_mid_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\sd_m3a1\mid_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\sd_m3a1\mid_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\sd_m3a1\mid_3", 1}};
        volume = "1.06 * (1 - (0.2 * interior))";
        range = 250;
        rangeCurve[] = {{0, 0}, {100, 1}, {250, 0}};
    };
    class RHSGREF_sd_m3a1_punch_far_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\sd_m3a1\far_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\sd_m3a1\far_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\sd_m3a1\far_3", 1}};
        volume = "1.06 * (1 - (0.25 * interior))";
        range = 700;
        rangeCurve[] = {{0, 1}, {100, 0}, {250, 1}, {700, 1}};
    };
    class RHSGREF_sd_m3a1_character_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\character\sd_m4\character_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\character\sd_m4\character_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\character\sd_m4\character_3", 1}};
        volume = 0.45;
        range = 60;
        rangeCurve[] = {{0, 1}, {60, 0}};
    };
    class RHSGREF_sd_m3a1_Closure_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\closure\m3a1\Closure_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\closure\m3a1\Closure_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\closure\m3a1\Closure_3", 1}};
        volume = 0.9;
        range = 30;
        rangeCurve[] = {{0, 1}, {30, 0}};
    };
    class RHSGREF_sd_m3a1_Interior_closeMono_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\sd_rifle1\Interior_close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\sd_rifle1\Interior_close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\sd_rifle1\Interior_close_3", 1}};
        volume = "0.8 * 2.8 * interior";
        range = 100;
        rangeCurve[] = {{1, 0}, {3, 0}, {7, 1}, {100, 0}};
    };
    class RHSGREF_sd_m3a1_Interior_far_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\sd_rifle1\Interior_far_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\sd_rifle1\Interior_far_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\sd_rifle1\Interior_far_3", 1}};
        volume = "0.8 * 2.2 * interior";
        range = 700;
        rangeCurve[] = {{0, 0}, {100, 1}, {700, 1}};
    };
    class RHSGREF_fnfal_punch_close_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\lmg762\close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\lmg762\close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\lmg762\close_3", 1}};
        volume = 1.33;
        range = 150;
        rangeCurve[] = {{0, 1}, {7, 1}, {15, 0}, {150, 0}};
    };
    class RHSGREF_fnfal_punch_close_interior_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\lmg762\close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\lmg762\close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\lmg762\close_3", 1}};
        volume = "1.33 * (1 - (0.15 * interior))";
        range = 150;
        rangeCurve[] = {{0, 0}, {7, 0}, {15, 1}, {150, 0}};
    };
    class RHSGREF_fnfal_punch_mid_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\lmg762\mid_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\lmg762\mid_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\lmg762\mid_3", 1}};
        volume = "1.33 * (1 - (0.2 * interior))";
        range = 800;
        rangeCurve[] = {{0, 0}, {150, 1}, {800, 0}};
    };
    class RHSGREF_fnfal_punch_far_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\lmg762\far_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\lmg762\far_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\lmg762\far_3", 1}};
        volume = "1.33 * (1 - (0.25 * interior))";
        range = 3150;
        rangeCurve[] = {{0, 1}, {150, 0}, {800, 1}, {3150, 1}};
    };
    class RHSGREF_fnfal_character_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\character\BAR\character_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\character\BAR\character_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\character\BAR\character_3", 1}};
        volume = 0.5;
        range = 130;
        rangeCurve[] = {{0, 1}, {130, 0}};
    };
    class RHSGREF_fnfal_Closure_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\closure\BAR\Closure_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\closure\BAR\Closure_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\closure\BAR\Closure_3", 1}};
        volume = 0.93;
        range = 35;
        rangeCurve[] = {{0, 1}, {35, 0}};
    };
    class RHSGREF_fnfal_Interior_closeMono_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\mmg1\Interior_close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\mmg1\Interior_close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\mmg1\Interior_close_3", 1}};
        volume = "1 * 2.8 * interior";
        range = 150;
        rangeCurve[] = {{1, 0}, {3, 0}, {7, 1}, {150, 0}};
    };
    class RHSGREF_fnfal_Interior_far_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\mmg1\Interior_far_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\mmg1\Interior_far_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\mmg1\Interior_far_3", 1}};
        volume = "1 * 2.2 * interior";
        range = 3150;
        rangeCurve[] = {{0, 0}, {150, 1}, {3150, 1}};
    };
    class RHSGREF_sd_fnfal_punch_close_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\sd_lmg762\close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\sd_lmg762\close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\sd_lmg762\close_3", 1}};
        volume = 1.1;
        range = 100;
        rangeCurve[] = {{0, 1}, {7, 1}, {15, 0}, {100, 0}};
    };
    class RHSGREF_sd_fnfal_punch_close_interior_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\sd_lmg762\close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\sd_lmg762\close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\sd_lmg762\close_3", 1}};
        volume = "1.1 * (1 - (0.15 * interior))";
        range = 100;
        rangeCurve[] = {{0, 0}, {7, 0}, {15, 1}, {100, 0}};
    };
    class RHSGREF_sd_fnfal_punch_mid_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\sd_lmg762\mid_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\sd_lmg762\mid_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\sd_lmg762\mid_3", 1}};
        volume = "1.1 * (1 - (0.2 * interior))";
        range = 250;
        rangeCurve[] = {{0, 0}, {100, 1}, {250, 0}};
    };
    class RHSGREF_sd_fnfal_punch_far_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\punch\sd_lmg762\far_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\sd_lmg762\far_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\punch\sd_lmg762\far_3", 1}};
        volume = "1.1 * (1 - (0.25 * interior))";
        range = 700;
        rangeCurve[] = {{0, 1}, {100, 0}, {250, 1}, {700, 1}};
    };
    class RHSGREF_sd_fnfal_character_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\character\BAR\character_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\character\BAR\character_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\character\BAR\character_3", 1}};
        volume = 0.5;
        range = 130;
        rangeCurve[] = {{0, 1}, {130, 0}};
    };
    class RHSGREF_sd_fnfal_Closure_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\closure\BAR\Closure_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\closure\BAR\Closure_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\closure\BAR\Closure_3", 1}};
        volume = 0.93;
        range = 35;
        rangeCurve[] = {{0, 1}, {35, 0}};
    };
    class RHSGREF_sd_fnfal_Interior_closeMono_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\sd_mmg1\Interior_close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\sd_mmg1\Interior_close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\sd_mmg1\Interior_close_3", 1}};
        volume = "1 * 2.8 * interior";
        range = 150;
        rangeCurve[] = {{1, 0}, {3, 0}, {7, 1}, {150, 0}};
    };
    class RHSGREF_sd_fnfal_Interior_far_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\sd_mmg1\Interior_far_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\sd_mmg1\Interior_far_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\sd_mmg1\Interior_far_3", 1}};
        volume = "1 * 2.2 * interior";
        range = 700;
        rangeCurve[] = {{0, 0}, {150, 1}, {700, 1}};
    };
    class RHSGREF_pistol1_Meadows_close_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\pistol1\Meadows_close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\pistol1\Meadows_close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\pistol1\Meadows_close_3", 1}};
        volume = "1 * (meadows max sea) * (1 - (interior * 0.7))";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHSGREF_pistol1_Meadows_far_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\pistol1\Meadows_far_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\pistol1\Meadows_far_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\pistol1\Meadows_far_3", 1}};
        volume = "1 * (meadows max sea) * (1 - (interior * 0.7))";
        range = 2700;
        rangeCurve[] = {{0, 0}, {150, 1}, {2700, 1}};
        limitation = 1;
    };
    class RHSGREF_pistol1_Houses_close_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\pistol1\Houses_close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\pistol1\Houses_close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\pistol1\Houses_close_3", 1}};
        volume = "1 * houses * (1 - (interior * 0.7))";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHSGREF_pistol1_Houses_far_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\pistol1\Houses_far_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\pistol1\Houses_far_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\pistol1\Houses_far_3", 1}};
        volume = "1 * houses * (1 - (interior * 0.7))";
        range = 2700;
        rangeCurve[] = {{0, 0}, {150, 1}, {2700, 1}};
        limitation = 1;
    };
    class RHSGREF_pistol1_Forest_close_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\pistol1\Forest_close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\pistol1\Forest_close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\pistol1\Forest_close_3", 1}};
        volume = "1 * (forest max trees) * (1 - (interior * 0.7))";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHSGREF_pistol1_Forest_far_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\pistol1\Forest_far_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\pistol1\Forest_far_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\pistol1\Forest_far_3", 1}};
        volume = "1 * (forest max trees) * (1 - (interior * 0.7))";
        range = 2700;
        rangeCurve[] = {{0, 0}, {150, 1}, {2700, 1}};
        limitation = 1;
    };
    class RHSGREF_pistol1_Interior_close_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\pistol1\Interior_close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\pistol1\Interior_close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\pistol1\Interior_close_3", 1}};
        volume = "1 * 3.20 * interior";
        range = 7;
        rangeCurve[] = {{0, 1}, {3, 1}, {7, 0}};
        limitation = 1;
    };
    class RHSGREF_pistol1_noise_meadows_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\noise\small\meadows_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\noise\small\meadows_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\noise\small\meadows_3", 1}};
        volume = "(1.35 * (meadows max sea)) * (1 - interior)";
        range = 200;
        rangeCurve[] = {{0, 1}, {200, 0}};
    };
    class RHSGREF_pistol1_noise_meadows_interior_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\noise\small\meadows_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\noise\small\meadows_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\noise\small\meadows_3", 1}};
        volume = "(1.35 * (meadows max sea)) * (1 - interior)";
        range = 200;
        rangeCurve[] = {{0, 1}, {200, 0}};
    };
    class RHSGREF_pistol1_noise_forest_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\noise\small\forest_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\noise\small\forest_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\noise\small\forest_3", 1}};
        volume = "(1.35 * (forest max trees)) * (1 - interior)";
        range = 200;
        rangeCurve[] = {{0, 1}, {200, 0}};
    };
    class RHSGREF_pistol1_noise_houses_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\noise\small\houses_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\noise\small\houses_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\noise\small\houses_3", 1}};
        volume = "(1.35 * houses)) * (1 - interior)";
        range = 200;
        rangeCurve[] = {{0, 1}, {200, 0}};
    };
    class RHSGREF_rifle1_Meadows_close_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle1\Meadows_close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle1\Meadows_close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle1\Meadows_close_3", 1}};
        volume = "0.72 * (meadows max sea) * (1 - (interior * 0.7))";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHSGREF_rifle1_Meadows_far_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle1\Meadows_far_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle1\Meadows_far_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle1\Meadows_far_3", 1}};
        volume = "0.72 * (meadows max sea) * (1 - (interior * 0.7))";
        range = 2800;
        rangeCurve[] = {{0, 0}, {150, 1}, {2800, 1}};
        limitation = 1;
    };
    class RHSGREF_rifle1_Houses_close_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle1\Houses_close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle1\Houses_close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle1\Houses_close_3", 1}};
        volume = "0.72 * houses * (1 - (interior * 0.7))";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHSGREF_rifle1_Houses_far_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle1\Houses_far_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle1\Houses_far_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle1\Houses_far_3", 1}};
        volume = "0.72 * houses * (1 - (interior * 0.7))";
        range = 2800;
        rangeCurve[] = {{0, 0}, {150, 1}, {2800, 1}};
        limitation = 1;
    };
    class RHSGREF_rifle1_Forest_close_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle1\Forest_close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle1\Forest_close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle1\Forest_close_3", 1}};
        volume = "0.72 * (forest max trees) * (1 - (interior * 0.7))";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHSGREF_rifle1_Forest_far_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle1\Forest_far_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle1\Forest_far_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle1\Forest_far_3", 1}};
        volume = "0.72 * (forest max trees) * (1 - (interior * 0.7))";
        range = 2800;
        rangeCurve[] = {{0, 0}, {150, 1}, {2800, 1}};
        limitation = 1;
    };
    class RHSGREF_rifle1_Interior_close_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle1\Interior_close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle1\Interior_close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle1\Interior_close_3", 1}};
        volume = "0.72 * 3.20 * interior";
        range = 7;
        rangeCurve[] = {{0, 1}, {3, 1}, {7, 0}};
        limitation = 1;
    };
    class RHSGREF_rifle1_noise_meadows_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\noise\mid\meadows_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\noise\mid\meadows_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\noise\mid\meadows_3", 1}};
        volume = "(1.35 * (meadows max sea)) * (1 - interior)";
        range = 230;
        rangeCurve[] = {{0, 1}, {230, 0}};
    };
    class RHSGREF_rifle1_noise_meadows_interior_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\noise\mid\meadows_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\noise\mid\meadows_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\noise\mid\meadows_3", 1}};
        volume = "(1.35 * (meadows max sea)) * (1 - interior)";
        range = 230;
        rangeCurve[] = {{0, 1}, {230, 0}};
    };
    class RHSGREF_rifle1_noise_forest_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\noise\mid\forest_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\noise\mid\forest_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\noise\mid\forest_3", 1}};
        volume = "(1.35 * (forest max trees)) * (1 - interior)";
        range = 230;
        rangeCurve[] = {{0, 1}, {230, 0}};
    };
    class RHSGREF_rifle1_noise_houses_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\noise\mid\houses_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\noise\mid\houses_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\noise\mid\houses_3", 1}};
        volume = "(1.35 * houses)) * (1 - interior)";
        range = 230;
        rangeCurve[] = {{0, 1}, {230, 0}};
    };
    class RHSGREF_sd_rifle1_Meadows_close_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\sd_rifle1\Meadows_close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\sd_rifle1\Meadows_close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\sd_rifle1\Meadows_close_3", 1}};
        volume = "0.72 * (meadows max sea) * (1 - (interior * 0.7))";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHSGREF_sd_rifle1_Meadows_far_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\sd_rifle1\Meadows_far_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\sd_rifle1\Meadows_far_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\sd_rifle1\Meadows_far_3", 1}};
        volume = "0.72 * (meadows max sea) * (1 - (interior * 0.7))";
        range = 600;
        rangeCurve[] = {{0, 0}, {150, 1}, {600, 1}};
        limitation = 1;
    };
    class RHSGREF_sd_rifle1_Houses_close_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\sd_rifle1\Houses_close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\sd_rifle1\Houses_close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\sd_rifle1\Houses_close_3", 1}};
        volume = "0.72 * houses * (1 - (interior * 0.7))";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHSGREF_sd_rifle1_Houses_far_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\sd_rifle1\Houses_far_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\sd_rifle1\Houses_far_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\sd_rifle1\Houses_far_3", 1}};
        volume = "0.72 * houses * (1 - (interior * 0.7))";
        range = 600;
        rangeCurve[] = {{0, 0}, {150, 1}, {600, 1}};
        limitation = 1;
    };
    class RHSGREF_sd_rifle1_Forest_close_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\sd_rifle1\Forest_close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\sd_rifle1\Forest_close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\sd_rifle1\Forest_close_3", 1}};
        volume = "0.72 * (forest max trees) * (1 - (interior * 0.7))";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHSGREF_sd_rifle1_Forest_far_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\sd_rifle1\Forest_far_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\sd_rifle1\Forest_far_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\sd_rifle1\Forest_far_3", 1}};
        volume = "0.72 * (forest max trees) * (1 - (interior * 0.7))";
        range = 600;
        rangeCurve[] = {{0, 0}, {150, 1}, {600, 1}};
        limitation = 1;
    };
    class RHSGREF_sd_rifle1_Interior_close_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\sd_rifle1\Interior_close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\sd_rifle1\Interior_close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\sd_rifle1\Interior_close_3", 1}};
        volume = "0.72 * 3.20 * interior";
        range = 7;
        rangeCurve[] = {{0, 1}, {3, 1}, {7, 0}};
        limitation = 1;
    };
    class RHSGREF_sd_rifle1_noise_meadows_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\noise\small\meadows_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\noise\small\meadows_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\noise\small\meadows_3", 1}};
        volume = "(1.35 * (meadows max sea)) * (1 - interior)";
        range = 180;
        rangeCurve[] = {{0, 1}, {180, 0}};
    };
    class RHSGREF_sd_rifle1_noise_meadows_interior_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\noise\small\meadows_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\noise\small\meadows_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\noise\small\meadows_3", 1}};
        volume = "(1.35 * (meadows max sea)) * (1 - interior)";
        range = 180;
        rangeCurve[] = {{0, 1}, {180, 0}};
    };
    class RHSGREF_sd_rifle1_noise_forest_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\noise\small\forest_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\noise\small\forest_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\noise\small\forest_3", 1}};
        volume = "(1.35 * (forest max trees)) * (1 - interior)";
        range = 180;
        rangeCurve[] = {{0, 1}, {180, 0}};
    };
    class RHSGREF_sd_rifle1_noise_houses_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\noise\small\houses_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\noise\small\houses_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\noise\small\houses_3", 1}};
        volume = "(1.35 * houses)) * (1 - interior)";
        range = 180;
        rangeCurve[] = {{0, 1}, {180, 0}};
    };
    class RHSGREF_sd_mmg1_Meadows_close_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\sd_mmg1\Meadows_close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\sd_mmg1\Meadows_close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\sd_mmg1\Meadows_close_3", 1}};
        volume = "0.72 * (meadows max sea) * (1 - (interior * 0.7))";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHSGREF_sd_mmg1_Meadows_far_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\sd_mmg1\Meadows_far_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\sd_mmg1\Meadows_far_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\sd_mmg1\Meadows_far_3", 1}};
        volume = "0.72 * (meadows max sea) * (1 - (interior * 0.7))";
        range = 800;
        rangeCurve[] = {{0, 0}, {150, 1}, {800, 1}};
        limitation = 1;
    };
    class RHSGREF_sd_mmg1_Houses_close_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\sd_mmg1\Houses_close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\sd_mmg1\Houses_close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\sd_mmg1\Houses_close_3", 1}};
        volume = "0.72 * houses * (1 - (interior * 0.7))";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHSGREF_sd_mmg1_Houses_far_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\sd_mmg1\Houses_far_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\sd_mmg1\Houses_far_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\sd_mmg1\Houses_far_3", 1}};
        volume = "0.72 * houses * (1 - (interior * 0.7))";
        range = 800;
        rangeCurve[] = {{0, 0}, {150, 1}, {800, 1}};
        limitation = 1;
    };
    class RHSGREF_sd_mmg1_Forest_close_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\sd_mmg1\Forest_close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\sd_mmg1\Forest_close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\sd_mmg1\Forest_close_3", 1}};
        volume = "0.72 * (forest max trees) * (1 - (interior * 0.7))";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHSGREF_sd_mmg1_Forest_far_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\sd_mmg1\Forest_far_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\sd_mmg1\Forest_far_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\sd_mmg1\Forest_far_3", 1}};
        volume = "0.72 * (forest max trees) * (1 - (interior * 0.7))";
        range = 800;
        rangeCurve[] = {{0, 0}, {150, 1}, {800, 1}};
        limitation = 1;
    };
    class RHSGREF_sd_mmg1_Interior_close_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\sd_mmg1\Interior_close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\sd_mmg1\Interior_close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\sd_mmg1\Interior_close_3", 1}};
        volume = "0.72 * 3.20 * interior";
        range = 7;
        rangeCurve[] = {{0, 1}, {3, 1}, {7, 0}};
        limitation = 1;
    };
    class RHSGREF_sd_mmg1_noise_meadows_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\noise\small\meadows_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\noise\small\meadows_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\noise\small\meadows_3", 1}};
        volume = "(1.35 * (meadows max sea)) * (1 - interior)";
        range = 180;
        rangeCurve[] = {{0, 1}, {180, 0}};
    };
    class RHSGREF_sd_mmg1_noise_meadows_interior_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\noise\small\meadows_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\noise\small\meadows_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\noise\small\meadows_3", 1}};
        volume = "(1.35 * (meadows max sea)) * (1 - interior)";
        range = 180;
        rangeCurve[] = {{0, 1}, {180, 0}};
    };
    class RHSGREF_sd_mmg1_noise_forest_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\noise\small\forest_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\noise\small\forest_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\noise\small\forest_3", 1}};
        volume = "(1.35 * (forest max trees)) * (1 - interior)";
        range = 180;
        rangeCurve[] = {{0, 1}, {180, 0}};
    };
    class RHSGREF_sd_mmg1_noise_houses_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\noise\small\houses_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\noise\small\houses_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\noise\small\houses_3", 1}};
        volume = "(1.35 * houses)) * (1 - interior)";
        range = 180;
        rangeCurve[] = {{0, 1}, {180, 0}};
    };
    class RHSGREF_mmg1_Meadows_close_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\mmg1\Meadows_close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\mmg1\Meadows_close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\mmg1\Meadows_close_3", 1}};
        volume = "0.88 * (meadows max sea) * (1 - (interior * 0.7))";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHSGREF_mmg1_Meadows_far_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\mmg1\Meadows_far_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\mmg1\Meadows_far_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\mmg1\Meadows_far_3", 1}};
        volume = "0.88 * (meadows max sea) * (1 - (interior * 0.7))";
        range = 3100;
        rangeCurve[] = {{0, 0}, {150, 1}, {3100, 1}};
        limitation = 1;
    };
    class RHSGREF_mmg1_Houses_close_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\mmg1\Houses_close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\mmg1\Houses_close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\mmg1\Houses_close_3", 1}};
        volume = "0.88 * houses * (1 - (interior * 0.7))";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHSGREF_mmg1_Houses_far_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\mmg1\Houses_far_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\mmg1\Houses_far_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\mmg1\Houses_far_3", 1}};
        volume = "0.88 * houses * (1 - (interior * 0.7))";
        range = 3100;
        rangeCurve[] = {{0, 0}, {150, 1}, {3100, 1}};
        limitation = 1;
    };
    class RHSGREF_mmg1_Forest_close_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\mmg1\Forest_close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\mmg1\Forest_close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\mmg1\Forest_close_3", 1}};
        volume = "0.88 * (forest max trees) * (1 - (interior * 0.7))";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHSGREF_mmg1_Forest_far_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\mmg1\Forest_far_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\mmg1\Forest_far_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\mmg1\Forest_far_3", 1}};
        volume = "0.88 * (forest max trees) * (1 - (interior * 0.7))";
        range = 3100;
        rangeCurve[] = {{0, 0}, {150, 1}, {3100, 1}};
        limitation = 1;
    };
    class RHSGREF_mmg1_Interior_close_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\mmg1\Interior_close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\mmg1\Interior_close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\mmg1\Interior_close_3", 1}};
        volume = "0.88 * 3.20 * interior";
        range = 7;
        rangeCurve[] = {{0, 1}, {3, 1}, {7, 0}};
        limitation = 1;
    };
    class RHSGREF_mmg1_noise_meadows_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\noise\big\meadows_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\noise\big\meadows_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\noise\big\meadows_3", 1}};
        volume = "(1.35 * (meadows max sea)) * (1 - interior)";
        range = 250;
        rangeCurve[] = {{0, 1}, {250, 0}};
    };
    class RHSGREF_mmg1_noise_meadows_interior_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\noise\big\meadows_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\noise\big\meadows_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\noise\big\meadows_3", 1}};
        volume = "(1.35 * (meadows max sea)) * (1 - interior)";
        range = 250;
        rangeCurve[] = {{0, 1}, {250, 0}};
    };
    class RHSGREF_mmg1_noise_forest_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\noise\big\forest_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\noise\big\forest_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\noise\big\forest_3", 1}};
        volume = "(1.35 * (forest max trees)) * (1 - interior)";
        range = 250;
        rangeCurve[] = {{0, 1}, {250, 0}};
    };
    class RHSGREF_mmg1_noise_houses_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\noise\big\houses_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\noise\big\houses_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\noise\big\houses_3", 1}};
        volume = "(1.35 * houses)) * (1 - interior)";
        range = 250;
        rangeCurve[] = {{0, 1}, {250, 0}};
    };
    class RHSGREF_mmg1_delayed_Meadows_close_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\mmg1_delayed\Meadows_close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\mmg1_delayed\Meadows_close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\mmg1_delayed\Meadows_close_3", 1}};
        volume = "0.88 * (meadows max sea) * (1 - (interior * 0.7))";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHSGREF_mmg1_delayed_Meadows_far_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\mmg1_delayed\Meadows_far_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\mmg1_delayed\Meadows_far_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\mmg1_delayed\Meadows_far_3", 1}};
        volume = "0.88 * (meadows max sea) * (1 - (interior * 0.7))";
        range = 3100;
        rangeCurve[] = {{0, 0}, {150, 1}, {3100, 1}};
        limitation = 1;
    };
    class RHSGREF_mmg1_delayed_Houses_close_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\mmg1_delayed\Houses_close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\mmg1_delayed\Houses_close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\mmg1_delayed\Houses_close_3", 1}};
        volume = "0.88 * houses * (1 - (interior * 0.7))";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHSGREF_mmg1_delayed_Houses_far_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\mmg1_delayed\Houses_far_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\mmg1_delayed\Houses_far_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\mmg1_delayed\Houses_far_3", 1}};
        volume = "0.88 * houses * (1 - (interior * 0.7))";
        range = 3100;
        rangeCurve[] = {{0, 0}, {150, 1}, {3100, 1}};
        limitation = 1;
    };
    class RHSGREF_mmg1_delayed_Forest_close_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\mmg1_delayed\Forest_close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\mmg1_delayed\Forest_close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\mmg1_delayed\Forest_close_3", 1}};
        volume = "0.88 * (forest max trees) * (1 - (interior * 0.7))";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHSGREF_mmg1_delayed_Forest_far_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\mmg1_delayed\Forest_far_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\mmg1_delayed\Forest_far_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\mmg1_delayed\Forest_far_3", 1}};
        volume = "0.88 * (forest max trees) * (1 - (interior * 0.7))";
        range = 3100;
        rangeCurve[] = {{0, 0}, {150, 1}, {3100, 1}};
        limitation = 1;
    };
    class RHSGREF_mmg1_delayed_Interior_close_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\mmg1_delayed\Interior_close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\mmg1_delayed\Interior_close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\mmg1_delayed\Interior_close_3", 1}};
        volume = "0.88 * 3.20 * interior";
        range = 7;
        rangeCurve[] = {{0, 1}, {3, 1}, {7, 0}};
        limitation = 1;
    };
    class RHSGREF_mmg1_delayed_noise_meadows_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\noise\big\meadows_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\noise\big\meadows_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\noise\big\meadows_3", 1}};
        volume = "(1.35 * (meadows max sea)) * (1 - interior)";
        range = 250;
        rangeCurve[] = {{0, 1}, {250, 0}};
    };
    class RHSGREF_mmg1_delayed_noise_meadows_interior_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\noise\big\meadows_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\noise\big\meadows_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\noise\big\meadows_3", 1}};
        volume = "(1.35 * (meadows max sea)) * (1 - interior)";
        range = 250;
        rangeCurve[] = {{0, 1}, {250, 0}};
    };
    class RHSGREF_mmg1_delayed_noise_forest_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\noise\big\forest_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\noise\big\forest_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\noise\big\forest_3", 1}};
        volume = "(1.35 * (forest max trees)) * (1 - interior)";
        range = 250;
        rangeCurve[] = {{0, 1}, {250, 0}};
    };
    class RHSGREF_mmg1_delayed_noise_houses_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\noise\big\houses_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\noise\big\houses_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\noise\big\houses_3", 1}};
        volume = "(1.35 * houses)) * (1 - interior)";
        range = 250;
        rangeCurve[] = {{0, 1}, {250, 0}};
    };
    class RHSGREF_rifle2_Meadows_close_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle2\Meadows_close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle2\Meadows_close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle2\Meadows_close_3", 1}};
        volume = "0.93 * (meadows max sea) * (1 - (interior * 0.7))";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHSGREF_rifle2_Meadows_far_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle2\Meadows_far_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle2\Meadows_far_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle2\Meadows_far_3", 1}};
        volume = "0.93 * (meadows max sea) * (1 - (interior * 0.7))";
        range = 3100;
        rangeCurve[] = {{0, 0}, {150, 1}, {3100, 1}};
        limitation = 1;
    };
    class RHSGREF_rifle2_Houses_close_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle2\Houses_close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle2\Houses_close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle2\Houses_close_3", 1}};
        volume = "0.93 * houses * (1 - (interior * 0.7))";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHSGREF_rifle2_Houses_far_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle2\Houses_far_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle2\Houses_far_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle2\Houses_far_3", 1}};
        volume = "0.93 * houses * (1 - (interior * 0.7))";
        range = 3100;
        rangeCurve[] = {{0, 0}, {150, 1}, {3100, 1}};
        limitation = 1;
    };
    class RHSGREF_rifle2_Forest_close_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle2\Forest_close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle2\Forest_close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle2\Forest_close_3", 1}};
        volume = "0.93 * (forest max trees) * (1 - (interior * 0.7))";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHSGREF_rifle2_Forest_far_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle2\Forest_far_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle2\Forest_far_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle2\Forest_far_3", 1}};
        volume = "0.93 * (forest max trees) * (1 - (interior * 0.7))";
        range = 3100;
        rangeCurve[] = {{0, 0}, {150, 1}, {3100, 1}};
        limitation = 1;
    };
    class RHSGREF_rifle2_Interior_close_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle2\Interior_close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle2\Interior_close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\rifle2\Interior_close_3", 1}};
        volume = "0.93 * 3.20 * interior";
        range = 7;
        rangeCurve[] = {{0, 1}, {3, 1}, {7, 0}};
        limitation = 1;
    };
    class RHSGREF_rifle2_noise_meadows_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\noise\big\meadows_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\noise\big\meadows_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\noise\big\meadows_3", 1}};
        volume = "(1.35 * (meadows max sea)) * (1 - interior)";
        range = 250;
        rangeCurve[] = {{0, 1}, {250, 0}};
    };
    class RHSGREF_rifle2_noise_meadows_interior_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\noise\big\meadows_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\noise\big\meadows_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\noise\big\meadows_3", 1}};
        volume = "(1.35 * (meadows max sea)) * (1 - interior)";
        range = 250;
        rangeCurve[] = {{0, 1}, {250, 0}};
    };
    class RHSGREF_rifle2_noise_forest_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\noise\big\forest_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\noise\big\forest_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\noise\big\forest_3", 1}};
        volume = "(1.35 * (forest max trees)) * (1 - interior)";
        range = 250;
        rangeCurve[] = {{0, 1}, {250, 0}};
    };
    class RHSGREF_rifle2_noise_houses_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\noise\big\houses_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\noise\big\houses_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\noise\big\houses_3", 1}};
        volume = "(1.35 * houses)) * (1 - interior)";
        range = 250;
        rangeCurve[] = {{0, 1}, {250, 0}};
    };
    class RHSGREF_cannon_Meadows_close_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\cannon\Meadows_close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\cannon\Meadows_close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\cannon\Meadows_close_3", 1}};
        volume = "1.3 * (meadows max sea) * (1 - (interior * 0.7))";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHSGREF_cannon_Meadows_far_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\cannon\Meadows_far_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\cannon\Meadows_far_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\cannon\Meadows_far_3", 1}};
        volume = "1.3 * (meadows max sea) * (1 - (interior * 0.7))";
        range = 4500;
        rangeCurve[] = {{0, 0}, {150, 1}, {4500, 1}};
        limitation = 1;
    };
    class RHSGREF_cannon_Houses_close_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\cannon\Houses_close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\cannon\Houses_close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\cannon\Houses_close_3", 1}};
        volume = "1.3 * houses * (1 - (interior * 0.7))";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHSGREF_cannon_Houses_far_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\cannon\Houses_far_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\cannon\Houses_far_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\cannon\Houses_far_3", 1}};
        volume = "1.3 * houses * (1 - (interior * 0.7))";
        range = 4500;
        rangeCurve[] = {{0, 0}, {150, 1}, {4500, 1}};
        limitation = 1;
    };
    class RHSGREF_cannon_Forest_close_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\cannon\Forest_close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\cannon\Forest_close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\cannon\Forest_close_3", 1}};
        volume = "1.3 * (forest max trees) * (1 - (interior * 0.7))";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHSGREF_cannon_Forest_far_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\cannon\Forest_far_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\cannon\Forest_far_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\cannon\Forest_far_3", 1}};
        volume = "1.3 * (forest max trees) * (1 - (interior * 0.7))";
        range = 4500;
        rangeCurve[] = {{0, 0}, {150, 1}, {4500, 1}};
        limitation = 1;
    };
    class RHSGREF_cannon_Interior_close_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\cannon\Interior_close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\cannon\Interior_close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\cannon\Interior_close_3", 1}};
        volume = "1.3 * 3.20 * interior";
        range = 7;
        rangeCurve[] = {{0, 1}, {3, 1}, {7, 0}};
        limitation = 1;
    };
    class RHSGREF_cannon_noise_meadows_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\noise\big\meadows_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\noise\big\meadows_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\noise\big\meadows_3", 1}};
        volume = "(1.35 * (meadows max sea)) * (1 - interior)";
        range = 300;
        rangeCurve[] = {{0, 1}, {300, 0}};
    };
    class RHSGREF_cannon_noise_meadows_interior_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\noise\big\meadows_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\noise\big\meadows_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\noise\big\meadows_3", 1}};
        volume = "(1.35 * (meadows max sea)) * (1 - interior)";
        range = 300;
        rangeCurve[] = {{0, 1}, {300, 0}};
    };
    class RHSGREF_cannon_noise_forest_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\noise\big\forest_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\noise\big\forest_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\noise\big\forest_3", 1}};
        volume = "(1.35 * (forest max trees)) * (1 - interior)";
        range = 300;
        rangeCurve[] = {{0, 1}, {300, 0}};
    };
    class RHSGREF_cannon_noise_houses_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\noise\big\houses_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\noise\big\houses_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\noise\big\houses_3", 1}};
        volume = "(1.35 * houses)) * (1 - interior)";
        range = 300;
        rangeCurve[] = {{0, 1}, {300, 0}};
    };
    class RHSGREF_autocannon_Meadows_close_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\autocannon\Meadows_close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\autocannon\Meadows_close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\autocannon\Meadows_close_3", 1}};
        volume = "1.10 * (meadows max sea) * (1 - (interior * 0.7))";
        range = 300;
        rangeCurve[] = {{0, 1}, {300, 0}};
        limitation = 1;
    };
    class RHSGREF_autocannon_Meadows_far_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\autocannon\Meadows_far_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\autocannon\Meadows_far_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\autocannon\Meadows_far_3", 1}};
        volume = "1.10 * (meadows max sea) * (1 - (interior * 0.7))";
        range = 4200;
        rangeCurve[] = {{0, 0}, {300, 1}, {4200, 1}};
        limitation = 1;
    };
    class RHSGREF_autocannon_Houses_close_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\autocannon\Houses_close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\autocannon\Houses_close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\autocannon\Houses_close_3", 1}};
        volume = "1.10 * houses * (1 - (interior * 0.7))";
        range = 300;
        rangeCurve[] = {{0, 1}, {300, 0}};
        limitation = 1;
    };
    class RHSGREF_autocannon_Houses_far_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\autocannon\Houses_far_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\autocannon\Houses_far_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\autocannon\Houses_far_3", 1}};
        volume = "1.10 * houses * (1 - (interior * 0.7))";
        range = 4200;
        rangeCurve[] = {{0, 0}, {300, 1}, {4200, 1}};
        limitation = 1;
    };
    class RHSGREF_autocannon_Forest_close_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\autocannon\Forest_close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\autocannon\Forest_close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\autocannon\Forest_close_3", 1}};
        volume = "1.10 * (forest max trees) * (1 - (interior * 0.7))";
        range = 300;
        rangeCurve[] = {{0, 1}, {300, 0}};
        limitation = 1;
    };
    class RHSGREF_autocannon_Forest_far_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\autocannon\Forest_far_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\autocannon\Forest_far_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\autocannon\Forest_far_3", 1}};
        volume = "1.10 * (forest max trees) * (1 - (interior * 0.7))";
        range = 4200;
        rangeCurve[] = {{0, 0}, {300, 1}, {4200, 1}};
        limitation = 1;
    };
    class RHSGREF_autocannon_Interior_close_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\autocannon\Interior_close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\autocannon\Interior_close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\autocannon\Interior_close_3", 1}};
        volume = "1.10 * 3.20 * interior";
        range = 7;
        rangeCurve[] = {{0, 1}, {3, 1}, {7, 0}};
        limitation = 1;
    };
    class RHSGREF_autocannon_noise_meadows_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\noise\big\meadows_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\noise\big\meadows_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\noise\big\meadows_3", 1}};
        volume = "(1.35 * (meadows max sea)) * (1 - interior)";
        range = 300;
        rangeCurve[] = {{0, 1}, {300, 0}};
    };
    class RHSGREF_autocannon_noise_meadows_interior_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\noise\big\meadows_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\noise\big\meadows_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\noise\big\meadows_3", 1}};
        volume = "(1.35 * (meadows max sea)) * (1 - interior)";
        range = 300;
        rangeCurve[] = {{0, 1}, {300, 0}};
    };
    class RHSGREF_autocannon_noise_forest_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\noise\big\forest_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\noise\big\forest_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\noise\big\forest_3", 1}};
        volume = "(1.35 * (forest max trees)) * (1 - interior)";
        range = 300;
        rangeCurve[] = {{0, 1}, {300, 0}};
    };
    class RHSGREF_autocannon_noise_houses_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\noise\big\houses_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\noise\big\houses_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\noise\big\houses_3", 1}};
        volume = "(1.35 * houses)) * (1 - interior)";
        range = 300;
        rangeCurve[] = {{0, 1}, {300, 0}};
    };
    class RHSGREF_20mm_Meadows_close_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\20mm\Meadows_close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\20mm\Meadows_close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\20mm\Meadows_close_3", 1}};
        volume = "1 * (meadows max sea) * (1 - (interior * 0.7))";
        range = 300;
        rangeCurve[] = {{0, 1}, {300, 0}};
        limitation = 1;
    };
    class RHSGREF_20mm_Meadows_far_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\20mm\Meadows_far_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\20mm\Meadows_far_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\20mm\Meadows_far_3", 1}};
        volume = "1 * (meadows max sea) * (1 - (interior * 0.7))";
        range = 4200;
        rangeCurve[] = {{0, 0}, {300, 1}, {4200, 1}};
        limitation = 1;
    };
    class RHSGREF_20mm_Houses_close_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\20mm\Houses_close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\20mm\Houses_close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\20mm\Houses_close_3", 1}};
        volume = "1 * houses * (1 - (interior * 0.7))";
        range = 300;
        rangeCurve[] = {{0, 1}, {300, 0}};
        limitation = 1;
    };
    class RHSGREF_20mm_Houses_far_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\20mm\Houses_far_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\20mm\Houses_far_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\20mm\Houses_far_3", 1}};
        volume = "1 * houses * (1 - (interior * 0.7))";
        range = 4200;
        rangeCurve[] = {{0, 0}, {300, 1}, {4200, 1}};
        limitation = 1;
    };
    class RHSGREF_20mm_Forest_close_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\20mm\Forest_close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\20mm\Forest_close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\20mm\Forest_close_3", 1}};
        volume = "1 * (forest max trees) * (1 - (interior * 0.7))";
        range = 300;
        rangeCurve[] = {{0, 1}, {300, 0}};
        limitation = 1;
    };
    class RHSGREF_20mm_Forest_far_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\20mm\Forest_far_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\20mm\Forest_far_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\20mm\Forest_far_3", 1}};
        volume = "1 * (forest max trees) * (1 - (interior * 0.7))";
        range = 4200;
        rangeCurve[] = {{0, 0}, {300, 1}, {4200, 1}};
        limitation = 1;
    };
    class RHSGREF_20mm_Interior_close_SoundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\tails\20mm\Interior_close_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\20mm\Interior_close_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\tails\20mm\Interior_close_3", 1}};
        volume = "1 * 3.20 * interior";
        range = 7;
        rangeCurve[] = {{0, 1}, {3, 1}, {7, 0}};
        limitation = 1;
    };
    class RHSGREF_20mm_noise_meadows_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\noise\big\meadows_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\noise\big\meadows_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\noise\big\meadows_3", 1}};
        volume = "(1.35 * (meadows max sea)) * (1 - interior)";
        range = 300;
        rangeCurve[] = {{0, 1}, {300, 0}};
    };
    class RHSGREF_20mm_noise_meadows_interior_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\noise\big\meadows_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\noise\big\meadows_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\noise\big\meadows_3", 1}};
        volume = "(1.35 * (meadows max sea)) * (1 - interior)";
        range = 300;
        rangeCurve[] = {{0, 1}, {300, 0}};
    };
    class RHSGREF_20mm_noise_forest_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\noise\big\forest_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\noise\big\forest_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\noise\big\forest_3", 1}};
        volume = "(1.35 * (forest max trees)) * (1 - interior)";
        range = 300;
        rangeCurve[] = {{0, 1}, {300, 0}};
    };
    class RHSGREF_20mm_noise_houses_soundShader {
        samples[] = {{"RHSGREF\addons\RHSGREF_weapon_sounds\noise\big\houses_1", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\noise\big\houses_2", 1}, {"RHSGREF\addons\RHSGREF_weapon_sounds\noise\big\houses_3", 1}};
        volume = "(1.35 * houses)) * (1 - interior)";
        range = 300;
        rangeCurve[] = {{0, 1}, {300, 0}};
    };
};
class CfgSoundSets {
    class RHSGREF_M70_Shot_SoundSet {
        soundShaders[] = {
            "RHSGREF_M70_punch_close_SoundShader",
            "RHSGREF_M70_punch_close_interior_SoundShader",
            "RHSGREF_M70_punch_mid_SoundShader",
            "RHSGREF_M70_punch_far_SoundShader",
            "RHSGREF_M70_character_SoundShader",
            "RHSGREF_M70_Closure_SoundShader",
            "RHSGREF_M70_Interior_closeMono_SoundShader",
            "RHSGREF_M70_Interior_far_SoundShader"
        };
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        volumeFactor = 1.25;
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "RHSGREF_Shot_light_3DProcessingType";
        distanceFilter = "RHSGREF_rifleShotDistanceFilter";
        frequencyRandomizer = 0.5;
        frequencyRandomizerMin = 0.1;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHSGREF_sd_M70_Shot_SoundSet {
        soundShaders[] = {
            "RHSGREF_sd_M70_punch_close_SoundShader",
            "RHSGREF_sd_M70_punch_close_interior_SoundShader",
            "RHSGREF_sd_M70_punch_mid_SoundShader",
            "RHSGREF_sd_M70_punch_far_SoundShader",
            "RHSGREF_sd_M70_character_SoundShader",
            "RHSGREF_sd_M70_Closure_SoundShader",
            "RHSGREF_sd_M70_Interior_closeMono_SoundShader",
            "RHSGREF_sd_M70_Interior_far_SoundShader"
        };
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        volumeFactor = 1.25;
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "RHSGREF_Shot_light_3DProcessingType";
        distanceFilter = "RHSGREF_rifleShotDistanceFilter";
        frequencyRandomizer = 0.5;
        frequencyRandomizerMin = 0.1;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHSGREF_M21_Shot_SoundSet {
        soundShaders[] = {
            "RHSGREF_M21_punch_close_SoundShader",
            "RHSGREF_M21_punch_close_interior_SoundShader",
            "RHSGREF_M21_punch_mid_SoundShader",
            "RHSGREF_M21_punch_far_SoundShader",
            "RHSGREF_M21_character_SoundShader",
            "RHSGREF_M21_Closure_SoundShader",
            "RHSGREF_M21_Interior_closeMono_SoundShader",
            "RHSGREF_M21_Interior_far_SoundShader"
        };
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        volumeFactor = 1.25;
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "RHSGREF_Shot_light_3DProcessingType";
        distanceFilter = "RHSGREF_rifleShotDistanceFilter";
        frequencyRandomizer = 0.5;
        frequencyRandomizerMin = 0.1;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHSGREF_sd_M21_Shot_SoundSet {
        soundShaders[] = {
            "RHSGREF_sd_M21_punch_close_SoundShader",
            "RHSGREF_sd_M21_punch_close_interior_SoundShader",
            "RHSGREF_sd_M21_punch_mid_SoundShader",
            "RHSGREF_sd_M21_punch_far_SoundShader",
            "RHSGREF_sd_M21_character_SoundShader",
            "RHSGREF_sd_M21_Closure_SoundShader",
            "RHSGREF_sd_M21_Interior_closeMono_SoundShader",
            "RHSGREF_sd_M21_Interior_far_SoundShader"
        };
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        volumeFactor = 1.25;
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "RHSGREF_Shot_light_3DProcessingType";
        distanceFilter = "RHSGREF_rifleShotDistanceFilter";
        frequencyRandomizer = 0.5;
        frequencyRandomizerMin = 0.1;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHSGREF_M76_Shot_SoundSet {
        soundShaders[] = {
            "RHSGREF_M76_punch_close_SoundShader",
            "RHSGREF_M76_punch_close_interior_SoundShader",
            "RHSGREF_M76_punch_mid_SoundShader",
            "RHSGREF_M76_punch_far_SoundShader",
            "RHSGREF_M76_character_SoundShader",
            "RHSGREF_M76_Closure_SoundShader",
            "RHSGREF_M76_Interior_closeMono_SoundShader",
            "RHSGREF_M76_Interior_far_SoundShader"
        };
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        volumeFactor = 1.25;
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "RHSGREF_Shot_light_3DProcessingType";
        distanceFilter = "RHSGREF_rifleShotDistanceFilter";
        frequencyRandomizer = 0.5;
        frequencyRandomizerMin = 0.1;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHSGREF_sd_M76_Shot_SoundSet {
        soundShaders[] = {
            "RHSGREF_sd_M76_punch_close_SoundShader",
            "RHSGREF_sd_M76_punch_close_interior_SoundShader",
            "RHSGREF_sd_M76_punch_mid_SoundShader",
            "RHSGREF_sd_M76_punch_far_SoundShader",
            "RHSGREF_sd_M76_character_SoundShader",
            "RHSGREF_sd_M76_Closure_SoundShader",
            "RHSGREF_sd_M76_Interior_closeMono_SoundShader",
            "RHSGREF_sd_M76_Interior_far_SoundShader"
        };
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        volumeFactor = 1.25;
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "RHSGREF_Shot_light_3DProcessingType";
        distanceFilter = "RHSGREF_rifleShotDistanceFilter";
        frequencyRandomizer = 0.5;
        frequencyRandomizerMin = 0.1;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHSGREF_k98_Shot_SoundSet {
        soundShaders[] = {
            "RHSGREF_k98_punch_close_SoundShader",
            "RHSGREF_k98_punch_close_interior_SoundShader",
            "RHSGREF_k98_punch_mid_SoundShader",
            "RHSGREF_k98_punch_far_SoundShader",
            "RHSGREF_k98_character_SoundShader",
            "RHSGREF_k98_Closure_SoundShader",
            "RHSGREF_k98_Interior_closeMono_SoundShader",
            "RHSGREF_k98_Interior_far_SoundShader"
        };
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        volumeFactor = 1.25;
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "RHSGREF_Shot_light_3DProcessingType";
        distanceFilter = "RHSGREF_rifleShotDistanceFilter";
        frequencyRandomizer = 0.5;
        frequencyRandomizerMin = 0.1;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHSGREF_nagant_Shot_SoundSet {
        soundShaders[] = {
            "RHSGREF_nagant_punch_close_SoundShader",
            "RHSGREF_nagant_punch_close_interior_SoundShader",
            "RHSGREF_nagant_punch_mid_SoundShader",
            "RHSGREF_nagant_punch_far_SoundShader",
            "RHSGREF_nagant_character_SoundShader",
            "RHSGREF_nagant_Closure_SoundShader",
            "RHSGREF_nagant_Interior_closeMono_SoundShader",
            "RHSGREF_nagant_Interior_far_SoundShader"
        };
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        volumeFactor = 1.25;
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "RHSGREF_Shot_light_3DProcessingType";
        distanceFilter = "RHSGREF_rifleShotDistanceFilter";
        frequencyRandomizer = 0.5;
        frequencyRandomizerMin = 0.1;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHSGREF_sbr_Shot_SoundSet {
        soundShaders[] = {
            "RHSGREF_sbr_punch_close_SoundShader",
            "RHSGREF_sbr_punch_close_interior_SoundShader",
            "RHSGREF_sbr_punch_mid_SoundShader",
            "RHSGREF_sbr_punch_far_SoundShader",
            "RHSGREF_sbr_character_SoundShader",
            "RHSGREF_sbr_Closure_SoundShader",
            "RHSGREF_sbr_Interior_closeMono_SoundShader",
            "RHSGREF_sbr_Interior_far_SoundShader"
        };
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        volumeFactor = 1.25;
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "RHSGREF_Shot_light_3DProcessingType";
        distanceFilter = "RHSGREF_rifleShotDistanceFilter";
        frequencyRandomizer = 0.5;
        frequencyRandomizerMin = 0.1;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHSGREF_sd_sbr_Shot_SoundSet {
        soundShaders[] = {
            "RHSGREF_sd_sbr_punch_close_SoundShader",
            "RHSGREF_sd_sbr_punch_close_interior_SoundShader",
            "RHSGREF_sd_sbr_punch_mid_SoundShader",
            "RHSGREF_sd_sbr_punch_far_SoundShader",
            "RHSGREF_sd_sbr_character_SoundShader",
            "RHSGREF_sd_sbr_Closure_SoundShader",
            "RHSGREF_sd_sbr_Interior_closeMono_SoundShader",
            "RHSGREF_sd_sbr_Interior_far_SoundShader"
        };
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        volumeFactor = 1.25;
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "RHSGREF_Shot_light_3DProcessingType";
        distanceFilter = "RHSGREF_rifleShotDistanceFilter";
        frequencyRandomizer = 0.5;
        frequencyRandomizerMin = 0.1;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHSGREF_scorp_Shot_SoundSet {
        soundShaders[] = {
            "RHSGREF_scorp_punch_close_SoundShader",
            "RHSGREF_scorp_punch_close_interior_SoundShader",
            "RHSGREF_scorp_punch_mid_SoundShader",
            "RHSGREF_scorp_punch_far_SoundShader",
            "RHSGREF_scorp_character_SoundShader",
            "RHSGREF_scorp_Closure_SoundShader",
            "RHSGREF_scorp_Interior_closeMono_SoundShader",
            "RHSGREF_scorp_Interior_far_SoundShader"
        };
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        volumeFactor = 1.25;
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "RHSGREF_Shot_light_3DProcessingType";
        distanceFilter = "RHSGREF_rifleShotDistanceFilter";
        frequencyRandomizer = 0.5;
        frequencyRandomizerMin = 0.1;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHSGREF_thompson_Shot_SoundSet {
        soundShaders[] = {
            "RHSGREF_thompson_punch_close_SoundShader",
            "RHSGREF_thompson_punch_close_interior_SoundShader",
            "RHSGREF_thompson_punch_mid_SoundShader",
            "RHSGREF_thompson_punch_far_SoundShader",
            "RHSGREF_thompson_character_SoundShader",
            "RHSGREF_thompson_Closure_SoundShader",
            "RHSGREF_thompson_Interior_closeMono_SoundShader",
            "RHSGREF_thompson_Interior_far_SoundShader"
        };
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        volumeFactor = 1.25;
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "RHSGREF_Shot_light_3DProcessingType";
        distanceFilter = "RHSGREF_rifleShotDistanceFilter";
        frequencyRandomizer = 0.5;
        frequencyRandomizerMin = 0.1;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHSGREF_m3a1_Shot_SoundSet {
        soundShaders[] = {
            "RHSGREF_m3a1_punch_close_SoundShader",
            "RHSGREF_m3a1_punch_close_interior_SoundShader",
            "RHSGREF_m3a1_punch_mid_SoundShader",
            "RHSGREF_m3a1_punch_far_SoundShader",
            "RHSGREF_m3a1_character_SoundShader",
            "RHSGREF_m3a1_Closure_SoundShader",
            "RHSGREF_m3a1_Interior_closeMono_SoundShader",
            "RHSGREF_m3a1_Interior_far_SoundShader"
        };
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        volumeFactor = 1.25;
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "RHSGREF_Shot_light_3DProcessingType";
        distanceFilter = "RHSGREF_rifleShotDistanceFilter";
        frequencyRandomizer = 0.5;
        frequencyRandomizerMin = 0.1;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHSGREF_sd_m3a1_Shot_SoundSet {
        soundShaders[] = {
            "RHSGREF_sd_m3a1_punch_close_SoundShader",
            "RHSGREF_sd_m3a1_punch_close_interior_SoundShader",
            "RHSGREF_sd_m3a1_punch_mid_SoundShader",
            "RHSGREF_sd_m3a1_punch_far_SoundShader",
            "RHSGREF_sd_m3a1_character_SoundShader",
            "RHSGREF_sd_m3a1_Closure_SoundShader",
            "RHSGREF_sd_m3a1_Interior_closeMono_SoundShader",
            "RHSGREF_sd_m3a1_Interior_far_SoundShader"
        };
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        volumeFactor = 1.25;
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "RHSGREF_Shot_light_3DProcessingType";
        distanceFilter = "RHSGREF_rifleShotDistanceFilter";
        frequencyRandomizer = 0.5;
        frequencyRandomizerMin = 0.1;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHSGREF_STG44_Shot_SoundSet {
        soundShaders[] = {
            "RHSGREF_STG44_punch_close_SoundShader",
            "RHSGREF_STG44_punch_close_interior_SoundShader",
            "RHSGREF_STG44_punch_mid_SoundShader",
            "RHSGREF_STG44_punch_far_SoundShader",
            "RHSGREF_STG44_character_SoundShader",
            "RHSGREF_STG44_Closure_SoundShader",
            "RHSGREF_STG44_Interior_closeMono_SoundShader",
            "RHSGREF_STG44_Interior_far_SoundShader"
        };
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        volumeFactor = 1.25;
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "RHSGREF_Shot_light_3DProcessingType";
        distanceFilter = "RHSGREF_rifleShotDistanceFilter";
        frequencyRandomizer = 0.5;
        frequencyRandomizerMin = 0.1;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHSGREF_MG42_Shot_SoundSet {
        soundShaders[] = {
            "RHSGREF_MG42_punch_close_SoundShader",
            "RHSGREF_MG42_punch_close_interior_SoundShader",
            "RHSGREF_MG42_punch_mid_SoundShader",
            "RHSGREF_MG42_punch_far_SoundShader",
            "RHSGREF_MG42_character_SoundShader",
            "RHSGREF_MG42_Closure_SoundShader",
            "RHSGREF_MG42_Interior_closeMono_SoundShader",
            "RHSGREF_MG42_Interior_far_SoundShader"
        };
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        volumeFactor = 1.25;
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "RHSGREF_Shot_light_3DProcessingType";
        distanceFilter = "RHSGREF_rifleShotDistanceFilter";
        frequencyRandomizer = 0.5;
        frequencyRandomizerMin = 0.1;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHSGREF_MG42_delayed_Shot_SoundSet {
        soundShaders[] = {
            "RHSGREF_MG42_delayed_punch_close_SoundShader",
            "RHSGREF_MG42_delayed_punch_close_interior_SoundShader",
            "RHSGREF_MG42_delayed_punch_mid_SoundShader",
            "RHSGREF_MG42_delayed_punch_far_SoundShader",
            "RHSGREF_MG42_delayed_character_SoundShader",
            "RHSGREF_MG42_delayed_Closure_SoundShader",
            "RHSGREF_MG42_delayed_Interior_closeMono_SoundShader",
            "RHSGREF_MG42_delayed_Interior_far_SoundShader"
        };
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        volumeFactor = 1.25;
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "RHSGREF_Shot_light_3DProcessingType";
        distanceFilter = "RHSGREF_rifleShotDistanceFilter";
        frequencyRandomizer = 0.5;
        frequencyRandomizerMin = 0.1;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHSGREF_tokarev_Shot_SoundSet {
        soundShaders[] = {
            "RHSGREF_tokarev_punch_close_SoundShader",
            "RHSGREF_tokarev_punch_close_interior_SoundShader",
            "RHSGREF_tokarev_punch_mid_SoundShader",
            "RHSGREF_tokarev_punch_far_SoundShader",
            "RHSGREF_tokarev_character_SoundShader",
            "RHSGREF_tokarev_Closure_SoundShader",
            "RHSGREF_tokarev_Interior_closeMono_SoundShader",
            "RHSGREF_tokarev_Interior_far_SoundShader"
        };
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        volumeFactor = 1.15;
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "RHSGREF_Shot_light_3DProcessingType";
        distanceFilter = "RHSGREF_rifleShotDistanceFilter";
        frequencyRandomizer = 0.5;
        frequencyRandomizerMin = 0.1;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHSGREF_M1_Shot_SoundSet {
        soundShaders[] = {
            "RHSGREF_M1_punch_close_SoundShader",
            "RHSGREF_M1_punch_close_interior_SoundShader",
            "RHSGREF_M1_punch_mid_SoundShader",
            "RHSGREF_M1_punch_far_SoundShader",
            "RHSGREF_M1_character_SoundShader",
            "RHSGREF_M1_Closure_SoundShader",
            "RHSGREF_M1_Interior_closeMono_SoundShader",
            "RHSGREF_M1_Interior_far_SoundShader"
        };
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        volumeFactor = 1.25;
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "RHSGREF_Shot_light_3DProcessingType";
        distanceFilter = "RHSGREF_rifleShotDistanceFilter";
        frequencyRandomizer = 0.5;
        frequencyRandomizerMin = 0.1;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHSGREF_vhs2_Shot_SoundSet {
        soundShaders[] = {
            "RHSGREF_vhs2_punch_close_SoundShader",
            "RHSGREF_vhs2_punch_close_interior_SoundShader",
            "RHSGREF_vhs2_punch_mid_SoundShader",
            "RHSGREF_vhs2_punch_far_SoundShader",
            "RHSGREF_vhs2_character_SoundShader",
            "RHSGREF_vhs2_Closure_SoundShader",
            "RHSGREF_vhs2_Interior_closeMono_SoundShader",
            "RHSGREF_vhs2_Interior_far_SoundShader"
        };
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        volumeFactor = 1.25;
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "RHSGREF_Shot_light_3DProcessingType";
        distanceFilter = "RHSGREF_rifleShotDistanceFilter";
        frequencyRandomizer = 0.5;
        frequencyRandomizerMin = 0.1;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHSGREF_sd_vhs2_Shot_SoundSet {
        soundShaders[] = {
            "RHSGREF_sd_vhs2_punch_close_SoundShader",
            "RHSGREF_sd_vhs2_punch_close_interior_SoundShader",
            "RHSGREF_sd_vhs2_punch_mid_SoundShader",
            "RHSGREF_sd_vhs2_punch_far_SoundShader",
            "RHSGREF_sd_vhs2_character_SoundShader",
            "RHSGREF_sd_vhs2_Closure_SoundShader",
            "RHSGREF_sd_vhs2_Interior_closeMono_SoundShader",
            "RHSGREF_sd_vhs2_Interior_far_SoundShader"
        };
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        volumeFactor = 1.25;
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "RHSGREF_Shot_light_3DProcessingType";
        distanceFilter = "RHSGREF_rifleShotDistanceFilter";
        frequencyRandomizer = 0.5;
        frequencyRandomizerMin = 0.1;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHSGREF_fnfal_Shot_SoundSet {
        soundShaders[] = {
            "RHSGREF_fnfal_punch_close_SoundShader",
            "RHSGREF_fnfal_punch_close_interior_SoundShader",
            "RHSGREF_fnfal_punch_mid_SoundShader",
            "RHSGREF_fnfal_punch_far_SoundShader",
            "RHSGREF_fnfal_character_SoundShader",
            "RHSGREF_fnfal_Closure_SoundShader",
            "RHSGREF_fnfal_Interior_closeMono_SoundShader",
            "RHSGREF_fnfal_Interior_far_SoundShader"
        };
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        volumeFactor = 1.25;
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "RHSGREF_Shot_light_3DProcessingType";
        distanceFilter = "RHSGREF_rifleShotDistanceFilter";
        frequencyRandomizer = 0.5;
        frequencyRandomizerMin = 0.1;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHSGREF_sd_fnfal_Shot_SoundSet {
        soundShaders[] = {
            "RHSGREF_sd_fnfal_punch_close_SoundShader",
            "RHSGREF_sd_fnfal_punch_close_interior_SoundShader",
            "RHSGREF_sd_fnfal_punch_mid_SoundShader",
            "RHSGREF_sd_fnfal_punch_far_SoundShader",
            "RHSGREF_sd_fnfal_character_SoundShader",
            "RHSGREF_sd_fnfal_Closure_SoundShader",
            "RHSGREF_sd_fnfal_Interior_closeMono_SoundShader",
            "RHSGREF_sd_fnfal_Interior_far_SoundShader"
        };
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        volumeFactor = 1.25;
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "RHSGREF_Shot_light_3DProcessingType";
        distanceFilter = "RHSGREF_rifleShotDistanceFilter";
        frequencyRandomizer = 0.5;
        frequencyRandomizerMin = 0.1;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHSGREF_pistol1_Tail_SoundSet {
        soundShaders[] = {
            "RHSGREF_pistol1_Meadows_close_SoundShader",
            "RHSGREF_pistol1_Meadows_far_SoundShader",
            "RHSGREF_pistol1_Houses_close_SoundShader",
            "RHSGREF_pistol1_Houses_far_SoundShader",
            "RHSGREF_pistol1_Forest_close_SoundShader",
            "RHSGREF_pistol1_Forest_far_SoundShader",
            "RHSGREF_pistol1_Interior_close_SoundShader",
            "RHSGREF_pistol1_noise_meadows_SoundShader",
            "RHSGREF_pistol1_noise_forest_SoundShader",
            "RHSGREF_pistol1_noise_houses_SoundShader"
        };
        volumeFactor = "1 * 0.8";
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        sound3DProcessingType = "RHSGREF_Tail_3DProcessingType";
        soundShadersLimit = 2;
        distanceFilter = "RHSGREF_rifleShotDistanceFilter";
        frequencyRandomizer = 2;
        frequencyRandomizerMin = 0.2;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHSGREF_rifle1_Tail_SoundSet {
        soundShaders[] = {
            "RHSGREF_rifle1_Meadows_close_SoundShader",
            "RHSGREF_rifle1_Meadows_far_SoundShader",
            "RHSGREF_rifle1_Houses_close_SoundShader",
            "RHSGREF_rifle1_Houses_far_SoundShader",
            "RHSGREF_rifle1_Forest_close_SoundShader",
            "RHSGREF_rifle1_Forest_far_SoundShader",
            "RHSGREF_rifle1_Interior_close_SoundShader",
            "RHSGREF_rifle1_noise_meadows_SoundShader",
            "RHSGREF_rifle1_noise_forest_SoundShader",
            "RHSGREF_rifle1_noise_houses_SoundShader"
        };
        volumeFactor = "1 * 0.64";
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        sound3DProcessingType = "RHSGREF_Tail_3DProcessingType";
        soundShadersLimit = 2;
        distanceFilter = "RHSGREF_rifleShotDistanceFilter";
        frequencyRandomizer = 2;
        frequencyRandomizerMin = 0.2;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHSGREF_sd_rifle1_Tail_SoundSet {
        soundShaders[] = {
            "RHSGREF_sd_rifle1_Meadows_close_SoundShader",
            "RHSGREF_sd_rifle1_Meadows_far_SoundShader",
            "RHSGREF_sd_rifle1_Houses_close_SoundShader",
            "RHSGREF_sd_rifle1_Houses_far_SoundShader",
            "RHSGREF_sd_rifle1_Forest_close_SoundShader",
            "RHSGREF_sd_rifle1_Forest_far_SoundShader",
            "RHSGREF_sd_rifle1_Interior_close_SoundShader",
            "RHSGREF_sd_rifle1_noise_meadows_SoundShader",
            "RHSGREF_sd_rifle1_noise_forest_SoundShader",
            "RHSGREF_sd_rifle1_noise_houses_SoundShader"
        };
        volumeFactor = "1 * 0.58";
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        sound3DProcessingType = "RHSGREF_Tail_3DProcessingType";
        soundShadersLimit = 2;
        distanceFilter = "RHSGREF_rifleShotDistanceFilter";
        frequencyRandomizer = 2;
        frequencyRandomizerMin = 0.2;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHSGREF_sd_mmg1_Tail_SoundSet {
        soundShaders[] = {
            "RHSGREF_sd_mmg1_Meadows_close_SoundShader",
            "RHSGREF_sd_mmg1_Meadows_far_SoundShader",
            "RHSGREF_sd_mmg1_Houses_close_SoundShader",
            "RHSGREF_sd_mmg1_Houses_far_SoundShader",
            "RHSGREF_sd_mmg1_Forest_close_SoundShader",
            "RHSGREF_sd_mmg1_Forest_far_SoundShader",
            "RHSGREF_sd_mmg1_Interior_close_SoundShader",
            "RHSGREF_sd_mmg1_noise_meadows_SoundShader",
            "RHSGREF_sd_mmg1_noise_forest_SoundShader",
            "RHSGREF_sd_mmg1_noise_houses_SoundShader"
        };
        volumeFactor = "1 * 0.63";
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        sound3DProcessingType = "RHSGREF_Tail_3DProcessingType";
        soundShadersLimit = 2;
        distanceFilter = "RHSGREF_rifleShotDistanceFilter";
        frequencyRandomizer = 2;
        frequencyRandomizerMin = 0.2;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHSGREF_mmg1_Tail_SoundSet {
        soundShaders[] = {
            "RHSGREF_mmg1_Meadows_close_SoundShader",
            "RHSGREF_mmg1_Meadows_far_SoundShader",
            "RHSGREF_mmg1_Houses_close_SoundShader",
            "RHSGREF_mmg1_Houses_far_SoundShader",
            "RHSGREF_mmg1_Forest_close_SoundShader",
            "RHSGREF_mmg1_Forest_far_SoundShader",
            "RHSGREF_mmg1_Interior_close_SoundShader",
            "RHSGREF_mmg1_noise_meadows_SoundShader",
            "RHSGREF_mmg1_noise_forest_SoundShader",
            "RHSGREF_mmg1_noise_houses_SoundShader"
        };
        volumeFactor = "1 * 0.68";
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        sound3DProcessingType = "RHSGREF_Tail_3DProcessingType";
        soundShadersLimit = 2;
        distanceFilter = "RHSGREF_rifleShotDistanceFilter";
        frequencyRandomizer = 2;
        frequencyRandomizerMin = 0.2;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHSGREF_mmg1_delayed_Tail_SoundSet {
        soundShaders[] = {
            "RHSGREF_mmg1_delayed_Meadows_close_SoundShader",
            "RHSGREF_mmg1_delayed_Meadows_far_SoundShader",
            "RHSGREF_mmg1_delayed_Houses_close_SoundShader",
            "RHSGREF_mmg1_delayed_Houses_far_SoundShader",
            "RHSGREF_mmg1_delayed_Forest_close_SoundShader",
            "RHSGREF_mmg1_delayed_Forest_far_SoundShader",
            "RHSGREF_mmg1_delayed_Interior_close_SoundShader",
            "RHSGREF_mmg1_delayed_noise_meadows_SoundShader",
            "RHSGREF_mmg1_delayed_noise_forest_SoundShader",
            "RHSGREF_mmg1_delayed_noise_houses_SoundShader"
        };
        volumeFactor = "1 * 0.68";
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        sound3DProcessingType = "RHSGREF_Tail_3DProcessingType";
        soundShadersLimit = 2;
        distanceFilter = "RHSGREF_rifleShotDistanceFilter";
        frequencyRandomizer = 2;
        frequencyRandomizerMin = 0.2;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHSGREF_rifle2_Tail_SoundSet {
        soundShaders[] = {
            "RHSGREF_rifle2_Meadows_close_SoundShader",
            "RHSGREF_rifle2_Meadows_far_SoundShader",
            "RHSGREF_rifle2_Houses_close_SoundShader",
            "RHSGREF_rifle2_Houses_far_SoundShader",
            "RHSGREF_rifle2_Forest_close_SoundShader",
            "RHSGREF_rifle2_Forest_far_SoundShader",
            "RHSGREF_rifle2_Interior_close_SoundShader",
            "RHSGREF_rifle2_noise_meadows_SoundShader",
            "RHSGREF_rifle2_noise_forest_SoundShader",
            "RHSGREF_rifle2_noise_houses_SoundShader"
        };
        volumeFactor = "1 * 0.7";
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        sound3DProcessingType = "RHSGREF_Tail_3DProcessingType";
        soundShadersLimit = 2;
        distanceFilter = "RHSGREF_rifleShotDistanceFilter";
        frequencyRandomizer = 2;
        frequencyRandomizerMin = 0.2;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHSGREF_cannon_Tail_SoundSet {
        soundShaders[] = {
            "RHSGREF_cannon_Meadows_close_SoundShader",
            "RHSGREF_cannon_Meadows_far_SoundShader",
            "RHSGREF_cannon_Houses_close_SoundShader",
            "RHSGREF_cannon_Houses_far_SoundShader",
            "RHSGREF_cannon_Forest_close_SoundShader",
            "RHSGREF_cannon_Forest_far_SoundShader",
            "RHSGREF_cannon_Interior_close_SoundShader",
            "RHSGREF_cannon_noise_meadows_SoundShader",
            "RHSGREF_cannon_noise_forest_SoundShader",
            "RHSGREF_cannon_noise_houses_SoundShader"
        };
        volumeFactor = "1 * 1";
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        sound3DProcessingType = "RHSGREF_Tail_3DProcessingType";
        soundShadersLimit = 2;
        distanceFilter = "RHSGREF_rifleShotDistanceFilter";
        frequencyRandomizer = 2;
        frequencyRandomizerMin = 0.2;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHSGREF_autocannon_Tail_SoundSet {
        soundShaders[] = {
            "RHSGREF_autocannon_Meadows_close_SoundShader",
            "RHSGREF_autocannon_Meadows_far_SoundShader",
            "RHSGREF_autocannon_Houses_close_SoundShader",
            "RHSGREF_autocannon_Houses_far_SoundShader",
            "RHSGREF_autocannon_Forest_close_SoundShader",
            "RHSGREF_autocannon_Forest_far_SoundShader",
            "RHSGREF_autocannon_Interior_close_SoundShader",
            "RHSGREF_autocannon_noise_meadows_SoundShader",
            "RHSGREF_autocannon_noise_forest_SoundShader",
            "RHSGREF_autocannon_noise_houses_SoundShader"
        };
        volumeFactor = "1 * 1";
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        sound3DProcessingType = "RHSGREF_Tail_3DProcessingType";
        soundShadersLimit = 2;
        distanceFilter = "RHSGREF_rifleShotDistanceFilter";
        frequencyRandomizer = 2;
        frequencyRandomizerMin = 0.2;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHSGREF_20mm_Tail_SoundSet {
        soundShaders[] = {
            "RHSGREF_20mm_Meadows_close_SoundShader",
            "RHSGREF_20mm_Meadows_far_SoundShader",
            "RHSGREF_20mm_Houses_close_SoundShader",
            "RHSGREF_20mm_Houses_far_SoundShader",
            "RHSGREF_20mm_Forest_close_SoundShader",
            "RHSGREF_20mm_Forest_far_SoundShader",
            "RHSGREF_20mm_Interior_close_SoundShader",
            "RHSGREF_20mm_noise_meadows_SoundShader",
            "RHSGREF_20mm_noise_forest_SoundShader",
            "RHSGREF_20mm_noise_houses_SoundShader"
        };
        volumeFactor = "1 * 1";
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        sound3DProcessingType = "RHSGREF_Tail_3DProcessingType";
        soundShadersLimit = 2;
        distanceFilter = "RHSGREF_rifleShotDistanceFilter";
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
    class Rifle_Long_Base_F;
    class UGL_F;
    class srifle_EBR_F;
    class LMG_Mk200_F;
    class MGun;
    class LMG_RCWS: MGun {};
    class SMG_01_Base;
    class SMG_01_F: SMG_01_Base {
        class Single;
        class FullAuto;
        class WeaponSlotsInfo;
        class GunParticles;
    };
    class Launcher;
    class Launcher_Base_F: Launcher {};
    class launch_O_Titan_F;
    class rhs_weap_kar98k_Base_F: Rifle_Base_F {
        class Single: Mode_SemiAuto {
            sounds[] = {"StandardSound"};
            class StandardSound {
                soundSetShot[] = {"RHSGREF_K98_Shot_SoundSet", "RHSGREF_rifle2_Tail_SoundSet"};
            };
        };
    };
    class rhs_weap_m38_Base_F: Rifle_Base_F {
        class Single: Mode_SemiAuto {
            sounds[] = {"StandardSound"};
            class StandardSound {
                soundSetShot[] = {"RHSGREF_nagant_Shot_SoundSet", "RHSGREF_rifle2_Tail_SoundSet"};
            };
        };
    };
    class rhs_weap_m38: rhs_weap_m38_Base_F {};
    class rhs_weap_m38_rail: rhs_weap_m38 {};
    class rhs_weap_mosin_sbr: rhs_weap_m38_rail {
        class Single: Single {
            sounds[] = {"StandardSound", "SilencedSound"};
            class StandardSound {
                soundSetShot[] = {"RHSGREF_sbr_Shot_SoundSet", "RHSGREF_rifle2_Tail_SoundSet"};
            };
            class SilencedSound {
                soundSetShot[] = {"RHSGREF_sd_sbr_Shot_SoundSet", "RHSGREF_sd_mmg1_Tail_SoundSet"};
            };
        };
    };
    class rhs_weap_m70_base: Rifle_Base_F {
        class Single: Mode_SemiAuto {
            sounds[] = {"StandardSound", "SilencedSound"};
            class StandardSound {
                soundSetShot[] = {"RHSGREF_M70_Shot_SoundSet", "RHSGREF_rifle1_Tail_SoundSet"};
            };
            class SilencedSound {
                soundSetShot[] = {"RHSGREF_sd_M70_Shot_SoundSet", "RHSGREF_sd_rifle1_Tail_SoundSet"};
            };
        };
        class FullAuto: Mode_FullAuto {
            sounds[] = {"StandardSound", "SilencedSound"};
            class StandardSound {
                soundSetShot[] = {"RHSGREF_M70_Shot_SoundSet", "RHSGREF_rifle1_Tail_SoundSet"};
            };
            class SilencedSound {
                soundSetShot[] = {"RHSGREF_sd_M70_Shot_SoundSet", "RHSGREF_sd_rifle1_Tail_SoundSet"};
            };
        };
    };
    class rhs_weap_m76: rhs_weap_m70_base {
        class Single: Mode_SemiAuto {
            sounds[] = {"StandardSound", "SilencedSound"};
            class StandardSound {
                soundSetShot[] = {"RHSGREF_M76_Shot_SoundSet", "RHSGREF_Rifle2_Tail_SoundSet"};
            };
            class SilencedSound {
                soundSetShot[] = {"RHSGREF_sd_M76_Shot_SoundSet", "RHSGREF_sd_mmg1_Tail_SoundSet"};
            };
        };
    };
    class rhs_weap_m21_base: rhs_weap_m70_base {
        class Single: Mode_SemiAuto {
            sounds[] = {"StandardSound", "SilencedSound"};
            class StandardSound {
                soundSetShot[] = {"RHSGREF_M21_Shot_SoundSet", "RHSGREF_rifle1_Tail_SoundSet"};
            };
            class SilencedSound {
                soundSetShot[] = {"RHSGREF_sd_M21_Shot_SoundSet", "RHSGREF_sd_rifle1_Tail_SoundSet"};
            };
        };
        class FullAuto: Mode_FullAuto {
            sounds[] = {"StandardSound", "SilencedSound"};
            class StandardSound {
                soundSetShot[] = {"RHSGREF_M21_Shot_SoundSet", "RHSGREF_rifle1_Tail_SoundSet"};
            };
            class SilencedSound {
                soundSetShot[] = {"RHSGREF_sd_M21_Shot_SoundSet", "RHSGREF_sd_rifle1_Tail_SoundSet"};
            };
        };
    };
    class rhs_weap_vhs2_base: Rifle_Base_F {
        class Single: Mode_SemiAuto {
            sounds[] = {"StandardSound", "SilencedSound"};
            class StandardSound {
                soundSetShot[] = {"RHSGREF_VHS2_Shot_SoundSet", "RHSGREF_rifle1_Tail_SoundSet"};
            };
            class SilencedSound {
                soundSetShot[] = {"RHSGREF_sd_VHS2_Shot_SoundSet", "RHSGREF_sd_rifle1_Tail_SoundSet"};
            };
        };
        class FullAuto: Mode_FullAuto {
            sounds[] = {"StandardSound", "SilencedSound"};
            class StandardSound {
                soundSetShot[] = {"RHSGREF_VHS2_Shot_SoundSet", "RHSGREF_rifle1_Tail_SoundSet"};
            };
            class SilencedSound {
                soundSetShot[] = {"RHSGREF_sd_VHS2_Shot_SoundSet", "RHSGREF_sd_rifle1_Tail_SoundSet"};
            };
        };
    };
    class rhs_weap_savz61: SMG_01_F {
        class Single: Single {
            sounds[] = {"StandardSound"};
            class StandardSound {
                soundSetShot[] = {"RHSGREF_scorp_Shot_SoundSet", "RHSGREF_pistol1_Tail_SoundSet"};
            };
        };
        class FullAuto: FullAuto {
            sounds[] = {"StandardSound"};
            class StandardSound {
                soundSetShot[] = {"RHSGREF_scorp_Shot_SoundSet", "RHSGREF_pistol1_Tail_SoundSet"};
            };
        };
    };
    class rhs_weap_m3a1_base: Rifle_Base_F {
        class FullAuto: Mode_FullAuto {
            sounds[] = {"StandardSound"};
            class StandardSound {
                soundSetShot[] = {"RHSGREF_thompson_Shot_SoundSet", "RHSGREF_rifle1_Tail_SoundSet"};
            };
        };
    };
    class rhs_weap_m3a1_specops: rhs_weap_m3a1_base {
        class FullAuto: FullAuto {
            sounds[] = {"StandardSound"};
            class StandardSound {
                soundSetShot[] = {"RHSGREF_sd_m3a1_Shot_SoundSet", "RHSGREF_sd_rifle1_Tail_SoundSet"};
            };
        };
    };
    class rhs_weap_MP44_base: Rifle_Base_F {
        class Single: Mode_SemiAuto {
            sounds[] = {"StandardSound"};
            class StandardSound {
                soundSetShot[] = {"RHSGREF_STG44_Shot_SoundSet", "RHSGREF_mmg1_Tail_SoundSet"};
            };
        };
        class FullAuto: Mode_FullAuto {
            sounds[] = {"StandardSound"};
            class StandardSound {
                soundSetShot[] = {"RHSGREF_STG44_Shot_SoundSet", "RHSGREF_mmg1_Tail_SoundSet"};
            };
        };
    };
    class rhs_weap_M1garand_Base_F: Rifle_Base_F {
        class Single: Mode_SemiAuto {
            sounds[] = {"StandardSound"};
            class StandardSound {
                soundSetShot[] = {"RHSGREF_m1_Shot_SoundSet", "RHSGREF_rifle2_Tail_SoundSet"};
            };
        };
    };
    class rhs_weap_fnfal_base: Rifle_Base_F {
        class Single: Mode_SemiAuto {
            sounds[] = {"StandardSound", "SilencedSound"};
            class StandardSound {
                soundSetShot[] = {"RHSGREF_fnfal_Shot_SoundSet", "RHSGREF_mmg1_Tail_SoundSet"};
            };
            class SilencedSound {
                soundSetShot[] = {"RHSGREF_sd_fnfal_Shot_SoundSet", "RHSGREF_sd_mmg1_Tail_SoundSet"};
            };
        };
        class FullAuto: Mode_FullAuto {
            sounds[] = {"StandardSound", "SilencedSound"};
            class StandardSound {
                soundSetShot[] = {"RHSGREF_fnfal_Shot_SoundSet", "RHSGREF_mmg1_Tail_SoundSet"};
            };
            class SilencedSound {
                soundSetShot[] = {"RHSGREF_sd_fnfal_Shot_SoundSet", "RHSGREF_sd_mmg1_Tail_SoundSet"};
            };
        };
    };
    class rhs_weap_mg42_base: Rifle_Base_F {
        reloadMagazineSound[] = {
            "rhsgref\addons\rhsgref_weapon_sounds\reloads\mg42_reload",
            1,
            1,
            10
        };
        class manual: Mode_FullAuto {
            sounds[] = {"StandardSound"};
            class StandardSound {
                soundSetShot[] = {"RHSGREF_MG42_delayed_Shot_SoundSet", "RHSGREF_MMG1_delayed_Tail_SoundSet"};
            };
        };
        class Eventhandlers: Eventhandlers {
            class RHSGREF_mg42_beltIntake {
                fired = "[_this # 0,_this # 1,'rhsgref_beltIntake_mg42'] call RHSGREF_fnc_beltIntake;";
            };
        };
    };
    class rhs_weap_pya;
    class rhs_weap_tt33: rhs_weap_pya {
        class Single: Mode_SemiAuto {
            class StandardSound {
                soundSetShot[] = {"RHSGREF_tokarev_Shot_SoundSet", "RHSGREF_Pistol1_Tail_SoundSet"};
            };
            class SilencedSound {
                soundSetShot[] = {"RHSGREF_tokarev_Shot_SoundSet", "RHSGREF_Pistol1_Tail_SoundSet"};
            };
        };
    };
};
class CfgSounds {
    sounds[] = {};
    class RHSGREF_beltIntake_m249 {
        name = "RHSGREF_beltIntake_m249";
        sound[] = {
            "RHSGREF\addons\RHSGREF_weapon_sounds\closure\m249\beltIntake",
            1.95,
            1,
            36
        };
        titles[] = {};
    };
    class RHSGREF_beltIntake_m240 {
        name = "RHSGREF_beltIntake_m240";
        sound[] = {
            "RHSGREF\addons\RHSGREF_weapon_sounds\closure\m240\beltIntake",
            1.95,
            1,
            36
        };
        titles[] = {};
    };
    class RHSGREF_beltIntake_mg42 {
        name = "RHSGREF_beltIntake_mg42";
        sound[] = {
            "RHSGREF\addons\RHSGREF_weapon_sounds\closure\mg42_delayed\beltIntake.wss",
            1.66,
            1,
            36
        };
        titles[] = {};
    };
    class RHSGREF_garandPing {
        name = "RHSGREF_garandPing";
        sound[] = {
            "RHSGREF\addons\RHSGREF_weapon_sounds\closure\m1\garand_ping",
            1.32,
            1,
            30
        };
        titles[] = {};
    };
};
class CfgFunctions {
    class RHSGREF {
        tag = "RHSGREF";
        class functions {
            class beltIntake {
                file = "RHSGREF\addons\RHSGREF_weapon_sounds\03_functions\beltIntake.sqf";
                description = "Handles the belt intake sounds.";
            };
        };
    };
};
