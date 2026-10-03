class CfgPatches {
    class RHS_weapon_sounds {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.32;
        requiredAddons[] = {
            "A3_sounds_f",
            "RHS_c_weapons",
            "RHS_c_heavyweapons",
            "RHS_c_airweapons",
            "RHS_sounds"
        };
        version = "0.1";
        name = "AFRF Sounds";
        author = "$STR_RHS_AUTHOR_FULL";
        url = "http://www.rhsmods.org/";
    };
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgSound3DProcessors {
    class RHS_Default_3DProcessingType {
        type = "panner";
        innerRange = 10;
        rangeCurve = "LinearCurve";
        range = 1800;
    };
    class RHS_Shot_light_3DProcessingType {
        type = "panner";
        innerRange = 0;
        range = 5;
        rangeCurve = "Smooth1Curve";
    };
    class RHS_Shot_medium_3DProcessingType {
        type = "panner";
        innerRange = 0;
        range = 5;
        rangeCurve = "LinearCurve";
    };
    class RHS_Tail_3DProcessingType {
        type = "panner";
        innerRange = 5;
        range = 190;
        rangeCurve = "InverseSquare2Curve";
    };
};
class CfgSoundCurves {
    class RHS_soundCurve {
        points[] = {{0, 1}, {1, 0}};
    };
    class RHS_tailSoundCurve {
        points[] = {
            {0, 1},
            {0.2, 0.85},
            {0.5, 0.4},
            {0.8, 0.1},
            {1, 0}
        };
    };
    class RHS_rifleSoundCurve {
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
    class RHS_defaultDistanceFilter {
        type = "lowPassFilter";
        minCutoffFrequency = 150;
        qFactor = 1.3;
        innerRange = 400;
        range = 2600;
        powerFactor = 32;
    };
    class RHS_rifleShotDistanceFilter {
        type = "lowPassFilter";
        minCutoffFrequency = 250;
        qFactor = 1.3;
        innerRange = 150;
        range = 1800;
        powerFactor = 32;
    };
};
class CfgSoundShaders {
    class RHS_AK74_punch_close_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\punch\LMG545\close_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\punch\LMG545\close_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\punch\LMG545\close_3", 1}};
        volume = 1.23;
        range = 150;
        rangeCurve[] = {{0, 1}, {7, 1}, {15, 0}, {150, 0}};
    };
    class RHS_AK74_punch_close_interior_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\punch\LMG545\close_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\punch\LMG545\close_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\punch\LMG545\close_3", 1}};
        volume = "1.23 * (1 - (0.15 * interior))";
        range = 150;
        rangeCurve[] = {{0, 0}, {7, 0}, {15, 1}, {150, 0}};
    };
    class RHS_AK74_punch_mid_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\punch\LMG545\mid_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\punch\LMG545\mid_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\punch\LMG545\mid_3", 1}};
        volume = "1.23 * (1 - (0.2 * interior))";
        range = 800;
        rangeCurve[] = {{0, 0}, {150, 1}, {800, 0}};
    };
    class RHS_AK74_punch_far_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\punch\LMG545\far_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\punch\LMG545\far_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\punch\LMG545\far_3", 1}};
        volume = "1.23 * (1 - (0.25 * interior))";
        range = 3000;
        rangeCurve[] = {{0, 1}, {150, 0}, {800, 1}, {3000, 1}};
    };
    class RHS_AK74_character_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\character\AK74\character_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\character\AK74\character_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\character\AK74\character_3", 1}};
        volume = 0.54;
        range = 120;
        rangeCurve[] = {{0, 1}, {120, 0}};
    };
    class RHS_AK74_Closure_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\closure\AK74\Closure_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\closure\AK74\Closure_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\closure\AK74\Closure_3", 1}};
        volume = 0.87;
        range = 35;
        rangeCurve[] = {{0, 1}, {35, 0}};
    };
    class RHS_AK74_Interior_closeMono_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\rifle1\Interior_close_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\rifle1\Interior_close_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\rifle1\Interior_close_3", 1}};
        volume = "1 * 2.8 * interior";
        range = 150;
        rangeCurve[] = {{1, 0}, {3, 0}, {7, 1}, {150, 0}};
    };
    class RHS_AK74_Interior_far_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\rifle1\Interior_far_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\rifle1\Interior_far_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\rifle1\Interior_far_3", 1}};
        volume = "1 * 2.2 * interior";
        range = 3000;
        rangeCurve[] = {{0, 0}, {150, 1}, {3000, 1}};
    };
    class RHS_sd_AK74_punch_close_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\punch\sd_LMG556\close_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\punch\sd_LMG556\close_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\punch\sd_LMG556\close_3", 1}};
        volume = 0.9;
        range = 100;
        rangeCurve[] = {{0, 1}, {7, 1}, {15, 0}, {100, 0}};
    };
    class RHS_sd_AK74_punch_close_interior_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\punch\sd_LMG556\close_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\punch\sd_LMG556\close_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\punch\sd_LMG556\close_3", 1}};
        volume = "0.9 * (1 - (0.15 * interior))";
        range = 100;
        rangeCurve[] = {{0, 0}, {7, 0}, {15, 1}, {100, 0}};
    };
    class RHS_sd_AK74_punch_mid_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\punch\sd_LMG556\mid_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\punch\sd_LMG556\mid_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\punch\sd_LMG556\mid_3", 1}};
        volume = "0.9 * (1 - (0.2 * interior))";
        range = 250;
        rangeCurve[] = {{0, 0}, {100, 1}, {250, 0}};
    };
    class RHS_sd_AK74_punch_far_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\punch\sd_LMG556\far_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\punch\sd_LMG556\far_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\punch\sd_LMG556\far_3", 1}};
        volume = "0.9 * (1 - (0.25 * interior))";
        range = 700;
        rangeCurve[] = {{0, 1}, {100, 0}, {250, 1}, {700, 1}};
    };
    class RHS_sd_AK74_character_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\character\sd_M4\character_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\character\sd_M4\character_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\character\sd_M4\character_3", 1}};
        volume = 0.45;
        range = 60;
        rangeCurve[] = {{0, 1}, {60, 0}};
    };
    class RHS_sd_AK74_Closure_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\closure\AK74\Closure_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\closure\AK74\Closure_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\closure\AK74\Closure_3", 1}};
        volume = 0.87;
        range = 35;
        rangeCurve[] = {{0, 1}, {35, 0}};
    };
    class RHS_sd_AK74_Interior_closeMono_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\sd_rifle1\Interior_close_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\sd_rifle1\Interior_close_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\sd_rifle1\Interior_close_3", 1}};
        volume = "0.8 * 2.8 * interior";
        range = 100;
        rangeCurve[] = {{1, 0}, {3, 0}, {7, 1}, {100, 0}};
    };
    class RHS_sd_AK74_Interior_far_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\sd_rifle1\Interior_far_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\sd_rifle1\Interior_far_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\sd_rifle1\Interior_far_3", 1}};
        volume = "0.8 * 2.2 * interior";
        range = 700;
        rangeCurve[] = {{0, 0}, {100, 1}, {700, 1}};
    };
    class RHS_PK_punch_close_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\punch\LMG762rus\close_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\punch\LMG762rus\close_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\punch\LMG762rus\close_3", 1}};
        volume = 1.26;
        range = 150;
        rangeCurve[] = {{0, 1}, {7, 1}, {15, 0}, {150, 0}};
    };
    class RHS_PK_punch_close_interior_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\punch\LMG762rus\close_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\punch\LMG762rus\close_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\punch\LMG762rus\close_3", 1}};
        volume = "1.26 * (1 - (0.15 * interior))";
        range = 150;
        rangeCurve[] = {{0, 0}, {7, 0}, {15, 1}, {150, 0}};
    };
    class RHS_PK_punch_mid_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\punch\LMG762rus\mid_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\punch\LMG762rus\mid_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\punch\LMG762rus\mid_3", 1}};
        volume = "1.26 * (1 - (0.2 * interior))";
        range = 800;
        rangeCurve[] = {{0, 0}, {150, 1}, {800, 0}};
    };
    class RHS_PK_punch_far_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\punch\LMG762rus\far_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\punch\LMG762rus\far_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\punch\LMG762rus\far_3", 1}};
        volume = "1.26 * (1 - (0.25 * interior))";
        range = 3300;
        rangeCurve[] = {{0, 1}, {150, 0}, {800, 1}, {3300, 1}};
    };
    class RHS_PK_character_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\character\PK\character_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\character\PK\character_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\character\PK\character_3", 1}};
        volume = 0.53;
        range = 120;
        rangeCurve[] = {{0, 1}, {120, 0}};
    };
    class RHS_PK_Closure_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\closure\PK\Closure_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\closure\PK\Closure_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\closure\PK\Closure_3", 1}};
        volume = 0.96;
        range = 45;
        rangeCurve[] = {{0, 1}, {45, 0}};
    };
    class RHS_PK_Interior_closeMono_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\mmg1\Interior_close_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\mmg1\Interior_close_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\mmg1\Interior_close_3", 1}};
        volume = "1 * 2.8 * interior";
        range = 150;
        rangeCurve[] = {{1, 0}, {3, 0}, {7, 1}, {150, 0}};
    };
    class RHS_PK_Interior_far_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\mmg1\Interior_far_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\mmg1\Interior_far_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\mmg1\Interior_far_3", 1}};
        volume = "1 * 2.2 * interior";
        range = 3300;
        rangeCurve[] = {{0, 0}, {150, 1}, {3300, 1}};
    };
    class RHS_veh_PK_punch_close_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\punch\LMG762rus\close_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\punch\LMG762rus\close_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\punch\LMG762rus\close_3", 1}};
        volume = "1.26 * campos";
        range = 150;
        rangeCurve[] = {{0, 1}, {7, 1}, {15, 0}, {150, 0}};
    };
    class RHS_veh_PK_punch_close_interior_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\punch\LMG762rus\close_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\punch\LMG762rus\close_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\punch\LMG762rus\close_3", 1}};
        volume = "1.26 * (1 - campos)";
        range = 150;
        rangeCurve[] = {{0, 1}, {7, 1}, {15, 0}, {150, 0}};
    };
    class RHS_veh_PK_punch_mid_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\punch\LMG762rus\mid_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\punch\LMG762rus\mid_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\punch\LMG762rus\mid_3", 1}};
        volume = "1.26 * (1 - (0.2 * interior))";
        range = 800;
        rangeCurve[] = {{0, 0}, {150, 1}, {800, 0}};
    };
    class RHS_veh_PK_punch_far_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\punch\LMG762rus\far_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\punch\LMG762rus\far_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\punch\LMG762rus\far_3", 1}};
        volume = "1.26 * (1 - (0.25 * interior))";
        range = 3300;
        rangeCurve[] = {{0, 1}, {150, 0}, {800, 1}, {3300, 1}};
    };
    class RHS_veh_PK_character_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\character\PK\character_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\character\PK\character_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\character\PK\character_3", 1}};
        volume = "0.53 * (campos max 0.1)";
        range = 120;
        rangeCurve[] = {{0, 1}, {120, 0}};
    };
    class RHS_veh_PK_Closure_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\closure\PK\Closure_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\closure\PK\Closure_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\closure\PK\Closure_3", 1}};
        volume = "0.96 * (campos max 0.1)";
        range = 45;
        rangeCurve[] = {{0, 1}, {45, 0}};
    };
    class RHS_veh_PK_Interior_closeMono_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\mmg1\Interior_close_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\mmg1\Interior_close_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\mmg1\Interior_close_3", 1}};
        volume = "1 * 2.8 * interior";
        range = 150;
        rangeCurve[] = {{1, 0}, {3, 0}, {7, 1}, {150, 0}};
    };
    class RHS_veh_PK_Interior_far_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\mmg1\Interior_far_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\mmg1\Interior_far_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\mmg1\Interior_far_3", 1}};
        volume = "1 * 2.2 * interior";
        range = 3300;
        rangeCurve[] = {{0, 0}, {150, 1}, {3300, 1}};
    };
    class RHS_SVD_punch_close_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\punch\Rifle2\close_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\punch\Rifle2\close_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\punch\Rifle2\close_3", 1}};
        volume = 1.28;
        range = 150;
        rangeCurve[] = {{0, 1}, {7, 1}, {15, 0}, {150, 0}};
    };
    class RHS_SVD_punch_close_interior_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\punch\Rifle2\close_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\punch\Rifle2\close_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\punch\Rifle2\close_3", 1}};
        volume = "1.28 * (1 - (0.15 * interior))";
        range = 150;
        rangeCurve[] = {{0, 0}, {7, 0}, {15, 1}, {150, 0}};
    };
    class RHS_SVD_punch_mid_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\punch\Rifle2\mid_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\punch\Rifle2\mid_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\punch\Rifle2\mid_3", 1}};
        volume = "1.28 * (1 - (0.2 * interior))";
        range = 800;
        rangeCurve[] = {{0, 0}, {150, 1}, {800, 0}};
    };
    class RHS_SVD_punch_far_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\punch\Rifle2\far_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\punch\Rifle2\far_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\punch\Rifle2\far_3", 1}};
        volume = "1.28 * (1 - (0.25 * interior))";
        range = 3300;
        rangeCurve[] = {{0, 1}, {150, 0}, {800, 1}, {3300, 1}};
    };
    class RHS_SVD_character_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\character\AK74\character_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\character\AK74\character_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\character\AK74\character_3", 1}};
        volume = 0.63;
        range = 120;
        rangeCurve[] = {{0, 1}, {120, 0}};
    };
    class RHS_SVD_Closure_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\closure\AK74\Closure_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\closure\AK74\Closure_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\closure\AK74\Closure_3", 1}};
        volume = 0.85;
        range = 45;
        rangeCurve[] = {{0, 1}, {45, 0}};
    };
    class RHS_SVD_Interior_closeMono_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\rifle2\Interior_close_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\rifle2\Interior_close_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\rifle2\Interior_close_3", 1}};
        volume = "1 * 2.8 * interior";
        range = 150;
        rangeCurve[] = {{1, 0}, {3, 0}, {7, 1}, {150, 0}};
    };
    class RHS_SVD_Interior_far_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\rifle2\Interior_far_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\rifle2\Interior_far_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\rifle2\Interior_far_3", 1}};
        volume = "1 * 2.2 * interior";
        range = 3300;
        rangeCurve[] = {{0, 0}, {150, 1}, {3300, 1}};
    };
    class RHS_sd_SVD_punch_close_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\punch\sd_LMG762\close_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\punch\sd_LMG762\close_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\punch\sd_LMG762\close_3", 1}};
        volume = 1.1;
        range = 100;
        rangeCurve[] = {{0, 1}, {7, 1}, {15, 0}, {100, 0}};
    };
    class RHS_sd_SVD_punch_close_interior_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\punch\sd_LMG762\close_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\punch\sd_LMG762\close_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\punch\sd_LMG762\close_3", 1}};
        volume = "1.10 * (1 - (0.15 * interior))";
        range = 100;
        rangeCurve[] = {{0, 0}, {7, 0}, {15, 1}, {100, 0}};
    };
    class RHS_sd_SVD_punch_mid_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\punch\sd_LMG762\mid_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\punch\sd_LMG762\mid_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\punch\sd_LMG762\mid_3", 1}};
        volume = "1.10 * (1 - (0.2 * interior))";
        range = 250;
        rangeCurve[] = {{0, 0}, {100, 1}, {250, 0}};
    };
    class RHS_sd_SVD_punch_far_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\punch\sd_LMG762\far_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\punch\sd_LMG762\far_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\punch\sd_LMG762\far_3", 1}};
        volume = "1.10 * (1 - (0.25 * interior))";
        range = 700;
        rangeCurve[] = {{0, 1}, {100, 0}, {250, 1}, {700, 1}};
    };
    class RHS_sd_SVD_character_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\character\sd_M4\character_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\character\sd_M4\character_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\character\sd_M4\character_3", 1}};
        volume = 0.63;
        range = 120;
        rangeCurve[] = {{0, 1}, {120, 0}};
    };
    class RHS_sd_SVD_Closure_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\closure\AK74\Closure_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\closure\AK74\Closure_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\closure\AK74\Closure_3", 1}};
        volume = 0.85;
        range = 45;
        rangeCurve[] = {{0, 1}, {45, 0}};
    };
    class RHS_sd_SVD_Interior_closeMono_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\sd_mmg1\Interior_close_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\sd_mmg1\Interior_close_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\sd_mmg1\Interior_close_3", 1}};
        volume = "1 * 2.8 * interior";
        range = 150;
        rangeCurve[] = {{1, 0}, {3, 0}, {7, 1}, {150, 0}};
    };
    class RHS_sd_SVD_Interior_far_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\sd_mmg1\Interior_far_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\sd_mmg1\Interior_far_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\sd_mmg1\Interior_far_3", 1}};
        volume = "1 * 2.2 * interior";
        range = 700;
        rangeCurve[] = {{0, 0}, {150, 1}, {700, 1}};
    };
    class RHS_AKM_punch_close_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\punch\LMG762rus\close_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\punch\LMG762rus\close_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\punch\LMG762rus\close_3", 1}};
        volume = 1.28;
        range = 150;
        rangeCurve[] = {{0, 1}, {7, 1}, {15, 0}, {150, 0}};
    };
    class RHS_AKM_punch_close_interior_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\punch\LMG762rus\close_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\punch\LMG762rus\close_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\punch\LMG762rus\close_3", 1}};
        volume = "1.28 * (1 - (0.15 * interior))";
        range = 150;
        rangeCurve[] = {{0, 0}, {7, 0}, {15, 1}, {150, 0}};
    };
    class RHS_AKM_punch_mid_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\punch\LMG762rus\mid_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\punch\LMG762rus\mid_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\punch\LMG762rus\mid_3", 1}};
        volume = "1.28 * (1 - (0.2 * interior))";
        range = 800;
        rangeCurve[] = {{0, 0}, {150, 1}, {800, 0}};
    };
    class RHS_AKM_punch_far_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\punch\LMG762rus\far_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\punch\LMG762rus\far_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\punch\LMG762rus\far_3", 1}};
        volume = "1.28 * (1 - (0.25 * interior))";
        range = 3000;
        rangeCurve[] = {{0, 1}, {150, 0}, {800, 1}, {3000, 1}};
    };
    class RHS_AKM_character_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\character\dp\character_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\character\dp\character_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\character\dp\character_3", 1}};
        volume = 0.54;
        range = 120;
        rangeCurve[] = {{0, 1}, {120, 0}};
    };
    class RHS_AKM_Closure_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\closure\AK74\Closure_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\closure\AK74\Closure_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\closure\AK74\Closure_3", 1}};
        volume = 0.925;
        range = 35;
        rangeCurve[] = {{0, 1}, {35, 0}};
    };
    class RHS_AKM_Interior_closeMono_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\mmg1\Interior_close_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\mmg1\Interior_close_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\mmg1\Interior_close_3", 1}};
        volume = "1 * 2.8 * interior";
        range = 150;
        rangeCurve[] = {{1, 0}, {3, 0}, {7, 1}, {150, 0}};
    };
    class RHS_AKM_Interior_far_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\mmg1\Interior_far_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\mmg1\Interior_far_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\mmg1\Interior_far_3", 1}};
        volume = "1 * 2.2 * interior";
        range = 3000;
        rangeCurve[] = {{0, 0}, {150, 1}, {3000, 1}};
    };
    class RHS_sd_AKM_punch_close_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\punch\sd_LMG762\close_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\punch\sd_LMG762\close_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\punch\sd_LMG762\close_3", 1}};
        volume = 1.1;
        range = 100;
        rangeCurve[] = {{0, 1}, {7, 1}, {15, 0}, {100, 0}};
    };
    class RHS_sd_AKM_punch_close_interior_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\punch\sd_LMG762\close_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\punch\sd_LMG762\close_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\punch\sd_LMG762\close_3", 1}};
        volume = "1.1 * (1 - (0.15 * interior))";
        range = 100;
        rangeCurve[] = {{0, 0}, {7, 0}, {15, 1}, {100, 0}};
    };
    class RHS_sd_AKM_punch_mid_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\punch\sd_LMG762\mid_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\punch\sd_LMG762\mid_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\punch\sd_LMG762\mid_3", 1}};
        volume = "1.1 * (1 - (0.2 * interior))";
        range = 250;
        rangeCurve[] = {{0, 0}, {100, 1}, {250, 0}};
    };
    class RHS_sd_AKM_punch_far_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\punch\sd_LMG762\far_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\punch\sd_LMG762\far_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\punch\sd_LMG762\far_3", 1}};
        volume = "1.1 * (1 - (0.25 * interior))";
        range = 900;
        rangeCurve[] = {{0, 1}, {100, 0}, {250, 1}, {900, 1}};
    };
    class RHS_sd_AKM_character_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\character\sd_M4\character_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\character\sd_M4\character_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\character\sd_M4\character_3", 1}};
        volume = 0.45;
        range = 60;
        rangeCurve[] = {{0, 1}, {60, 0}};
    };
    class RHS_sd_AKM_Closure_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\closure\AK74\Closure_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\closure\AK74\Closure_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\closure\AK74\Closure_3", 1}};
        volume = 0.925;
        range = 35;
        rangeCurve[] = {{0, 1}, {35, 0}};
    };
    class RHS_sd_AKM_Interior_closeMono_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\sd_mmg1\Interior_close_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\sd_mmg1\Interior_close_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\sd_mmg1\Interior_close_3", 1}};
        volume = "0.8 * 2.8 * interior";
        range = 100;
        rangeCurve[] = {{1, 0}, {3, 0}, {7, 1}, {100, 0}};
    };
    class RHS_sd_AKM_Interior_far_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\sd_mmg1\Interior_far_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\sd_mmg1\Interior_far_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\sd_mmg1\Interior_far_3", 1}};
        volume = "0.8 * 2.2 * interior";
        range = 900;
        rangeCurve[] = {{0, 0}, {100, 1}, {900, 1}};
    };
    class RHS_pp2000_punch_close_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\punch\9mm\close_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\punch\9mm\close_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\punch\9mm\close_3", 1}};
        volume = 1.25;
        range = 150;
        rangeCurve[] = {{0, 1}, {7, 1}, {15, 0}, {150, 0}};
    };
    class RHS_pp2000_punch_close_interior_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\punch\9mm\close_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\punch\9mm\close_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\punch\9mm\close_3", 1}};
        volume = "1.25 * (1 - (0.15 * interior))";
        range = 150;
        rangeCurve[] = {{0, 0}, {7, 0}, {15, 1}, {150, 0}};
    };
    class RHS_pp2000_punch_mid_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\punch\9mm\mid_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\punch\9mm\mid_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\punch\9mm\mid_3", 1}};
        volume = "1.25 * (1 - (0.2 * interior))";
        range = 800;
        rangeCurve[] = {{0, 0}, {150, 1}, {800, 0}};
    };
    class RHS_pp2000_punch_far_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\punch\9mm\far_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\punch\9mm\far_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\punch\9mm\far_3", 1}};
        volume = "1.25 * (1 - (0.25 * interior))";
        range = 2700;
        rangeCurve[] = {{0, 1}, {150, 0}, {800, 1}, {2700, 1}};
    };
    class RHS_pp2000_character_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\character\ppsh\character_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\character\ppsh\character_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\character\ppsh\character_3", 1}};
        volume = 0.59;
        range = 100;
        rangeCurve[] = {{0, 1}, {100, 0}};
    };
    class RHS_pp2000_Closure_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\closure\pp2000\Closure_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\closure\pp2000\Closure_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\closure\pp2000\Closure_3", 1}};
        volume = 0.925;
        range = 35;
        rangeCurve[] = {{0, 1}, {35, 0}};
    };
    class RHS_pp2000_Interior_closeMono_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\pistol1\Interior_close_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\pistol1\Interior_close_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\pistol1\Interior_close_3", 1}};
        volume = "1 * 2.8 * interior";
        range = 150;
        rangeCurve[] = {{1, 0}, {3, 0}, {7, 1}, {150, 0}};
    };
    class RHS_pp2000_Interior_far_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\pistol1\Interior_far_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\pistol1\Interior_far_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\pistol1\Interior_far_3", 1}};
        volume = "1 * 2.2 * interior";
        range = 2700;
        rangeCurve[] = {{0, 0}, {150, 1}, {2700, 1}};
    };
    class RHS_orsis_punch_close_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\punch\rifle2\close_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\punch\rifle2\close_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\punch\rifle2\close_3", 1}};
        volume = 1.27;
        range = 150;
        rangeCurve[] = {{0, 1}, {7, 1}, {15, 0}, {150, 0}};
    };
    class RHS_orsis_punch_close_interior_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\punch\rifle2\close_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\punch\rifle2\close_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\punch\rifle2\close_3", 1}};
        volume = "1.27 * (1 - (0.15 * interior))";
        range = 150;
        rangeCurve[] = {{0, 0}, {7, 0}, {15, 1}, {150, 0}};
    };
    class RHS_orsis_punch_mid_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\punch\rifle2\mid_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\punch\rifle2\mid_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\punch\rifle2\mid_3", 1}};
        volume = "1.27 * (1 - (0.2 * interior))";
        range = 800;
        rangeCurve[] = {{0, 0}, {150, 1}, {800, 0}};
    };
    class RHS_orsis_punch_far_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\punch\rifle2\far_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\punch\rifle2\far_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\punch\rifle2\far_3", 1}};
        volume = "1.27 * (1 - (0.25 * interior))";
        range = 3300;
        rangeCurve[] = {{0, 1}, {150, 0}, {800, 1}, {3300, 1}};
    };
    class RHS_orsis_character_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\character\dp\character_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\character\dp\character_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\character\dp\character_3", 1}};
        volume = 0.72;
        range = 130;
        rangeCurve[] = {{0, 1}, {130, 0}};
    };
    class RHS_orsis_Closure_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\closure\AK74\Closure_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\closure\AK74\Closure_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\closure\AK74\Closure_3", 1}};
        volume = 0.84;
        range = 45;
        rangeCurve[] = {{0, 1}, {45, 0}};
    };
    class RHS_orsis_Interior_closeMono_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\rifle2\Interior_close_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\rifle2\Interior_close_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\rifle2\Interior_close_3", 1}};
        volume = "1 * 2.8 * interior";
        range = 150;
        rangeCurve[] = {{1, 0}, {3, 0}, {7, 1}, {150, 0}};
    };
    class RHS_orsis_Interior_far_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\rifle2\Interior_far_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\rifle2\Interior_far_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\rifle2\Interior_far_3", 1}};
        volume = "1 * 2.2 * interior";
        range = 3300;
        rangeCurve[] = {{0, 0}, {150, 1}, {3300, 1}};
    };
    class RHS_sd_orsis_punch_close_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\punch\sd_LMG762rus\close_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\punch\sd_LMG762rus\close_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\punch\sd_LMG762rus\close_3", 1}};
        volume = 0.91;
        range = 100;
        rangeCurve[] = {{0, 1}, {7, 1}, {15, 0}, {100, 0}};
    };
    class RHS_sd_orsis_punch_close_interior_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\punch\sd_LMG762rus\close_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\punch\sd_LMG762rus\close_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\punch\sd_LMG762rus\close_3", 1}};
        volume = "0.91 * (1 - (0.15 * interior))";
        range = 100;
        rangeCurve[] = {{0, 0}, {7, 0}, {15, 1}, {100, 0}};
    };
    class RHS_sd_orsis_punch_mid_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\punch\sd_LMG762rus\mid_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\punch\sd_LMG762rus\mid_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\punch\sd_LMG762rus\mid_3", 1}};
        volume = "0.91 * (1 - (0.2 * interior))";
        range = 250;
        rangeCurve[] = {{0, 0}, {100, 1}, {250, 0}};
    };
    class RHS_sd_orsis_punch_far_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\punch\sd_LMG762rus\far_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\punch\sd_LMG762rus\far_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\punch\sd_LMG762rus\far_3", 1}};
        volume = "0.91 * (1 - (0.25 * interior))";
        range = 900;
        rangeCurve[] = {{0, 1}, {100, 0}, {250, 1}, {900, 1}};
    };
    class RHS_sd_orsis_character_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\character\sd_M4\character_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\character\sd_M4\character_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\character\sd_M4\character_3", 1}};
        volume = 0.45;
        range = 60;
        rangeCurve[] = {{0, 1}, {60, 0}};
    };
    class RHS_sd_orsis_Closure_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\closure\AK74\Closure_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\closure\AK74\Closure_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\closure\AK74\Closure_3", 1}};
        volume = 0.84;
        range = 35;
        rangeCurve[] = {{0, 1}, {35, 0}};
    };
    class RHS_sd_orsis_Interior_closeMono_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\sd_mmg1\Interior_close_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\sd_mmg1\Interior_close_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\sd_mmg1\Interior_close_3", 1}};
        volume = "0.8 * 2.8 * interior";
        range = 100;
        rangeCurve[] = {{1, 0}, {3, 0}, {7, 1}, {100, 0}};
    };
    class RHS_sd_orsis_Interior_far_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\sd_mmg1\Interior_far_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\sd_mmg1\Interior_far_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\sd_mmg1\Interior_far_3", 1}};
        volume = "0.8 * 2.2 * interior";
        range = 900;
        rangeCurve[] = {{0, 0}, {100, 1}, {900, 1}};
    };
    class RHS_pistol1_Meadows_close_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\pistol1\Meadows_close_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\pistol1\Meadows_close_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\pistol1\Meadows_close_3", 1}};
        volume = "1 * (meadows max sea) * (1 - (interior * 0.7))";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHS_pistol1_Meadows_far_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\pistol1\Meadows_far_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\pistol1\Meadows_far_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\pistol1\Meadows_far_3", 1}};
        volume = "1 * (meadows max sea) * (1 - (interior * 0.7))";
        range = 2700;
        rangeCurve[] = {{0, 0}, {150, 1}, {2700, 1}};
        limitation = 1;
    };
    class RHS_pistol1_Houses_close_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\pistol1\Houses_close_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\pistol1\Houses_close_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\pistol1\Houses_close_3", 1}};
        volume = "1 * houses * (1 - (interior * 0.7))";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHS_pistol1_Houses_far_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\pistol1\Houses_far_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\pistol1\Houses_far_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\pistol1\Houses_far_3", 1}};
        volume = "1 * houses * (1 - (interior * 0.7))";
        range = 2700;
        rangeCurve[] = {{0, 0}, {150, 1}, {2700, 1}};
        limitation = 1;
    };
    class RHS_pistol1_Forest_close_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\pistol1\Forest_close_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\pistol1\Forest_close_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\pistol1\Forest_close_3", 1}};
        volume = "1 * (forest max trees) * (1 - (interior * 0.7))";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHS_pistol1_Forest_far_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\pistol1\Forest_far_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\pistol1\Forest_far_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\pistol1\Forest_far_3", 1}};
        volume = "1 * (forest max trees) * (1 - (interior * 0.7))";
        range = 2700;
        rangeCurve[] = {{0, 0}, {150, 1}, {2700, 1}};
        limitation = 1;
    };
    class RHS_pistol1_Interior_close_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\pistol1\Interior_close_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\pistol1\Interior_close_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\pistol1\Interior_close_3", 1}};
        volume = "1 * 3.20 * interior";
        range = 7;
        rangeCurve[] = {{0, 1}, {3, 1}, {7, 0}};
        limitation = 1;
    };
    class RHS_pistol1_noise_meadows_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\noise\small\meadows_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\noise\small\meadows_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\noise\small\meadows_3", 1}};
        volume = "(1.35 * (meadows max sea)) * (1 - interior)";
        range = 200;
        rangeCurve[] = {{0, 1}, {200, 0}};
    };
    class RHS_pistol1_noise_meadows_interior_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\noise\small\meadows_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\noise\small\meadows_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\noise\small\meadows_3", 1}};
        volume = "(1.35 * (meadows max sea)) * (1 - interior)";
        range = 200;
        rangeCurve[] = {{0, 1}, {200, 0}};
    };
    class RHS_pistol1_noise_forest_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\noise\small\forest_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\noise\small\forest_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\noise\small\forest_3", 1}};
        volume = "(1.35 * (forest max trees)) * (1 - interior)";
        range = 200;
        rangeCurve[] = {{0, 1}, {200, 0}};
    };
    class RHS_pistol1_noise_houses_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\noise\small\houses_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\noise\small\houses_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\noise\small\houses_3", 1}};
        volume = "(1.35 * houses)) * (1 - interior)";
        range = 200;
        rangeCurve[] = {{0, 1}, {200, 0}};
    };
    class RHS_rifle1_Meadows_close_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\rifle1\Meadows_close_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\rifle1\Meadows_close_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\rifle1\Meadows_close_3", 1}};
        volume = "0.72 * (meadows max sea) * (1 - (interior * 0.7))";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHS_rifle1_Meadows_far_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\rifle1\Meadows_far_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\rifle1\Meadows_far_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\rifle1\Meadows_far_3", 1}};
        volume = "0.72 * (meadows max sea) * (1 - (interior * 0.7))";
        range = 2800;
        rangeCurve[] = {{0, 0}, {150, 1}, {2800, 1}};
        limitation = 1;
    };
    class RHS_rifle1_Houses_close_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\rifle1\Houses_close_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\rifle1\Houses_close_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\rifle1\Houses_close_3", 1}};
        volume = "0.72 * houses * (1 - (interior * 0.7))";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHS_rifle1_Houses_far_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\rifle1\Houses_far_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\rifle1\Houses_far_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\rifle1\Houses_far_3", 1}};
        volume = "0.72 * houses * (1 - (interior * 0.7))";
        range = 2800;
        rangeCurve[] = {{0, 0}, {150, 1}, {2800, 1}};
        limitation = 1;
    };
    class RHS_rifle1_Forest_close_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\rifle1\Forest_close_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\rifle1\Forest_close_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\rifle1\Forest_close_3", 1}};
        volume = "0.72 * (forest max trees) * (1 - (interior * 0.7))";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHS_rifle1_Forest_far_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\rifle1\Forest_far_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\rifle1\Forest_far_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\rifle1\Forest_far_3", 1}};
        volume = "0.72 * (forest max trees) * (1 - (interior * 0.7))";
        range = 2800;
        rangeCurve[] = {{0, 0}, {150, 1}, {2800, 1}};
        limitation = 1;
    };
    class RHS_rifle1_Interior_close_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\rifle1\Interior_close_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\rifle1\Interior_close_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\rifle1\Interior_close_3", 1}};
        volume = "0.72 * 3.20 * interior";
        range = 7;
        rangeCurve[] = {{0, 1}, {3, 1}, {7, 0}};
        limitation = 1;
    };
    class RHS_rifle1_noise_meadows_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\noise\mid\meadows_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\noise\mid\meadows_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\noise\mid\meadows_3", 1}};
        volume = "(1.35 * (meadows max sea)) * (1 - interior)";
        range = 230;
        rangeCurve[] = {{0, 1}, {230, 0}};
    };
    class RHS_rifle1_noise_meadows_interior_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\noise\mid\meadows_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\noise\mid\meadows_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\noise\mid\meadows_3", 1}};
        volume = "(1.35 * (meadows max sea)) * (1 - interior)";
        range = 230;
        rangeCurve[] = {{0, 1}, {230, 0}};
    };
    class RHS_rifle1_noise_forest_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\noise\mid\forest_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\noise\mid\forest_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\noise\mid\forest_3", 1}};
        volume = "(1.35 * (forest max trees)) * (1 - interior)";
        range = 230;
        rangeCurve[] = {{0, 1}, {230, 0}};
    };
    class RHS_rifle1_noise_houses_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\noise\mid\houses_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\noise\mid\houses_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\noise\mid\houses_3", 1}};
        volume = "(1.35 * houses)) * (1 - interior)";
        range = 230;
        rangeCurve[] = {{0, 1}, {230, 0}};
    };
    class RHS_sd_rifle1_Meadows_close_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\sd_rifle1\Meadows_close_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\sd_rifle1\Meadows_close_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\sd_rifle1\Meadows_close_3", 1}};
        volume = "0.72 * (meadows max sea) * (1 - (interior * 0.7))";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHS_sd_rifle1_Meadows_far_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\sd_rifle1\Meadows_far_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\sd_rifle1\Meadows_far_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\sd_rifle1\Meadows_far_3", 1}};
        volume = "0.72 * (meadows max sea) * (1 - (interior * 0.7))";
        range = 600;
        rangeCurve[] = {{0, 0}, {150, 1}, {600, 1}};
        limitation = 1;
    };
    class RHS_sd_rifle1_Houses_close_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\sd_rifle1\Houses_close_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\sd_rifle1\Houses_close_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\sd_rifle1\Houses_close_3", 1}};
        volume = "0.72 * houses * (1 - (interior * 0.7))";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHS_sd_rifle1_Houses_far_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\sd_rifle1\Houses_far_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\sd_rifle1\Houses_far_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\sd_rifle1\Houses_far_3", 1}};
        volume = "0.72 * houses * (1 - (interior * 0.7))";
        range = 600;
        rangeCurve[] = {{0, 0}, {150, 1}, {600, 1}};
        limitation = 1;
    };
    class RHS_sd_rifle1_Forest_close_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\sd_rifle1\Forest_close_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\sd_rifle1\Forest_close_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\sd_rifle1\Forest_close_3", 1}};
        volume = "0.72 * (forest max trees) * (1 - (interior * 0.7))";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHS_sd_rifle1_Forest_far_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\sd_rifle1\Forest_far_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\sd_rifle1\Forest_far_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\sd_rifle1\Forest_far_3", 1}};
        volume = "0.72 * (forest max trees) * (1 - (interior * 0.7))";
        range = 600;
        rangeCurve[] = {{0, 0}, {150, 1}, {600, 1}};
        limitation = 1;
    };
    class RHS_sd_rifle1_Interior_close_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\sd_rifle1\Interior_close_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\sd_rifle1\Interior_close_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\sd_rifle1\Interior_close_3", 1}};
        volume = "0.72 * 3.20 * interior";
        range = 7;
        rangeCurve[] = {{0, 1}, {3, 1}, {7, 0}};
        limitation = 1;
    };
    class RHS_sd_rifle1_noise_meadows_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\noise\small\meadows_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\noise\small\meadows_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\noise\small\meadows_3", 1}};
        volume = "(1.35 * (meadows max sea)) * (1 - interior)";
        range = 180;
        rangeCurve[] = {{0, 1}, {180, 0}};
    };
    class RHS_sd_rifle1_noise_meadows_interior_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\noise\small\meadows_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\noise\small\meadows_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\noise\small\meadows_3", 1}};
        volume = "(1.35 * (meadows max sea)) * (1 - interior)";
        range = 180;
        rangeCurve[] = {{0, 1}, {180, 0}};
    };
    class RHS_sd_rifle1_noise_forest_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\noise\small\forest_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\noise\small\forest_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\noise\small\forest_3", 1}};
        volume = "(1.35 * (forest max trees)) * (1 - interior)";
        range = 180;
        rangeCurve[] = {{0, 1}, {180, 0}};
    };
    class RHS_sd_rifle1_noise_houses_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\noise\small\houses_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\noise\small\houses_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\noise\small\houses_3", 1}};
        volume = "(1.35 * houses)) * (1 - interior)";
        range = 180;
        rangeCurve[] = {{0, 1}, {180, 0}};
    };
    class RHS_sd_mmg1_Meadows_close_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\sd_mmg1\Meadows_close_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\sd_mmg1\Meadows_close_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\sd_mmg1\Meadows_close_3", 1}};
        volume = "0.72 * (meadows max sea) * (1 - (interior * 0.7))";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHS_sd_mmg1_Meadows_far_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\sd_mmg1\Meadows_far_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\sd_mmg1\Meadows_far_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\sd_mmg1\Meadows_far_3", 1}};
        volume = "0.72 * (meadows max sea) * (1 - (interior * 0.7))";
        range = 800;
        rangeCurve[] = {{0, 0}, {150, 1}, {800, 1}};
        limitation = 1;
    };
    class RHS_sd_mmg1_Houses_close_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\sd_mmg1\Houses_close_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\sd_mmg1\Houses_close_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\sd_mmg1\Houses_close_3", 1}};
        volume = "0.72 * houses * (1 - (interior * 0.7))";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHS_sd_mmg1_Houses_far_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\sd_mmg1\Houses_far_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\sd_mmg1\Houses_far_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\sd_mmg1\Houses_far_3", 1}};
        volume = "0.72 * houses * (1 - (interior * 0.7))";
        range = 800;
        rangeCurve[] = {{0, 0}, {150, 1}, {800, 1}};
        limitation = 1;
    };
    class RHS_sd_mmg1_Forest_close_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\sd_mmg1\Forest_close_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\sd_mmg1\Forest_close_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\sd_mmg1\Forest_close_3", 1}};
        volume = "0.72 * (forest max trees) * (1 - (interior * 0.7))";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHS_sd_mmg1_Forest_far_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\sd_mmg1\Forest_far_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\sd_mmg1\Forest_far_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\sd_mmg1\Forest_far_3", 1}};
        volume = "0.72 * (forest max trees) * (1 - (interior * 0.7))";
        range = 800;
        rangeCurve[] = {{0, 0}, {150, 1}, {800, 1}};
        limitation = 1;
    };
    class RHS_sd_mmg1_Interior_close_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\sd_mmg1\Interior_close_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\sd_mmg1\Interior_close_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\sd_mmg1\Interior_close_3", 1}};
        volume = "0.72 * 3.20 * interior";
        range = 7;
        rangeCurve[] = {{0, 1}, {3, 1}, {7, 0}};
        limitation = 1;
    };
    class RHS_sd_mmg1_noise_meadows_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\noise\small\meadows_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\noise\small\meadows_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\noise\small\meadows_3", 1}};
        volume = "(1.35 * (meadows max sea)) * (1 - interior)";
        range = 180;
        rangeCurve[] = {{0, 1}, {180, 0}};
    };
    class RHS_sd_mmg1_noise_meadows_interior_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\noise\small\meadows_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\noise\small\meadows_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\noise\small\meadows_3", 1}};
        volume = "(1.35 * (meadows max sea)) * (1 - interior)";
        range = 180;
        rangeCurve[] = {{0, 1}, {180, 0}};
    };
    class RHS_sd_mmg1_noise_forest_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\noise\small\forest_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\noise\small\forest_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\noise\small\forest_3", 1}};
        volume = "(1.35 * (forest max trees)) * (1 - interior)";
        range = 180;
        rangeCurve[] = {{0, 1}, {180, 0}};
    };
    class RHS_sd_mmg1_noise_houses_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\noise\small\houses_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\noise\small\houses_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\noise\small\houses_3", 1}};
        volume = "(1.35 * houses)) * (1 - interior)";
        range = 180;
        rangeCurve[] = {{0, 1}, {180, 0}};
    };
    class RHS_mmg1_Meadows_close_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\mmg1\Meadows_close_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\mmg1\Meadows_close_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\mmg1\Meadows_close_3", 1}};
        volume = "0.88 * (meadows max sea) * (1 - (interior * 0.7))";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHS_mmg1_Meadows_far_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\mmg1\Meadows_far_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\mmg1\Meadows_far_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\mmg1\Meadows_far_3", 1}};
        volume = "0.88 * (meadows max sea) * (1 - (interior * 0.7))";
        range = 3100;
        rangeCurve[] = {{0, 0}, {150, 1}, {3100, 1}};
        limitation = 1;
    };
    class RHS_mmg1_Houses_close_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\mmg1\Houses_close_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\mmg1\Houses_close_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\mmg1\Houses_close_3", 1}};
        volume = "0.88 * houses * (1 - (interior * 0.7))";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHS_mmg1_Houses_far_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\mmg1\Houses_far_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\mmg1\Houses_far_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\mmg1\Houses_far_3", 1}};
        volume = "0.88 * houses * (1 - (interior * 0.7))";
        range = 3100;
        rangeCurve[] = {{0, 0}, {150, 1}, {3100, 1}};
        limitation = 1;
    };
    class RHS_mmg1_Forest_close_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\mmg1\Forest_close_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\mmg1\Forest_close_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\mmg1\Forest_close_3", 1}};
        volume = "0.88 * (forest max trees) * (1 - (interior * 0.7))";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHS_mmg1_Forest_far_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\mmg1\Forest_far_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\mmg1\Forest_far_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\mmg1\Forest_far_3", 1}};
        volume = "0.88 * (forest max trees) * (1 - (interior * 0.7))";
        range = 3100;
        rangeCurve[] = {{0, 0}, {150, 1}, {3100, 1}};
        limitation = 1;
    };
    class RHS_mmg1_Interior_close_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\mmg1\Interior_close_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\mmg1\Interior_close_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\mmg1\Interior_close_3", 1}};
        volume = "0.88 * 3.20 * interior";
        range = 7;
        rangeCurve[] = {{0, 1}, {3, 1}, {7, 0}};
        limitation = 1;
    };
    class RHS_mmg1_noise_meadows_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\noise\big\meadows_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\noise\big\meadows_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\noise\big\meadows_3", 1}};
        volume = "(1.35 * (meadows max sea)) * (1 - interior)";
        range = 250;
        rangeCurve[] = {{0, 1}, {250, 0}};
    };
    class RHS_mmg1_noise_meadows_interior_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\noise\big\meadows_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\noise\big\meadows_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\noise\big\meadows_3", 1}};
        volume = "(1.35 * (meadows max sea)) * (1 - interior)";
        range = 250;
        rangeCurve[] = {{0, 1}, {250, 0}};
    };
    class RHS_mmg1_noise_forest_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\noise\big\forest_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\noise\big\forest_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\noise\big\forest_3", 1}};
        volume = "(1.35 * (forest max trees)) * (1 - interior)";
        range = 250;
        rangeCurve[] = {{0, 1}, {250, 0}};
    };
    class RHS_mmg1_noise_houses_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\noise\big\houses_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\noise\big\houses_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\noise\big\houses_3", 1}};
        volume = "(1.35 * houses)) * (1 - interior)";
        range = 250;
        rangeCurve[] = {{0, 1}, {250, 0}};
    };
    class RHS_veh_mmg1_Meadows_close_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\mmg1\Meadows_close_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\mmg1\Meadows_close_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\mmg1\Meadows_close_3", 1}};
        volume = "0.88 * (meadows max sea) * (1 - (interior * 0.7)) * (campos max 0.2)";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHS_veh_mmg1_Meadows_far_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\mmg1\Meadows_far_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\mmg1\Meadows_far_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\mmg1\Meadows_far_3", 1}};
        volume = "0.88 * (meadows max sea) * (1 - (interior * 0.7))";
        range = 3100;
        rangeCurve[] = {{0, 0}, {150, 1}, {3100, 1}};
        limitation = 1;
    };
    class RHS_veh_mmg1_Houses_close_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\mmg1\Houses_close_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\mmg1\Houses_close_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\mmg1\Houses_close_3", 1}};
        volume = "0.88 * houses * (1 - (interior * 0.7))";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHS_veh_mmg1_Houses_far_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\mmg1\Houses_far_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\mmg1\Houses_far_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\mmg1\Houses_far_3", 1}};
        volume = "0.88 * houses * (1 - (interior * 0.7))";
        range = 3100;
        rangeCurve[] = {{0, 0}, {150, 1}, {3100, 1}};
        limitation = 1;
    };
    class RHS_veh_mmg1_Forest_close_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\mmg1\Forest_close_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\mmg1\Forest_close_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\mmg1\Forest_close_3", 1}};
        volume = "0.88 * (forest max trees) * (1 - (interior * 0.7)) * (campos max 0.2)";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHS_veh_mmg1_Forest_far_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\mmg1\Forest_far_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\mmg1\Forest_far_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\mmg1\Forest_far_3", 1}};
        volume = "0.88 * (forest max trees) * (1 - (interior * 0.7))";
        range = 3100;
        rangeCurve[] = {{0, 0}, {150, 1}, {3100, 1}};
        limitation = 1;
    };
    class RHS_veh_mmg1_Interior_close_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\mmg1\Interior_close_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\mmg1\Interior_close_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\mmg1\Interior_close_3", 1}};
        volume = "0.88 * 3.20 * interior * (campos max 0.2)";
        range = 7;
        rangeCurve[] = {{0, 1}, {3, 1}, {7, 0}};
        limitation = 1;
    };
    class RHS_veh_mmg1_noise_meadows_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\noise\big\meadows_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\noise\big\meadows_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\noise\big\meadows_3", 1}};
        volume = "(1.35 * (meadows max sea)) * (1 - interior)";
        range = 250;
        rangeCurve[] = {{0, 1}, {250, 0}};
    };
    class RHS_veh_mmg1_noise_meadows_interior_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\noise\big\meadows_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\noise\big\meadows_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\noise\big\meadows_3", 1}};
        volume = "(1.35 * (meadows max sea)) * (1 - interior)";
        range = 250;
        rangeCurve[] = {{0, 1}, {250, 0}};
    };
    class RHS_veh_mmg1_noise_forest_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\noise\big\forest_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\noise\big\forest_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\noise\big\forest_3", 1}};
        volume = "(1.35 * (forest max trees)) * (1 - interior)";
        range = 250;
        rangeCurve[] = {{0, 1}, {250, 0}};
    };
    class RHS_veh_mmg1_noise_houses_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\noise\big\houses_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\noise\big\houses_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\noise\big\houses_3", 1}};
        volume = "(1.35 * houses)) * (1 - interior)";
        range = 250;
        rangeCurve[] = {{0, 1}, {250, 0}};
    };
    class RHS_mmg1_delayed_Meadows_close_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\mmg1_delayed\Meadows_close_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\mmg1_delayed\Meadows_close_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\mmg1_delayed\Meadows_close_3", 1}};
        volume = "0.88 * (meadows max sea) * (1 - (interior * 0.7))";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHS_mmg1_delayed_Meadows_far_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\mmg1_delayed\Meadows_far_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\mmg1_delayed\Meadows_far_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\mmg1_delayed\Meadows_far_3", 1}};
        volume = "0.88 * (meadows max sea) * (1 - (interior * 0.7))";
        range = 3100;
        rangeCurve[] = {{0, 0}, {150, 1}, {3100, 1}};
        limitation = 1;
    };
    class RHS_mmg1_delayed_Houses_close_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\mmg1_delayed\Houses_close_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\mmg1_delayed\Houses_close_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\mmg1_delayed\Houses_close_3", 1}};
        volume = "0.88 * houses * (1 - (interior * 0.7))";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHS_mmg1_delayed_Houses_far_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\mmg1_delayed\Houses_far_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\mmg1_delayed\Houses_far_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\mmg1_delayed\Houses_far_3", 1}};
        volume = "0.88 * houses * (1 - (interior * 0.7))";
        range = 3100;
        rangeCurve[] = {{0, 0}, {150, 1}, {3100, 1}};
        limitation = 1;
    };
    class RHS_mmg1_delayed_Forest_close_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\mmg1_delayed\Forest_close_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\mmg1_delayed\Forest_close_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\mmg1_delayed\Forest_close_3", 1}};
        volume = "0.88 * (forest max trees) * (1 - (interior * 0.7))";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHS_mmg1_delayed_Forest_far_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\mmg1_delayed\Forest_far_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\mmg1_delayed\Forest_far_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\mmg1_delayed\Forest_far_3", 1}};
        volume = "0.88 * (forest max trees) * (1 - (interior * 0.7))";
        range = 3100;
        rangeCurve[] = {{0, 0}, {150, 1}, {3100, 1}};
        limitation = 1;
    };
    class RHS_mmg1_delayed_Interior_close_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\mmg1_delayed\Interior_close_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\mmg1_delayed\Interior_close_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\mmg1_delayed\Interior_close_3", 1}};
        volume = "0.88 * 3.20 * interior";
        range = 7;
        rangeCurve[] = {{0, 1}, {3, 1}, {7, 0}};
        limitation = 1;
    };
    class RHS_mmg1_delayed_noise_meadows_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\noise\big\meadows_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\noise\big\meadows_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\noise\big\meadows_3", 1}};
        volume = "(1.35 * (meadows max sea)) * (1 - interior)";
        range = 250;
        rangeCurve[] = {{0, 1}, {250, 0}};
    };
    class RHS_mmg1_delayed_noise_meadows_interior_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\noise\big\meadows_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\noise\big\meadows_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\noise\big\meadows_3", 1}};
        volume = "(1.35 * (meadows max sea)) * (1 - interior)";
        range = 250;
        rangeCurve[] = {{0, 1}, {250, 0}};
    };
    class RHS_mmg1_delayed_noise_forest_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\noise\big\forest_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\noise\big\forest_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\noise\big\forest_3", 1}};
        volume = "(1.35 * (forest max trees)) * (1 - interior)";
        range = 250;
        rangeCurve[] = {{0, 1}, {250, 0}};
    };
    class RHS_mmg1_delayed_noise_houses_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\noise\big\houses_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\noise\big\houses_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\noise\big\houses_3", 1}};
        volume = "(1.35 * houses)) * (1 - interior)";
        range = 250;
        rangeCurve[] = {{0, 1}, {250, 0}};
    };
    class RHS_rifle2_Meadows_close_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\rifle2\Meadows_close_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\rifle2\Meadows_close_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\rifle2\Meadows_close_3", 1}};
        volume = "0.93 * (meadows max sea) * (1 - (interior * 0.7))";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHS_rifle2_Meadows_far_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\rifle2\Meadows_far_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\rifle2\Meadows_far_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\rifle2\Meadows_far_3", 1}};
        volume = "0.93 * (meadows max sea) * (1 - (interior * 0.7))";
        range = 3100;
        rangeCurve[] = {{0, 0}, {150, 1}, {3100, 1}};
        limitation = 1;
    };
    class RHS_rifle2_Houses_close_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\rifle2\Houses_close_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\rifle2\Houses_close_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\rifle2\Houses_close_3", 1}};
        volume = "0.93 * houses * (1 - (interior * 0.7))";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHS_rifle2_Houses_far_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\rifle2\Houses_far_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\rifle2\Houses_far_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\rifle2\Houses_far_3", 1}};
        volume = "0.93 * houses * (1 - (interior * 0.7))";
        range = 3100;
        rangeCurve[] = {{0, 0}, {150, 1}, {3100, 1}};
        limitation = 1;
    };
    class RHS_rifle2_Forest_close_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\rifle2\Forest_close_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\rifle2\Forest_close_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\rifle2\Forest_close_3", 1}};
        volume = "0.93 * (forest max trees) * (1 - (interior * 0.7))";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHS_rifle2_Forest_far_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\rifle2\Forest_far_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\rifle2\Forest_far_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\rifle2\Forest_far_3", 1}};
        volume = "0.93 * (forest max trees) * (1 - (interior * 0.7))";
        range = 3100;
        rangeCurve[] = {{0, 0}, {150, 1}, {3100, 1}};
        limitation = 1;
    };
    class RHS_rifle2_Interior_close_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\rifle2\Interior_close_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\rifle2\Interior_close_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\rifle2\Interior_close_3", 1}};
        volume = "0.93 * 3.20 * interior";
        range = 7;
        rangeCurve[] = {{0, 1}, {3, 1}, {7, 0}};
        limitation = 1;
    };
    class RHS_rifle2_noise_meadows_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\noise\big\meadows_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\noise\big\meadows_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\noise\big\meadows_3", 1}};
        volume = "(1.35 * (meadows max sea)) * (1 - interior)";
        range = 250;
        rangeCurve[] = {{0, 1}, {250, 0}};
    };
    class RHS_rifle2_noise_meadows_interior_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\noise\big\meadows_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\noise\big\meadows_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\noise\big\meadows_3", 1}};
        volume = "(1.35 * (meadows max sea)) * (1 - interior)";
        range = 250;
        rangeCurve[] = {{0, 1}, {250, 0}};
    };
    class RHS_rifle2_noise_forest_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\noise\big\forest_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\noise\big\forest_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\noise\big\forest_3", 1}};
        volume = "(1.35 * (forest max trees)) * (1 - interior)";
        range = 250;
        rangeCurve[] = {{0, 1}, {250, 0}};
    };
    class RHS_rifle2_noise_houses_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\noise\big\houses_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\noise\big\houses_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\noise\big\houses_3", 1}};
        volume = "(1.35 * houses)) * (1 - interior)";
        range = 250;
        rangeCurve[] = {{0, 1}, {250, 0}};
    };
    class RHS_cannon_Meadows_close_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\cannon\Meadows_close_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\cannon\Meadows_close_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\cannon\Meadows_close_3", 1}};
        volume = "1.3 * (meadows max sea) * (1 - (interior * 0.7))";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHS_cannon_Meadows_far_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\cannon\Meadows_far_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\cannon\Meadows_far_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\cannon\Meadows_far_3", 1}};
        volume = "1.3 * (meadows max sea) * (1 - (interior * 0.7))";
        range = 4500;
        rangeCurve[] = {{0, 0}, {150, 1}, {4500, 1}};
        limitation = 1;
    };
    class RHS_cannon_Houses_close_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\cannon\Houses_close_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\cannon\Houses_close_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\cannon\Houses_close_3", 1}};
        volume = "1.3 * houses * (1 - (interior * 0.7))";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHS_cannon_Houses_far_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\cannon\Houses_far_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\cannon\Houses_far_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\cannon\Houses_far_3", 1}};
        volume = "1.3 * houses * (1 - (interior * 0.7))";
        range = 4500;
        rangeCurve[] = {{0, 0}, {150, 1}, {4500, 1}};
        limitation = 1;
    };
    class RHS_cannon_Forest_close_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\cannon\Forest_close_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\cannon\Forest_close_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\cannon\Forest_close_3", 1}};
        volume = "1.3 * (forest max trees) * (1 - (interior * 0.7))";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHS_cannon_Forest_far_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\cannon\Forest_far_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\cannon\Forest_far_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\cannon\Forest_far_3", 1}};
        volume = "1.3 * (forest max trees) * (1 - (interior * 0.7))";
        range = 4500;
        rangeCurve[] = {{0, 0}, {150, 1}, {4500, 1}};
        limitation = 1;
    };
    class RHS_cannon_Interior_close_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\cannon\Interior_close_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\cannon\Interior_close_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\cannon\Interior_close_3", 1}};
        volume = "1.3 * 3.20 * interior";
        range = 7;
        rangeCurve[] = {{0, 1}, {3, 1}, {7, 0}};
        limitation = 1;
    };
    class RHS_cannon_noise_meadows_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\noise\big\meadows_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\noise\big\meadows_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\noise\big\meadows_3", 1}};
        volume = "(1.35 * (meadows max sea)) * (1 - interior)";
        range = 300;
        rangeCurve[] = {{0, 1}, {300, 0}};
    };
    class RHS_cannon_noise_meadows_interior_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\noise\big\meadows_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\noise\big\meadows_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\noise\big\meadows_3", 1}};
        volume = "(1.35 * (meadows max sea)) * (1 - interior)";
        range = 300;
        rangeCurve[] = {{0, 1}, {300, 0}};
    };
    class RHS_cannon_noise_forest_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\noise\big\forest_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\noise\big\forest_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\noise\big\forest_3", 1}};
        volume = "(1.35 * (forest max trees)) * (1 - interior)";
        range = 300;
        rangeCurve[] = {{0, 1}, {300, 0}};
    };
    class RHS_cannon_noise_houses_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\noise\big\houses_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\noise\big\houses_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\noise\big\houses_3", 1}};
        volume = "(1.35 * houses)) * (1 - interior)";
        range = 300;
        rangeCurve[] = {{0, 1}, {300, 0}};
    };
    class RHS_autocannon_Meadows_close_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\autocannon\Meadows_close_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\autocannon\Meadows_close_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\autocannon\Meadows_close_3", 1}};
        volume = "1.10 * (meadows max sea) * (1 - (interior * 0.7))";
        range = 300;
        rangeCurve[] = {{0, 1}, {300, 0}};
        limitation = 1;
    };
    class RHS_autocannon_Meadows_far_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\autocannon\Meadows_far_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\autocannon\Meadows_far_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\autocannon\Meadows_far_3", 1}};
        volume = "1.10 * (meadows max sea) * (1 - (interior * 0.7))";
        range = 4200;
        rangeCurve[] = {{0, 0}, {300, 1}, {4200, 1}};
        limitation = 1;
    };
    class RHS_autocannon_Houses_close_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\autocannon\Houses_close_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\autocannon\Houses_close_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\autocannon\Houses_close_3", 1}};
        volume = "1.10 * houses * (1 - (interior * 0.7))";
        range = 300;
        rangeCurve[] = {{0, 1}, {300, 0}};
        limitation = 1;
    };
    class RHS_autocannon_Houses_far_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\autocannon\Houses_far_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\autocannon\Houses_far_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\autocannon\Houses_far_3", 1}};
        volume = "1.10 * houses * (1 - (interior * 0.7))";
        range = 4200;
        rangeCurve[] = {{0, 0}, {300, 1}, {4200, 1}};
        limitation = 1;
    };
    class RHS_autocannon_Forest_close_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\autocannon\Forest_close_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\autocannon\Forest_close_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\autocannon\Forest_close_3", 1}};
        volume = "1.10 * (forest max trees) * (1 - (interior * 0.7))";
        range = 300;
        rangeCurve[] = {{0, 1}, {300, 0}};
        limitation = 1;
    };
    class RHS_autocannon_Forest_far_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\autocannon\Forest_far_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\autocannon\Forest_far_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\autocannon\Forest_far_3", 1}};
        volume = "1.10 * (forest max trees) * (1 - (interior * 0.7))";
        range = 4200;
        rangeCurve[] = {{0, 0}, {300, 1}, {4200, 1}};
        limitation = 1;
    };
    class RHS_autocannon_Interior_close_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\autocannon\Interior_close_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\autocannon\Interior_close_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\autocannon\Interior_close_3", 1}};
        volume = "1.10 * 3.20 * interior";
        range = 7;
        rangeCurve[] = {{0, 1}, {3, 1}, {7, 0}};
        limitation = 1;
    };
    class RHS_autocannon_noise_meadows_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\noise\big\meadows_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\noise\big\meadows_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\noise\big\meadows_3", 1}};
        volume = "(1.35 * (meadows max sea)) * (1 - interior)";
        range = 300;
        rangeCurve[] = {{0, 1}, {300, 0}};
    };
    class RHS_autocannon_noise_meadows_interior_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\noise\big\meadows_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\noise\big\meadows_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\noise\big\meadows_3", 1}};
        volume = "(1.35 * (meadows max sea)) * (1 - interior)";
        range = 300;
        rangeCurve[] = {{0, 1}, {300, 0}};
    };
    class RHS_autocannon_noise_forest_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\noise\big\forest_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\noise\big\forest_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\noise\big\forest_3", 1}};
        volume = "(1.35 * (forest max trees)) * (1 - interior)";
        range = 300;
        rangeCurve[] = {{0, 1}, {300, 0}};
    };
    class RHS_autocannon_noise_houses_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\noise\big\houses_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\noise\big\houses_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\noise\big\houses_3", 1}};
        volume = "(1.35 * houses)) * (1 - interior)";
        range = 300;
        rangeCurve[] = {{0, 1}, {300, 0}};
    };
    class RHS_20mm_Meadows_close_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\20mm\Meadows_close_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\20mm\Meadows_close_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\20mm\Meadows_close_3", 1}};
        volume = "1 * (meadows max sea) * (1 - (interior * 0.7))";
        range = 300;
        rangeCurve[] = {{0, 1}, {300, 0}};
        limitation = 1;
    };
    class RHS_20mm_Meadows_far_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\20mm\Meadows_far_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\20mm\Meadows_far_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\20mm\Meadows_far_3", 1}};
        volume = "1 * (meadows max sea) * (1 - (interior * 0.7))";
        range = 4200;
        rangeCurve[] = {{0, 0}, {300, 1}, {4200, 1}};
        limitation = 1;
    };
    class RHS_20mm_Houses_close_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\20mm\Houses_close_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\20mm\Houses_close_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\20mm\Houses_close_3", 1}};
        volume = "1 * houses * (1 - (interior * 0.7))";
        range = 300;
        rangeCurve[] = {{0, 1}, {300, 0}};
        limitation = 1;
    };
    class RHS_20mm_Houses_far_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\20mm\Houses_far_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\20mm\Houses_far_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\20mm\Houses_far_3", 1}};
        volume = "1 * houses * (1 - (interior * 0.7))";
        range = 4200;
        rangeCurve[] = {{0, 0}, {300, 1}, {4200, 1}};
        limitation = 1;
    };
    class RHS_20mm_Forest_close_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\20mm\Forest_close_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\20mm\Forest_close_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\20mm\Forest_close_3", 1}};
        volume = "1 * (forest max trees) * (1 - (interior * 0.7))";
        range = 300;
        rangeCurve[] = {{0, 1}, {300, 0}};
        limitation = 1;
    };
    class RHS_20mm_Forest_far_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\20mm\Forest_far_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\20mm\Forest_far_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\20mm\Forest_far_3", 1}};
        volume = "1 * (forest max trees) * (1 - (interior * 0.7))";
        range = 4200;
        rangeCurve[] = {{0, 0}, {300, 1}, {4200, 1}};
        limitation = 1;
    };
    class RHS_20mm_Interior_close_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\tails\20mm\Interior_close_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\20mm\Interior_close_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\tails\20mm\Interior_close_3", 1}};
        volume = "1 * 3.20 * interior";
        range = 7;
        rangeCurve[] = {{0, 1}, {3, 1}, {7, 0}};
        limitation = 1;
    };
    class RHS_20mm_noise_meadows_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\noise\big\meadows_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\noise\big\meadows_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\noise\big\meadows_3", 1}};
        volume = "(1.35 * (meadows max sea)) * (1 - interior)";
        range = 300;
        rangeCurve[] = {{0, 1}, {300, 0}};
    };
    class RHS_20mm_noise_meadows_interior_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\noise\big\meadows_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\noise\big\meadows_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\noise\big\meadows_3", 1}};
        volume = "(1.35 * (meadows max sea)) * (1 - interior)";
        range = 300;
        rangeCurve[] = {{0, 1}, {300, 0}};
    };
    class RHS_20mm_noise_forest_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\noise\big\forest_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\noise\big\forest_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\noise\big\forest_3", 1}};
        volume = "(1.35 * (forest max trees)) * (1 - interior)";
        range = 300;
        rangeCurve[] = {{0, 1}, {300, 0}};
    };
    class RHS_20mm_noise_houses_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_weapon_sounds\noise\big\houses_1", 1}, {"rhsafrf\addons\rhs_weapon_sounds\noise\big\houses_2", 1}, {"rhsafrf\addons\rhs_weapon_sounds\noise\big\houses_3", 1}};
        volume = "(1.35 * houses)) * (1 - interior)";
        range = 300;
        rangeCurve[] = {{0, 1}, {300, 0}};
    };
};
class CfgSoundSets {
    class RHS_AK74_Shot_SoundSet {
        soundShaders[] = {
            "RHS_AK74_punch_close_SoundShader",
            "RHS_AK74_punch_close_interior_SoundShader",
            "RHS_AK74_punch_mid_SoundShader",
            "RHS_AK74_punch_far_SoundShader",
            "RHS_AK74_character_SoundShader",
            "RHS_AK74_Closure_SoundShader",
            "RHS_AK74_Interior_closeMono_SoundShader",
            "RHS_AK74_Interior_far_SoundShader"
        };
        volumeFactor = 1.25;
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        sound3DProcessingType = "RHS_Shot_light_3DProcessingType";
        distanceFilter = "RHS_rifleShotDistanceFilter";
        frequencyRandomizer = 0.5;
        frequencyRandomizerMin = 0.1;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHS_sd_AK74_Shot_SoundSet {
        soundShaders[] = {
            "RHS_sd_AK74_punch_close_SoundShader",
            "RHS_sd_AK74_punch_close_interior_SoundShader",
            "RHS_sd_AK74_punch_mid_SoundShader",
            "RHS_sd_AK74_punch_far_SoundShader",
            "RHS_sd_AK74_character_SoundShader",
            "RHS_sd_AK74_Closure_SoundShader",
            "RHS_sd_AK74_Interior_closeMono_SoundShader",
            "RHS_sd_AK74_Interior_far_SoundShader"
        };
        volumeFactor = 1.25;
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        sound3DProcessingType = "RHS_Shot_light_3DProcessingType";
        distanceFilter = "RHS_rifleShotDistanceFilter";
        frequencyRandomizer = 0.5;
        frequencyRandomizerMin = 0.1;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHS_PK_Shot_SoundSet {
        soundShaders[] = {
            "RHS_PK_punch_close_SoundShader",
            "RHS_PK_punch_close_interior_SoundShader",
            "RHS_PK_punch_mid_SoundShader",
            "RHS_PK_punch_far_SoundShader",
            "RHS_PK_character_SoundShader",
            "RHS_PK_Closure_SoundShader",
            "RHS_PK_Interior_closeMono_SoundShader",
            "RHS_PK_Interior_far_SoundShader"
        };
        volumeFactor = 1.25;
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        sound3DProcessingType = "RHS_Shot_light_3DProcessingType";
        distanceFilter = "RHS_rifleShotDistanceFilter";
        frequencyRandomizer = 0.5;
        frequencyRandomizerMin = 0.1;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHS_veh_PK_Shot_SoundSet {
        soundShaders[] = {
            "RHS_veh_PK_punch_close_SoundShader",
            "RHS_veh_PK_punch_close_interior_SoundShader",
            "RHS_veh_PK_punch_mid_SoundShader",
            "RHS_veh_PK_punch_far_SoundShader",
            "RHS_veh_PK_character_SoundShader",
            "RHS_veh_PK_Closure_SoundShader",
            "RHS_veh_PK_Interior_closeMono_SoundShader",
            "RHS_veh_PK_Interior_far_SoundShader"
        };
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        volumeFactor = 1.25;
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "RHS_Shot_light_3DProcessingType";
        distanceFilter = "RHS_rifleShotDistanceFilter";
        frequencyRandomizer = 0.5;
        frequencyRandomizerMin = 0.1;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHS_veh_PK_Int_Shot_SoundSet {
        soundShaders[] = {"RHS_veh_PK_punch_close_interior_SoundShader"};
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        volumeFactor = "1.25*0.7";
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "RHS_Shot_light_3DProcessingType";
        distanceFilter = "RHS_vehicletDistanceFilter";
        frequencyRandomizer = 0.5;
        frequencyRandomizerMin = 0.1;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHS_SVD_Shot_SoundSet {
        soundShaders[] = {
            "RHS_SVD_punch_close_SoundShader",
            "RHS_SVD_punch_close_interior_SoundShader",
            "RHS_SVD_punch_mid_SoundShader",
            "RHS_SVD_punch_far_SoundShader",
            "RHS_SVD_character_SoundShader",
            "RHS_SVD_Closure_SoundShader",
            "RHS_SVD_Interior_closeMono_SoundShader",
            "RHS_SVD_Interior_far_SoundShader"
        };
        volumeFactor = 1.25;
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        sound3DProcessingType = "RHS_Shot_light_3DProcessingType";
        distanceFilter = "RHS_rifleShotDistanceFilter";
        frequencyRandomizer = 0.5;
        frequencyRandomizerMin = 0.1;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHS_sd_SVD_Shot_SoundSet {
        soundShaders[] = {
            "RHS_sd_SVD_punch_close_SoundShader",
            "RHS_sd_SVD_punch_close_interior_SoundShader",
            "RHS_sd_SVD_punch_mid_SoundShader",
            "RHS_sd_SVD_punch_far_SoundShader",
            "RHS_sd_SVD_character_SoundShader",
            "RHS_sd_SVD_Closure_SoundShader",
            "RHS_sd_SVD_Interior_closeMono_SoundShader",
            "RHS_sd_SVD_Interior_far_SoundShader"
        };
        volumeFactor = 1.25;
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        sound3DProcessingType = "RHS_Shot_light_3DProcessingType";
        distanceFilter = "RHS_rifleShotDistanceFilter";
        frequencyRandomizer = 0.5;
        frequencyRandomizerMin = 0.1;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHS_AKM_Shot_SoundSet {
        soundShaders[] = {
            "RHS_AKM_punch_close_SoundShader",
            "RHS_AKM_punch_close_interior_SoundShader",
            "RHS_AKM_punch_mid_SoundShader",
            "RHS_AKM_punch_far_SoundShader",
            "RHS_AKM_character_SoundShader",
            "RHS_AKM_Closure_SoundShader",
            "RHS_AKM_Interior_closeMono_SoundShader",
            "RHS_AKM_Interior_far_SoundShader"
        };
        volumeFactor = 1.25;
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        sound3DProcessingType = "RHS_Shot_light_3DProcessingType";
        distanceFilter = "RHS_rifleShotDistanceFilter";
        frequencyRandomizer = 0.5;
        frequencyRandomizerMin = 0.1;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHS_sd_AKM_Shot_SoundSet {
        soundShaders[] = {
            "RHS_sd_AKM_punch_close_SoundShader",
            "RHS_sd_AKM_punch_close_interior_SoundShader",
            "RHS_sd_AKM_punch_mid_SoundShader",
            "RHS_sd_AKM_punch_far_SoundShader",
            "RHS_sd_AKM_character_SoundShader",
            "RHS_sd_AKM_Closure_SoundShader",
            "RHS_sd_AKM_Interior_closeMono_SoundShader",
            "RHS_sd_AKM_Interior_far_SoundShader"
        };
        volumeFactor = 1.25;
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        sound3DProcessingType = "RHS_Shot_light_3DProcessingType";
        distanceFilter = "RHS_rifleShotDistanceFilter";
        frequencyRandomizer = 0.5;
        frequencyRandomizerMin = 0.1;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHS_orsis_Shot_SoundSet {
        soundShaders[] = {
            "RHS_orsis_punch_close_SoundShader",
            "RHS_orsis_punch_close_interior_SoundShader",
            "RHS_orsis_punch_mid_SoundShader",
            "RHS_orsis_punch_far_SoundShader",
            "RHS_orsis_character_SoundShader",
            "RHS_orsis_Closure_SoundShader",
            "RHS_orsis_Interior_closeMono_SoundShader",
            "RHS_orsis_Interior_far_SoundShader"
        };
        volumeFactor = 1.25;
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        sound3DProcessingType = "RHS_Shot_light_3DProcessingType";
        distanceFilter = "RHS_rifleShotDistanceFilter";
        frequencyRandomizer = 0.5;
        frequencyRandomizerMin = 0.1;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHS_sd_orsis_Shot_SoundSet {
        soundShaders[] = {
            "RHS_sd_orsis_punch_close_SoundShader",
            "RHS_sd_orsis_punch_close_interior_SoundShader",
            "RHS_sd_orsis_punch_mid_SoundShader",
            "RHS_sd_orsis_punch_far_SoundShader",
            "RHS_sd_orsis_character_SoundShader",
            "RHS_sd_orsis_Closure_SoundShader",
            "RHS_sd_orsis_Interior_closeMono_SoundShader",
            "RHS_sd_orsis_Interior_far_SoundShader"
        };
        volumeFactor = 1.25;
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        sound3DProcessingType = "RHS_Shot_light_3DProcessingType";
        distanceFilter = "RHS_rifleShotDistanceFilter";
        frequencyRandomizer = 0.5;
        frequencyRandomizerMin = 0.1;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHS_pp2000_Shot_SoundSet {
        soundShaders[] = {
            "RHS_pp2000_punch_close_SoundShader",
            "RHS_pp2000_punch_close_interior_SoundShader",
            "RHS_pp2000_punch_mid_SoundShader",
            "RHS_pp2000_punch_far_SoundShader",
            "RHS_pp2000_character_SoundShader",
            "RHS_pp2000_Closure_SoundShader",
            "RHS_pp2000_Interior_closeMono_SoundShader",
            "RHS_pp2000_Interior_far_SoundShader"
        };
        volumeFactor = 1.25;
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        sound3DProcessingType = "RHS_Shot_light_3DProcessingType";
        distanceFilter = "RHS_rifleShotDistanceFilter";
        frequencyRandomizer = 0.5;
        frequencyRandomizerMin = 0.1;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHS_pistol1_Tail_SoundSet {
        soundShaders[] = {
            "RHS_pistol1_Meadows_close_SoundShader",
            "RHS_pistol1_Meadows_far_SoundShader",
            "RHS_pistol1_Houses_close_SoundShader",
            "RHS_pistol1_Houses_far_SoundShader",
            "RHS_pistol1_Forest_close_SoundShader",
            "RHS_pistol1_Forest_far_SoundShader",
            "RHS_pistol1_Interior_close_SoundShader",
            "RHS_pistol1_noise_meadows_SoundShader",
            "RHS_pistol1_noise_forest_SoundShader",
            "RHS_pistol1_noise_houses_SoundShader"
        };
        volumeFactor = "1 * 0.8";
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        sound3DProcessingType = "RHS_Tail_3DProcessingType";
        soundShadersLimit = 2;
        distanceFilter = "RHS_rifleShotDistanceFilter";
        frequencyRandomizer = 2;
        frequencyRandomizerMin = 0.2;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHS_rifle1_Tail_SoundSet {
        soundShaders[] = {
            "RHS_rifle1_Meadows_close_SoundShader",
            "RHS_rifle1_Meadows_far_SoundShader",
            "RHS_rifle1_Houses_close_SoundShader",
            "RHS_rifle1_Houses_far_SoundShader",
            "RHS_rifle1_Forest_close_SoundShader",
            "RHS_rifle1_Forest_far_SoundShader",
            "RHS_rifle1_Interior_close_SoundShader",
            "RHS_rifle1_noise_meadows_SoundShader",
            "RHS_rifle1_noise_forest_SoundShader",
            "RHS_rifle1_noise_houses_SoundShader"
        };
        volumeFactor = "1 * 0.64";
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        sound3DProcessingType = "RHS_Tail_3DProcessingType";
        soundShadersLimit = 2;
        distanceFilter = "RHS_rifleShotDistanceFilter";
        frequencyRandomizer = 2;
        frequencyRandomizerMin = 0.2;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHS_sd_rifle1_Tail_SoundSet {
        soundShaders[] = {
            "RHS_sd_rifle1_Meadows_close_SoundShader",
            "RHS_sd_rifle1_Meadows_far_SoundShader",
            "RHS_sd_rifle1_Houses_close_SoundShader",
            "RHS_sd_rifle1_Houses_far_SoundShader",
            "RHS_sd_rifle1_Forest_close_SoundShader",
            "RHS_sd_rifle1_Forest_far_SoundShader",
            "RHS_sd_rifle1_Interior_close_SoundShader",
            "RHS_sd_rifle1_noise_meadows_SoundShader",
            "RHS_sd_rifle1_noise_forest_SoundShader",
            "RHS_sd_rifle1_noise_houses_SoundShader"
        };
        volumeFactor = "1 * 0.58";
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        sound3DProcessingType = "RHS_Tail_3DProcessingType";
        soundShadersLimit = 2;
        distanceFilter = "RHS_rifleShotDistanceFilter";
        frequencyRandomizer = 2;
        frequencyRandomizerMin = 0.2;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHS_sd_mmg1_Tail_SoundSet {
        soundShaders[] = {
            "RHS_sd_mmg1_Meadows_close_SoundShader",
            "RHS_sd_mmg1_Meadows_far_SoundShader",
            "RHS_sd_mmg1_Houses_close_SoundShader",
            "RHS_sd_mmg1_Houses_far_SoundShader",
            "RHS_sd_mmg1_Forest_close_SoundShader",
            "RHS_sd_mmg1_Forest_far_SoundShader",
            "RHS_sd_mmg1_Interior_close_SoundShader",
            "RHS_sd_mmg1_noise_meadows_SoundShader",
            "RHS_sd_mmg1_noise_forest_SoundShader",
            "RHS_sd_mmg1_noise_houses_SoundShader"
        };
        volumeFactor = "1 * 0.63";
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        sound3DProcessingType = "RHS_Tail_3DProcessingType";
        soundShadersLimit = 2;
        distanceFilter = "RHS_rifleShotDistanceFilter";
        frequencyRandomizer = 2;
        frequencyRandomizerMin = 0.2;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHS_mmg1_Tail_SoundSet {
        soundShaders[] = {
            "RHS_mmg1_Meadows_close_SoundShader",
            "RHS_mmg1_Meadows_far_SoundShader",
            "RHS_mmg1_Houses_close_SoundShader",
            "RHS_mmg1_Houses_far_SoundShader",
            "RHS_mmg1_Forest_close_SoundShader",
            "RHS_mmg1_Forest_far_SoundShader",
            "RHS_mmg1_Interior_close_SoundShader",
            "RHS_mmg1_noise_meadows_SoundShader",
            "RHS_mmg1_noise_forest_SoundShader",
            "RHS_mmg1_noise_houses_SoundShader"
        };
        volumeFactor = "1 * 0.68";
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        sound3DProcessingType = "RHS_Tail_3DProcessingType";
        soundShadersLimit = 2;
        distanceFilter = "RHS_rifleShotDistanceFilter";
        frequencyRandomizer = 2;
        frequencyRandomizerMin = 0.2;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHS_veh_mmg1_Tail_SoundSet {
        soundShaders[] = {
            "RHS_veh_mmg1_Meadows_close_SoundShader",
            "RHS_veh_mmg1_Meadows_far_SoundShader",
            "RHS_veh_mmg1_Houses_close_SoundShader",
            "RHS_veh_mmg1_Houses_far_SoundShader",
            "RHS_veh_mmg1_Forest_close_SoundShader",
            "RHS_veh_mmg1_Forest_far_SoundShader",
            "RHS_veh_mmg1_Interior_close_SoundShader",
            "RHS_veh_mmg1_noise_meadows_SoundShader",
            "RHS_veh_mmg1_noise_forest_SoundShader",
            "RHS_veh_mmg1_noise_houses_SoundShader"
        };
        volumeFactor = "1 * 0.68";
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        sound3DProcessingType = "RHS_Tail_3DProcessingType";
        soundShadersLimit = 2;
        distanceFilter = "RHS_rifleShotDistanceFilter";
        frequencyRandomizer = 2;
        frequencyRandomizerMin = 0.2;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHS_mmg1_delayed_Tail_SoundSet {
        soundShaders[] = {
            "RHS_mmg1_delayed_Meadows_close_SoundShader",
            "RHS_mmg1_delayed_Meadows_far_SoundShader",
            "RHS_mmg1_delayed_Houses_close_SoundShader",
            "RHS_mmg1_delayed_Houses_far_SoundShader",
            "RHS_mmg1_delayed_Forest_close_SoundShader",
            "RHS_mmg1_delayed_Forest_far_SoundShader",
            "RHS_mmg1_delayed_Interior_close_SoundShader",
            "RHS_mmg1_delayed_noise_meadows_SoundShader",
            "RHS_mmg1_delayed_noise_forest_SoundShader",
            "RHS_mmg1_delayed_noise_houses_SoundShader"
        };
        volumeFactor = "1 * 0.68";
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        sound3DProcessingType = "RHS_Tail_3DProcessingType";
        soundShadersLimit = 2;
        distanceFilter = "RHS_rifleShotDistanceFilter";
        frequencyRandomizer = 2;
        frequencyRandomizerMin = 0.2;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHS_rifle2_Tail_SoundSet {
        soundShaders[] = {
            "RHS_rifle2_Meadows_close_SoundShader",
            "RHS_rifle2_Meadows_far_SoundShader",
            "RHS_rifle2_Houses_close_SoundShader",
            "RHS_rifle2_Houses_far_SoundShader",
            "RHS_rifle2_Forest_close_SoundShader",
            "RHS_rifle2_Forest_far_SoundShader",
            "RHS_rifle2_Interior_close_SoundShader",
            "RHS_rifle2_noise_meadows_SoundShader",
            "RHS_rifle2_noise_forest_SoundShader",
            "RHS_rifle2_noise_houses_SoundShader"
        };
        volumeFactor = "1 * 0.7";
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        sound3DProcessingType = "RHS_Tail_3DProcessingType";
        soundShadersLimit = 2;
        distanceFilter = "RHS_rifleShotDistanceFilter";
        frequencyRandomizer = 2;
        frequencyRandomizerMin = 0.2;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHS_cannon_Tail_SoundSet {
        soundShaders[] = {
            "RHS_cannon_Meadows_close_SoundShader",
            "RHS_cannon_Meadows_far_SoundShader",
            "RHS_cannon_Houses_close_SoundShader",
            "RHS_cannon_Houses_far_SoundShader",
            "RHS_cannon_Forest_close_SoundShader",
            "RHS_cannon_Forest_far_SoundShader",
            "RHS_cannon_Interior_close_SoundShader",
            "RHS_cannon_noise_meadows_SoundShader",
            "RHS_cannon_noise_forest_SoundShader",
            "RHS_cannon_noise_houses_SoundShader"
        };
        volumeFactor = "1 * 1";
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        sound3DProcessingType = "RHS_Tail_3DProcessingType";
        soundShadersLimit = 2;
        distanceFilter = "RHS_rifleShotDistanceFilter";
        frequencyRandomizer = 2;
        frequencyRandomizerMin = 0.2;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHS_veh_cannon_Tail_SoundSet {
        soundShaders[] = {
            "RHS_veh_cannon_Meadows_close_SoundShader",
            "RHS_veh_cannon_Meadows_far_SoundShader",
            "RHS_veh_cannon_Houses_close_SoundShader",
            "RHS_veh_cannon_Houses_far_SoundShader",
            "RHS_veh_cannon_Forest_close_SoundShader",
            "RHS_veh_cannon_Forest_far_SoundShader",
            "RHS_veh_cannon_Interior_close_SoundShader",
            "RHS_veh_cannon_noise_meadows_SoundShader",
            "RHS_veh_cannon_noise_forest_SoundShader",
            "RHS_veh_cannon_noise_houses_SoundShader"
        };
        volumeFactor = "1 * 1";
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        sound3DProcessingType = "RHS_Tail_3DProcessingType";
        soundShadersLimit = 2;
        distanceFilter = "RHS_rifleShotDistanceFilter";
        frequencyRandomizer = 2;
        frequencyRandomizerMin = 0.2;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHS_autocannon_Tail_SoundSet {
        soundShaders[] = {
            "RHS_autocannon_Meadows_close_SoundShader",
            "RHS_autocannon_Meadows_far_SoundShader",
            "RHS_autocannon_Houses_close_SoundShader",
            "RHS_autocannon_Houses_far_SoundShader",
            "RHS_autocannon_Forest_close_SoundShader",
            "RHS_autocannon_Forest_far_SoundShader",
            "RHS_autocannon_Interior_close_SoundShader",
            "RHS_autocannon_noise_meadows_SoundShader",
            "RHS_autocannon_noise_forest_SoundShader",
            "RHS_autocannon_noise_houses_SoundShader"
        };
        volumeFactor = "1 * 1";
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        sound3DProcessingType = "RHS_Tail_3DProcessingType";
        soundShadersLimit = 2;
        distanceFilter = "RHS_rifleShotDistanceFilter";
        frequencyRandomizer = 2;
        frequencyRandomizerMin = 0.2;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHS_veh_autocannon_Tail_SoundSet {
        soundShaders[] = {
            "RHS_veh_autocannon_Meadows_close_SoundShader",
            "RHS_veh_autocannon_Meadows_far_SoundShader",
            "RHS_veh_autocannon_Houses_close_SoundShader",
            "RHS_veh_autocannon_Houses_far_SoundShader",
            "RHS_veh_autocannon_Forest_close_SoundShader",
            "RHS_veh_autocannon_Forest_far_SoundShader",
            "RHS_veh_autocannon_Interior_close_SoundShader",
            "RHS_veh_autocannon_noise_meadows_SoundShader",
            "RHS_veh_autocannon_noise_forest_SoundShader",
            "RHS_veh_autocannon_noise_houses_SoundShader"
        };
        volumeFactor = "1 * 1";
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        sound3DProcessingType = "RHS_Tail_3DProcessingType";
        soundShadersLimit = 2;
        distanceFilter = "RHS_rifleShotDistanceFilter";
        frequencyRandomizer = 2;
        frequencyRandomizerMin = 0.2;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHS_20mm_Tail_SoundSet {
        soundShaders[] = {
            "RHS_20mm_Meadows_close_SoundShader",
            "RHS_20mm_Meadows_far_SoundShader",
            "RHS_20mm_Houses_close_SoundShader",
            "RHS_20mm_Houses_far_SoundShader",
            "RHS_20mm_Forest_close_SoundShader",
            "RHS_20mm_Forest_far_SoundShader",
            "RHS_20mm_Interior_close_SoundShader",
            "RHS_20mm_noise_meadows_SoundShader",
            "RHS_20mm_noise_forest_SoundShader",
            "RHS_20mm_noise_houses_SoundShader"
        };
        volumeFactor = "1 * 1";
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        sound3DProcessingType = "RHS_Tail_3DProcessingType";
        soundShadersLimit = 2;
        distanceFilter = "RHS_rifleShotDistanceFilter";
        frequencyRandomizer = 2;
        frequencyRandomizerMin = 0.2;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
};
class CfgWeapons {
    class Rifle_Base_F;
    class Pistol_Base_F;
    class arifle_MX_Base_F: Rifle_Base_F {};
    class Rifle_Short_Base_F;
    class Rifle_Long_Base_F;
    class UGL_F;
    class srifle_EBR_F;
    class LMG_Mk200_F;
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
    class pdw2000_base_F;
    class hgun_PDW2000_F: pdw2000_base_F {
        class Single;
        class FullAuto;
        class WeaponSlotsInfo;
    };
    class rhs_weap_pp2000: hgun_PDW2000_F {
        class Single: Single {
            sounds[] = {"StandardSound"};
            class StandardSound {
                soundSetShot[] = {"RHS_pp2000_Shot_SoundSet", "RHS_pistol1_Tail_SoundSet"};
            };
        };
        class FullAuto: FullAuto {
            class StandardSound {
                soundSetShot[] = {"RHS_pp2000_Shot_SoundSet", "RHS_pistol1_Tail_SoundSet"};
            };
        };
    };
    class rhs_weap_ak74m_Base_F: Rifle_Base_F {
        class Single: Mode_SemiAuto {
            sounds[] = {"StandardSound", "SilencedSound"};
            class StandardSound {
                soundSetShot[] = {"RHS_AK74_Shot_SoundSet", "RHS_Rifle1_Tail_SoundSet"};
            };
            class SilencedSound {
                soundSetShot[] = {"RHS_sd_AK74_Shot_SoundSet", "RHS_sd_Rifle1_Tail_SoundSet"};
            };
        };
        class FullAuto: Mode_FullAuto {
            sounds[] = {"StandardSound", "SilencedSound"};
            class StandardSound {
                soundSetShot[] = {"RHS_AK74_Shot_SoundSet", "RHS_Rifle1_Tail_SoundSet"};
            };
            class SilencedSound {
                soundSetShot[] = {"RHS_sd_AK74_Shot_SoundSet", "RHS_sd_Rifle1_Tail_SoundSet"};
            };
        };
    };
    class rhs_weap_ak74m: rhs_weap_ak74m_Base_F {};
    class rhs_weap_akm: rhs_weap_ak74m {
        class Single: Mode_SemiAuto {
            sounds[] = {"StandardSound", "SilencedSound"};
            class StandardSound {
                soundSetShot[] = {"RHS_AKM_Shot_SoundSet", "RHS_MMG1_Tail_SoundSet"};
            };
            class SilencedSound {
                soundSetShot[] = {"RHS_sd_AKM_Shot_SoundSet", "RHS_sd_MMG1_Tail_SoundSet"};
            };
        };
        class FullAuto: Mode_FullAuto {
            sounds[] = {"StandardSound", "SilencedSound"};
            class StandardSound {
                soundSetShot[] = {"RHS_AKM_Shot_SoundSet", "RHS_MMG1_Tail_SoundSet"};
            };
            class SilencedSound {
                soundSetShot[] = {"RHS_sd_AKM_Shot_SoundSet", "RHS_sd_MMG1_Tail_SoundSet"};
            };
        };
    };
    class rhs_pkp_base: Rifle_Long_Base_F {
        class Single: Mode_SemiAuto {
            sounds[] = {"StandardSound"};
            class StandardSound {
                soundSetShot[] = {"RHS_PK_Shot_SoundSet", "RHS_MMG1_Tail_SoundSet"};
            };
        };
        class FullAuto: Mode_FullAuto {
            sounds[] = {"StandardSound"};
            class StandardSound {
                soundSetShot[] = {"RHS_PK_Shot_SoundSet", "RHS_MMG1_Tail_SoundSet"};
            };
        };
    };
    class rhs_weap_pkp: rhs_pkp_base {};
    class PKT: MGun {};
    class rhs_weap_pkt: PKT {
        class manual: MGun {
            sounds[] = {"StandardSound"};
            class StandardSound {
                soundSetShot[] = {"RHS_veh_PK_Shot_SoundSet", "RHS_veh_PK_int_Shot_SoundSet", "RHS_VEH_MMG1_Tail_SoundSet"};
            };
        };
    };
    class rhs_weap_svd: rhs_weap_ak74m {
        class Single: Mode_SemiAuto {
            sounds[] = {"StandardSound", "SilencedSound"};
            class StandardSound {
                soundSetShot[] = {"RHS_SVD_Shot_SoundSet", "RHS_Rifle2_Tail_SoundSet"};
            };
            class SilencedSound {
                soundSetShot[] = {"RHS_sd_SVD_Shot_SoundSet", "RHS_sd_mmg1_Tail_SoundSet"};
            };
        };
    };
    class rhs_weap_svdp: rhs_weap_svd {
        class Single: Mode_SemiAuto {
            sounds[] = {"StandardSound", "SilencedSound"};
            class StandardSound {
                soundSetShot[] = {"RHS_SVD_Shot_SoundSet", "RHS_Rifle2_Tail_SoundSet"};
            };
            class SilencedSound {
                soundSetShot[] = {"RHS_sd_SVD_Shot_SoundSet", "RHS_sd_mmg1_Tail_SoundSet"};
            };
        };
    };
    class rhs_weap_orsis_Base_F: Rifle_Base_F {
        class Single: Mode_SemiAuto {
            sounds[] = {"StandardSound", "SilencedSound"};
            class StandardSound {
                soundSetShot[] = {"RHS_orsis_Shot_SoundSet", "RHS_rifle2_Tail_SoundSet"};
            };
            class SilencedSound {
                soundSetShot[] = {"RHS_sd_orsis_Shot_SoundSet", "RHS_sd_mmg1_Tail_SoundSet"};
            };
        };
    };
};
