class CfgPatches {
    class rhsusf_c_weaponsounds {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {
            "A3_Weapons_F",
            "A3_Sounds_f",
            "rhsusf_sounds",
            "rhsusf_weapon_sounds"
        };
        authors[] = {"LAxemann"};
        author = "$STR_RHSUSF_AUTHOR_FULL";
        url = "http://www.rhsmods.org/";
    };
};
class CfgSound3DProcessors {
    class RHSUSF_Default_3DProcessingType {
        type = "panner";
        innerRange = 10;
        rangeCurve = "LinearCurve";
        range = 1800;
    };
    class RHSUSF_Shot_light_3DProcessingType {
        type = "panner";
        innerRange = 1;
        range = 25;
        rangeCurve = "InverseSquare2Curve";
    };
    class RHSUSF_Shot_medium_3DProcessingType {
        type = "panner";
        innerRange = 1;
        range = 32;
        rangeCurve = "InverseSquare2Curve";
    };
    class RHSUSF_rifleBulletCrack_3DProcessingType {
        type = "panner";
        innerRange = 1;
        range = 7;
        rangeCurve = "LinearCurve";
    };
    class RHSUSF_Shot_internalMG_3DProcessingType {
        type = "panner";
        innerRange = 2;
        range = 26;
        rangeCurve = "InverseSquare2Curve";
    };
    class RHSUSF_Shot_internalCannon_3DProcessingType {
        type = "panner";
        innerRange = 4;
        range = 50;
        rangeCurve = "InverseSquare2Curve";
    };
    class RHSUSF_Tail_3DProcessingType {
        type = "panner";
        innerRange = 10;
        range = 990;
        rangeCurve = "InverseSquare3Curve";
    };
    class RHSUSF_cannonTail_3DProcessingType {
        type = "panner";
        innerRange = 20;
        range = 1290;
        rangeCurve = "InverseSquare3Curve";
    };
    class RHSUSF_katyusha_3DProcessingType {
        type = "panner";
        innerRange = 20;
        range = 400;
        rangeCurve = "InverseSquare3Curve";
    };
    class RHSUSF_stereoLayer_3DProcessingType {
        type = "panner";
        innerRange = 240;
        range = 4200;
        rangeCurve = "linearCurve";
    };
    class RHSUSF_explo_small_3DProcessingType {
        type = "panner";
        innerRange = 0;
        range = 190;
        rangeCurve = "InverseSquare2Curve";
    };
    class RHSUSF_explo_medium_3DProcessingType {
        type = "panner";
        innerRange = 0;
        range = 900;
        rangeCurve = "InverseSquare2Curve";
    };
    class RHSUSF_explo_large_3DProcessingType {
        type = "panner";
        innerRange = 0;
        range = 1200;
        rangeCurve = "InverseSquare2Curve";
    };
    class RHSUSF_exploTail_medium_3DProcessingType {
        type = "panner";
        innerRange = 10;
        range = 1500;
        rangeCurve = "InverseSquare2Curve";
    };
    class RHSUSF_exploTail_large_3DProcessingType {
        type = "panner";
        innerRange = 70;
        range = 3000;
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
    class RHSUSF_cannon_largeSoundcurve {
        points[] = {
            {0, 1},
            {0.05, 0.81},
            {0.1, 0.6194},
            {0.2, 0.425},
            {0.3, 0.365},
            {0.4, 0.2361},
            {0.5, 0.1966},
            {0.6, 0.1675},
            {0.7, 0.1044},
            {0.8, 0.0805},
            {0.9, 0.0391},
            {1, 0}
        };
    };
    class RHSUSF_cannon_smallSoundcurve {
        points[] = {
            {0, 1},
            {0.05, 0.78},
            {0.1, 0.5794},
            {0.2, 0.375},
            {0.3, 0.295},
            {0.4, 0.1961},
            {0.5, 0.1366},
            {0.6, 0.1075},
            {0.7, 0.0744},
            {0.8, 0.0405},
            {0.9, 0.0191},
            {1, 0}
        };
    };
    class RHSUSF_MGSoundCurve {
        points[] = {
            {0, 1},
            {0.05, 0.685},
            {0.1, 0.4794},
            {0.15, 0.3415},
            {0.2, 0.275},
            {0.25, 0.2185},
            {0.3, 0.185},
            {0.35, 0.1472},
            {0.4, 0.1061},
            {0.45, 0.0997},
            {0.5, 0.0866},
            {0.6, 0.0575},
            {0.7, 0.0444},
            {0.8, 0.0195},
            {0.9, 0.0111},
            {1, 0}
        };
    };
    class RHSUSF_exploSmallSoundCurve {
        points[] = {
            {0, 1},
            {0.1, 0.8675},
            {0.2, 0.6396},
            {0.4, 0.3833},
            {0.5, 0.3033},
            {0.6, 0.2115},
            {0.8, 0.1},
            {0.9, 0.0668},
            {1, 0}
        };
    };
    class RHSUSF_exploMidSoundCurve {
        points[] = {
            {0, 1},
            {0.1, 0.8775},
            {0.2, 0.7196},
            {0.4, 0.4233},
            {0.5, 0.3333},
            {0.6, 0.2215},
            {0.8, 0.1},
            {0.9, 0.0668},
            {1, 0}
        };
    };
    class RHSUSF_exploLargeSoundCurve {
        points[] = {
            {0, 1},
            {0.1, 0.9175},
            {0.2, 0.7496},
            {0.4, 0.4733},
            {0.5, 0.4033},
            {0.6, 0.2815},
            {0.8, 0.14},
            {0.9, 0.0968},
            {1, 0}
        };
    };
};
class cfgDistanceFilters {
    class RHSUSF_defaultDistanceFilter {
        type = "lowPassFilter";
        minCutoffFrequency = 250;
        qFactor = 1.25;
        innerRange = 10;
        range = 2300;
        powerFactor = 26;
    };
    class RHSUSF_rifleShotDistanceFilter {
        type = "lowPassFilter";
        minCutoffFrequency = 250;
        qFactor = 1.25;
        innerRange = 10;
        range = 2300;
        powerFactor = 26;
    };
    class RHSUSF_exploLargeDistanceFilter {
        type = "lowPassFilter";
        minCutoffFrequency = 250;
        qFactor = 1.25;
        innerRange = 100;
        range = 4000;
        powerFactor = 26;
    };
    class RHSUSF_exploSmallDistanceFilter {
        type = "lowPassFilter";
        minCutoffFrequency = 250;
        qFactor = 1.25;
        innerRange = 50;
        range = 3300;
        powerFactor = 26;
    };
};
class CfgSoundShaders {
    class RHSUSF_m240_shot_fp_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\specific\m240\fp_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\specific\m240\fp_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\specific\m240\fp_3", 1}};
        volume = 1;
        range = 17;
        rangeCurve[] = {{0, 1}, {17, 0}};
    };
    class RHSUSF_m240_stereoLayer_soundShader {
        samples[] = {
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\stereoLayer_1", 1},
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\stereoLayer_2", 1},
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\stereoLayer_3", 1},
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\stereoLayer_4", 1},
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\stereoLayer_5", 1},
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\stereoLayer_6", 1},
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\stereoLayer_7", 1}
        };
        volume = " 1 - (houses max forest)";
        range = 3300;
        rangeCurve[] = {{0, 0}, {130, 0}, {750, 1}, {3300, 0}};
    };
    class RHSUSF_m240_urbanLayer_soundShader {
        samples[] = {
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\urbanLayer_1", 1},
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\urbanLayer_2", 1},
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\urbanLayer_3", 1},
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\urbanLayer_4", 1},
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\urbanLayer_5", 1},
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\urbanLayer_6", 1},
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\urbanLayer_7", 1}
        };
        volume = "houses * 1.65";
        range = 3300;
        rangeCurve[] = {{0, 0}, {130, 0}, {750, 1}, {3300, 0}};
    };
    class RHSUSF_m240_shot_close_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\calibres\762mm_mmg\close_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\calibres\762mm_mmg\close_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\calibres\762mm_mmg\close_3", 1}};
        volume = 1;
        range = 130;
        rangeCurve[] = {{0, 0}, {17, 0.9}, {130, 0}};
    };
    class RHSUSF_m240_shot_mid_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\calibres\762mm_mmg\mid_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\calibres\762mm_mmg\mid_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\calibres\762mm_mmg\mid_3", 1}};
        volume = "1 * 0.85 * (1 - interior) * (1 - (0.20 * forest))";
        range = 750;
        rangeCurve[] = {{0, 0}, {130, 0.95}, {750, 0}};
    };
    class RHSUSF_m240_shot_far_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\calibres\762mm_mmg\far_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\calibres\762mm_mmg\far_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\calibres\762mm_mmg\far_3", 1}};
        volume = "1 * (1 - interior) * (1 - (forest max trees))";
        range = 3300;
        rangeCurve[] = {{0, 0}, {130, 0}, {750, 0.9}, {3300, 0.85}};
    };
    class RHSUSF_m240_shot_forest_far_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\calibres\762mm_mmg\forest_far_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\calibres\762mm_mmg\forest_far_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\calibres\762mm_mmg\forest_far_3", 1}};
        volume = "1 * 0.7 * (1 - interior) * (forest max trees)";
        range = 3300;
        rangeCurve[] = {{0, 0}, {130, 0}, {750, 0.6}, {3300, 0.6}};
    };
    class RHSUSF_m240_Interior_closeMono_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle2\Interior_close_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle2\Interior_close_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle2\Interior_close_3", 1}};
        volume = "1 * 1.5 * interior";
        range = "130 / 2";
        rangeCurve[] = {{1, 0}, {3, 0}, {7, 1}, {"130/2", 0}};
    };
    class RHSUSF_m240_Interior_far_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\Interior_mid_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\Interior_mid_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\Interior_mid_3", 1}};
        volume = "1 * interior * 0.7";
        range = 1200;
        rangeCurve[] = {{0, 0}, {"130/2", 1}, {130, 0.3}, {1200, 0}};
    };
    class RHSUSF_m249_shot_fp_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\specific\m249\fp_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\specific\m249\fp_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\specific\m249\fp_3", 1}};
        volume = 1;
        range = 17;
        rangeCurve[] = {{0, 1}, {17, 0}};
    };
    class RHSUSF_m249_stereoLayer_soundShader {
        samples[] = {
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\stereoLayer_1", 1},
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\stereoLayer_2", 1},
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\stereoLayer_3", 1},
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\stereoLayer_4", 1},
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\stereoLayer_5", 1},
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\stereoLayer_6", 1},
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\stereoLayer_7", 1}
        };
        volume = " 1 - (houses max forest)";
        range = 3000;
        rangeCurve[] = {{0, 0}, {130, 0}, {750, 1}, {3000, 0}};
    };
    class RHSUSF_m249_urbanLayer_soundShader {
        samples[] = {
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\urbanLayer_1", 1},
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\urbanLayer_2", 1},
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\urbanLayer_3", 1},
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\urbanLayer_4", 1},
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\urbanLayer_5", 1},
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\urbanLayer_6", 1},
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\urbanLayer_7", 1}
        };
        volume = "houses * 1.65";
        range = 3000;
        rangeCurve[] = {{0, 0}, {130, 0}, {750, 1}, {3000, 0}};
    };
    class RHSUSF_m249_shot_close_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\calibres\556mm\close_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\calibres\556mm\close_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\calibres\556mm\close_3", 1}};
        volume = 1;
        range = 130;
        rangeCurve[] = {{0, 0}, {17, 0.9}, {130, 0}};
    };
    class RHSUSF_m249_shot_mid_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\calibres\556mm\mid_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\calibres\556mm\mid_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\calibres\556mm\mid_3", 1}};
        volume = "1 * 0.85 * (1 - interior) * (1 - (0.20 * forest))";
        range = 750;
        rangeCurve[] = {{0, 0}, {130, 0.95}, {750, 0}};
    };
    class RHSUSF_m249_shot_far_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\calibres\556mm\far_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\calibres\556mm\far_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\calibres\556mm\far_3", 1}};
        volume = "1 * (1 - interior) * (1 - (forest max trees))";
        range = 3000;
        rangeCurve[] = {{0, 0}, {130, 0}, {750, 0.9}, {3000, 0.85}};
    };
    class RHSUSF_m249_shot_forest_far_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\calibres\556mm\forest_far_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\calibres\556mm\forest_far_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\calibres\556mm\forest_far_3", 1}};
        volume = "1 * 0.7 * (1 - interior) * (forest max trees)";
        range = 3000;
        rangeCurve[] = {{0, 0}, {130, 0}, {750, 0.6}, {3000, 0.6}};
    };
    class RHSUSF_m249_Interior_closeMono_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle2\Interior_close_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle2\Interior_close_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle2\Interior_close_3", 1}};
        volume = "1 * 1.5 * interior";
        range = "130 / 2";
        rangeCurve[] = {{1, 0}, {3, 0}, {7, 1}, {"130/2", 0}};
    };
    class RHSUSF_m249_Interior_far_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\Interior_mid_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\Interior_mid_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\Interior_mid_3", 1}};
        volume = "1 * interior * 0.7";
        range = 1200;
        rangeCurve[] = {{0, 0}, {"130/2", 1}, {130, 0.3}, {1200, 0}};
    };
    class RHSUSF_m14_shot_fp_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\specific\m14\fp_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\specific\m14\fp_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\specific\m14\fp_3", 1}};
        volume = 1;
        range = 17;
        rangeCurve[] = {{0, 1}, {17, 0}};
    };
    class RHSUSF_m14_stereoLayer_soundShader {
        samples[] = {
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\stereoLayer_1", 1},
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\stereoLayer_2", 1},
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\stereoLayer_3", 1},
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\stereoLayer_4", 1},
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\stereoLayer_5", 1},
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\stereoLayer_6", 1},
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\stereoLayer_7", 1}
        };
        volume = " 1 - (houses max forest)";
        range = 3300;
        rangeCurve[] = {{0, 0}, {130, 0}, {750, 1}, {3300, 0}};
    };
    class RHSUSF_m14_urbanLayer_soundShader {
        samples[] = {
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\urbanLayer_1", 1},
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\urbanLayer_2", 1},
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\urbanLayer_3", 1},
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\urbanLayer_4", 1},
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\urbanLayer_5", 1},
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\urbanLayer_6", 1},
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\urbanLayer_7", 1}
        };
        volume = "houses * 1.65";
        range = 3300;
        rangeCurve[] = {{0, 0}, {130, 0}, {750, 1}, {3300, 0}};
    };
    class RHSUSF_m14_shot_close_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\calibres\rifle\close_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\calibres\rifle\close_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\calibres\rifle\close_3", 1}};
        volume = 1;
        range = 130;
        rangeCurve[] = {{0, 0}, {17, 0.9}, {130, 0}};
    };
    class RHSUSF_m14_shot_mid_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\calibres\rifle\mid_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\calibres\rifle\mid_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\calibres\rifle\mid_3", 1}};
        volume = "1 * 0.85 * (1 - interior) * (1 - (0.20 * forest))";
        range = 750;
        rangeCurve[] = {{0, 0}, {130, 0.95}, {750, 0}};
    };
    class RHSUSF_m14_shot_far_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\calibres\rifle\far_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\calibres\rifle\far_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\calibres\rifle\far_3", 1}};
        volume = "1 * (1 - interior) * (1 - (forest max trees))";
        range = 3300;
        rangeCurve[] = {{0, 0}, {130, 0}, {750, 0.9}, {3300, 0.85}};
    };
    class RHSUSF_m14_shot_forest_far_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\calibres\rifle\forest_far_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\calibres\rifle\forest_far_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\calibres\rifle\forest_far_3", 1}};
        volume = "1 * 0.7 * (1 - interior) * (forest max trees)";
        range = 3300;
        rangeCurve[] = {{0, 0}, {130, 0}, {750, 0.6}, {3300, 0.6}};
    };
    class RHSUSF_m14_Interior_closeMono_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle2\Interior_close_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle2\Interior_close_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle2\Interior_close_3", 1}};
        volume = "1 * 1.5 * interior";
        range = "130 / 2";
        rangeCurve[] = {{1, 0}, {3, 0}, {7, 1}, {"130/2", 0}};
    };
    class RHSUSF_m14_Interior_far_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\Interior_mid_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\Interior_mid_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\Interior_mid_3", 1}};
        volume = "1 * interior * 0.7";
        range = 1200;
        rangeCurve[] = {{0, 0}, {"130/2", 1}, {130, 0.3}, {1200, 0}};
    };
    class RHSUSF_m24_shot_fp_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\specific\m24\fp_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\specific\m24\fp_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\specific\m24\fp_3", 1}};
        volume = 1;
        range = 17;
        rangeCurve[] = {{0, 1}, {17, 0}};
    };
    class RHSUSF_m24_stereoLayer_soundShader {
        samples[] = {
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\stereoLayer_1", 1},
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\stereoLayer_2", 1},
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\stereoLayer_3", 1},
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\stereoLayer_4", 1},
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\stereoLayer_5", 1},
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\stereoLayer_6", 1},
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\stereoLayer_7", 1}
        };
        volume = " 1 - (houses max forest)";
        range = 3300;
        rangeCurve[] = {{0, 0}, {130, 0}, {750, 1}, {3300, 0}};
    };
    class RHSUSF_m24_urbanLayer_soundShader {
        samples[] = {
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\urbanLayer_1", 1},
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\urbanLayer_2", 1},
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\urbanLayer_3", 1},
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\urbanLayer_4", 1},
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\urbanLayer_5", 1},
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\urbanLayer_6", 1},
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\urbanLayer_7", 1}
        };
        volume = "houses * 1.65";
        range = 3300;
        rangeCurve[] = {{0, 0}, {130, 0}, {750, 1}, {3300, 0}};
    };
    class RHSUSF_m24_shot_close_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\calibres\rifle\close_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\calibres\rifle\close_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\calibres\rifle\close_3", 1}};
        volume = 1;
        range = 130;
        rangeCurve[] = {{0, 0}, {17, 0.9}, {130, 0}};
    };
    class RHSUSF_m24_shot_mid_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\calibres\rifle\mid_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\calibres\rifle\mid_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\calibres\rifle\mid_3", 1}};
        volume = "1 * 0.85 * (1 - interior) * (1 - (0.20 * forest))";
        range = 750;
        rangeCurve[] = {{0, 0}, {130, 0.95}, {750, 0}};
    };
    class RHSUSF_m24_shot_far_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\calibres\rifle\far_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\calibres\rifle\far_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\calibres\rifle\far_3", 1}};
        volume = "1 * (1 - interior) * (1 - (forest max trees))";
        range = 3300;
        rangeCurve[] = {{0, 0}, {130, 0}, {750, 0.9}, {3300, 0.85}};
    };
    class RHSUSF_m24_shot_forest_far_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\calibres\rifle\forest_far_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\calibres\rifle\forest_far_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\calibres\rifle\forest_far_3", 1}};
        volume = "1 * 0.7 * (1 - interior) * (forest max trees)";
        range = 3300;
        rangeCurve[] = {{0, 0}, {130, 0}, {750, 0.6}, {3300, 0.6}};
    };
    class RHSUSF_m24_Interior_closeMono_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle2\Interior_close_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle2\Interior_close_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle2\Interior_close_3", 1}};
        volume = "1 * 1.5 * interior";
        range = "130 / 2";
        rangeCurve[] = {{1, 0}, {3, 0}, {7, 1}, {"130/2", 0}};
    };
    class RHSUSF_m24_Interior_far_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\Interior_mid_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\Interior_mid_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\Interior_mid_3", 1}};
        volume = "1 * interior * 0.7";
        range = 1200;
        rangeCurve[] = {{0, 0}, {"130/2", 1}, {130, 0.3}, {1200, 0}};
    };
    class RHSUSF_m16_shot_fp_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\specific\m16\fp_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\specific\m16\fp_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\specific\m16\fp_3", 1}};
        volume = 1;
        range = 17;
        rangeCurve[] = {{0, 1}, {17, 0}};
    };
    class RHSUSF_m16_stereoLayer_soundShader {
        samples[] = {
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\stereoLayer_1", 1},
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\stereoLayer_2", 1},
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\stereoLayer_3", 1},
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\stereoLayer_4", 1},
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\stereoLayer_5", 1},
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\stereoLayer_6", 1},
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\stereoLayer_7", 1}
        };
        volume = " 1 - (houses max forest)";
        range = 3000;
        rangeCurve[] = {{0, 0}, {130, 0}, {750, 1}, {3000, 0}};
    };
    class RHSUSF_m16_urbanLayer_soundShader {
        samples[] = {
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\urbanLayer_1", 1},
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\urbanLayer_2", 1},
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\urbanLayer_3", 1},
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\urbanLayer_4", 1},
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\urbanLayer_5", 1},
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\urbanLayer_6", 1},
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\urbanLayer_7", 1}
        };
        volume = "houses * 1.65";
        range = 3000;
        rangeCurve[] = {{0, 0}, {130, 0}, {750, 1}, {3000, 0}};
    };
    class RHSUSF_m16_shot_close_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\calibres\556mm\close_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\calibres\556mm\close_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\calibres\556mm\close_3", 1}};
        volume = 1;
        range = 130;
        rangeCurve[] = {{0, 0}, {17, 0.9}, {130, 0}};
    };
    class RHSUSF_m16_shot_mid_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\calibres\556mm\mid_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\calibres\556mm\mid_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\calibres\556mm\mid_3", 1}};
        volume = "1 * 0.85 * (1 - interior) * (1 - (0.20 * forest))";
        range = 750;
        rangeCurve[] = {{0, 0}, {130, 0.95}, {750, 0}};
    };
    class RHSUSF_m16_shot_far_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\calibres\556mm\far_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\calibres\556mm\far_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\calibres\556mm\far_3", 1}};
        volume = "1 * (1 - interior) * (1 - (forest max trees))";
        range = 3000;
        rangeCurve[] = {{0, 0}, {130, 0}, {750, 0.9}, {3000, 0.85}};
    };
    class RHSUSF_m16_shot_forest_far_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\calibres\556mm\forest_far_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\calibres\556mm\forest_far_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\calibres\556mm\forest_far_3", 1}};
        volume = "1 * 0.7 * (1 - interior) * (forest max trees)";
        range = 3000;
        rangeCurve[] = {{0, 0}, {130, 0}, {750, 0.6}, {3000, 0.6}};
    };
    class RHSUSF_m16_Interior_closeMono_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle2\Interior_close_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle2\Interior_close_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle2\Interior_close_3", 1}};
        volume = "1 * 1.5 * interior";
        range = "130 / 2";
        rangeCurve[] = {{1, 0}, {3, 0}, {7, 1}, {"130/2", 0}};
    };
    class RHSUSF_m16_Interior_far_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\Interior_mid_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\Interior_mid_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\Interior_mid_3", 1}};
        volume = "1 * interior * 0.7";
        range = 1200;
        rangeCurve[] = {{0, 0}, {"130/2", 1}, {130, 0.3}, {1200, 0}};
    };
    class RHSUSF_m4_shot_fp_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\specific\m4\fp_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\specific\m4\fp_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\specific\m4\fp_3", 1}};
        volume = 1;
        range = 17;
        rangeCurve[] = {{0, 1}, {17, 0}};
    };
    class RHSUSF_m4_stereoLayer_soundShader {
        samples[] = {
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\stereoLayer_1", 1},
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\stereoLayer_2", 1},
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\stereoLayer_3", 1},
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\stereoLayer_4", 1},
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\stereoLayer_5", 1},
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\stereoLayer_6", 1},
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\stereoLayer_7", 1}
        };
        volume = " 1 - (houses max forest)";
        range = 3000;
        rangeCurve[] = {{0, 0}, {130, 0}, {750, 1}, {3000, 0}};
    };
    class RHSUSF_m4_urbanLayer_soundShader {
        samples[] = {
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\urbanLayer_1", 1},
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\urbanLayer_2", 1},
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\urbanLayer_3", 1},
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\urbanLayer_4", 1},
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\urbanLayer_5", 1},
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\urbanLayer_6", 1},
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\urbanLayer_7", 1}
        };
        volume = "houses * 1.65";
        range = 3000;
        rangeCurve[] = {{0, 0}, {130, 0}, {750, 1}, {3000, 0}};
    };
    class RHSUSF_m4_shot_close_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\calibres\556mm\close_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\calibres\556mm\close_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\calibres\556mm\close_3", 1}};
        volume = 1;
        range = 130;
        rangeCurve[] = {{0, 0}, {17, 0.9}, {130, 0}};
    };
    class RHSUSF_m4_shot_mid_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\calibres\556mm\mid_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\calibres\556mm\mid_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\calibres\556mm\mid_3", 1}};
        volume = "1 * 0.85 * (1 - interior) * (1 - (0.20 * forest))";
        range = 750;
        rangeCurve[] = {{0, 0}, {130, 0.95}, {750, 0}};
    };
    class RHSUSF_m4_shot_far_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\calibres\556mm\far_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\calibres\556mm\far_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\calibres\556mm\far_3", 1}};
        volume = "1 * (1 - interior) * (1 - (forest max trees))";
        range = 3000;
        rangeCurve[] = {{0, 0}, {130, 0}, {750, 0.9}, {3000, 0.85}};
    };
    class RHSUSF_m4_shot_forest_far_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\calibres\556mm\forest_far_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\calibres\556mm\forest_far_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\calibres\556mm\forest_far_3", 1}};
        volume = "1 * 0.7 * (1 - interior) * (forest max trees)";
        range = 3000;
        rangeCurve[] = {{0, 0}, {130, 0}, {750, 0.6}, {3000, 0.6}};
    };
    class RHSUSF_m4_Interior_closeMono_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle2\Interior_close_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle2\Interior_close_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle2\Interior_close_3", 1}};
        volume = "1 * 1.5 * interior";
        range = "130 / 2";
        rangeCurve[] = {{1, 0}, {3, 0}, {7, 1}, {"130/2", 0}};
    };
    class RHSUSF_m4_Interior_far_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\Interior_mid_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\Interior_mid_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\rifle\Interior_mid_3", 1}};
        volume = "1 * interior * 0.7";
        range = 1200;
        rangeCurve[] = {{0, 0}, {"130/2", 1}, {130, 0.3}, {1200, 0}};
    };
    class RHSUSF_mp7_shot_fp_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\specific\mp7\fp_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\specific\mp7\fp_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\specific\mp7\fp_3", 1}};
        volume = 1;
        range = 17;
        rangeCurve[] = {{0, 1}, {17, 0}};
    };
    class RHSUSF_mp7_stereoLayer_soundShader {
        samples[] = {
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\pistol\stereoLayer_1", 1},
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\pistol\stereoLayer_2", 1},
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\pistol\stereoLayer_3", 1},
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\pistol\stereoLayer_4", 1},
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\pistol\stereoLayer_5", 1},
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\pistol\stereoLayer_6", 1},
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\pistol\stereoLayer_7", 1}
        };
        volume = " 1 - (houses max forest)";
        range = 2700;
        rangeCurve[] = {{0, 0}, {130, 0}, {750, 1}, {2700, 0}};
    };
    class RHSUSF_mp7_urbanLayer_soundShader {
        samples[] = {
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\pistol\urbanLayer_1", 1},
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\pistol\urbanLayer_2", 1},
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\pistol\urbanLayer_3", 1},
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\pistol\urbanLayer_4", 1},
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\pistol\urbanLayer_5", 1},
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\pistol\urbanLayer_6", 1},
            {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\pistol\urbanLayer_7", 1}
        };
        volume = "houses * 1.65";
        range = 2700;
        rangeCurve[] = {{0, 0}, {130, 0}, {750, 1}, {2700, 0}};
    };
    class RHSUSF_mp7_shot_close_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\calibres\9mm\close_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\calibres\9mm\close_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\calibres\9mm\close_3", 1}};
        volume = 1;
        range = 130;
        rangeCurve[] = {{0, 0}, {17, 0.9}, {130, 0}};
    };
    class RHSUSF_mp7_shot_mid_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\calibres\9mm\mid_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\calibres\9mm\mid_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\calibres\9mm\mid_3", 1}};
        volume = "1 * 0.85 * (1 - interior) * (1 - (0.20 * forest))";
        range = 750;
        rangeCurve[] = {{0, 0}, {130, 0.95}, {750, 0}};
    };
    class RHSUSF_mp7_shot_far_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\calibres\9mm\far_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\calibres\9mm\far_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\calibres\9mm\far_3", 1}};
        volume = "1 * (1 - interior) * (1 - (forest max trees))";
        range = 2700;
        rangeCurve[] = {{0, 0}, {130, 0}, {750, 0.9}, {2700, 0.85}};
    };
    class RHSUSF_mp7_shot_forest_far_soundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\calibres\9mm\forest_far_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\calibres\9mm\forest_far_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\calibres\9mm\forest_far_3", 1}};
        volume = "1 * 0.7 * (1 - interior) * (forest max trees)";
        range = 2700;
        rangeCurve[] = {{0, 0}, {130, 0}, {750, 0.6}, {2700, 0.6}};
    };
    class RHSUSF_mp7_Interior_closeMono_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle2\Interior_close_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle2\Interior_close_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle2\Interior_close_3", 1}};
        volume = "1 * 1.5 * interior";
        range = "130 / 2";
        rangeCurve[] = {{1, 0}, {3, 0}, {7, 1}, {"130/2", 0}};
    };
    class RHSUSF_mp7_Interior_far_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\pistol\Interior_mid_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\pistol\Interior_mid_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\shared\layers\pistol\Interior_mid_3", 1}};
        volume = "1 * interior * 0.7";
        range = 1200;
        rangeCurve[] = {{0, 0}, {"130/2", 1}, {130, 0.3}, {1200, 0}};
    };
    class RHSUSF_rifle_small_Meadows_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle_small\Meadows_close_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle_small\Meadows_close_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle_small\Meadows_close_3", 1}};
        volume = "1.15 * (meadows max sea) * (1 - (interior * 0.7))";
        range = 250;
        rangeCurve[] = {{0, 1}, {250, 0}};
        limitation = 1;
    };
    class RHSUSF_rifle_small_Meadows_far_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle_small\Meadows_far_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle_small\Meadows_far_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle_small\Meadows_far_3", 1}};
        volume = "1.15 * (meadows max sea) * (1 - interior)";
        range = 3000;
        rangeCurve[] = {{0, 0}, {250, 1}, {3000, 1}};
        limitation = 1;
    };
    class RHSUSF_rifle_small_Houses_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle_small\Houses_close_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle_small\Houses_close_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle_small\Houses_close_3", 1}};
        volume = "1.15 * houses * (1 - (interior * 0.7))";
        range = 250;
        rangeCurve[] = {{0, 1}, {250, 0}};
        limitation = 1;
    };
    class RHSUSF_rifle_small_Houses_far_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle_small\Houses_far_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle_small\Houses_far_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle_small\Houses_far_3", 1}};
        volume = "1.15 * houses * (1 - interior)";
        range = 3000;
        rangeCurve[] = {{0, 0}, {250, 1}, {3000, 1}};
        limitation = 1;
    };
    class RHSUSF_rifle_small_Forest_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle_small\Forest_close_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle_small\Forest_close_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle_small\Forest_close_3", 1}};
        volume = "1.15 * (forest max trees) * (1 - (interior * 0.7))";
        range = 250;
        rangeCurve[] = {{0, 1}, {250, 0}};
        limitation = 1;
    };
    class RHSUSF_rifle_small_Forest_far_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle_small\Forest_far_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle_small\Forest_far_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle_small\Forest_far_3", 1}};
        volume = "1.15 * (forest max trees) * (1 - interior)";
        range = 3000;
        rangeCurve[] = {{0, 0}, {250, 1}, {3000, 1}};
        limitation = 1;
    };
    class RHSUSF_rifle_small_Interior_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle_small\Interior_close_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle_small\Interior_close_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle_small\Interior_close_3", 1}};
        volume = "1.15 * interior";
        range = 7;
        rangeCurve[] = {{0, 1}, {3, 1}, {7, 0}};
        limitation = 1;
    };
    class RHSUSF_rifle_med_Meadows_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle_med\Meadows_close_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle_med\Meadows_close_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle_med\Meadows_close_3", 1}};
        volume = "1.15 * (meadows max sea) * (1 - (interior * 0.7))";
        range = 250;
        rangeCurve[] = {{0, 1}, {250, 0}};
        limitation = 1;
    };
    class RHSUSF_rifle_med_Meadows_far_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle_med\Meadows_far_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle_med\Meadows_far_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle_med\Meadows_far_3", 1}};
        volume = "1.15 * (meadows max sea) * (1 - interior)";
        range = 3000;
        rangeCurve[] = {{0, 0}, {250, 1}, {3000, 1}};
        limitation = 1;
    };
    class RHSUSF_rifle_med_Houses_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle_med\Houses_close_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle_med\Houses_close_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle_med\Houses_close_3", 1}};
        volume = "1.15 * houses * (1 - (interior * 0.7))";
        range = 250;
        rangeCurve[] = {{0, 1}, {250, 0}};
        limitation = 1;
    };
    class RHSUSF_rifle_med_Houses_far_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle_med\Houses_far_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle_med\Houses_far_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle_med\Houses_far_3", 1}};
        volume = "1.15 * houses * (1 - interior)";
        range = 3000;
        rangeCurve[] = {{0, 0}, {250, 1}, {3000, 1}};
        limitation = 1;
    };
    class RHSUSF_rifle_med_Forest_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle_med\Forest_close_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle_med\Forest_close_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle_med\Forest_close_3", 1}};
        volume = "1.15 * (forest max trees) * (1 - (interior * 0.7))";
        range = 250;
        rangeCurve[] = {{0, 1}, {250, 0}};
        limitation = 1;
    };
    class RHSUSF_rifle_med_Forest_far_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle_med\Forest_far_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle_med\Forest_far_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle_med\Forest_far_3", 1}};
        volume = "1.15 * (forest max trees) * (1 - interior)";
        range = 3000;
        rangeCurve[] = {{0, 0}, {250, 1}, {3000, 1}};
        limitation = 1;
    };
    class RHSUSF_rifle_med_Interior_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle_med\Interior_close_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle_med\Interior_close_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle_med\Interior_close_3", 1}};
        volume = "1.15 * interior";
        range = 7;
        rangeCurve[] = {{0, 1}, {3, 1}, {7, 0}};
        limitation = 1;
    };
    class RHSUSF_int_rifle_med_Meadows_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle_med\Meadows_close_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle_med\Meadows_close_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle_med\Meadows_close_3", 1}};
        volume = "1.15 * (meadows max sea) * (1 - (interior * 0.7))";
        range = 250;
        rangeCurve[] = {{0, 0}, {1.2, 0}, {1.21, 1}, {250, 0}};
        limitation = 1;
    };
    class RHSUSF_int_rifle_med_Meadows_far_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle_med\Meadows_far_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle_med\Meadows_far_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle_med\Meadows_far_3", 1}};
        volume = "1.15 * (meadows max sea) * (1 - interior)";
        range = 3200;
        rangeCurve[] = {{0, 0}, {250, 1}, {3200, 1}};
        limitation = 1;
    };
    class RHSUSF_int_rifle_med_Houses_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle_med\Houses_close_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle_med\Houses_close_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle_med\Houses_close_3", 1}};
        volume = "1.15 * houses * (1 - (interior * 0.7))";
        range = 250;
        rangeCurve[] = {{0, 0}, {2.4, 0}, {3, 1}, {250, 0}};
        limitation = 1;
    };
    class RHSUSF_int_rifle_med_Houses_far_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle_med\Houses_far_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle_med\Houses_far_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle_med\Houses_far_3", 1}};
        volume = "1.15 * houses * (1 - interior)";
        range = 3200;
        rangeCurve[] = {{0, 0}, {250, 1}, {3200, 1}};
        limitation = 1;
    };
    class RHSUSF_int_rifle_med_Forest_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle_med\Forest_close_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle_med\Forest_close_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle_med\Forest_close_3", 1}};
        volume = "1.15 * (forest max trees) * (1 - (interior * 0.7))";
        range = 250;
        rangeCurve[] = {{0, 0}, {2.4, 0}, {3, 1}, {250, 0}};
        limitation = 1;
    };
    class RHSUSF_int_rifle_med_Forest_far_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle_med\Forest_far_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle_med\Forest_far_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle_med\Forest_far_3", 1}};
        volume = "1.15 * (forest max trees) * (1 - interior)";
        range = 3200;
        rangeCurve[] = {{0, 0}, {250, 1}, {3200, 1}};
        limitation = 1;
    };
    class RHSUSF_int_rifle_med_Interior_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle_med\Interior_close_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle_med\Interior_close_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle_med\Interior_close_3", 1}};
        volume = "1.15 * interior";
        range = 7;
        rangeCurve[] = {{0, 1}, {3, 1}, {7, 0}};
        limitation = 1;
    };
    class RHSUSF_rifle2_Meadows_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle2\Meadows_close_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle2\Meadows_close_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle2\Meadows_close_3", 1}};
        volume = "1.10 * (meadows max sea) * (1 - (interior * 0.7))";
        range = 250;
        rangeCurve[] = {{0, 1}, {250, 0}};
        limitation = 1;
    };
    class RHSUSF_rifle2_Meadows_far_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle2\Meadows_far_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle2\Meadows_far_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle2\Meadows_far_3", 1}};
        volume = "1.10 * (meadows max sea) * (1 - interior)";
        range = 3000;
        rangeCurve[] = {{0, 0}, {250, 1}, {3000, 1}};
        limitation = 1;
    };
    class RHSUSF_rifle2_Houses_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle2\Houses_close_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle2\Houses_close_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle2\Houses_close_3", 1}};
        volume = "1.10 * houses * (1 - (interior * 0.7))";
        range = 250;
        rangeCurve[] = {{0, 1}, {250, 0}};
        limitation = 1;
    };
    class RHSUSF_rifle2_Houses_far_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle2\Houses_far_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle2\Houses_far_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle2\Houses_far_3", 1}};
        volume = "1.10 * houses * (1 - interior)";
        range = 3000;
        rangeCurve[] = {{0, 0}, {250, 1}, {3000, 1}};
        limitation = 1;
    };
    class RHSUSF_rifle2_Forest_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle2\Forest_close_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle2\Forest_close_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle2\Forest_close_3", 1}};
        volume = "1.10 * (forest max trees) * (1 - (interior * 0.7))";
        range = 250;
        rangeCurve[] = {{0, 1}, {250, 0}};
        limitation = 1;
    };
    class RHSUSF_rifle2_Forest_far_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle2\Forest_far_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle2\Forest_far_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle2\Forest_far_3", 1}};
        volume = "1.10 * (forest max trees) * (1 - interior)";
        range = 3000;
        rangeCurve[] = {{0, 0}, {250, 1}, {3000, 1}};
        limitation = 1;
    };
    class RHSUSF_rifle2_Interior_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle2\Interior_close_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle2\Interior_close_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\rifle2\Interior_close_3", 1}};
        volume = "1.15 * interior";
        range = 7;
        rangeCurve[] = {{0, 1}, {3, 1}, {7, 0}};
        limitation = 1;
    };
    class RHSUSF_pistol1_old_Meadows_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\pistol1_old\Meadows_close_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\pistol1_old\Meadows_close_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\pistol1_old\Meadows_close_3", 1}};
        volume = "1.15 * (meadows max sea) * (1 - (interior * 0.7))";
        range = 250;
        rangeCurve[] = {{0, 1}, {250, 0}};
        limitation = 1;
    };
    class RHSUSF_pistol1_old_Meadows_far_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\pistol1_old\Meadows_far_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\pistol1_old\Meadows_far_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\pistol1_old\Meadows_far_3", 1}};
        volume = "1.15 * (meadows max sea) * (1 - interior)";
        range = 2600;
        rangeCurve[] = {{0, 0}, {250, 1}, {2600, 1}};
        limitation = 1;
    };
    class RHSUSF_pistol1_old_Houses_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\pistol1_old\Houses_close_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\pistol1_old\Houses_close_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\pistol1_old\Houses_close_3", 1}};
        volume = "1.15 * houses * (1 - (interior * 0.7))";
        range = 250;
        rangeCurve[] = {{0, 1}, {250, 0}};
        limitation = 1;
    };
    class RHSUSF_pistol1_old_Houses_far_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\pistol1_old\Houses_far_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\pistol1_old\Houses_far_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\pistol1_old\Houses_far_3", 1}};
        volume = "1.15 * houses * (1 - interior)";
        range = 2600;
        rangeCurve[] = {{0, 0}, {250, 1}, {2600, 1}};
        limitation = 1;
    };
    class RHSUSF_pistol1_old_Forest_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\pistol1_old\Forest_close_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\pistol1_old\Forest_close_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\pistol1_old\Forest_close_3", 1}};
        volume = "1.15 * (forest max trees) * (1 - (interior * 0.7))";
        range = 250;
        rangeCurve[] = {{0, 1}, {250, 0}};
        limitation = 1;
    };
    class RHSUSF_pistol1_old_Forest_far_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\pistol1_old\Forest_far_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\pistol1_old\Forest_far_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\pistol1_old\Forest_far_3", 1}};
        volume = "1.15 * (forest max trees) * (1 - interior)";
        range = 2600;
        rangeCurve[] = {{0, 0}, {250, 1}, {2600, 1}};
        limitation = 1;
    };
    class RHSUSF_pistol1_old_Interior_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\pistol1_old\Interior_close_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\pistol1_old\Interior_close_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\pistol1_old\Interior_close_3", 1}};
        volume = "1.15 * interior";
        range = 7;
        rangeCurve[] = {{0, 1}, {3, 1}, {7, 0}};
        limitation = 1;
    };
    class RHSUSF_int_cannon_large_Meadows_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\cannon_large\Meadows_close_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\cannon_large\Meadows_close_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\cannon_large\Meadows_close_3", 1}};
        volume = "1.15 * (meadows max sea)";
        range = 5100;
        rangeCurve[] = {{0, 0}, {1.2, 0}, {1.21, 1}, {5100, 0}};
        limitation = 1;
    };
    class RHSUSF_int_cannon_large_Houses_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\cannon_large\Houses_close_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\cannon_large\Houses_close_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\cannon_large\Houses_close_3", 1}};
        volume = "1.15 * houses";
        range = 5100;
        rangeCurve[] = {{0, 0}, {2.4, 0}, {3, 1}, {5100, 0}};
        limitation = 1;
    };
    class RHSUSF_int_cannon_large_Forest_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\cannon_large\Forest_close_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\cannon_large\Forest_close_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\cannon_large\Forest_close_3", 1}};
        volume = "1.15 * (forest max trees)";
        range = 5100;
        rangeCurve[] = {{0, 0}, {2.4, 0}, {3, 1}, {5100, 0}};
        limitation = 1;
    };
    class RHSUSF_cannon_large_Meadows_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\cannon_large\Meadows_close_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\cannon_large\Meadows_close_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\cannon_large\Meadows_close_3", 1}};
        volume = "1.15 * (meadows max sea)";
        range = 5100;
        rangeCurve[] = {{0, 1}, {5100, 0}};
        limitation = 1;
    };
    class RHSUSF_cannon_large_Houses_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\cannon_large\Houses_close_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\cannon_large\Houses_close_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\cannon_large\Houses_close_3", 1}};
        volume = "1.15 * houses";
        range = 5100;
        rangeCurve[] = {{0, 1}, {5100, 0}};
        limitation = 1;
    };
    class RHSUSF_cannon_large_Forest_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\cannon_large\Forest_close_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\cannon_large\Forest_close_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\cannon_large\Forest_close_3", 1}};
        volume = "1.15 * (forest max trees)";
        range = 5100;
        rangeCurve[] = {{0, 1}, {5100, 0}};
        limitation = 1;
    };
    class RHSUSF_int_cannon_med_Meadows_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\cannon_med\Meadows_close_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\cannon_med\Meadows_close_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\cannon_med\Meadows_close_3", 1}};
        volume = "1.15 * (meadows max sea)";
        range = 4700;
        rangeCurve[] = {{0, 0}, {1.2, 0}, {1.21, 1}, {4700, 0}};
        limitation = 1;
    };
    class RHSUSF_int_cannon_med_Houses_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\cannon_med\Houses_close_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\cannon_med\Houses_close_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\cannon_med\Houses_close_3", 1}};
        volume = "1.15 * houses";
        range = 4700;
        rangeCurve[] = {{0, 0}, {2.4, 0}, {3, 1}, {4700, 0}};
        limitation = 1;
    };
    class RHSUSF_int_cannon_med_Forest_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\cannon_med\Forest_close_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\cannon_med\Forest_close_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\cannon_med\Forest_close_3", 1}};
        volume = "1.15 * (forest max trees)";
        range = 4700;
        rangeCurve[] = {{0, 0}, {2.4, 0}, {3, 1}, {4700, 0}};
        limitation = 1;
    };
    class RHSUSF_cannon_med_Meadows_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\cannon_med\Meadows_close_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\cannon_med\Meadows_close_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\cannon_med\Meadows_close_3", 1}};
        volume = "1.15 * (meadows max sea)";
        range = 4700;
        rangeCurve[] = {{0, 1}, {4700, 0}};
        limitation = 1;
    };
    class RHSUSF_cannon_med_Houses_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\cannon_med\Houses_close_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\cannon_med\Houses_close_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\cannon_med\Houses_close_3", 1}};
        volume = "1.15 * houses";
        range = 4700;
        rangeCurve[] = {{0, 1}, {4700, 0}};
        limitation = 1;
    };
    class RHSUSF_cannon_med_Forest_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\cannon_med\Forest_close_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\cannon_med\Forest_close_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\cannon_med\Forest_close_3", 1}};
        volume = "1.15 * (forest max trees)";
        range = 4700;
        rangeCurve[] = {{0, 1}, {4700, 0}};
        limitation = 1;
    };
    class RHSUSF_cannon_20mm_Meadows_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\cannon_20mm\Meadows_close_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\cannon_20mm\Meadows_close_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\cannon_20mm\Meadows_close_3", 1}};
        volume = "1.15 * (meadows max sea)";
        range = 4200;
        rangeCurve[] = {{0, 1}, {4200, 0}};
        limitation = 1;
    };
    class RHSUSF_cannon_20mm_Houses_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\cannon_20mm\Houses_close_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\cannon_20mm\Houses_close_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\cannon_20mm\Houses_close_3", 1}};
        volume = "1.15 * houses";
        range = 4200;
        rangeCurve[] = {{0, 1}, {4200, 0}};
        limitation = 1;
    };
    class RHSUSF_cannon_20mm_Forest_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\cannon_20mm\Forest_close_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\cannon_20mm\Forest_close_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\cannon_20mm\Forest_close_3", 1}};
        volume = "1.15 * (forest max trees)";
        range = 4200;
        rangeCurve[] = {{0, 1}, {4200, 0}};
        limitation = 1;
    };
    class RHSUSF_sd_subsonic_Meadows_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\sd_subsonic\Meadows_close_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\sd_subsonic\Meadows_close_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\sd_subsonic\Meadows_close_3", 1}};
        volume = "1.10 * (meadows max sea) * (1 - (interior * 0.7))";
        range = 400;
        rangeCurve[] = {{0, 1}, {400, 1}};
        limitation = 1;
    };
    class RHSUSF_sd_subsonic_Houses_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\sd_subsonic\Houses_close_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\sd_subsonic\Houses_close_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\sd_subsonic\Houses_close_3", 1}};
        volume = "1.10 * houses * (1 - (interior * 0.7))";
        range = 400;
        rangeCurve[] = {{0, 1}, {400, 1}};
        limitation = 1;
    };
    class RHSUSF_sd_subsonic_Forest_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\sd_subsonic\Forest_close_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\sd_subsonic\Forest_close_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\sd_subsonic\Forest_close_3", 1}};
        volume = "1.10 * (forest max trees) * (1 - (interior * 0.7))";
        range = 400;
        rangeCurve[] = {{0, 1}, {400, 1}};
        limitation = 1;
    };
    class RHSUSF_sd_subsonic_Interior_close_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\sd_subsonic\Interior_close_1", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\sd_subsonic\Interior_close_2", 1}, {"rhsusf\addons\rhsusf_s_weaponsounds\sounds\tails\sd_subsonic\Interior_close_3", 1}};
        volume = "1.10 * interior";
        range = 7;
        rangeCurve[] = {{0, 1}, {3, 1}, {7, 0}};
        limitation = 1;
    };
};
class CfgSoundSets {
    class RHSUSF_m240_Shot_SoundSet {
        soundShaders[] = {
            "RHSUSF_m240_shot_fp_SoundShader",
            "RHSUSF_m240_shot_close_SoundShader",
            "RHSUSF_m240_shot_mid_SoundShader",
            "RHSUSF_m240_shot_far_SoundShader",
            "RHSUSF_m240_shot_forest_far_soundShader",
            "RHSUSF_m240_Interior_closeMono_SoundShader",
            "RHSUSF_m240_urbanLayer_SoundShader",
            "RHSUSF_m240_Interior_far_SoundShader"
        };
        occlusionFactor = 0.35;
        obstructionFactor = 0.18;
        volumeFactor = 1.55;
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "RHSUSF_Shot_light_3DProcessingType";
        distanceFilter = "RHSUSF_rifleShotDistanceFilter";
        frequencyRandomizer = 0.5;
        frequencyRandomizerMin = 0.1;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHSUSF_m240_stereoLayer_SoundSet {
        soundShaders[] = {"RHSUSF_m240_stereoLayer_SoundShader"};
        occlusionFactor = 0.25;
        obstructionFactor = 0.78;
        volumeFactor = 0.76;
        volumeCurve = "inverseSquare3Curve";
        sound3DProcessingType = "rhsusf_stereoLayer_3DProcessingTyp";
        distanceFilter = "rhsusf_rifleShotDistanceFilter";
        frequencyRandomizer = 1.8;
        frequencyRandomizerMin = 0.4;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHSUSF_m249_Shot_SoundSet {
        soundShaders[] = {
            "RHSUSF_m249_shot_fp_SoundShader",
            "RHSUSF_m249_shot_close_SoundShader",
            "RHSUSF_m249_shot_mid_SoundShader",
            "RHSUSF_m249_shot_far_SoundShader",
            "RHSUSF_m249_shot_forest_far_soundShader",
            "RHSUSF_m249_Interior_closeMono_SoundShader",
            "RHSUSF_m249_urbanLayer_SoundShader",
            "RHSUSF_m249_Interior_far_SoundShader"
        };
        occlusionFactor = 0.35;
        obstructionFactor = 0.18;
        volumeFactor = 1.55;
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "RHSUSF_Shot_light_3DProcessingType";
        distanceFilter = "RHSUSF_rifleShotDistanceFilter";
        frequencyRandomizer = 0.5;
        frequencyRandomizerMin = 0.1;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHSUSF_m249_stereoLayer_SoundSet {
        soundShaders[] = {"RHSUSF_m249_stereoLayer_SoundShader"};
        occlusionFactor = 0.25;
        obstructionFactor = 0.78;
        volumeFactor = 0.76;
        volumeCurve = "inverseSquare3Curve";
        sound3DProcessingType = "rhsusf_stereoLayer_3DProcessingTyp";
        distanceFilter = "rhsusf_rifleShotDistanceFilter";
        frequencyRandomizer = 1.8;
        frequencyRandomizerMin = 0.4;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHSUSF_m24_Shot_SoundSet {
        soundShaders[] = {
            "RHSUSF_m24_shot_fp_SoundShader",
            "RHSUSF_m24_shot_close_SoundShader",
            "RHSUSF_m24_shot_mid_SoundShader",
            "RHSUSF_m24_shot_far_SoundShader",
            "RHSUSF_m24_shot_forest_far_soundShader",
            "RHSUSF_m24_Interior_closeMono_SoundShader",
            "RHSUSF_m24_urbanLayer_SoundShader",
            "RHSUSF_m24_Interior_far_SoundShader"
        };
        occlusionFactor = 0.35;
        obstructionFactor = 0.18;
        volumeFactor = 1.55;
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "RHSUSF_Shot_light_3DProcessingType";
        distanceFilter = "RHSUSF_rifleShotDistanceFilter";
        frequencyRandomizer = 0.5;
        frequencyRandomizerMin = 0.1;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHSUSF_m24_stereoLayer_SoundSet {
        soundShaders[] = {"RHSUSF_m24_stereoLayer_SoundShader"};
        occlusionFactor = 0.25;
        obstructionFactor = 0.78;
        volumeFactor = 0.76;
        volumeCurve = "inverseSquare3Curve";
        sound3DProcessingType = "rhsusf_stereoLayer_3DProcessingTyp";
        distanceFilter = "rhsusf_rifleShotDistanceFilter";
        frequencyRandomizer = 1.8;
        frequencyRandomizerMin = 0.4;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHSUSF_m14_Shot_SoundSet {
        soundShaders[] = {
            "RHSUSF_m14_shot_fp_SoundShader",
            "RHSUSF_m14_shot_close_SoundShader",
            "RHSUSF_m14_shot_mid_SoundShader",
            "RHSUSF_m14_shot_far_SoundShader",
            "RHSUSF_m14_shot_forest_far_soundShader",
            "RHSUSF_m14_Interior_closeMono_SoundShader",
            "RHSUSF_m14_urbanLayer_SoundShader",
            "RHSUSF_m14_Interior_far_SoundShader"
        };
        occlusionFactor = 0.35;
        obstructionFactor = 0.18;
        volumeFactor = 1.55;
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "RHSUSF_Shot_light_3DProcessingType";
        distanceFilter = "RHSUSF_rifleShotDistanceFilter";
        frequencyRandomizer = 0.5;
        frequencyRandomizerMin = 0.1;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHSUSF_m14_stereoLayer_SoundSet {
        soundShaders[] = {"RHSUSF_m14_stereoLayer_SoundShader"};
        occlusionFactor = 0.25;
        obstructionFactor = 0.78;
        volumeFactor = 0.76;
        volumeCurve = "inverseSquare3Curve";
        sound3DProcessingType = "rhsusf_stereoLayer_3DProcessingTyp";
        distanceFilter = "rhsusf_rifleShotDistanceFilter";
        frequencyRandomizer = 1.8;
        frequencyRandomizerMin = 0.4;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHSUSF_m16_Shot_SoundSet {
        soundShaders[] = {
            "RHSUSF_m16_shot_fp_SoundShader",
            "RHSUSF_m16_shot_close_SoundShader",
            "RHSUSF_m16_shot_mid_SoundShader",
            "RHSUSF_m16_shot_far_SoundShader",
            "RHSUSF_m16_shot_forest_far_soundShader",
            "RHSUSF_m16_Interior_closeMono_SoundShader",
            "RHSUSF_m16_urbanLayer_SoundShader",
            "RHSUSF_m16_Interior_far_SoundShader"
        };
        occlusionFactor = 0.35;
        obstructionFactor = 0.18;
        volumeFactor = 1.55;
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "RHSUSF_Shot_light_3DProcessingType";
        distanceFilter = "RHSUSF_rifleShotDistanceFilter";
        frequencyRandomizer = 0.5;
        frequencyRandomizerMin = 0.1;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHSUSF_m16_stereoLayer_SoundSet {
        soundShaders[] = {"RHSUSF_m16_stereoLayer_SoundShader"};
        occlusionFactor = 0.25;
        obstructionFactor = 0.78;
        volumeFactor = 0.76;
        volumeCurve = "inverseSquare3Curve";
        sound3DProcessingType = "rhsusf_stereoLayer_3DProcessingTyp";
        distanceFilter = "rhsusf_rifleShotDistanceFilter";
        frequencyRandomizer = 1.8;
        frequencyRandomizerMin = 0.4;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHSUSF_m4_Shot_SoundSet {
        soundShaders[] = {
            "RHSUSF_m4_shot_fp_SoundShader",
            "RHSUSF_m4_shot_close_SoundShader",
            "RHSUSF_m4_shot_mid_SoundShader",
            "RHSUSF_m4_shot_far_SoundShader",
            "RHSUSF_m4_shot_forest_far_soundShader",
            "RHSUSF_m4_Interior_closeMono_SoundShader",
            "RHSUSF_m4_urbanLayer_SoundShader",
            "RHSUSF_m4_Interior_far_SoundShader"
        };
        occlusionFactor = 0.35;
        obstructionFactor = 0.18;
        volumeFactor = 1.55;
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "RHSUSF_Shot_light_3DProcessingType";
        distanceFilter = "RHSUSF_rifleShotDistanceFilter";
        frequencyRandomizer = 0.5;
        frequencyRandomizerMin = 0.1;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHSUSF_m4_stereoLayer_SoundSet {
        soundShaders[] = {"RHSUSF_m4_stereoLayer_SoundShader"};
        occlusionFactor = 0.25;
        obstructionFactor = 0.78;
        volumeFactor = 0.76;
        volumeCurve = "inverseSquare3Curve";
        sound3DProcessingType = "rhsusf_stereoLayer_3DProcessingTyp";
        distanceFilter = "rhsusf_rifleShotDistanceFilter";
        frequencyRandomizer = 1.8;
        frequencyRandomizerMin = 0.4;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHSUSF_mp7_Shot_SoundSet {
        soundShaders[] = {
            "RHSUSF_mp7_shot_fp_SoundShader",
            "RHSUSF_mp7_shot_close_SoundShader",
            "RHSUSF_mp7_shot_mid_SoundShader",
            "RHSUSF_mp7_shot_far_SoundShader",
            "RHSUSF_mp7_shot_forest_far_soundShader",
            "RHSUSF_mp7_Interior_closeMono_SoundShader",
            "RHSUSF_mp7_urbanLayer_SoundShader",
            "RHSUSF_mp7_Interior_far_SoundShader"
        };
        occlusionFactor = 0.35;
        obstructionFactor = 0.18;
        volumeFactor = 1.55;
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "RHSUSF_Shot_light_3DProcessingType";
        distanceFilter = "RHSUSF_rifleShotDistanceFilter";
        frequencyRandomizer = 0.5;
        frequencyRandomizerMin = 0.1;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHSUSF_mp7_stereoLayer_SoundSet {
        soundShaders[] = {"RHSUSF_mp7_stereoLayer_SoundShader"};
        occlusionFactor = 0.25;
        obstructionFactor = 0.78;
        volumeFactor = 0.76;
        volumeCurve = "inverseSquare3Curve";
        sound3DProcessingType = "rhsusf_stereoLayer_3DProcessingTyp";
        distanceFilter = "rhsusf_rifleShotDistanceFilter";
        frequencyRandomizer = 1.8;
        frequencyRandomizerMin = 0.4;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHSUSF_rifle_small_Tail_SoundSet {
        soundShaders[] = {
            "RHSUSF_rifle_small_Meadows_close_SoundShader",
            "RHSUSF_rifle_small_Meadows_far_SoundShader",
            "RHSUSF_rifle_small_Houses_close_SoundShader",
            "RHSUSF_rifle_small_Houses_far_SoundShader",
            "RHSUSF_rifle_small_Forest_close_SoundShader",
            "RHSUSF_rifle_small_Forest_far_SoundShader",
            "RHSUSF_rifle_small_Interior_close_SoundShader"
        };
        volumeFactor = "1 * 1.55";
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.25;
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
    class RHSUSF_rifle_med_Tail_SoundSet {
        soundShaders[] = {
            "RHSUSF_rifle_med_Meadows_close_SoundShader",
            "RHSUSF_rifle_med_Meadows_far_SoundShader",
            "RHSUSF_rifle_med_Houses_close_SoundShader",
            "RHSUSF_rifle_med_Houses_far_SoundShader",
            "RHSUSF_rifle_med_Forest_close_SoundShader",
            "RHSUSF_rifle_med_Forest_far_SoundShader",
            "RHSUSF_rifle_med_Interior_close_SoundShader"
        };
        volumeFactor = "1 * 1.55";
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.25;
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
    class RHSUSF_int_rifle_med_Tail_SoundSet {
        soundShaders[] = {
            "RHSUSF_int_rifle_med_Meadows_close_SoundShader",
            "RHSUSF_int_rifle_med_Meadows_far_SoundShader",
            "RHSUSF_int_rifle_med_Houses_close_SoundShader",
            "RHSUSF_int_rifle_med_Houses_far_SoundShader",
            "RHSUSF_int_rifle_med_Forest_close_SoundShader",
            "RHSUSF_int_rifle_med_Forest_far_SoundShader",
            "RHSUSF_int_rifle_med_Interior_close_SoundShader"
        };
        volumeFactor = "1 * 1.55";
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.25;
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
    class RHSUSF_pistol1_old_Tail_SoundSet {
        soundShaders[] = {
            "RHSUSF_pistol1_old_Meadows_close_SoundShader",
            "RHSUSF_pistol1_old_Meadows_far_SoundShader",
            "RHSUSF_pistol1_old_Houses_close_SoundShader",
            "RHSUSF_pistol1_old_Houses_far_SoundShader",
            "RHSUSF_pistol1_old_Forest_close_SoundShader",
            "RHSUSF_pistol1_old_Forest_far_SoundShader",
            "RHSUSF_pistol1_old_Interior_close_SoundShader"
        };
        volumeFactor = "1 * 1.38";
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.25;
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
            "RHSUSF_rifle2_Interior_close_SoundShader"
        };
        volumeFactor = "1 * 1.55";
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.25;
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
    class RHSUSF_int_cannon_large_Tail_SoundSet {
        soundShaders[] = {"RHSUSF_int_cannon_large_Meadows_close_SoundShader", "RHSUSF_int_cannon_large_Houses_close_SoundShader", "RHSUSF_int_cannon_large_Forest_close_SoundShader"};
        volumeFactor = "1 * 1.05";
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.18;
        obstructionFactor = 0;
        sound3DProcessingType = "RHSUSF_cannonTail_3DProcessingType";
        soundShadersLimit = 2;
        distanceFilter = "RHSUSF_rifleShotDistanceFilter";
        frequencyRandomizer = 2;
        frequencyRandomizerMin = 0.2;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHSUSF_cannon_large_Tail_SoundSet {
        soundShaders[] = {"RHSUSF_cannon_large_Meadows_close_SoundShader", "RHSUSF_cannon_large_Houses_close_SoundShader", "RHSUSF_cannon_large_Forest_close_SoundShader"};
        volumeFactor = "1 * 1.05";
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.18;
        obstructionFactor = 0;
        sound3DProcessingType = "RHSUSF_cannonTail_3DProcessingType";
        soundShadersLimit = 2;
        distanceFilter = "RHSUSF_rifleShotDistanceFilter";
        frequencyRandomizer = 2;
        frequencyRandomizerMin = 0.2;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHSUSF_int_cannon_med_Tail_SoundSet {
        soundShaders[] = {"RHSUSF_int_cannon_med_Meadows_close_SoundShader", "RHSUSF_int_cannon_med_Houses_close_SoundShader", "RHSUSF_int_cannon_med_Forest_close_SoundShader"};
        volumeFactor = "1 * 1.00";
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.18;
        obstructionFactor = 0;
        sound3DProcessingType = "RHSUSF_cannonTail_3DProcessingType";
        soundShadersLimit = 2;
        distanceFilter = "RHSUSF_rifleShotDistanceFilter";
        frequencyRandomizer = 2;
        frequencyRandomizerMin = 0.2;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHSUSF_cannon_med_Tail_SoundSet {
        soundShaders[] = {"RHSUSF_cannon_med_Meadows_close_SoundShader", "RHSUSF_cannon_med_Houses_close_SoundShader", "RHSUSF_cannon_med_Forest_close_SoundShader"};
        volumeFactor = "1 * 1.00";
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.18;
        obstructionFactor = 0;
        sound3DProcessingType = "RHSUSF_cannonTail_3DProcessingType";
        soundShadersLimit = 2;
        distanceFilter = "RHSUSF_rifleShotDistanceFilter";
        frequencyRandomizer = 2;
        frequencyRandomizerMin = 0.2;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHSUSF_cannon_20mm_Tail_SoundSet {
        soundShaders[] = {"RHSUSF_cannon_20mm_Meadows_close_SoundShader", "RHSUSF_cannon_20mm_Houses_close_SoundShader", "RHSUSF_cannon_20mm_Forest_close_SoundShader"};
        volumeFactor = "1 * 1.00";
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.18;
        obstructionFactor = 0;
        sound3DProcessingType = "RHSUSF_cannonTail_3DProcessingType";
        soundShadersLimit = 2;
        distanceFilter = "RHSUSF_rifleShotDistanceFilter";
        frequencyRandomizer = 2;
        frequencyRandomizerMin = 0.2;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHSUSF_sd_subsonic_Tail_SoundSet {
        soundShaders[] = {
            "RHSUSF_sd_subsonic_Meadows_close_SoundShader",
            "RHSUSF_sd_subsonic_Houses_close_SoundShader",
            "RHSUSF_sd_subsonic_Forest_close_SoundShader",
            "RHSUSF_sd_subsonic_Interior_close_SoundShader"
        };
        volumeFactor = "1 * 1.55";
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.25;
        obstructionFactor = 0;
        sound3DProcessingType = "RHSUSF_Tail_3DProcessingType";
        soundShadersLimit = 2;
        distanceFilter = "RHSUSF_rifleShotDistanceFilter";
        frequencyRandomizer = 1.2;
        frequencyRandomizerMin = 0.2;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
};
class CfgSounds {
    sounds[] = {};
    class RHSUSF_boltSnap_m249 {
        name = "RHSUSF_boltSnap_m249";
        sound[] = {
            "rhsusf\addons\rhsusf_s_weaponsounds\sounds\specific\m249\boltSnap",
            1.53,
            1,
            110
        };
        titles[] = {};
    };
    class RHSUSF_boltSnap_m240 {
        name = "RHSUSF_boltSnap_m240";
        sound[] = {
            "rhsusf\addons\rhsusf_s_weaponsounds\sounds\specific\m240\boltSnap",
            1.63,
            1,
            110
        };
        titles[] = {};
    };
    class RHSUSF_rattle_m249_1 {
        name = "RHSUSF_rattle_m249_1";
        sound[] = {
            "rhsusf\addons\rhsusf_s_weaponsounds\sounds\specific\m249\rattle_1",
            1.39,
            1,
            76
        };
        titles[] = {};
    };
    class RHSUSF_rattle_m249_2 {
        name = "RHSUSF_rattle_m249_2";
        sound[] = {
            "rhsusf\addons\rhsusf_s_weaponsounds\sounds\specific\m249\rattle_2",
            1.39,
            1,
            76
        };
        titles[] = {};
    };
    class RHSUSF_rattle_m249_3 {
        name = "RHSUSF_rattle_m249_3";
        sound[] = {
            "rhsusf\addons\rhsusf_s_weaponsounds\sounds\specific\m249\rattle_3",
            1.39,
            1,
            76
        };
        titles[] = {};
    };
    class RHSUSF_rattle_m249_4 {
        name = "RHSUSF_rattle_m249_4";
        sound[] = {
            "rhsusf\addons\rhsusf_s_weaponsounds\sounds\specific\m249\rattle_4",
            1.39,
            1,
            76
        };
        titles[] = {};
    };
    class RHSUSF_rattle_m249_5 {
        name = "RHSUSF_rattle_m249_5";
        sound[] = {
            "rhsusf\addons\rhsusf_s_weaponsounds\sounds\specific\m249\rattle_5",
            1.39,
            1,
            76
        };
        titles[] = {};
    };
    class RHSUSF_rattle_m249_6 {
        name = "RHSUSF_rattle_m249_6";
        sound[] = {
            "rhsusf\addons\rhsusf_s_weaponsounds\sounds\specific\m249\rattle_6",
            1.39,
            1,
            76
        };
        titles[] = {};
    };
};
class CfgFunctions {
    class RHSUSF {
        tag = "RHSUSF";
        class functions {
            class boltSnap {
                file = "rhsusf\addons\rhsusf_c_weaponsounds\03_functions\boltSnap.sqf";
                description = "Handles the sound of the initial forward-snapping of weapons that operate from an open bolt";
            };
            class beltRattle {
                file = "rhsusf\addons\rhsusf_c_weaponsounds\03_functions\beltRattle.sqf";
                description = "Handles the belt rattling sounds.";
            };
            class openBolt {
                file = "rhsusf\addons\rhsusf_c_weaponsounds\03_functions\openBolt.sqf";
                description = "";
            };
        };
    };
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgWeapons {
    class Default;
    class Rifle;
    class Rifle_Base_F: Rifle {
        class Eventhandlers;
    };
    class Rifle_Short_Base_F: Rifle_Base_F {};
    class Pistol;
    class Pistol_Base_F: Pistol {};
    class Rifle_Long_Base_F: Rifle_Base_F {};
    class UGL_F;
    class EBR_base_F;
    class srifle_EBR_F: EBR_base_F {};
    class Launcher;
    class Launcher_Base_F: Launcher {};
    class LMG_Mk200_F: Rifle_Long_Base_F {};
    class arifle_MX_Base_F: Rifle_Base_F {};
    class SMG_02_base_F: Rifle_Short_Base_F {
        class Single;
        class FullAuto;
        class WeaponSlotsInfo;
        class GunParticles;
    };
    class rhsusf_weap_MP7A1_base_f: SMG_02_base_F {
        class Single: Single {
            class StandardSound {
                soundSetShot[] = {"RHSUSF_mp7_Shot_SoundSet", "RHSUSF_rifle_small_Tail_SoundSet", "RHSUSF_mp7_stereoLayer_SoundSet"};
            };
            class SilencedSound {
                soundSetShot[] = {"RHSUSF_MP7_Closure_SoundSet", "RHSUSF_MP7_ShotSD_SoundSet", "RHSUSF_rifle1_SD_Tail_SoundSet"};
            };
        };
        class FullAuto: FullAuto {
            class StandardSound {
                soundSetShot[] = {"RHSUSF_mp7_Shot_SoundSet", "RHSUSF_rifle_small_Tail_SoundSet", "RHSUSF_mp7_stereoLayer_SoundSet"};
            };
            class SilencedSound {
                soundSetShot[] = {"RHSUSF_MP7_Closure_SoundSet", "RHSUSF_MP7_ShotSD_SoundSet", "RHSUSF_rifle1_SD_Tail_SoundSet"};
            };
        };
    };
    class rhs_weap_XM2010_Base_F: Rifle_Base_F {
        class Single;
    };
    class rhs_weap_m24sws: rhs_weap_XM2010_Base_F {
        class Single: Single {
            sounds[] = {"Standardsound", "SilencedSound"};
            class StandardSound {
                soundSetShot[] = {"RHSUSF_m24_Shot_SoundSet", "RHSUSF_rifle2_Tail_SoundSet", "RHSUSF_m24_stereoLayer_SoundSet"};
            };
            class SilencedSound {
                soundSetShot[] = {"RHSUSF_sd_xm2010_Shot_SoundSet", "RHSUSF_sd_mmg1_Tail_SoundSet", "RHSUSF_sd_xm2010_stereoLayer_SoundSet"};
            };
        };
    };
    class rhs_weap_m14_base: srifle_EBR_F {
        class Single: Mode_SemiAuto {
            sounds[] = {"Standardsound", "SilencedSound"};
            class StandardSound {
                soundSetShot[] = {"RHSUSF_m14_Shot_SoundSet", "RHSUSF_rifle2_Tail_SoundSet", "RHSUSF_m14_stereoLayer_SoundSet"};
            };
            class SilencedSound {
                soundSetShot[] = {"RHSUSF_sd_M4_Shot_SoundSet", "RHSUSF_sd_Rifle1_Tail_SoundSet", "RHSUSF_sd_M4_stereoLayer_SoundSet"};
            };
        };
        class FullAuto: Mode_FullAuto {
            sounds[] = {"Standardsound", "SilencedSound"};
            class StandardSound {
                soundSetShot[] = {"RHSUSF_m14_Shot_SoundSet", "RHSUSF_rifle2_Tail_SoundSet", "RHSUSF_m14_stereoLayer_SoundSet"};
            };
            class SilencedSound {
                soundSetShot[] = {"RHSUSF_sd_M4_Shot_SoundSet", "RHSUSF_sd_Rifle1_Tail_SoundSet", "RHSUSF_sd_M4_stereoLayer_SoundSet"};
            };
        };
    };
    class rhs_weap_m4_Base: arifle_MX_Base_F {
        class Single: Mode_SemiAuto {
            sounds[] = {"Standardsound", "SilencedSound"};
            class StandardSound {
                soundSetShot[] = {"RHSUSF_m4_Shot_SoundSet", "RHSUSF_rifle_small_Tail_SoundSet", "RHSUSF_m4_stereoLayer_SoundSet"};
            };
            class SilencedSound {
                soundSetShot[] = {"RHSUSF_sd_M4_Shot_SoundSet", "RHSUSF_sd_Rifle1_Tail_SoundSet", "RHSUSF_sd_M4_stereoLayer_SoundSet"};
            };
        };
        class Burst: Mode_Burst {
            sounds[] = {"Standardsound", "SilencedSound"};
            class StandardSound {
                soundSetShot[] = {"RHSUSF_m4_Shot_SoundSet", "RHSUSF_rifle_small_Tail_SoundSet", "RHSUSF_m4_stereoLayer_SoundSet"};
            };
            class SilencedSound {
                soundSetShot[] = {"RHSUSF_sd_M4_Shot_SoundSet", "RHSUSF_sd_Rifle1_Tail_SoundSet", "RHSUSF_sd_M4_stereoLayer_SoundSet"};
            };
        };
        class FullAuto: Mode_FullAuto {
            sounds[] = {"Standardsound", "SilencedSound"};
            class StandardSound {
                soundSetShot[] = {"RHSUSF_m4_Shot_SoundSet", "RHSUSF_rifle_small_Tail_SoundSet", "RHSUSF_m4_stereoLayer_SoundSet"};
            };
            class SilencedSound {
                soundSetShot[] = {"RHSUSF_sd_M4_Shot_SoundSet", "RHSUSF_sd_Rifle1_Tail_SoundSet", "RHSUSF_sd_M4_stereoLayer_SoundSet"};
            };
        };
    };
    class rhs_weap_m16a4: rhs_weap_m4_Base {
        class Single: Single {
            sounds[] = {"Standardsound", "SilencedSound"};
            class StandardSound {
                soundSetShot[] = {"RHSUSF_m16_Shot_SoundSet", "RHSUSF_rifle_small_Tail_SoundSet", "RHSUSF_m16_stereoLayer_SoundSet"};
            };
            class SilencedSound {
                soundSetShot[] = {"RHSUSF_sd_M4_Shot_SoundSet", "RHSUSF_sd_Rifle1_Tail_SoundSet", "RHSUSF_sd_M4_stereoLayer_SoundSet"};
            };
        };
        class Burst: Burst {
            sounds[] = {"Standardsound", "SilencedSound"};
            class StandardSound {
                soundSetShot[] = {"RHSUSF_m16_Shot_SoundSet", "RHSUSF_rifle_small_Tail_SoundSet", "RHSUSF_m16_stereoLayer_SoundSet"};
            };
            class SilencedSound {
                soundSetShot[] = {"RHSUSF_sd_M4_Shot_SoundSet", "RHSUSF_sd_Rifle1_Tail_SoundSet", "RHSUSF_sd_M4_stereoLayer_SoundSet"};
            };
        };
    };
    class rhs_weap_M249_base: LMG_Mk200_F {
        WW2_boltSnapSound = "RHSUSF_boltSnap_m249";
        WW2_boltSnapDelay = 0.08;
        class FullAuto: Mode_FullAuto {
            sounds[] = {"StandardSound", "SilencedSound"};
            class StandardSound {
                soundSetShot[] = {"RHSUSF_m249_Shot_SoundSet", "RHSUSF_rifle_small_Tail_SoundSet", "RHSUSF_m249_stereoLayer_SoundSet"};
            };
            class SilencedSound {
                soundSetShot[] = {"RHSUSF_sd_m4_Shot_SoundSet", "RHSUSF_sd_Rifle1_Tail_SoundSet", "RHSUSF_sd_m4_stereoLayer_SoundSet"};
            };
        };
        class Eventhandlers: Eventhandlers {
            class RHSUSF_weapon_firedSoundHandler {
                fired = "_this params ['_unit','_weapon']; [_unit,_weapon,['RHSUSF_rattle_m249_1','RHSUSF_rattle_m249_2','RHSUSF_rattle_m249_3','RHSUSF_rattle_m249_4','RHSUSF_rattle_m249_5','RHSUSF_rattle_m249_6'],3] call RHSUSF_fnc_beltRattle; [_unit,_weapon,'RHSUSF_boltSnap_m249'] call RHSUSF_fnc_boltSnap;";
            };
        };
    };
    class rhs_weap_saw_base: Rifle_Base_F {
        WW2_boltSnapSound = "RHSUSF_boltSnap_m249";
        WW2_boltSnapDelay = 0.075;
        class FullAuto: Mode_FullAuto {
            sounds[] = {"StandardSound", "SilencedSound"};
            class StandardSound {
                soundSetShot[] = {"RHSUSF_m249_Shot_SoundSet", "RHSUSF_rifle_small_Tail_SoundSet", "RHSUSF_m249_stereoLayer_SoundSet"};
            };
            class SilencedSound {
                soundSetShot[] = {"RHSUSF_sd_m4_Shot_SoundSet", "RHSUSF_sd_Rifle1_Tail_SoundSet", "RHSUSF_sd_m4_stereoLayer_SoundSet"};
            };
        };
        class Eventhandlers: Eventhandlers {
            class RHSUSF_weapon_firedSoundHandler {
                fired = "_this params ['_unit','_weapon']; [_unit,_weapon,['RHSUSF_rattle_m249_1','RHSUSF_rattle_m249_2','RHSUSF_rattle_m249_3','RHSUSF_rattle_m249_4','RHSUSF_rattle_m249_5','RHSUSF_rattle_m249_6'],3] call RHSUSF_fnc_beltRattle; [_unit,_weapon,'RHSUSF_boltSnap_m249'] call RHSUSF_fnc_boltSnap;";
            };
        };
    };
    class rhs_weap_m240_base: rhs_weap_M249_base {
        WW2_boltSnapSound = "RHSUSF_boltSnap_m240";
        WW2_boltSnapDelay = 0.09;
        class manual: Mode_FullAuto {
            sounds[] = {"StandardSound"};
            class StandardSound {
                soundSetShot[] = {"RHSUSF_m240_Shot_SoundSet", "RHSUSF_rifle_med_Tail_SoundSet", "RHSUSF_m240_stereoLayer_SoundSet"};
            };
        };
        class Eventhandlers: Eventhandlers {
            class RHSUSF_weapon_firedSoundHandler {
                fired = "_this params ['_unit','_weapon']; [_unit,_weapon,['RHSUSF_rattle_m249_1','RHSUSF_rattle_m249_2','RHSUSF_rattle_m249_3','RHSUSF_rattle_m249_4','RHSUSF_rattle_m249_5','RHSUSF_rattle_m249_6'],3] call RHSUSF_fnc_beltRattle; [_unit,_weapon,'RHSUSF_boltSnap_m249'] call RHSUSF_fnc_boltSnap;";
            };
        };
    };
};
