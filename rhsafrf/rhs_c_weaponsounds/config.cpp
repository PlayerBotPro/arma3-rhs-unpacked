class CfgPatches {
    class rhs_c_weaponsounds {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {
            "A3_Weapons_F",
            "A3_Sounds_f",
            "RHS_sounds",
            "RHS_weapon_sounds"
        };
        authors[] = {"LAxemann"};
        author = "$STR_RHS_AUTHOR_FULL";
        url = "http://www.rhsmods.org/";
    };
};
class CfgSound3DProcessors {
    class RHS_Default_3DProcessingType {
        type = "panner";
        innerRange = 10;
        rangeCurve = "LinearCurve";
        range = 1800;
    };
    class RHS_Shot_light_3DProcessingType {
        type = "panner";
        innerRange = 1;
        range = 25;
        rangeCurve = "InverseSquare2Curve";
    };
    class RHS_Shot_medium_3DProcessingType {
        type = "panner";
        innerRange = 1;
        range = 32;
        rangeCurve = "InverseSquare2Curve";
    };
    class RHS_rifleBulletCrack_3DProcessingType {
        type = "panner";
        innerRange = 1;
        range = 7;
        rangeCurve = "LinearCurve";
    };
    class RHS_Shot_internalMG_3DProcessingType {
        type = "panner";
        innerRange = 2;
        range = 26;
        rangeCurve = "InverseSquare2Curve";
    };
    class RHS_Shot_internalCannon_3DProcessingType {
        type = "panner";
        innerRange = 5;
        range = 50;
        rangeCurve = "InverseSquare2Curve";
    };
    class RHS_Tail_3DProcessingType {
        type = "panner";
        innerRange = 10;
        range = 990;
        rangeCurve = "InverseSquare3Curve";
    };
    class RHS_cannonTail_3DProcessingType {
        type = "panner";
        innerRange = 20;
        range = 1290;
        rangeCurve = "InverseSquare3Curve";
    };
    class RHS_katyusha_3DProcessingType {
        type = "panner";
        innerRange = 20;
        range = 400;
        rangeCurve = "InverseSquare3Curve";
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
    class RHS_cannon_largeSoundcurve {
        points[] = {
            {0, 1},
            {0.1, 0.7832},
            {0.2, 0.5707},
            {0.3, 0.4309},
            {0.4, 0.3028},
            {0.5, 0.2503},
            {0.6, 0.1543},
            {0.7, 0.0995},
            {0.8, 0.0626},
            {0.9, 0.0413},
            {1, 0.011}
        };
    };
    class RHS_cannon_smallSoundcurve {
        points[] = {
            {0, 1},
            {0.1, 0.7032},
            {0.2, 0.5007},
            {0.3, 0.3009},
            {0.4, 0.2028},
            {0.5, 0.1403},
            {0.6, 0.1043},
            {0.7, 0.0495},
            {0.8, 0.0126},
            {0.9, 0.0083},
            {1, 0.005}
        };
    };
    class RHS_MGSoundCurve {
        points[] = {
            {0, 1},
            {0.05, 0.645},
            {0.1, 0.4394},
            {0.15, 0.3215},
            {0.2, 0.245},
            {0.25, 0.2025},
            {0.3, 0.165},
            {0.35, 0.1372},
            {0.4, 0.1061},
            {0.45, 0.0997},
            {0.5, 0.0696},
            {0.6, 0.0405},
            {0.7, 0.0294},
            {0.8, 0.019},
            {0.9, 0.01},
            {1, 0}
        };
    };
};
class cfgDistanceFilters {
    class RHS_defaultDistanceFilter {
        type = "lowPassFilter";
        minCutoffFrequency = 150;
        qFactor = 1.3;
        innerRange = 10;
        range = 2600;
        powerFactor = 32;
    };
    class RHS_rifleShotDistanceFilter {
        type = "lowPassFilter";
        minCutoffFrequency = 200;
        qFactor = 1.3;
        innerRange = 10;
        range = 2000;
        powerFactor = 32;
    };
};
class CfgSoundShaders {
    class RHS_pk_shot_fp_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\specific\pk\fp_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\specific\pk\fp_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\specific\pk\fp_3", 1}};
        volume = 1;
        range = 17;
        rangeCurve[] = {{0, 1}, {17, 0}};
    };
    class RHS_pk_shot_urbanLayer_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\layers\rifle\urban_close_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\layers\rifle\urban_close_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\layers\rifle\urban_close_3", 1}};
        volume = "1 * 0.76 * (1 - interior) * houses";
        range = 400;
        rangeCurve[] = {{0, 1}, {400, 0}};
    };
    class RHS_pk_shot_close_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\calibres\762mm_mmg\close_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\calibres\762mm_mmg\close_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\calibres\762mm_mmg\close_3", 1}};
        volume = 1;
        range = 130;
        rangeCurve[] = {{0, 0}, {17, 0.9}, {130, 0}};
    };
    class RHS_pk_shot_mid_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\calibres\762mm_mmg\mid_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\calibres\762mm_mmg\mid_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\calibres\762mm_mmg\mid_3", 1}};
        volume = "1 * 0.85 * (1 - interior) * (1 - (0.20 * forest))";
        range = 750;
        rangeCurve[] = {{0, 0}, {130, 0.95}, {750, 0}};
    };
    class RHS_pk_shot_far_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\calibres\762mm_mmg\far_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\calibres\762mm_mmg\far_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\calibres\762mm_mmg\far_3", 1}};
        volume = "1 * (1 - interior) * (1 - (forest max trees))";
        range = 3300;
        rangeCurve[] = {{0, 0}, {130, 0}, {750, 0.9}, {3300, 0.85}};
    };
    class RHS_pk_shot_forest_far_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\calibres\762mm_mmg\forest_far_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\calibres\762mm_mmg\forest_far_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\calibres\762mm_mmg\forest_far_3", 1}};
        volume = "1 * 0.7 * (1 - interior) * (forest max trees)";
        range = 3300;
        rangeCurve[] = {{0, 0}, {130, 0}, {750, 0.6}, {3300, 0.6}};
    };
    class RHS_pk_Interior_closeMono_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle_small\Interior_close_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle_small\Interior_close_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle_small\Interior_close_3", 1}};
        volume = "1 * 1.5 * interior";
        range = "130 / 2";
        rangeCurve[] = {{1, 0}, {3, 0}, {7, 1}, {"130/2", 0}};
    };
    class RHS_pk_Interior_far_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\layers\rifle\Interior_mid_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\layers\rifle\Interior_mid_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\layers\rifle\Interior_mid_3", 1}};
        volume = "1 * interior * 0.7";
        range = 1200;
        rangeCurve[] = {{0, 0}, {"130/2", 1}, {130, 0.3}, {1200, 0}};
    };
    class RHS_dragunov_shot_fp_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\specific\dragunov\fp_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\specific\dragunov\fp_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\specific\dragunov\fp_3", 1}};
        volume = 1;
        range = 17;
        rangeCurve[] = {{0, 1}, {17, 0}};
    };
    class RHS_dragunov_shot_urbanLayer_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\layers\rifle\urban_close_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\layers\rifle\urban_close_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\layers\rifle\urban_close_3", 1}};
        volume = "1 * 0.76 * (1 - interior) * houses";
        range = 400;
        rangeCurve[] = {{0, 1}, {400, 0}};
    };
    class RHS_dragunov_shot_close_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\calibres\rifle\close_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\calibres\rifle\close_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\calibres\rifle\close_3", 1}};
        volume = 1;
        range = 130;
        rangeCurve[] = {{0, 0}, {17, 0.9}, {130, 0}};
    };
    class RHS_dragunov_shot_mid_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\calibres\rifle\mid_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\calibres\rifle\mid_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\calibres\rifle\mid_3", 1}};
        volume = "1 * 0.85 * (1 - interior) * (1 - (0.20 * forest))";
        range = 750;
        rangeCurve[] = {{0, 0}, {130, 0.95}, {750, 0}};
    };
    class RHS_dragunov_shot_far_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\calibres\rifle\far_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\calibres\rifle\far_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\calibres\rifle\far_3", 1}};
        volume = "1 * (1 - interior) * (1 - (forest max trees))";
        range = 3300;
        rangeCurve[] = {{0, 0}, {130, 0}, {750, 0.9}, {3300, 0.85}};
    };
    class RHS_dragunov_shot_forest_far_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\calibres\rifle\forest_far_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\calibres\rifle\forest_far_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\calibres\rifle\forest_far_3", 1}};
        volume = "1 * 0.7 * (1 - interior) * (forest max trees)";
        range = 3300;
        rangeCurve[] = {{0, 0}, {130, 0}, {750, 0.6}, {3300, 0.6}};
    };
    class RHS_dragunov_Interior_closeMono_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle2\Interior_close_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle2\Interior_close_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle2\Interior_close_3", 1}};
        volume = "1 * 1.5 * interior";
        range = "130 / 2";
        rangeCurve[] = {{1, 0}, {3, 0}, {7, 1}, {"130/2", 0}};
    };
    class RHS_dragunov_Interior_far_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\layers\rifle\Interior_mid_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\layers\rifle\Interior_mid_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\layers\rifle\Interior_mid_3", 1}};
        volume = "1 * interior * 0.7";
        range = 1200;
        rangeCurve[] = {{0, 0}, {"130/2", 1}, {130, 0.3}, {1200, 0}};
    };
    class RHS_ak74_shot_fp_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\specific\ak74\fp_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\specific\ak74\fp_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\specific\ak74\fp_3", 1}};
        volume = 1;
        range = 17;
        rangeCurve[] = {{0, 1}, {17, 0}};
    };
    class RHS_ak74_shot_urbanLayer_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\layers\rifle\urban_close_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\layers\rifle\urban_close_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\layers\rifle\urban_close_3", 1}};
        volume = "1 * 0.76 * (1 - interior) * houses";
        range = 400;
        rangeCurve[] = {{0, 1}, {400, 0}};
    };
    class RHS_ak74_shot_close_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\calibres\545mm\close_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\calibres\545mm\close_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\calibres\545mm\close_3", 1}};
        volume = 1;
        range = 130;
        rangeCurve[] = {{0, 0}, {17, 0.9}, {130, 0}};
    };
    class RHS_ak74_shot_mid_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\calibres\545mm\mid_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\calibres\545mm\mid_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\calibres\545mm\mid_3", 1}};
        volume = "1 * 0.85 * (1 - interior) * (1 - (0.20 * forest))";
        range = 750;
        rangeCurve[] = {{0, 0}, {130, 0.95}, {750, 0}};
    };
    class RHS_ak74_shot_far_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\calibres\545mm\far_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\calibres\545mm\far_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\calibres\545mm\far_3", 1}};
        volume = "1 * (1 - interior) * (1 - (forest max trees))";
        range = 3000;
        rangeCurve[] = {{0, 0}, {130, 0}, {750, 0.9}, {3000, 0.85}};
    };
    class RHS_ak74_shot_forest_far_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\calibres\545mm\forest_far_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\calibres\545mm\forest_far_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\calibres\545mm\forest_far_3", 1}};
        volume = "1 * 0.7 * (1 - interior) * (forest max trees)";
        range = 3000;
        rangeCurve[] = {{0, 0}, {130, 0}, {750, 0.6}, {3000, 0.6}};
    };
    class RHS_ak74_Interior_closeMono_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle_small\Interior_close_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle_small\Interior_close_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle_small\Interior_close_3", 1}};
        volume = "1 * 1.5 * interior";
        range = "130 / 2";
        rangeCurve[] = {{1, 0}, {3, 0}, {7, 1}, {"130/2", 0}};
    };
    class RHS_ak74_Interior_far_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\layers\rifle\Interior_mid_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\layers\rifle\Interior_mid_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\layers\rifle\Interior_mid_3", 1}};
        volume = "1 * interior * 0.7";
        range = 1200;
        rangeCurve[] = {{0, 0}, {"130/2", 1}, {130, 0.3}, {1200, 0}};
    };
    class RHS_ak47_shot_fp_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\specific\ak47\fp_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\specific\ak47\fp_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\specific\ak47\fp_3", 1}};
        volume = 1;
        range = 17;
        rangeCurve[] = {{0, 1}, {17, 0}};
    };
    class RHS_ak47_shot_urbanLayer_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\layers\rifle\urban_close_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\layers\rifle\urban_close_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\layers\rifle\urban_close_3", 1}};
        volume = "1 * 0.76 * (1 - interior) * houses";
        range = 400;
        rangeCurve[] = {{0, 1}, {400, 0}};
    };
    class RHS_ak47_shot_close_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\calibres\762mm_mmg\close_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\calibres\762mm_mmg\close_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\calibres\762mm_mmg\close_3", 1}};
        volume = 1;
        range = 130;
        rangeCurve[] = {{0, 0}, {17, 0.9}, {130, 0}};
    };
    class RHS_ak47_shot_mid_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\calibres\762mm_mmg\mid_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\calibres\762mm_mmg\mid_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\calibres\762mm_mmg\mid_3", 1}};
        volume = "1 * 0.85 * (1 - interior) * (1 - (0.20 * forest))";
        range = 750;
        rangeCurve[] = {{0, 0}, {130, 0.95}, {750, 0}};
    };
    class RHS_ak47_shot_far_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\calibres\762mm_mmg\far_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\calibres\762mm_mmg\far_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\calibres\762mm_mmg\far_3", 1}};
        volume = "1 * (1 - interior) * (1 - (forest max trees))";
        range = 3300;
        rangeCurve[] = {{0, 0}, {130, 0}, {750, 0.9}, {3300, 0.85}};
    };
    class RHS_ak47_shot_forest_far_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\calibres\762mm_mmg\forest_far_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\calibres\762mm_mmg\forest_far_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\calibres\762mm_mmg\forest_far_3", 1}};
        volume = "1 * 0.7 * (1 - interior) * (forest max trees)";
        range = 3300;
        rangeCurve[] = {{0, 0}, {130, 0}, {750, 0.6}, {3300, 0.6}};
    };
    class RHS_ak47_Interior_closeMono_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle_small\Interior_close_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle_small\Interior_close_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle_small\Interior_close_3", 1}};
        volume = "1 * 1.5 * interior";
        range = "130 / 2";
        rangeCurve[] = {{1, 0}, {3, 0}, {7, 1}, {"130/2", 0}};
    };
    class RHS_ak47_Interior_far_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\layers\rifle\Interior_mid_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\layers\rifle\Interior_mid_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\layers\rifle\Interior_mid_3", 1}};
        volume = "1 * interior * 0.7";
        range = 1200;
        rangeCurve[] = {{0, 0}, {"130/2", 1}, {130, 0.3}, {1200, 0}};
    };
    class RHS_pp2000_shot_fp_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\specific\pp2000\fp_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\specific\pp2000\fp_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\specific\pp2000\fp_3", 1}};
        volume = 1;
        range = 17;
        rangeCurve[] = {{0, 1}, {17, 0}};
    };
    class RHS_pp2000_shot_urbanLayer_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\layers\pistol\urban_close_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\layers\pistol\urban_close_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\layers\pistol\urban_close_3", 1}};
        volume = "1 * 0.76 * (1 - interior) * houses";
        range = 400;
        rangeCurve[] = {{0, 1}, {400, 0}};
    };
    class RHS_pp2000_shot_close_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\calibres\9mm\close_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\calibres\9mm\close_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\calibres\9mm\close_3", 1}};
        volume = 1;
        range = 130;
        rangeCurve[] = {{0, 0}, {17, 0.9}, {130, 0}};
    };
    class RHS_pp2000_shot_mid_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\calibres\9mm\mid_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\calibres\9mm\mid_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\calibres\9mm\mid_3", 1}};
        volume = "1 * 0.85 * (1 - interior) * (1 - (0.20 * forest))";
        range = 750;
        rangeCurve[] = {{0, 0}, {130, 0.95}, {750, 0}};
    };
    class RHS_pp2000_shot_far_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\calibres\9mm\far_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\calibres\9mm\far_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\calibres\9mm\far_3", 1}};
        volume = "1 * (1 - interior) * (1 - (forest max trees))";
        range = 2800;
        rangeCurve[] = {{0, 0}, {130, 0}, {750, 0.9}, {2800, 0.85}};
    };
    class RHS_pp2000_shot_forest_far_soundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\calibres\9mm\forest_far_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\calibres\9mm\forest_far_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\calibres\9mm\forest_far_3", 1}};
        volume = "1 * 0.7 * (1 - interior) * (forest max trees)";
        range = 2800;
        rangeCurve[] = {{0, 0}, {130, 0}, {750, 0.6}, {2800, 0.6}};
    };
    class RHS_pp2000_Interior_closeMono_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle_small\Interior_close_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle_small\Interior_close_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle_small\Interior_close_3", 1}};
        volume = "1 * 1.5 * interior";
        range = "130 / 2";
        rangeCurve[] = {{1, 0}, {3, 0}, {7, 1}, {"130/2", 0}};
    };
    class RHS_pp2000_Interior_far_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\layers\pistol\Interior_mid_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\layers\pistol\Interior_mid_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\shared\layers\pistol\Interior_mid_3", 1}};
        volume = "1 * interior * 0.7";
        range = 1200;
        rangeCurve[] = {{0, 0}, {"130/2", 1}, {130, 0.3}, {1200, 0}};
    };
    class RHS_rifle_small_Meadows_close_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle_small\Meadows_close_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle_small\Meadows_close_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle_small\Meadows_close_3", 1}};
        volume = "1.15 * (meadows max sea) * (1 - (interior * 0.7))";
        range = 250;
        rangeCurve[] = {{0, 1}, {250, 0}};
        limitation = 1;
    };
    class RHS_rifle_small_Meadows_far_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle_small\Meadows_far_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle_small\Meadows_far_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle_small\Meadows_far_3", 1}};
        volume = "1.15 * (meadows max sea) * (1 - interior)";
        range = 3000;
        rangeCurve[] = {{0, 0}, {250, 1}, {3000, 1}};
        limitation = 1;
    };
    class RHS_rifle_small_Houses_close_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle_small\Houses_close_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle_small\Houses_close_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle_small\Houses_close_3", 1}};
        volume = "1.15 * houses * (1 - (interior * 0.7))";
        range = 250;
        rangeCurve[] = {{0, 1}, {250, 0}};
        limitation = 1;
    };
    class RHS_rifle_small_Houses_far_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle_small\Houses_far_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle_small\Houses_far_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle_small\Houses_far_3", 1}};
        volume = "1.15 * houses * (1 - interior)";
        range = 3000;
        rangeCurve[] = {{0, 0}, {250, 1}, {3000, 1}};
        limitation = 1;
    };
    class RHS_rifle_small_Forest_close_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle_small\Forest_close_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle_small\Forest_close_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle_small\Forest_close_3", 1}};
        volume = "1.15 * (forest max trees) * (1 - (interior * 0.7))";
        range = 250;
        rangeCurve[] = {{0, 1}, {250, 0}};
        limitation = 1;
    };
    class RHS_rifle_small_Forest_far_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle_small\Forest_far_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle_small\Forest_far_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle_small\Forest_far_3", 1}};
        volume = "1.15 * (forest max trees) * (1 - interior)";
        range = 3000;
        rangeCurve[] = {{0, 0}, {250, 1}, {3000, 1}};
        limitation = 1;
    };
    class RHS_rifle_small_Interior_close_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle_small\Interior_close_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle_small\Interior_close_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle_small\Interior_close_3", 1}};
        volume = "1.15 * interior";
        range = 7;
        rangeCurve[] = {{0, 1}, {3, 1}, {7, 0}};
        limitation = 1;
    };
    class RHS_rifle_med_Meadows_close_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle_med\Meadows_close_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle_med\Meadows_close_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle_med\Meadows_close_3", 1}};
        volume = "1.15 * (meadows max sea) * (1 - (interior * 0.7))";
        range = 250;
        rangeCurve[] = {{0, 1}, {250, 0}};
        limitation = 1;
    };
    class RHS_rifle_med_Meadows_far_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle_med\Meadows_far_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle_med\Meadows_far_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle_med\Meadows_far_3", 1}};
        volume = "1.15 * (meadows max sea) * (1 - interior)";
        range = 3000;
        rangeCurve[] = {{0, 0}, {250, 1}, {3000, 1}};
        limitation = 1;
    };
    class RHS_rifle_med_Houses_close_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle_med\Houses_close_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle_med\Houses_close_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle_med\Houses_close_3", 1}};
        volume = "1.15 * houses * (1 - (interior * 0.7))";
        range = 250;
        rangeCurve[] = {{0, 1}, {250, 0}};
        limitation = 1;
    };
    class RHS_rifle_med_Houses_far_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle_med\Houses_far_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle_med\Houses_far_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle_med\Houses_far_3", 1}};
        volume = "1.15 * houses * (1 - interior)";
        range = 3000;
        rangeCurve[] = {{0, 0}, {250, 1}, {3000, 1}};
        limitation = 1;
    };
    class RHS_rifle_med_Forest_close_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle_med\Forest_close_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle_med\Forest_close_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle_med\Forest_close_3", 1}};
        volume = "1.15 * (forest max trees) * (1 - (interior * 0.7))";
        range = 250;
        rangeCurve[] = {{0, 1}, {250, 0}};
        limitation = 1;
    };
    class RHS_rifle_med_Forest_far_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle_med\Forest_far_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle_med\Forest_far_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle_med\Forest_far_3", 1}};
        volume = "1.15 * (forest max trees) * (1 - interior)";
        range = 3000;
        rangeCurve[] = {{0, 0}, {250, 1}, {3000, 1}};
        limitation = 1;
    };
    class RHS_rifle_med_Interior_close_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle_med\Interior_close_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle_med\Interior_close_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle_med\Interior_close_3", 1}};
        volume = "1.15 * interior";
        range = 7;
        rangeCurve[] = {{0, 1}, {3, 1}, {7, 0}};
        limitation = 1;
    };
    class RHS_int_rifle_med_Meadows_close_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle_med\Meadows_close_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle_med\Meadows_close_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle_med\Meadows_close_3", 1}};
        volume = "1.15 * (meadows max sea) * (1 - (interior * 0.7))";
        range = 250;
        rangeCurve[] = {{0, 0}, {1.2, 0}, {1.21, 1}, {250, 0}};
        limitation = 1;
    };
    class RHS_int_rifle_med_Meadows_far_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle_med\Meadows_far_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle_med\Meadows_far_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle_med\Meadows_far_3", 1}};
        volume = "1.15 * (meadows max sea) * (1 - interior)";
        range = 3200;
        rangeCurve[] = {{0, 0}, {250, 1}, {3200, 1}};
        limitation = 1;
    };
    class RHS_int_rifle_med_Houses_close_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle_med\Houses_close_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle_med\Houses_close_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle_med\Houses_close_3", 1}};
        volume = "1.15 * houses * (1 - (interior * 0.7))";
        range = 250;
        rangeCurve[] = {{0, 0}, {2.4, 0}, {3, 1}, {250, 0}};
        limitation = 1;
    };
    class RHS_int_rifle_med_Houses_far_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle_med\Houses_far_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle_med\Houses_far_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle_med\Houses_far_3", 1}};
        volume = "1.15 * houses * (1 - interior)";
        range = 3200;
        rangeCurve[] = {{0, 0}, {250, 1}, {3200, 1}};
        limitation = 1;
    };
    class RHS_int_rifle_med_Forest_close_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle_med\Forest_close_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle_med\Forest_close_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle_med\Forest_close_3", 1}};
        volume = "1.15 * (forest max trees) * (1 - (interior * 0.7))";
        range = 250;
        rangeCurve[] = {{0, 0}, {2.4, 0}, {3, 1}, {250, 0}};
        limitation = 1;
    };
    class RHS_int_rifle_med_Forest_far_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle_med\Forest_far_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle_med\Forest_far_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle_med\Forest_far_3", 1}};
        volume = "1.15 * (forest max trees) * (1 - interior)";
        range = 3200;
        rangeCurve[] = {{0, 0}, {250, 1}, {3200, 1}};
        limitation = 1;
    };
    class RHS_int_rifle_med_Interior_close_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle_med\Interior_close_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle_med\Interior_close_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle_med\Interior_close_3", 1}};
        volume = "1.15 * interior";
        range = 7;
        rangeCurve[] = {{0, 1}, {3, 1}, {7, 0}};
        limitation = 1;
    };
    class RHS_rifle2_Meadows_close_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle2\Meadows_close_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle2\Meadows_close_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle2\Meadows_close_3", 1}};
        volume = "1.10 * (meadows max sea) * (1 - (interior * 0.7))";
        range = 250;
        rangeCurve[] = {{0, 1}, {250, 0}};
        limitation = 1;
    };
    class RHS_rifle2_Meadows_far_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle2\Meadows_far_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle2\Meadows_far_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle2\Meadows_far_3", 1}};
        volume = "1.10 * (meadows max sea) * (1 - interior)";
        range = 3000;
        rangeCurve[] = {{0, 0}, {250, 1}, {3000, 1}};
        limitation = 1;
    };
    class RHS_rifle2_Houses_close_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle2\Houses_close_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle2\Houses_close_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle2\Houses_close_3", 1}};
        volume = "1.10 * houses * (1 - (interior * 0.7))";
        range = 250;
        rangeCurve[] = {{0, 1}, {250, 0}};
        limitation = 1;
    };
    class RHS_rifle2_Houses_far_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle2\Houses_far_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle2\Houses_far_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle2\Houses_far_3", 1}};
        volume = "1.10 * houses * (1 - interior)";
        range = 3000;
        rangeCurve[] = {{0, 0}, {250, 1}, {3000, 1}};
        limitation = 1;
    };
    class RHS_rifle2_Forest_close_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle2\Forest_close_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle2\Forest_close_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle2\Forest_close_3", 1}};
        volume = "1.10 * (forest max trees) * (1 - (interior * 0.7))";
        range = 250;
        rangeCurve[] = {{0, 1}, {250, 0}};
        limitation = 1;
    };
    class RHS_rifle2_Forest_far_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle2\Forest_far_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle2\Forest_far_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle2\Forest_far_3", 1}};
        volume = "1.10 * (forest max trees) * (1 - interior)";
        range = 3000;
        rangeCurve[] = {{0, 0}, {250, 1}, {3000, 1}};
        limitation = 1;
    };
    class RHS_rifle2_Interior_close_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle2\Interior_close_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle2\Interior_close_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\rifle2\Interior_close_3", 1}};
        volume = "1.15 * interior";
        range = 7;
        rangeCurve[] = {{0, 1}, {3, 1}, {7, 0}};
        limitation = 1;
    };
    class RHS_pistol1_old_Meadows_close_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\pistol1_old\Meadows_close_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\pistol1_old\Meadows_close_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\pistol1_old\Meadows_close_3", 1}};
        volume = "1.15 * (meadows max sea) * (1 - (interior * 0.7))";
        range = 250;
        rangeCurve[] = {{0, 1}, {250, 0}};
        limitation = 1;
    };
    class RHS_pistol1_old_Meadows_far_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\pistol1_old\Meadows_far_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\pistol1_old\Meadows_far_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\pistol1_old\Meadows_far_3", 1}};
        volume = "1.15 * (meadows max sea) * (1 - interior)";
        range = 2600;
        rangeCurve[] = {{0, 0}, {250, 1}, {2600, 1}};
        limitation = 1;
    };
    class RHS_pistol1_old_Houses_close_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\pistol1_old\Houses_close_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\pistol1_old\Houses_close_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\pistol1_old\Houses_close_3", 1}};
        volume = "1.15 * houses * (1 - (interior * 0.7))";
        range = 250;
        rangeCurve[] = {{0, 1}, {250, 0}};
        limitation = 1;
    };
    class RHS_pistol1_old_Houses_far_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\pistol1_old\Houses_far_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\pistol1_old\Houses_far_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\pistol1_old\Houses_far_3", 1}};
        volume = "1.15 * houses * (1 - interior)";
        range = 2600;
        rangeCurve[] = {{0, 0}, {250, 1}, {2600, 1}};
        limitation = 1;
    };
    class RHS_pistol1_old_Forest_close_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\pistol1_old\Forest_close_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\pistol1_old\Forest_close_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\pistol1_old\Forest_close_3", 1}};
        volume = "1.15 * (forest max trees) * (1 - (interior * 0.7))";
        range = 250;
        rangeCurve[] = {{0, 1}, {250, 0}};
        limitation = 1;
    };
    class RHS_pistol1_old_Forest_far_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\pistol1_old\Forest_far_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\pistol1_old\Forest_far_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\pistol1_old\Forest_far_3", 1}};
        volume = "1.15 * (forest max trees) * (1 - interior)";
        range = 2600;
        rangeCurve[] = {{0, 0}, {250, 1}, {2600, 1}};
        limitation = 1;
    };
    class RHS_pistol1_old_Interior_close_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\pistol1_old\Interior_close_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\pistol1_old\Interior_close_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\pistol1_old\Interior_close_3", 1}};
        volume = "1.15 * interior";
        range = 7;
        rangeCurve[] = {{0, 1}, {3, 1}, {7, 0}};
        limitation = 1;
    };
    class RHS_int_cannon_large_Meadows_close_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\cannon_large\Meadows_close_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\cannon_large\Meadows_close_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\cannon_large\Meadows_close_3", 1}};
        volume = "1.15 * (meadows max sea)";
        range = 5100;
        rangeCurve[] = {{0, 0}, {1.2, 0}, {1.21, 1}, {5100, 0}};
        limitation = 1;
    };
    class RHS_int_cannon_large_Houses_close_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\cannon_large\Houses_close_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\cannon_large\Houses_close_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\cannon_large\Houses_close_3", 1}};
        volume = "1.15 * houses";
        range = 5100;
        rangeCurve[] = {{0, 0}, {2.4, 0}, {3, 1}, {5100, 0}};
        limitation = 1;
    };
    class RHS_int_cannon_large_Forest_close_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\cannon_large\Forest_close_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\cannon_large\Forest_close_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\cannon_large\Forest_close_3", 1}};
        volume = "1.15 * (forest max trees)";
        range = 5100;
        rangeCurve[] = {{0, 0}, {2.4, 0}, {3, 1}, {5100, 0}};
        limitation = 1;
    };
    class RHS_cannon_large_Meadows_close_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\cannon_large\Meadows_close_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\cannon_large\Meadows_close_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\cannon_large\Meadows_close_3", 1}};
        volume = "1.15 * (meadows max sea)";
        range = 5100;
        rangeCurve[] = {{0, 1}, {5100, 0}};
        limitation = 1;
    };
    class RHS_cannon_large_Houses_close_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\cannon_large\Houses_close_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\cannon_large\Houses_close_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\cannon_large\Houses_close_3", 1}};
        volume = "1.15 * houses";
        range = 5100;
        rangeCurve[] = {{0, 1}, {5100, 0}};
        limitation = 1;
    };
    class RHS_cannon_large_Forest_close_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\cannon_large\Forest_close_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\cannon_large\Forest_close_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\cannon_large\Forest_close_3", 1}};
        volume = "1.15 * (forest max trees)";
        range = 5100;
        rangeCurve[] = {{0, 1}, {5100, 0}};
        limitation = 1;
    };
    class RHS_int_cannon_med_Meadows_close_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\cannon_med\Meadows_close_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\cannon_med\Meadows_close_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\cannon_med\Meadows_close_3", 1}};
        volume = "1.15 * (meadows max sea)";
        range = 4700;
        rangeCurve[] = {{0, 0}, {1.2, 0}, {1.21, 1}, {4700, 0}};
        limitation = 1;
    };
    class RHS_int_cannon_med_Houses_close_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\cannon_med\Houses_close_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\cannon_med\Houses_close_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\cannon_med\Houses_close_3", 1}};
        volume = "1.15 * houses";
        range = 4700;
        rangeCurve[] = {{0, 0}, {2.4, 0}, {3, 1}, {4700, 0}};
        limitation = 1;
    };
    class RHS_int_cannon_med_Forest_close_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\cannon_med\Forest_close_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\cannon_med\Forest_close_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\cannon_med\Forest_close_3", 1}};
        volume = "1.15 * (forest max trees)";
        range = 4700;
        rangeCurve[] = {{0, 0}, {2.4, 0}, {3, 1}, {4700, 0}};
        limitation = 1;
    };
    class RHS_cannon_med_Meadows_close_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\cannon_med\Meadows_close_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\cannon_med\Meadows_close_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\cannon_med\Meadows_close_3", 1}};
        volume = "1.15 * (meadows max sea)";
        range = 4700;
        rangeCurve[] = {{0, 1}, {4700, 0}};
        limitation = 1;
    };
    class RHS_cannon_med_Houses_close_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\cannon_med\Houses_close_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\cannon_med\Houses_close_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\cannon_med\Houses_close_3", 1}};
        volume = "1.15 * houses";
        range = 4700;
        rangeCurve[] = {{0, 1}, {4700, 0}};
        limitation = 1;
    };
    class RHS_cannon_med_Forest_close_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\cannon_med\Forest_close_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\cannon_med\Forest_close_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\cannon_med\Forest_close_3", 1}};
        volume = "1.15 * (forest max trees)";
        range = 4700;
        rangeCurve[] = {{0, 1}, {4700, 0}};
        limitation = 1;
    };
    class RHS_cannon_20mm_Meadows_close_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\cannon_20mm\Meadows_close_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\cannon_20mm\Meadows_close_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\cannon_20mm\Meadows_close_3", 1}};
        volume = "1.15 * (meadows max sea)";
        range = 4200;
        rangeCurve[] = {{0, 1}, {4200, 0}};
        limitation = 1;
    };
    class RHS_cannon_20mm_Houses_close_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\cannon_20mm\Houses_close_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\cannon_20mm\Houses_close_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\cannon_20mm\Houses_close_3", 1}};
        volume = "1.15 * houses";
        range = 4200;
        rangeCurve[] = {{0, 1}, {4200, 0}};
        limitation = 1;
    };
    class RHS_cannon_20mm_Forest_close_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\cannon_20mm\Forest_close_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\cannon_20mm\Forest_close_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\cannon_20mm\Forest_close_3", 1}};
        volume = "1.15 * (forest max trees)";
        range = 4200;
        rangeCurve[] = {{0, 1}, {4200, 0}};
        limitation = 1;
    };
    class RHS_sd_subsonic_Meadows_close_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\sd_subsonic\Meadows_close_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\sd_subsonic\Meadows_close_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\sd_subsonic\Meadows_close_3", 1}};
        volume = "1.10 * (meadows max sea) * (1 - (interior * 0.7))";
        range = 400;
        rangeCurve[] = {{0, 1}, {400, 1}};
        limitation = 1;
    };
    class RHS_sd_subsonic_Houses_close_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\sd_subsonic\Houses_close_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\sd_subsonic\Houses_close_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\sd_subsonic\Houses_close_3", 1}};
        volume = "1.10 * houses * (1 - (interior * 0.7))";
        range = 400;
        rangeCurve[] = {{0, 1}, {400, 1}};
        limitation = 1;
    };
    class RHS_sd_subsonic_Forest_close_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\sd_subsonic\Forest_close_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\sd_subsonic\Forest_close_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\sd_subsonic\Forest_close_3", 1}};
        volume = "1.10 * (forest max trees) * (1 - (interior * 0.7))";
        range = 400;
        rangeCurve[] = {{0, 1}, {400, 1}};
        limitation = 1;
    };
    class RHS_sd_subsonic_Interior_close_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\sd_subsonic\Interior_close_1", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\sd_subsonic\Interior_close_2", 1}, {"rhsafrf\addons\rhs_s_weaponsounds\sounds\tails\sd_subsonic\Interior_close_3", 1}};
        volume = "1.10 * interior";
        range = 7;
        rangeCurve[] = {{0, 1}, {3, 1}, {7, 0}};
        limitation = 1;
    };
};
class CfgSoundSets {
    class RHS_pk_Shot_SoundSet {
        soundShaders[] = {
            "RHS_pk_shot_fp_SoundShader",
            "RHS_pk_shot_close_SoundShader",
            "RHS_pk_shot_urbanLayer_soundShader",
            "RHS_pk_shot_mid_SoundShader",
            "RHS_pk_shot_far_SoundShader",
            "RHS_pk_shot_forest_far_soundShader",
            "RHS_pk_Interior_closeMono_SoundShader",
            "RHS_pk_Interior_far_SoundShader"
        };
        occlusionFactor = 0.35;
        obstructionFactor = 0.18;
        volumeFactor = 1.55;
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "RHS_Shot_light_3DProcessingType";
        distanceFilter = "RHS_rifleShotDistanceFilter";
        frequencyRandomizer = 0.25;
        frequencyRandomizerMin = 0.05;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHS_dragunov_Shot_SoundSet {
        soundShaders[] = {
            "RHS_dragunov_shot_fp_SoundShader",
            "RHS_dragunov_shot_close_SoundShader",
            "RHS_dragunov_shot_urbanLayer_soundShader",
            "RHS_dragunov_shot_mid_SoundShader",
            "RHS_dragunov_shot_far_SoundShader",
            "RHS_dragunov_shot_forest_far_soundShader",
            "RHS_dragunov_Interior_closeMono_SoundShader",
            "RHS_dragunov_Interior_far_SoundShader"
        };
        occlusionFactor = 0.35;
        obstructionFactor = 0.18;
        volumeFactor = 1.55;
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "RHS_Shot_light_3DProcessingType";
        distanceFilter = "RHS_rifleShotDistanceFilter";
        frequencyRandomizer = 0.25;
        frequencyRandomizerMin = 0.05;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHS_ak74_Shot_SoundSet {
        soundShaders[] = {
            "RHS_ak74_shot_fp_SoundShader",
            "RHS_ak74_shot_close_SoundShader",
            "RHS_ak74_shot_urbanLayer_soundShader",
            "RHS_ak74_shot_mid_SoundShader",
            "RHS_ak74_shot_far_SoundShader",
            "RHS_ak74_shot_forest_far_soundShader",
            "RHS_ak74_Interior_closeMono_SoundShader",
            "RHS_ak74_Interior_far_SoundShader"
        };
        occlusionFactor = 0.35;
        obstructionFactor = 0.18;
        volumeFactor = 1.55;
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "RHS_Shot_light_3DProcessingType";
        distanceFilter = "RHS_rifleShotDistanceFilter";
        frequencyRandomizer = 0.25;
        frequencyRandomizerMin = 0.05;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHS_ak47_Shot_SoundSet {
        soundShaders[] = {
            "RHS_ak47_shot_fp_SoundShader",
            "RHS_ak47_shot_close_SoundShader",
            "RHS_ak47_shot_urbanLayer_soundShader",
            "RHS_ak47_shot_mid_SoundShader",
            "RHS_ak47_shot_far_SoundShader",
            "RHS_ak47_shot_forest_far_soundShader",
            "RHS_ak47_Interior_closeMono_SoundShader",
            "RHS_ak47_Interior_far_SoundShader"
        };
        occlusionFactor = 0.35;
        obstructionFactor = 0.18;
        volumeFactor = 1.55;
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "RHS_Shot_light_3DProcessingType";
        distanceFilter = "RHS_rifleShotDistanceFilter";
        frequencyRandomizer = 0.25;
        frequencyRandomizerMin = 0.05;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHS_pp2000_Shot_SoundSet {
        soundShaders[] = {
            "RHS_pp2000_shot_fp_SoundShader",
            "RHS_pp2000_shot_close_SoundShader",
            "RHS_pp2000_shot_urbanLayer_soundShader",
            "RHS_pp2000_shot_mid_SoundShader",
            "RHS_pp2000_shot_far_SoundShader",
            "RHS_pp2000_shot_forest_far_soundShader",
            "RHS_pp2000_Interior_closeMono_SoundShader",
            "RHS_pp2000_Interior_far_SoundShader"
        };
        occlusionFactor = 0.35;
        obstructionFactor = 0.18;
        volumeFactor = 1.55;
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "RHS_Shot_light_3DProcessingType";
        distanceFilter = "RHS_rifleShotDistanceFilter";
        frequencyRandomizer = 0.25;
        frequencyRandomizerMin = 0.05;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHS_rifle_small_Tail_SoundSet {
        soundShaders[] = {
            "RHS_rifle_small_Meadows_close_SoundShader",
            "RHS_rifle_small_Meadows_far_SoundShader",
            "RHS_rifle_small_Houses_close_SoundShader",
            "RHS_rifle_small_Houses_far_SoundShader",
            "RHS_rifle_small_Forest_close_SoundShader",
            "RHS_rifle_small_Forest_far_SoundShader",
            "RHS_rifle_small_Interior_close_SoundShader"
        };
        volumeFactor = "1 * 1.55";
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.25;
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
    class RHS_rifle_med_Tail_SoundSet {
        soundShaders[] = {
            "RHS_rifle_med_Meadows_close_SoundShader",
            "RHS_rifle_med_Meadows_far_SoundShader",
            "RHS_rifle_med_Houses_close_SoundShader",
            "RHS_rifle_med_Houses_far_SoundShader",
            "RHS_rifle_med_Forest_close_SoundShader",
            "RHS_rifle_med_Forest_far_SoundShader",
            "RHS_rifle_med_Interior_close_SoundShader"
        };
        volumeFactor = "1 * 1.55";
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.25;
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
    class RHS_int_rifle_med_Tail_SoundSet {
        soundShaders[] = {
            "RHS_int_rifle_med_Meadows_close_SoundShader",
            "RHS_int_rifle_med_Meadows_far_SoundShader",
            "RHS_int_rifle_med_Houses_close_SoundShader",
            "RHS_int_rifle_med_Houses_far_SoundShader",
            "RHS_int_rifle_med_Forest_close_SoundShader",
            "RHS_int_rifle_med_Forest_far_SoundShader",
            "RHS_int_rifle_med_Interior_close_SoundShader"
        };
        volumeFactor = "1 * 1.55";
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.25;
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
    class RHS_pistol1_old_Tail_SoundSet {
        soundShaders[] = {
            "RHS_pistol1_old_Meadows_close_SoundShader",
            "RHS_pistol1_old_Meadows_far_SoundShader",
            "RHS_pistol1_old_Houses_close_SoundShader",
            "RHS_pistol1_old_Houses_far_SoundShader",
            "RHS_pistol1_old_Forest_close_SoundShader",
            "RHS_pistol1_old_Forest_far_SoundShader",
            "RHS_pistol1_old_Interior_close_SoundShader"
        };
        volumeFactor = "1 * 1.38";
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.25;
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
            "RHS_rifle2_Interior_close_SoundShader"
        };
        volumeFactor = "1 * 1.55";
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.25;
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
    class RHS_int_cannon_large_Tail_SoundSet {
        soundShaders[] = {"RHS_int_cannon_large_Meadows_close_SoundShader", "RHS_int_cannon_large_Houses_close_SoundShader", "RHS_int_cannon_large_Forest_close_SoundShader"};
        volumeFactor = "1 * 1.05";
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.18;
        obstructionFactor = 0;
        sound3DProcessingType = "RHS_cannonTail_3DProcessingType";
        soundShadersLimit = 2;
        distanceFilter = "RHS_rifleShotDistanceFilter";
        frequencyRandomizer = 2;
        frequencyRandomizerMin = 0.2;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHS_cannon_large_Tail_SoundSet {
        soundShaders[] = {"RHS_cannon_large_Meadows_close_SoundShader", "RHS_cannon_large_Houses_close_SoundShader", "RHS_cannon_large_Forest_close_SoundShader"};
        volumeFactor = "1 * 1.05";
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.18;
        obstructionFactor = 0;
        sound3DProcessingType = "RHS_cannonTail_3DProcessingType";
        soundShadersLimit = 2;
        distanceFilter = "RHS_rifleShotDistanceFilter";
        frequencyRandomizer = 2;
        frequencyRandomizerMin = 0.2;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHS_int_cannon_med_Tail_SoundSet {
        soundShaders[] = {"RHS_int_cannon_med_Meadows_close_SoundShader", "RHS_int_cannon_med_Houses_close_SoundShader", "RHS_int_cannon_med_Forest_close_SoundShader"};
        volumeFactor = "1 * 1.00";
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.18;
        obstructionFactor = 0;
        sound3DProcessingType = "RHS_cannonTail_3DProcessingType";
        soundShadersLimit = 2;
        distanceFilter = "RHS_rifleShotDistanceFilter";
        frequencyRandomizer = 2;
        frequencyRandomizerMin = 0.2;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHS_cannon_med_Tail_SoundSet {
        soundShaders[] = {"RHS_cannon_med_Meadows_close_SoundShader", "RHS_cannon_med_Houses_close_SoundShader", "RHS_cannon_med_Forest_close_SoundShader"};
        volumeFactor = "1 * 1.00";
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.18;
        obstructionFactor = 0;
        sound3DProcessingType = "RHS_cannonTail_3DProcessingType";
        soundShadersLimit = 2;
        distanceFilter = "RHS_rifleShotDistanceFilter";
        frequencyRandomizer = 2;
        frequencyRandomizerMin = 0.2;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHS_cannon_20mm_Tail_SoundSet {
        soundShaders[] = {"RHS_cannon_20mm_Meadows_close_SoundShader", "RHS_cannon_20mm_Houses_close_SoundShader", "RHS_cannon_20mm_Forest_close_SoundShader"};
        volumeFactor = "1 * 1.00";
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.18;
        obstructionFactor = 0;
        sound3DProcessingType = "RHS_cannonTail_3DProcessingType";
        soundShadersLimit = 2;
        distanceFilter = "RHS_rifleShotDistanceFilter";
        frequencyRandomizer = 2;
        frequencyRandomizerMin = 0.2;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHS_sd_subsonic_Tail_SoundSet {
        soundShaders[] = {
            "RHS_sd_subsonic_Meadows_close_SoundShader",
            "RHS_sd_subsonic_Houses_close_SoundShader",
            "RHS_sd_subsonic_Forest_close_SoundShader",
            "RHS_sd_subsonic_Interior_close_SoundShader"
        };
        volumeFactor = "1 * 1.55";
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.25;
        obstructionFactor = 0;
        sound3DProcessingType = "RHS_Tail_3DProcessingType";
        soundShadersLimit = 2;
        distanceFilter = "RHS_rifleShotDistanceFilter";
        frequencyRandomizer = 1.2;
        frequencyRandomizerMin = 0.2;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
};
class CfgSounds {
    sounds[] = {};
    class RHS_boltSnap_pk {
        name = "RHS_boltSnap_pk";
        sound[] = {
            "rhsafrf\addons\rhs_s_weaponsounds\sounds\specific\pk\boltSnap",
            1.63,
            1,
            110
        };
        titles[] = {};
    };
    class RHS_rattle_pk_1 {
        name = "RHS_rattle_pk_1";
        sound[] = {
            "rhsafrf\addons\rhs_s_weaponsounds\sounds\specific\pk\rattle_1",
            1.39,
            1,
            76
        };
        titles[] = {};
    };
    class RHS_rattle_pk_2 {
        name = "RHS_rattle_pk_2";
        sound[] = {
            "rhsafrf\addons\rhs_s_weaponsounds\sounds\specific\pk\rattle_2",
            1.39,
            1,
            76
        };
        titles[] = {};
    };
    class RHS_rattle_pk_3 {
        name = "RHS_rattle_pk_3";
        sound[] = {
            "rhsafrf\addons\rhs_s_weaponsounds\sounds\specific\pk\rattle_3",
            1.39,
            1,
            76
        };
        titles[] = {};
    };
    class RHS_rattle_pk_4 {
        name = "RHS_rattle_pk_4";
        sound[] = {
            "rhsafrf\addons\rhs_s_weaponsounds\sounds\specific\pk\rattle_4",
            1.39,
            1,
            76
        };
        titles[] = {};
    };
    class RHS_rattle_pk_5 {
        name = "RHS_rattle_pk_5";
        sound[] = {
            "rhsafrf\addons\rhs_s_weaponsounds\sounds\specific\pk\rattle_5",
            1.39,
            1,
            76
        };
        titles[] = {};
    };
    class RHS_rattle_pk_6 {
        name = "RHS_rattle_pk_6";
        sound[] = {
            "rhsafrf\addons\rhs_s_weaponsounds\sounds\specific\pk\rattle_6",
            1.39,
            1,
            76
        };
        titles[] = {};
    };
};
class CfgFunctions {
    class RHS {
        tag = "RHS";
        class functions {
            class boltSnap {
                file = "rhsafrf\addons\rhs_c_weaponsounds\03_functions\boltSnap.sqf";
                description = "Handles the sound of the initial forward-snapping of weapons that operate from an open bolt";
            };
            class beltRattle {
                file = "rhsafrf\addons\rhs_c_weaponsounds\03_functions\beltRattle.sqf";
                description = "Handles the belt rattling sounds.";
            };
            class openBolt {
                file = "rhsafrf\addons\rhs_c_weaponsounds\03_functions\openBolt.sqf";
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
    class pdw2000_base_F;
    class hgun_PDW2000_F: pdw2000_base_F {
        class Single;
        class FullAuto;
    };
    class rhs_weap_pp2000: hgun_PDW2000_F {
        class Single: Single {
            sounds[] = {"StandardSound"};
            class StandardSound {
                soundSetShot[] = {"RHS_pp2000_Shot_SoundSet", "RHS_rifle_small_Tail_SoundSet"};
            };
        };
        class FullAuto: FullAuto {
            class StandardSound {
                soundSetShot[] = {"RHS_pp2000_Shot_SoundSet", "RHS_rifle_small_Tail_SoundSet"};
            };
        };
    };
    class rhs_weap_ak74m_Base_F: Rifle_Base_F {
        class Single: Mode_SemiAuto {
            sounds[] = {"Standardsound", "SilencedSound"};
            class StandardSound {
                soundSetShot[] = {"RHS_ak74_Shot_SoundSet", "RHS_rifle_small_Tail_SoundSet"};
            };
            class SilencedSound {
                soundSetShot[] = {"RHS_sd_AK74_Shot_SoundSet", "RHS_sd_Rifle1_Tail_SoundSet"};
            };
        };
        class FullAuto: Mode_FullAuto {
            sounds[] = {"Standardsound", "SilencedSound"};
            class StandardSound {
                soundSetShot[] = {"RHS_ak74_Shot_SoundSet", "RHS_rifle_small_Tail_SoundSet"};
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
                soundSetShot[] = {"RHS_ak47_Shot_SoundSet", "RHS_rifle_med_Tail_SoundSet"};
            };
            class SilencedSound {
                soundSetShot[] = {"RHS_sd_AKM_Shot_SoundSet", "RHS_sd_MMG1_Tail_SoundSet"};
            };
        };
        class FullAuto: Mode_FullAuto {
            sounds[] = {"StandardSound", "SilencedSound"};
            class StandardSound {
                soundSetShot[] = {"RHS_ak47_Shot_SoundSet", "RHS_rifle_med_Tail_SoundSet"};
            };
            class SilencedSound {
                soundSetShot[] = {"RHS_sd_AKM_Shot_SoundSet", "RHS_sd_MMG1_Tail_SoundSet"};
            };
        };
    };
    class rhs_weap_ak103_base: rhs_weap_akm {
        class Burst: Mode_Burst {
            sounds[] = {"StandardSound", "SilencedSound"};
            class StandardSound {
                soundSetShot[] = {"RHS_ak47_Shot_SoundSet", "RHS_rifle_med_Tail_SoundSet"};
            };
            class SilencedSound {
                soundSetShot[] = {"RHS_sd_AKM_Shot_SoundSet", "RHS_sd_MMG1_Tail_SoundSet"};
            };
        };
    };
    class rhs_weap_svd: rhs_weap_ak74m {
        class Single: Mode_SemiAuto {
            sounds[] = {"StandardSound", "SilencedSound"};
            class StandardSound {
                soundSetShot[] = {"RHS_dragunov_Shot_SoundSet", "RHS_rifle2_Tail_SoundSet"};
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
                soundSetShot[] = {"RHS_dragunov_Shot_SoundSet", "RHS_rifle2_Tail_SoundSet"};
            };
            class SilencedSound {
                soundSetShot[] = {"RHS_sd_SVD_Shot_SoundSet", "RHS_sd_mmg1_Tail_SoundSet"};
            };
        };
    };
    class rhs_weap_rpk_base: Rifle_Long_Base_F {
        class Single: Mode_SemiAuto {
            sounds[] = {"Standardsound", "SilencedSound"};
            class StandardSound {
                soundSetShot[] = {"RHS_ak74_Shot_SoundSet", "RHS_rifle_small_Tail_SoundSet"};
            };
            class SilencedSound {
                soundSetShot[] = {"RHS_sd_AK74_Shot_SoundSet", "RHS_sd_Rifle1_Tail_SoundSet"};
            };
        };
        class Manual: Mode_FullAuto {
            sounds[] = {"Standardsound", "SilencedSound"};
            class StandardSound {
                soundSetShot[] = {"RHS_ak74_Shot_SoundSet", "RHS_rifle_small_Tail_SoundSet"};
            };
            class SilencedSound {
                soundSetShot[] = {"RHS_sd_AK74_Shot_SoundSet", "RHS_sd_Rifle1_Tail_SoundSet"};
            };
        };
    };
    class rhs_pkp_base: Rifle_Long_Base_F {
        WW2_boltSnapSound = "RHS_boltSnap_pk";
        WW2_boltSnapDelay = 0.1;
        class FullAuto: Mode_FullAuto {
            sounds[] = {"StandardSound"};
            class StandardSound {
                soundSetShot[] = {"RHS_pk_Shot_SoundSet", "RHS_rifle_med_Tail_SoundSet"};
            };
        };
        class Eventhandlers: Eventhandlers {
            class RHS_pk_firedSoundHandler {
                fired = "_this params ['_unit','_weapon']; private _soundArray = ['RHS_rattle_pk_1','RHS_rattle_pk_2','RHS_rattle_pk_3','RHS_rattle_pk_4','RHS_rattle_pk_5','RHS_rattle_pk_6'];[_unit,_weapon,_soundArray,3] call RHS_fnc_beltRattle; private _sound = 'RHS_boltSnap_pk';[_unit,_weapon,_sound] call RHS_fnc_boltSnap";
            };
        };
    };
};
