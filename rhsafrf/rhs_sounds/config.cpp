class CfgPatches {
    class rhs_sounds {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.32;
        requiredAddons[] = {
            "A3_Sounds_F",
            "rhs_c_weapons",
            "rhs_c_heavyWeapons",
            "rhs_c_airweapons"
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
    class RHS_Sniper_crackling_3DProcessingType {
        type = "panner";
        innerRange = 60;
        range = 370;
        rangeCurve[] = {{0, 1}, {370, 0}};
    };
    class RHS_Cannon_3DProcessingType {
        type = "panner";
        innerRange = 100;
        range = 100;
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
            {0.005, 0.89},
            {0.1, 0.8475},
            {0.2, 0.8096},
            {0.4, 0.7533},
            {0.6, 0.6315},
            {0.8, 0.4968},
            {0.9, 0.3968},
            {1, 0}
        };
    };
    class RHS_silencedSoundCurve {
        points[] = {
            {0, 1},
            {0.001, 0.85},
            {0.005, 0.69},
            {0.1, 0.5475},
            {0.2, 0.4596},
            {0.4, 0.3033},
            {0.6, 0.2515},
            {0.8, 0.1268},
            {0.9, 0.0468},
            {1, 0}
        };
    };
    class RHS_cannonSoundCurve {
        points[] = {
            {0, 1},
            {0.001, 0.97},
            {0.005, 0.96},
            {0.1, 0.9475},
            {0.2, 0.8796},
            {0.4, 0.6833},
            {0.6, 0.6215},
            {0.8, 0.4968},
            {0.9, 0.3368},
            {1, 0}
        };
    };
    class RHS_miniCannonSoundCurve {
        points[] = {
            {0, 1},
            {0.001, 0.97},
            {0.005, 0.92},
            {0.1, 0.8775},
            {0.2, 0.7996},
            {0.4, 0.6133},
            {0.6, 0.5215},
            {0.8, 0.3768},
            {0.9, 0.2368},
            {1, 0}
        };
    };
};
class cfgDistanceFilters {
    class RHS_defaultDistanceFilter {
        type = "lowPassFilter";
        minCutoffFrequency = 150;
        qFactor = 1;
        innerRange = 400;
        range = 2600;
        powerFactor = 32;
    };
    class RHS_rifleTailDistanceFilter {
        type = "lowPassFilter";
        minCutoffFrequency = 150;
        qFactor = 1;
        innerRange = 350;
        range = 1800;
        powerFactor = 32;
    };
    class RHS_vehicletDistanceFilter {
        type = "lowPassFilter";
        minCutoffFrequency = 550;
        qFactor = 1;
        innerRange = 0;
        range = 2;
        powerFactor = 16;
    };
};
class CfgSoundShaders {
    class RHS_AK74_Closure_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\AK74\Closure_1", 1}, {"rhsafrf\addons\rhs_sounds\AK74\Closure_2", 1}, {"rhsafrf\addons\rhs_sounds\AK74\Closure_3", 1}};
        volume = 1.912;
        range = 15;
        rangeCurve[] = {{0, 1}, {15, 0}};
    };
    class RHS_AK74_0m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\AK74\0m_1", 1}, {"rhsafrf\addons\rhs_sounds\AK74\0m_2", 1}, {"rhsafrf\addons\rhs_sounds\AK74\0m_3", 1}};
        volume = 1.912;
        range = 50;
        rangeCurve[] = {{0, 1}, {50, 0}};
    };
    class RHS_AK74_50m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\AK74\50m_1", 1}, {"rhsafrf\addons\rhs_sounds\AK74\50m_2", 1}, {"rhsafrf\addons\rhs_sounds\AK74\50m_3", 1}};
        volume = 1.6252;
        range = 150;
        rangeCurve[] = {{0, 0}, {50, 1}, {150, 0}};
    };
    class RHS_AK74_150m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\AK74\150m_1", 1}, {"rhsafrf\addons\rhs_sounds\AK74\150m_2", 1}, {"rhsafrf\addons\rhs_sounds\AK74\150m_3", 1}};
        volume = 1.464;
        range = 550;
        rangeCurve[] = {{0, 0}, {50, 0}, {150, 1}, {550, 0}};
    };
    class RHS_AK74_550m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\AK74\550m_1", 1}, {"rhsafrf\addons\rhs_sounds\AK74\550m_2", 1}, {"rhsafrf\addons\rhs_sounds\AK74\550m_3", 1}};
        volume = 0.823;
        range = 1000;
        rangeCurve[] = {{0, 0}, {150, 0}, {550, 1}, {1000, 0}};
    };
    class RHS_AK74_1000m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\AK74\1000m_1", 1}, {"rhsafrf\addons\rhs_sounds\AK74\1000m_2", 1}, {"rhsafrf\addons\rhs_sounds\AK74\1000m_3", 1}};
        volume = "(0.34-(interior*0.34))";
        range = 1800;
        rangeCurve[] = {{0, 0}, {550, 0}, {1000, 1}, {1800, 0}};
    };
    class RHS_AK74_1800m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\AK74\1800m_1", 1}, {"rhsafrf\addons\rhs_sounds\AK74\1800m_2", 1}, {"rhsafrf\addons\rhs_sounds\AK74\1800m_3", 1}};
        volume = "(0.35-(interior*0.35))";
        range = 3000;
        rangeCurve[] = {{0, 0}, {1000, 0}, {1800, 1}, {3000, 0}};
    };
    class RHS_AK74_SD_0m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\AK74\SD_0m_1", 1}, {"rhsafrf\addons\rhs_sounds\AK74\SD_0m_2", 1}, {"rhsafrf\addons\rhs_sounds\AK74\SD_0m_3", 1}};
        volume = 0.85;
        range = 30;
        rangeCurve[] = {{0, 1}, {30, 0}};
    };
    class RHS_AK74_SD_30m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\AK74\SD_30m_1", 1}, {"rhsafrf\addons\rhs_sounds\AK74\SD_30m_2", 1}, {"rhsafrf\addons\rhs_sounds\AK74\SD_30m_3", 1}};
        volume = 0.75;
        range = 100;
        rangeCurve[] = {{0, 0}, {30, 1}, {150, 0}};
    };
    class RHS_AK74_SD_150m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\AK74\SD_150m_1", 1}, {"rhsafrf\addons\rhs_sounds\AK74\SD_150m_2", 1}, {"rhsafrf\addons\rhs_sounds\AK74\SD_150m_3", 1}};
        volume = 0.65;
        range = 350;
        rangeCurve[] = {{0, 0}, {30, 0}, {150, 1}, {350, 0}};
    };
    class RHS_AK74_SD_350m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\AK74\SD_350m_1", 1}, {"rhsafrf\addons\rhs_sounds\AK74\SD_350m_2", 1}, {"rhsafrf\addons\rhs_sounds\AK74\SD_350m_3", 1}};
        volume = "(0.55-(interior*0.55))";
        range = 700;
        rangeCurve[] = {{0, 0}, {150, 0}, {350, 1}, {700, 0}};
    };
    class RHS_AKM_Closure_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\AKM\Closure_1", 1}, {"rhsafrf\addons\rhs_sounds\AKM\Closure_2", 1}, {"rhsafrf\addons\rhs_sounds\AKM\Closure_3", 1}};
        volume = 1.912;
        range = 15;
        rangeCurve[] = {{0, 1}, {15, 0}};
    };
    class RHS_AKM_0m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\AKM\0m_1", 1}, {"rhsafrf\addons\rhs_sounds\AKM\0m_2", 1}, {"rhsafrf\addons\rhs_sounds\AKM\0m_3", 1}};
        volume = 1.912;
        range = 50;
        rangeCurve[] = {{0, 1}, {50, 0}};
    };
    class RHS_AKM_50m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\AKM\50m_1", 1}, {"rhsafrf\addons\rhs_sounds\AKM\50m_2", 1}, {"rhsafrf\addons\rhs_sounds\AKM\50m_3", 1}};
        volume = 1.6252;
        range = 150;
        rangeCurve[] = {{0, 0}, {50, 1}, {150, 0}};
    };
    class RHS_AKM_150m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\AKM\150m_1", 1}, {"rhsafrf\addons\rhs_sounds\AKM\150m_2", 1}, {"rhsafrf\addons\rhs_sounds\AKM\150m_3", 1}};
        volume = 1.464;
        range = 550;
        rangeCurve[] = {{0, 0}, {50, 0}, {150, 1}, {550, 0}};
    };
    class RHS_AKM_550m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\AKM\550m_1", 1}, {"rhsafrf\addons\rhs_sounds\AKM\550m_2", 1}, {"rhsafrf\addons\rhs_sounds\AKM\550m_3", 1}};
        volume = 0.823;
        range = 1000;
        rangeCurve[] = {{0, 0}, {150, 0}, {550, 1}, {1000, 0}};
    };
    class RHS_AKM_1000m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\AKM\1000m_1", 1}, {"rhsafrf\addons\rhs_sounds\AKM\1000m_2", 1}, {"rhsafrf\addons\rhs_sounds\AKM\1000m_3", 1}};
        volume = "(0.34-(interior*0.34))";
        range = 1800;
        rangeCurve[] = {{0, 0}, {550, 0}, {1000, 1}, {1800, 0}};
    };
    class RHS_AKM_1800m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\AKM\1800m_1", 1}, {"rhsafrf\addons\rhs_sounds\AKM\1800m_2", 1}, {"rhsafrf\addons\rhs_sounds\AKM\1800m_3", 1}};
        volume = "(0.35-(interior*0.35))";
        range = 3250;
        rangeCurve[] = {{0, 0}, {1000, 0}, {1800, 1}, {3250, 0}};
    };
    class RHS_AKM_SD_0m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\AKM\SD_0m_1", 1}, {"rhsafrf\addons\rhs_sounds\AKM\SD_0m_2", 1}, {"rhsafrf\addons\rhs_sounds\AKM\SD_0m_3", 1}};
        volume = 0.85;
        range = 30;
        rangeCurve[] = {{0, 1}, {30, 0}};
    };
    class RHS_AKM_SD_30m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\AKM\SD_30m_1", 1}, {"rhsafrf\addons\rhs_sounds\AKM\SD_30m_2", 1}, {"rhsafrf\addons\rhs_sounds\AKM\SD_30m_3", 1}};
        volume = 0.75;
        range = 100;
        rangeCurve[] = {{0, 0}, {30, 1}, {150, 0}};
    };
    class RHS_AKM_SD_150m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\AKM\SD_150m_1", 1}, {"rhsafrf\addons\rhs_sounds\AKM\SD_150m_2", 1}, {"rhsafrf\addons\rhs_sounds\AKM\SD_150m_3", 1}};
        volume = 0.65;
        range = 350;
        rangeCurve[] = {{0, 0}, {30, 0}, {150, 1}, {350, 0}};
    };
    class RHS_AKM_SD_350m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\AKM\SD_350m_1", 1}, {"rhsafrf\addons\rhs_sounds\AKM\SD_350m_2", 1}, {"rhsafrf\addons\rhs_sounds\AKM\SD_350m_3", 1}};
        volume = "(0.55-(interior*0.55))";
        range = 700;
        rangeCurve[] = {{0, 0}, {150, 0}, {350, 1}, {700, 0}};
    };
    class RHS_PKP_Closure_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\PKP\Closure_1", 1}, {"rhsafrf\addons\rhs_sounds\PKP\Closure_2", 1}, {"rhsafrf\addons\rhs_sounds\PKP\Closure_3", 1}};
        volume = 1.912;
        range = 15;
        rangeCurve[] = {{0, 1}, {15, 0}};
    };
    class RHS_PKP_0m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\PKP\0m_1", 1}, {"rhsafrf\addons\rhs_sounds\PKP\0m_2", 1}, {"rhsafrf\addons\rhs_sounds\PKP\0m_3", 1}};
        volume = 1.912;
        range = 50;
        rangeCurve[] = {{0, 1}, {50, 0}};
    };
    class RHS_PKP_50m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\PKP\50m_1", 1}, {"rhsafrf\addons\rhs_sounds\PKP\50m_2", 1}, {"rhsafrf\addons\rhs_sounds\PKP\50m_3", 1}};
        volume = 1.6252;
        range = 150;
        rangeCurve[] = {{0, 0}, {50, 1}, {150, 0}};
    };
    class RHS_PKP_150m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\PKP\150m_1", 1}, {"rhsafrf\addons\rhs_sounds\PKP\150m_2", 1}, {"rhsafrf\addons\rhs_sounds\PKP\150m_3", 1}};
        volume = 1.464;
        range = 550;
        rangeCurve[] = {{0, 0}, {50, 0}, {150, 1}, {550, 0}};
    };
    class RHS_PKP_550m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\PKP\550m_1", 1}, {"rhsafrf\addons\rhs_sounds\PKP\550m_2", 1}, {"rhsafrf\addons\rhs_sounds\PKP\550m_3", 1}};
        volume = 0.823;
        range = 1000;
        rangeCurve[] = {{0, 0}, {150, 0}, {550, 1}, {1000, 0}};
    };
    class RHS_PKP_1000m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\PKP\1000m_1", 1}, {"rhsafrf\addons\rhs_sounds\PKP\1000m_2", 1}, {"rhsafrf\addons\rhs_sounds\PKP\1000m_3", 1}};
        volume = "(0.34-(interior*0.34))";
        range = 1800;
        rangeCurve[] = {{0, 0}, {550, 0}, {1000, 1}, {1800, 0}};
    };
    class RHS_PKP_1800m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\PKP\1800m_1", 1}, {"rhsafrf\addons\rhs_sounds\PKP\1800m_2", 1}, {"rhsafrf\addons\rhs_sounds\PKP\1800m_3", 1}};
        volume = "(0.35-(interior*0.35))";
        range = 3300;
        rangeCurve[] = {{0, 0}, {1000, 0}, {1800, 1}, {3300, 0}};
    };
    class RHS_kar98_Closure_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\kar98\Closure_1", 1}, {"rhsafrf\addons\rhs_sounds\kar98\Closure_2", 1}, {"rhsafrf\addons\rhs_sounds\kar98\Closure_3", 1}};
        volume = 1.912;
        range = 15;
        rangeCurve[] = {{0, 1}, {15, 0}};
    };
    class RHS_kar98_0m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\kar98\0m_1", 1}, {"rhsafrf\addons\rhs_sounds\kar98\0m_2", 1}, {"rhsafrf\addons\rhs_sounds\kar98\0m_3", 1}};
        volume = 1.912;
        range = 50;
        rangeCurve[] = {{0, 1}, {50, 0}};
    };
    class RHS_kar98_50m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\kar98\50m_1", 1}, {"rhsafrf\addons\rhs_sounds\kar98\50m_2", 1}, {"rhsafrf\addons\rhs_sounds\kar98\50m_3", 1}};
        volume = 1.6252;
        range = 150;
        rangeCurve[] = {{0, 0}, {50, 1}, {150, 0}};
    };
    class RHS_kar98_150m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\kar98\150m_1", 1}, {"rhsafrf\addons\rhs_sounds\kar98\150m_2", 1}, {"rhsafrf\addons\rhs_sounds\kar98\150m_3", 1}};
        volume = 1.464;
        range = 550;
        rangeCurve[] = {{0, 0}, {50, 0}, {150, 1}, {550, 0}};
    };
    class RHS_kar98_550m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\kar98\550m_1", 1}, {"rhsafrf\addons\rhs_sounds\kar98\550m_2", 1}, {"rhsafrf\addons\rhs_sounds\kar98\550m_3", 1}};
        volume = 0.823;
        range = 1000;
        rangeCurve[] = {{0, 0}, {150, 0}, {550, 1}, {1000, 0}};
    };
    class RHS_kar98_1000m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\kar98\1000m_1", 1}, {"rhsafrf\addons\rhs_sounds\kar98\1000m_2", 1}, {"rhsafrf\addons\rhs_sounds\kar98\1000m_3", 1}};
        volume = "(0.34-(interior*0.34))";
        range = 1800;
        rangeCurve[] = {{0, 0}, {550, 0}, {1000, 1}, {1800, 0}};
    };
    class RHS_kar98_1800m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\kar98\1800m_1", 1}, {"rhsafrf\addons\rhs_sounds\kar98\1800m_2", 1}, {"rhsafrf\addons\rhs_sounds\kar98\1800m_3", 1}};
        volume = "(0.35-(interior*0.35))";
        range = 3300;
        rangeCurve[] = {{0, 0}, {1000, 0}, {1800, 1}, {3300, 0}};
    };
    class RHS_PP2000_Closure_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\PP2000\Closure_1", 1}, {"rhsafrf\addons\rhs_sounds\PP2000\Closure_2", 1}, {"rhsafrf\addons\rhs_sounds\PP2000\Closure_3", 1}};
        volume = 1.912;
        range = 15;
        rangeCurve[] = {{0, 1}, {15, 0}};
    };
    class RHS_PP2000_0m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\PP2000\0m_1", 1}, {"rhsafrf\addons\rhs_sounds\PP2000\0m_2", 1}, {"rhsafrf\addons\rhs_sounds\PP2000\0m_3", 1}};
        volume = 1.912;
        range = 50;
        rangeCurve[] = {{0, 1}, {50, 0}};
    };
    class RHS_PP2000_50m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\PP2000\50m_1", 1}, {"rhsafrf\addons\rhs_sounds\PP2000\50m_2", 1}, {"rhsafrf\addons\rhs_sounds\PP2000\50m_3", 1}};
        volume = 1.6252;
        range = 150;
        rangeCurve[] = {{0, 0}, {50, 1}, {150, 0}};
    };
    class RHS_PP2000_150m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\PP2000\150m_1", 1}, {"rhsafrf\addons\rhs_sounds\PP2000\150m_2", 1}, {"rhsafrf\addons\rhs_sounds\PP2000\150m_3", 1}};
        volume = 1.464;
        range = 550;
        rangeCurve[] = {{0, 0}, {50, 0}, {150, 1}, {550, 0}};
    };
    class RHS_PP2000_550m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\PP2000\550m_1", 1}, {"rhsafrf\addons\rhs_sounds\PP2000\550m_2", 1}, {"rhsafrf\addons\rhs_sounds\PP2000\550m_3", 1}};
        volume = 0.823;
        range = 1000;
        rangeCurve[] = {{0, 0}, {150, 0}, {550, 1}, {1000, 0}};
    };
    class RHS_PP2000_1000m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\PP2000\1000m_1", 1}, {"rhsafrf\addons\rhs_sounds\PP2000\1000m_2", 1}, {"rhsafrf\addons\rhs_sounds\PP2000\1000m_3", 1}};
        volume = "(0.34-(interior*0.34))";
        range = 1800;
        rangeCurve[] = {{0, 0}, {550, 0}, {1000, 1}, {1800, 0}};
    };
    class RHS_PP2000_1800m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\PP2000\1800m_1", 1}, {"rhsafrf\addons\rhs_sounds\PP2000\1800m_2", 1}, {"rhsafrf\addons\rhs_sounds\PP2000\1800m_3", 1}};
        volume = "(0.35-(interior*0.35))";
        range = 2700;
        rangeCurve[] = {{0, 0}, {1000, 0}, {1800, 1}, {2700, 0}};
    };
    class RHS_SVD_Closure_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\SVD\Closure_1", 1}, {"rhsafrf\addons\rhs_sounds\SVD\Closure_2", 1}, {"rhsafrf\addons\rhs_sounds\SVD\Closure_3", 1}};
        volume = 1.912;
        range = 15;
        rangeCurve[] = {{0, 1}, {15, 0}};
    };
    class RHS_ASVAL_Closure_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\ASVAL\Closure_1", 1}, {"rhsafrf\addons\rhs_sounds\ASVAL\Closure_2", 1}, {"rhsafrf\addons\rhs_sounds\ASVAL\Closure_3", 1}};
        volume = 1.912;
        range = 15;
        rangeCurve[] = {{0, 1}, {15, 0}};
    };
    class RHS_ASVAL_SD_0m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\ASVAL\SD_0m_1", 1}, {"rhsafrf\addons\rhs_sounds\ASVAL\SD_0m_2", 1}, {"rhsafrf\addons\rhs_sounds\ASVAL\SD_0m_3", 1}};
        volume = 0.85;
        range = 30;
        rangeCurve[] = {{0, 1}, {30, 0}};
    };
    class RHS_ASVAL_SD_30m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\ASVAL\SD_30m_1", 1}, {"rhsafrf\addons\rhs_sounds\ASVAL\SD_30m_2", 1}, {"rhsafrf\addons\rhs_sounds\ASVAL\SD_30m_3", 1}};
        volume = 0.75;
        range = 100;
        rangeCurve[] = {{0, 0}, {30, 1}, {150, 0}};
    };
    class RHS_ASVAL_SD_150m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\ASVAL\SD_150m_1", 1}, {"rhsafrf\addons\rhs_sounds\ASVAL\SD_150m_2", 1}, {"rhsafrf\addons\rhs_sounds\ASVAL\SD_150m_3", 1}};
        volume = 0.65;
        range = 350;
        rangeCurve[] = {{0, 0}, {30, 0}, {150, 1}, {350, 0}};
    };
    class RHS_ASVAL_SD_350m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\ASVAL\SD_350m_1", 1}, {"rhsafrf\addons\rhs_sounds\ASVAL\SD_350m_2", 1}, {"rhsafrf\addons\rhs_sounds\ASVAL\SD_350m_3", 1}};
        volume = "(0.55-(interior*0.55))";
        range = 550;
        rangeCurve[] = {{0, 0}, {150, 0}, {350, 1}, {550, 0}};
    };
    class RHS_DSHKM_Closure_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\DSHKM\Closure_1", 1}, {"rhsafrf\addons\rhs_sounds\DSHKM\Closure_2", 1}, {"rhsafrf\addons\rhs_sounds\DSHKM\Closure_3", 1}};
        volume = "1.912*campos";
        range = 15;
        rangeCurve[] = {{0, 1}, {15, 0}};
    };
    class RHS_DSHKM_0m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\DSHKM\0m_1", 1}, {"rhsafrf\addons\rhs_sounds\DSHKM\0m_2", 1}, {"rhsafrf\addons\rhs_sounds\DSHKM\0m_3", 1}};
        volume = "1.912*campos";
        range = 50;
        rangeCurve[] = {{0, 1}, {50, 0}};
    };
    class RHS_DSHKM_Int_Closure_SoundShader: RHS_DSHKM_Closure_SoundShader {
        volume = "1.912*(1-campos)";
    };
    class RHS_DSHKM_int_0m_SoundShader: RHS_DSHKM_0m_SoundShader {
        volume = "1.912*(1-campos)";
    };
    class RHS_DSHKM_50m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\DSHKM\50m_1", 1}, {"rhsafrf\addons\rhs_sounds\DSHKM\50m_2", 1}, {"rhsafrf\addons\rhs_sounds\DSHKM\50m_3", 1}};
        volume = 1.6252;
        range = 150;
        rangeCurve[] = {{0, 0}, {50, 1}, {150, 0}};
    };
    class RHS_DSHKM_150m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\DSHKM\150m_1", 1}, {"rhsafrf\addons\rhs_sounds\DSHKM\150m_2", 1}, {"rhsafrf\addons\rhs_sounds\DSHKM\150m_3", 1}};
        volume = 1.464;
        range = 550;
        rangeCurve[] = {{0, 0}, {50, 0}, {150, 1}, {550, 0}};
    };
    class RHS_DSHKM_550m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\DSHKM\550m_1", 1}, {"rhsafrf\addons\rhs_sounds\DSHKM\550m_2", 1}, {"rhsafrf\addons\rhs_sounds\DSHKM\550m_3", 1}};
        volume = 0.823;
        range = 1000;
        rangeCurve[] = {{0, 0}, {150, 0}, {550, 1}, {1000, 0}};
    };
    class RHS_DSHKM_1000m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\DSHKM\1000m_1", 1}, {"rhsafrf\addons\rhs_sounds\DSHKM\1000m_2", 1}, {"rhsafrf\addons\rhs_sounds\DSHKM\1000m_3", 1}};
        volume = "(0.34-(interior*0.34))";
        range = 1800;
        rangeCurve[] = {{0, 0}, {550, 0}, {1000, 1}, {1800, 0}};
    };
    class RHS_DSHKM_1800m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\DSHKM\1800m_1", 1}, {"rhsafrf\addons\rhs_sounds\DSHKM\1800m_2", 1}, {"rhsafrf\addons\rhs_sounds\DSHKM\1800m_3", 1}};
        volume = "(0.35-(interior*0.35))";
        range = 3600;
        rangeCurve[] = {{0, 0}, {1000, 0}, {1800, 1}, {3600, 0}};
    };
    class RHS_KPVT_Closure_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\KPVT\Closure_1", 1}, {"rhsafrf\addons\rhs_sounds\KPVT\Closure_2", 1}, {"rhsafrf\addons\rhs_sounds\KPVT\Closure_3", 1}};
        volume = "1.912*campos";
        range = 15;
        rangeCurve[] = {{0, 1}, {15, 0}};
    };
    class RHS_KPVT_0m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\KPVT\0m_1", 1}, {"rhsafrf\addons\rhs_sounds\KPVT\0m_2", 1}, {"rhsafrf\addons\rhs_sounds\KPVT\0m_3", 1}};
        volume = "1.912*campos";
        range = 50;
        rangeCurve[] = {{0, 1}, {50, 0}};
    };
    class RHS_KPVT_Int_Closure_SoundShader: RHS_KPVT_Closure_SoundShader {
        volume = "1.912*(1-campos)";
    };
    class RHS_KPVT_int_0m_SoundShader: RHS_KPVT_0m_SoundShader {
        volume = "1.912*(1-campos)";
    };
    class RHS_KPVT_50m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\KPVT\50m_1", 1}, {"rhsafrf\addons\rhs_sounds\KPVT\50m_2", 1}, {"rhsafrf\addons\rhs_sounds\KPVT\50m_3", 1}};
        volume = 1.6252;
        range = 150;
        rangeCurve[] = {{0, 0}, {50, 1}, {150, 0}};
    };
    class RHS_KPVT_150m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\KPVT\150m_1", 1}, {"rhsafrf\addons\rhs_sounds\KPVT\150m_2", 1}, {"rhsafrf\addons\rhs_sounds\KPVT\150m_3", 1}};
        volume = 1.464;
        range = 550;
        rangeCurve[] = {{0, 0}, {50, 0}, {150, 1}, {550, 0}};
    };
    class RHS_KPVT_550m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\KPVT\550m_1", 1}, {"rhsafrf\addons\rhs_sounds\KPVT\550m_2", 1}, {"rhsafrf\addons\rhs_sounds\KPVT\550m_3", 1}};
        volume = 0.823;
        range = 1000;
        rangeCurve[] = {{0, 0}, {150, 0}, {550, 1}, {1000, 0}};
    };
    class RHS_KPVT_1000m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\KPVT\1000m_1", 1}, {"rhsafrf\addons\rhs_sounds\KPVT\1000m_2", 1}, {"rhsafrf\addons\rhs_sounds\KPVT\1000m_3", 1}};
        volume = "(0.34-(interior*0.34))";
        range = 1800;
        rangeCurve[] = {{0, 0}, {550, 0}, {1000, 1}, {1800, 0}};
    };
    class RHS_KPVT_1800m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\KPVT\1800m_1", 1}, {"rhsafrf\addons\rhs_sounds\KPVT\1800m_2", 1}, {"rhsafrf\addons\rhs_sounds\KPVT\1800m_3", 1}};
        volume = "(0.35-(interior*0.35))";
        range = 4000;
        rangeCurve[] = {{0, 0}, {1000, 0}, {1800, 1}, {4000, 0}};
    };
    class RHS_120mm_Closure_SoundShader {
        samples[] = {{"rhsafrf\addons\RHS_sounds\120mm\Closure_1", 1}, {"rhsafrf\addons\RHS_sounds\120mm\Closure_2", 1}, {"rhsafrf\addons\RHS_sounds\120mm\Closure_3", 1}};
        volume = "1.912*campos";
        range = 15;
        rangeCurve[] = {{0, 1}, {15, 0}};
    };
    class RHS_120mm_0m_SoundShader {
        samples[] = {{"rhsafrf\addons\RHS_sounds\120mm\0m_1", 1}, {"rhsafrf\addons\RHS_sounds\120mm\0m_2", 1}, {"rhsafrf\addons\RHS_sounds\120mm\0m_3", 1}};
        volume = "2.412*campos";
        range = 50;
        rangeCurve[] = {{0, 1}, {50, 0}};
    };
    class RHS_120mm_Int_Closure_SoundShader: RHS_120mm_Closure_SoundShader {
        volume = "1.912*(1-campos)";
    };
    class RHS_120mm_int_0m_SoundShader: RHS_120mm_0m_SoundShader {
        volume = "2.412*(1-campos)";
    };
    class RHS_120mm_50m_SoundShader {
        samples[] = {{"rhsafrf\addons\RHS_sounds\120mm\50m_1", 1}, {"rhsafrf\addons\RHS_sounds\120mm\50m_2", 1}, {"rhsafrf\addons\RHS_sounds\120mm\50m_3", 1}};
        volume = 1.6252;
        range = 150;
        rangeCurve[] = {{0, 0}, {50, 1}, {150, 0}};
    };
    class RHS_120mm_150m_SoundShader {
        samples[] = {{"rhsafrf\addons\RHS_sounds\120mm\150m_1", 1}, {"rhsafrf\addons\RHS_sounds\120mm\150m_2", 1}, {"rhsafrf\addons\RHS_sounds\120mm\150m_3", 1}};
        volume = 1.464;
        range = 550;
        rangeCurve[] = {{0, 0}, {50, 0}, {150, 1}, {550, 0}};
    };
    class RHS_120mm_550m_SoundShader {
        samples[] = {{"rhsafrf\addons\RHS_sounds\120mm\550m_1", 1}, {"rhsafrf\addons\RHS_sounds\120mm\550m_2", 1}, {"rhsafrf\addons\RHS_sounds\120mm\550m_3", 1}};
        volume = 0.823;
        range = 1000;
        rangeCurve[] = {{0, 0}, {150, 0}, {550, 1}, {1000, 0}};
    };
    class RHS_120mm_1000m_SoundShader {
        samples[] = {{"rhsafrf\addons\RHS_sounds\120mm\1000m_1", 1}, {"rhsafrf\addons\RHS_sounds\120mm\1000m_2", 1}, {"rhsafrf\addons\RHS_sounds\120mm\1000m_3", 1}};
        volume = "(0.34-(interior*0.34))";
        range = 1800;
        rangeCurve[] = {{0, 0}, {550, 0}, {1000, 1}, {1800, 0}};
    };
    class RHS_120mm_1800m_SoundShader {
        samples[] = {{"rhsafrf\addons\RHS_sounds\120mm\1800m_1", 1}, {"rhsafrf\addons\RHS_sounds\120mm\1800m_2", 1}, {"rhsafrf\addons\RHS_sounds\120mm\1800m_3", 1}};
        volume = "(0.35-(interior*0.35))";
        range = 4500;
        rangeCurve[] = {{0, 0}, {1000, 0}, {1800, 1}, {4500, 0}};
    };
    class RHS_155mm_Closure_SoundShader {
        samples[] = {{"rhsafrf\addons\RHS_sounds\155mm\Closure_1", 1}, {"rhsafrf\addons\RHS_sounds\155mm\Closure_2", 1}, {"rhsafrf\addons\RHS_sounds\155mm\Closure_3", 1}};
        volume = "1.912*campos";
        range = 15;
        rangeCurve[] = {{0, 1}, {15, 0}};
    };
    class RHS_155mm_0m_SoundShader {
        samples[] = {{"rhsafrf\addons\RHS_sounds\155mm\0m_1", 1}, {"rhsafrf\addons\RHS_sounds\155mm\0m_2", 1}, {"rhsafrf\addons\RHS_sounds\155mm\0m_3", 1}};
        volume = "2.412*campos";
        range = 50;
        rangeCurve[] = {{0, 1}, {50, 0}};
    };
    class RHS_155mm_Int_Closure_SoundShader: RHS_155mm_Closure_SoundShader {
        volume = "1.912*(1-campos)";
    };
    class RHS_155mm_int_0m_SoundShader: RHS_155mm_0m_SoundShader {
        volume = "2.412*(1-campos)";
    };
    class RHS_155mm_50m_SoundShader {
        samples[] = {{"rhsafrf\addons\RHS_sounds\155mm\50m_1", 1}, {"rhsafrf\addons\RHS_sounds\155mm\50m_2", 1}, {"rhsafrf\addons\RHS_sounds\155mm\50m_3", 1}};
        volume = 1.6252;
        range = 150;
        rangeCurve[] = {{0, 0}, {50, 1}, {150, 0}};
    };
    class RHS_155mm_150m_SoundShader {
        samples[] = {{"rhsafrf\addons\RHS_sounds\155mm\150m_1", 1}, {"rhsafrf\addons\RHS_sounds\155mm\150m_2", 1}, {"rhsafrf\addons\RHS_sounds\155mm\150m_3", 1}};
        volume = 1.464;
        range = 550;
        rangeCurve[] = {{0, 0}, {50, 0}, {150, 1}, {550, 0}};
    };
    class RHS_155mm_550m_SoundShader {
        samples[] = {{"rhsafrf\addons\RHS_sounds\155mm\550m_1", 1}, {"rhsafrf\addons\RHS_sounds\155mm\550m_2", 1}, {"rhsafrf\addons\RHS_sounds\155mm\550m_3", 1}};
        volume = 0.823;
        range = 1000;
        rangeCurve[] = {{0, 0}, {150, 0}, {550, 1}, {1000, 0}};
    };
    class RHS_155mm_1000m_SoundShader {
        samples[] = {{"rhsafrf\addons\RHS_sounds\155mm\1000m_1", 1}, {"rhsafrf\addons\RHS_sounds\155mm\1000m_2", 1}, {"rhsafrf\addons\RHS_sounds\155mm\1000m_3", 1}};
        volume = "(0.34-(interior*0.34))";
        range = 1800;
        rangeCurve[] = {{0, 0}, {550, 0}, {1000, 1}, {1800, 0}};
    };
    class RHS_155mm_1800m_SoundShader {
        samples[] = {{"rhsafrf\addons\RHS_sounds\155mm\1800m_1", 1}, {"rhsafrf\addons\RHS_sounds\155mm\1800m_2", 1}, {"rhsafrf\addons\RHS_sounds\155mm\1800m_3", 1}};
        volume = "(0.35-(interior*0.35))";
        range = 5500;
        rangeCurve[] = {{0, 0}, {1000, 0}, {1800, 1}, {5500, 0}};
    };
    class RHS_autocannon_Closure_SoundShader {
        samples[] = {{"rhsafrf\addons\RHS_sounds\autocannon\Closure_1", 1}, {"rhsafrf\addons\RHS_sounds\autocannon\Closure_2", 1}, {"rhsafrf\addons\RHS_sounds\autocannon\Closure_3", 1}};
        volume = "1.912*campos";
        range = 15;
        rangeCurve[] = {{0, 1}, {15, 0}};
    };
    class RHS_autocannon_0m_SoundShader {
        samples[] = {{"rhsafrf\addons\RHS_sounds\autocannon\0m_1", 1}, {"rhsafrf\addons\RHS_sounds\autocannon\0m_2", 1}, {"rhsafrf\addons\RHS_sounds\autocannon\0m_3", 1}};
        volume = "2.412*campos";
        range = 50;
        rangeCurve[] = {{0, 1}, {50, 0}};
    };
    class RHS_autocannon_Int_Closure_SoundShader: RHS_autocannon_Closure_SoundShader {
        volume = "1.912*(1-campos)";
    };
    class RHS_autocannon_int_0m_SoundShader: RHS_autocannon_0m_SoundShader {
        volume = "2.412*(1-campos)";
    };
    class RHS_autocannon_50m_SoundShader {
        samples[] = {{"rhsafrf\addons\RHS_sounds\autocannon\50m_1", 1}, {"rhsafrf\addons\RHS_sounds\autocannon\50m_2", 1}, {"rhsafrf\addons\RHS_sounds\autocannon\50m_3", 1}};
        volume = 1.6252;
        range = 150;
        rangeCurve[] = {{0, 0}, {50, 1}, {150, 0}};
    };
    class RHS_autocannon_150m_SoundShader {
        samples[] = {{"rhsafrf\addons\RHS_sounds\autocannon\150m_1", 1}, {"rhsafrf\addons\RHS_sounds\autocannon\150m_2", 1}, {"rhsafrf\addons\RHS_sounds\autocannon\150m_3", 1}};
        volume = 1.464;
        range = 550;
        rangeCurve[] = {{0, 0}, {50, 0}, {150, 1}, {550, 0}};
    };
    class RHS_autocannon_550m_SoundShader {
        samples[] = {{"rhsafrf\addons\RHS_sounds\autocannon\550m_1", 1}, {"rhsafrf\addons\RHS_sounds\autocannon\550m_2", 1}, {"rhsafrf\addons\RHS_sounds\autocannon\550m_3", 1}};
        volume = 0.823;
        range = 1000;
        rangeCurve[] = {{0, 0}, {150, 0}, {550, 1}, {1000, 0}};
    };
    class RHS_autocannon_1000m_SoundShader {
        samples[] = {{"rhsafrf\addons\RHS_sounds\autocannon\1000m_1", 1}, {"rhsafrf\addons\RHS_sounds\autocannon\1000m_2", 1}, {"rhsafrf\addons\RHS_sounds\autocannon\1000m_3", 1}};
        volume = "(0.34-(interior*0.34))";
        range = 1800;
        rangeCurve[] = {{0, 0}, {550, 0}, {1000, 1}, {1800, 0}};
    };
    class RHS_autocannon_1800m_SoundShader {
        samples[] = {{"rhsafrf\addons\RHS_sounds\autocannon\1800m_1", 1}, {"rhsafrf\addons\RHS_sounds\autocannon\1800m_2", 1}, {"rhsafrf\addons\RHS_sounds\autocannon\1800m_3", 1}};
        volume = "(0.35-(interior*0.35))";
        range = 3900;
        rangeCurve[] = {{0, 0}, {1000, 0}, {1800, 1}, {3900, 0}};
    };
    class RHS_yakb_Closure_SoundShader {
        samples[] = {{"rhsafrf\addons\RHS_sounds\yakb\Closure_1", 1}, {"rhsafrf\addons\RHS_sounds\yakb\Closure_2", 1}, {"rhsafrf\addons\RHS_sounds\yakb\Closure_3", 1}};
        volume = "1.912*campos";
        range = 15;
        rangeCurve[] = {{0, 1}, {15, 0}};
    };
    class RHS_yakb_0m_SoundShader {
        samples[] = {{"rhsafrf\addons\RHS_sounds\yakb\0m_1", 1}, {"rhsafrf\addons\RHS_sounds\yakb\0m_2", 1}, {"rhsafrf\addons\RHS_sounds\yakb\0m_3", 1}};
        volume = "2.412*campos";
        range = 50;
        rangeCurve[] = {{0, 1}, {50, 0}};
    };
    class RHS_yakb_Int_Closure_SoundShader: RHS_yakb_Closure_SoundShader {
        volume = "1.912*(1-campos)";
    };
    class RHS_yakb_int_0m_SoundShader: RHS_yakb_0m_SoundShader {
        volume = "2.412*(1-campos)";
    };
    class RHS_yakb_50m_SoundShader {
        samples[] = {{"rhsafrf\addons\RHS_sounds\yakb\50m_1", 1}, {"rhsafrf\addons\RHS_sounds\yakb\50m_2", 1}, {"rhsafrf\addons\RHS_sounds\yakb\50m_3", 1}};
        volume = 1.6252;
        range = 150;
        rangeCurve[] = {{0, 0}, {50, 1}, {150, 0}};
    };
    class RHS_yakb_150m_SoundShader {
        samples[] = {{"rhsafrf\addons\RHS_sounds\yakb\150m_1", 1}, {"rhsafrf\addons\RHS_sounds\yakb\150m_2", 1}, {"rhsafrf\addons\RHS_sounds\yakb\150m_3", 1}};
        volume = 1.464;
        range = 550;
        rangeCurve[] = {{0, 0}, {50, 0}, {150, 1}, {550, 0}};
    };
    class RHS_yakb_550m_SoundShader {
        samples[] = {{"rhsafrf\addons\RHS_sounds\yakb\550m_1", 1}, {"rhsafrf\addons\RHS_sounds\yakb\550m_2", 1}, {"rhsafrf\addons\RHS_sounds\yakb\550m_3", 1}};
        volume = 0.823;
        range = 1000;
        rangeCurve[] = {{0, 0}, {150, 0}, {550, 1}, {1000, 0}};
    };
    class RHS_yakb_1000m_SoundShader {
        samples[] = {{"rhsafrf\addons\RHS_sounds\yakb\1000m_1", 1}, {"rhsafrf\addons\RHS_sounds\yakb\1000m_2", 1}, {"rhsafrf\addons\RHS_sounds\yakb\1000m_3", 1}};
        volume = "(0.34-(interior*0.34))";
        range = 1800;
        rangeCurve[] = {{0, 0}, {550, 0}, {1000, 1}, {1800, 0}};
    };
    class RHS_yakb_1800m_SoundShader {
        samples[] = {{"rhsafrf\addons\RHS_sounds\yakb\1800m_1", 1}, {"rhsafrf\addons\RHS_sounds\yakb\1800m_2", 1}, {"rhsafrf\addons\RHS_sounds\yakb\1800m_3", 1}};
        volume = "(0.35-(interior*0.35))";
        range = 4500;
        rangeCurve[] = {{0, 0}, {1000, 0}, {1800, 1}, {4500, 0}};
    };
    class RHS_Rifle1_Meadows_0m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\tails\Rifle1\Meadows_0m_1", 1}, {"rhsafrf\addons\rhs_sounds\tails\Rifle1\Meadows_0m_2", 1}, {"rhsafrf\addons\rhs_sounds\tails\Rifle1\Meadows_0m_3", 1}};
        volume = "3.85*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHS_Rifle1_Meadows_150m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\tails\Rifle1\Meadows_150m_1", 1}, {"rhsafrf\addons\rhs_sounds\tails\Rifle1\Meadows_150m_2", 1}, {"rhsafrf\addons\rhs_sounds\tails\Rifle1\Meadows_150m_3", 1}};
        volume = "3.85*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
        range = 3000;
        rangeCurve[] = {{0, 0}, {150, 1}, {3000, 0}};
        limitation = 1;
    };
    class RHS_Rifle1_Houses_0m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\tails\Rifle1\Houses_0m_1", 1}, {"rhsafrf\addons\rhs_sounds\tails\Rifle1\Houses_0m_2", 1}, {"rhsafrf\addons\rhs_sounds\tails\Rifle1\Houses_0m_3", 1}};
        volume = "3.85*((1-interior/1.4)*houses/3)";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHS_Rifle1_Houses_150m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\tails\Rifle1\Houses_150m_1", 1}, {"rhsafrf\addons\rhs_sounds\tails\Rifle1\Houses_150m_2", 1}, {"rhsafrf\addons\rhs_sounds\tails\Rifle1\Houses_150m_3", 1}};
        volume = "3.85*((1-interior/1.4)*houses/3)";
        range = 3000;
        rangeCurve[] = {{0, 0}, {150, 1}, {3000, 0}};
        limitation = 1;
    };
    class RHS_Rifle1_Trees_0m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\tails\Rifle1\forest_0m_1", 1}, {"rhsafrf\addons\rhs_sounds\tails\Rifle1\forest_0m_2", 1}, {"rhsafrf\addons\rhs_sounds\tails\Rifle1\forest_0m_3", 1}};
        volume = "3.85*((1-interior/1.4)*trees/3)";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHS_Rifle1_Trees_150m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\tails\Rifle1\forest_150m_1", 1}, {"rhsafrf\addons\rhs_sounds\tails\Rifle1\forest_150m_2", 1}, {"rhsafrf\addons\rhs_sounds\tails\Rifle1\forest_150m_3", 1}};
        volume = "3.85*((1-interior/1.4)*trees/3)";
        range = 3000;
        rangeCurve[] = {{0, 0}, {150, 1}, {3000, 0}};
        limitation = 1;
    };
    class RHS_Rifle1_Forest_0m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\tails\Rifle1\Forest_0m_1", 1}, {"rhsafrf\addons\rhs_sounds\tails\Rifle1\Forest_0m_2", 1}, {"rhsafrf\addons\rhs_sounds\tails\Rifle1\Forest_0m_3", 1}};
        volume = "3.85*((1-interior/1.4)*Forest/3)";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHS_Rifle1_Forest_150m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\tails\Rifle1\Forest_150m_1", 1}, {"rhsafrf\addons\rhs_sounds\tails\Rifle1\Forest_150m_2", 1}, {"rhsafrf\addons\rhs_sounds\tails\Rifle1\Forest_150m_3", 1}};
        volume = "3.85*(1.4*((1-interior/1.4)*forest/3))";
        range = 3000;
        rangeCurve[] = {{0, 0}, {150, 1}, {3000, 0}};
        limitation = 1;
    };
    class RHS_Rifle1_Interior_0m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\tails\Rifle1\Interior_0m_1", 1}, {"rhsafrf\addons\rhs_sounds\tails\Rifle1\Interior_0m_2", 1}, {"rhsafrf\addons\rhs_sounds\tails\Rifle1\Interior_0m_3", 1}};
        volume = "3.85*((interior)*0.65)";
        range = 50;
        rangeCurve[] = {{0, 1}, {50, 0}};
        limitation = 1;
    };
    class RHS_Rifle1_Interior_50m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\tails\Rifle1\Interior_50m_1", 1}, {"rhsafrf\addons\rhs_sounds\tails\Rifle1\Interior_50m_2", 1}, {"rhsafrf\addons\rhs_sounds\tails\Rifle1\Interior_50m_3", 1}};
        volume = "3.85*((interior)*0.65)";
        range = 150;
        rangeCurve[] = {{0, 0}, {50, 1}, {150, 0}};
        limitation = 1;
    };
    class RHS_Rifle1_Interior_150m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\tails\Rifle1\Interior_150m_1", 1}, {"rhsafrf\addons\rhs_sounds\tails\Rifle1\Interior_150m_2", 1}, {"rhsafrf\addons\rhs_sounds\tails\Rifle1\Interior_150m_3", 1}};
        volume = "3.85*((interior)*0.65)";
        range = 550;
        rangeCurve[] = {{0, 0}, {50, 0}, {150, 1}, {550, 0}};
        limitation = 1;
    };
    class RHS_Rifle1_Interior_550m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\tails\Rifle1\Interior_550m_1", 1}, {"rhsafrf\addons\rhs_sounds\tails\Rifle1\Interior_550m_2", 1}, {"rhsafrf\addons\rhs_sounds\tails\Rifle1\Interior_550m_3", 1}};
        volume = "3.85*((interior)*0.65)";
        range = 1000;
        rangeCurve[] = {{0, 0}, {150, 0}, {550, 1}, {1000, 0}};
        limitation = 1;
    };
    class RHS_Rifle1_SD_Meadows_0m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\tails\Rifle1_SD\Meadows_0m_1", 1}, {"rhsafrf\addons\rhs_sounds\tails\Rifle1_SD\Meadows_0m_2", 1}, {"rhsafrf\addons\rhs_sounds\tails\Rifle1_SD\Meadows_0m_3", 1}};
        volume = "2.40*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHS_Rifle1_SD_Meadows_150m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\tails\Rifle1_SD\Meadows_150m_1", 1}, {"rhsafrf\addons\rhs_sounds\tails\Rifle1_SD\Meadows_150m_2", 1}, {"rhsafrf\addons\rhs_sounds\tails\Rifle1_SD\Meadows_150m_3", 1}};
        volume = "2.40*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
        range = 700;
        rangeCurve[] = {{0, 0}, {150, 1}, {700, 0}};
        limitation = 1;
    };
    class RHS_Rifle1_SD_Houses_0m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\tails\Rifle1_SD\Houses_0m_1", 1}, {"rhsafrf\addons\rhs_sounds\tails\Rifle1_SD\Houses_0m_2", 1}, {"rhsafrf\addons\rhs_sounds\tails\Rifle1_SD\Houses_0m_3", 1}};
        volume = "2.40*((1-interior/1.4)*houses/3)";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHS_Rifle1_SD_Houses_150m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\tails\Rifle1_SD\Houses_150m_1", 1}, {"rhsafrf\addons\rhs_sounds\tails\Rifle1_SD\Houses_150m_2", 1}, {"rhsafrf\addons\rhs_sounds\tails\Rifle1_SD\Houses_150m_3", 1}};
        volume = "2.40*((1-interior/1.4)*houses/3)";
        range = 700;
        rangeCurve[] = {{0, 0}, {150, 1}, {700, 0}};
        limitation = 1;
    };
    class RHS_Rifle1_SD_Trees_0m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\tails\Rifle1_SD\forest_0m_1", 1}, {"rhsafrf\addons\rhs_sounds\tails\Rifle1_SD\forest_0m_2", 1}, {"rhsafrf\addons\rhs_sounds\tails\Rifle1_SD\forest_0m_3", 1}};
        volume = "2.40*((1-interior/1.4)*trees/3)";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHS_Rifle1_SD_Trees_150m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\tails\Rifle1_SD\forest_150m_1", 1}, {"rhsafrf\addons\rhs_sounds\tails\Rifle1_SD\forest_150m_2", 1}, {"rhsafrf\addons\rhs_sounds\tails\Rifle1_SD\forest_150m_3", 1}};
        volume = "2.40*((1-interior/1.4)*trees/3)";
        range = 700;
        rangeCurve[] = {{0, 0}, {150, 1}, {700, 0}};
        limitation = 1;
    };
    class RHS_Rifle1_SD_Forest_0m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\tails\Rifle1_SD\Forest_0m_1", 1}, {"rhsafrf\addons\rhs_sounds\tails\Rifle1_SD\Forest_0m_2", 1}, {"rhsafrf\addons\rhs_sounds\tails\Rifle1_SD\Forest_0m_3", 1}};
        volume = "2.40*((1-interior)*Forest)";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHS_Rifle1_SD_Forest_150m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\tails\Rifle1_SD\Forest_150m_1", 1}, {"rhsafrf\addons\rhs_sounds\tails\Rifle1_SD\Forest_150m_2", 1}, {"rhsafrf\addons\rhs_sounds\tails\Rifle1_SD\Forest_150m_3", 1}};
        volume = "2.40*((1-interior)*Forest)";
        range = 700;
        rangeCurve[] = {{0, 0}, {150, 1}, {700, 0}};
        limitation = 1;
    };
    class RHS_Rifle1_SD_Interior_0m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\tails\Rifle1_SD\Interior_0m_1", 1}, {"rhsafrf\addons\rhs_sounds\tails\Rifle1_SD\Interior_0m_2", 1}, {"rhsafrf\addons\rhs_sounds\tails\Rifle1_SD\Interior_0m_3", 1}};
        volume = "2.40*((interior)*0.7)";
        range = 40;
        rangeCurve[] = {{0, 1}, {40, 0}};
        limitation = 1;
    };
    class RHS_Rifle1_SD_Interior_40m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\tails\Rifle1_SD\Interior_40m_1", 1}, {"rhsafrf\addons\rhs_sounds\tails\Rifle1_SD\Interior_40m_2", 1}, {"rhsafrf\addons\rhs_sounds\tails\Rifle1_SD\Interior_40m_3", 1}};
        volume = "2.40*((interior)*0.7)";
        range = 150;
        rangeCurve[] = {{0, 0}, {40, 1}, {150, 0}};
        limitation = 1;
    };
    class RHS_Rifle1_SD_Interior_150m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\tails\Rifle1_SD\Interior_150m_1", 1}, {"rhsafrf\addons\rhs_sounds\tails\Rifle1_SD\Interior_150m_2", 1}, {"rhsafrf\addons\rhs_sounds\tails\Rifle1_SD\Interior_150m_3", 1}};
        volume = "2.40*((interior)*0.68)";
        range = 350;
        rangeCurve[] = {{0, 0}, {40, 0}, {150, 1}, {350, 0}};
        limitation = 1;
    };
    class RHS_lmg1_Meadows_0m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\tails\lmg1\Meadows_0m_1", 1}, {"rhsafrf\addons\rhs_sounds\tails\lmg1\Meadows_0m_2", 1}, {"rhsafrf\addons\rhs_sounds\tails\lmg1\Meadows_0m_3", 1}};
        volume = "3.85*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHS_lmg1_Meadows_150m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\tails\lmg1\Meadows_150m_1", 1}, {"rhsafrf\addons\rhs_sounds\tails\lmg1\Meadows_150m_2", 1}, {"rhsafrf\addons\rhs_sounds\tails\lmg1\Meadows_150m_3", 1}};
        volume = "3.85*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
        range = 3100;
        rangeCurve[] = {{0, 0}, {150, 1}, {3100, 0}};
        limitation = 1;
    };
    class RHS_lmg1_Houses_0m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\tails\lmg1\Houses_0m_1", 1}, {"rhsafrf\addons\rhs_sounds\tails\lmg1\Houses_0m_2", 1}, {"rhsafrf\addons\rhs_sounds\tails\lmg1\Houses_0m_3", 1}};
        volume = "3.85*((1-interior/1.4)*houses/3)";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHS_lmg1_Houses_150m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\tails\lmg1\Houses_150m_1", 1}, {"rhsafrf\addons\rhs_sounds\tails\lmg1\Houses_150m_2", 1}, {"rhsafrf\addons\rhs_sounds\tails\lmg1\Houses_150m_3", 1}};
        volume = "3.85*((1-interior/1.4)*houses/3)";
        range = 3100;
        rangeCurve[] = {{0, 0}, {150, 1}, {3100, 0}};
        limitation = 1;
    };
    class RHS_lmg1_Trees_0m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\tails\lmg1\forest_0m_1", 1}, {"rhsafrf\addons\rhs_sounds\tails\lmg1\forest_0m_2", 1}, {"rhsafrf\addons\rhs_sounds\tails\lmg1\forest_0m_3", 1}};
        volume = "3.85*((1-interior/1.4)*trees/3)";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHS_lmg1_Trees_150m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\tails\lmg1\forest_150m_1", 1}, {"rhsafrf\addons\rhs_sounds\tails\lmg1\forest_150m_2", 1}, {"rhsafrf\addons\rhs_sounds\tails\lmg1\forest_150m_3", 1}};
        volume = "3.85*((1-interior/1.4)*trees/3)";
        range = 3100;
        rangeCurve[] = {{0, 0}, {150, 1}, {3100, 0}};
        limitation = 1;
    };
    class RHS_lmg1_Forest_0m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\tails\lmg1\Forest_0m_1", 1}, {"rhsafrf\addons\rhs_sounds\tails\lmg1\Forest_0m_2", 1}, {"rhsafrf\addons\rhs_sounds\tails\lmg1\Forest_0m_3", 1}};
        volume = "3.85*((1-interior/1.4)*Forest/3)";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHS_lmg1_Forest_150m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\tails\lmg1\Forest_150m_1", 1}, {"rhsafrf\addons\rhs_sounds\tails\lmg1\Forest_150m_2", 1}, {"rhsafrf\addons\rhs_sounds\tails\lmg1\Forest_150m_3", 1}};
        volume = "3.85*(1.4*((1-interior/1.4)*forest/3))";
        range = 3100;
        rangeCurve[] = {{0, 0}, {150, 1}, {3100, 0}};
        limitation = 1;
    };
    class RHS_lmg1_Interior_0m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\tails\lmg1\Interior_0m_1", 1}, {"rhsafrf\addons\rhs_sounds\tails\lmg1\Interior_0m_2", 1}, {"rhsafrf\addons\rhs_sounds\tails\lmg1\Interior_0m_3", 1}};
        volume = "3.85*((interior)*0.65)";
        range = 50;
        rangeCurve[] = {{0, 1}, {50, 0}};
        limitation = 1;
    };
    class RHS_lmg1_Interior_50m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\tails\lmg1\Interior_50m_1", 1}, {"rhsafrf\addons\rhs_sounds\tails\lmg1\Interior_50m_2", 1}, {"rhsafrf\addons\rhs_sounds\tails\lmg1\Interior_50m_3", 1}};
        volume = "3.85*((interior)*0.65)";
        range = 150;
        rangeCurve[] = {{0, 0}, {50, 1}, {150, 0}};
        limitation = 1;
    };
    class RHS_lmg1_Interior_150m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\tails\lmg1\Interior_150m_1", 1}, {"rhsafrf\addons\rhs_sounds\tails\lmg1\Interior_150m_2", 1}, {"rhsafrf\addons\rhs_sounds\tails\lmg1\Interior_150m_3", 1}};
        volume = "3.85*((interior)*0.65)";
        range = 550;
        rangeCurve[] = {{0, 0}, {50, 0}, {150, 1}, {550, 0}};
        limitation = 1;
    };
    class RHS_lmg1_Interior_550m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\tails\lmg1\Interior_550m_1", 1}, {"rhsafrf\addons\rhs_sounds\tails\lmg1\Interior_550m_2", 1}, {"rhsafrf\addons\rhs_sounds\tails\lmg1\Interior_550m_3", 1}};
        volume = "3.85*((interior)*0.65)";
        range = 1000;
        rangeCurve[] = {{0, 0}, {150, 0}, {550, 1}, {1000, 0}};
        limitation = 1;
    };
    class RHS_mmg1_Meadows_0m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\tails\mmg1\Meadows_0m_1", 1}, {"rhsafrf\addons\rhs_sounds\tails\mmg1\Meadows_0m_2", 1}, {"rhsafrf\addons\rhs_sounds\tails\mmg1\Meadows_0m_3", 1}};
        volume = "3.85*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHS_mmg1_Meadows_150m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\tails\mmg1\Meadows_150m_1", 1}, {"rhsafrf\addons\rhs_sounds\tails\mmg1\Meadows_150m_2", 1}, {"rhsafrf\addons\rhs_sounds\tails\mmg1\Meadows_150m_3", 1}};
        volume = "3.85*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
        range = 3300;
        rangeCurve[] = {{0, 0}, {150, 1}, {3300, 0}};
        limitation = 1;
    };
    class RHS_mmg1_Houses_0m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\tails\mmg1\Houses_0m_1", 1}, {"rhsafrf\addons\rhs_sounds\tails\mmg1\Houses_0m_2", 1}, {"rhsafrf\addons\rhs_sounds\tails\mmg1\Houses_0m_3", 1}};
        volume = "3.85*((1-interior/1.4)*houses/3)";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHS_mmg1_Houses_150m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\tails\mmg1\Houses_150m_1", 1}, {"rhsafrf\addons\rhs_sounds\tails\mmg1\Houses_150m_2", 1}, {"rhsafrf\addons\rhs_sounds\tails\mmg1\Houses_150m_3", 1}};
        volume = "3.85*((1-interior/1.4)*houses/3)";
        range = 3300;
        rangeCurve[] = {{0, 0}, {150, 1}, {3300, 0}};
        limitation = 1;
    };
    class RHS_mmg1_Trees_0m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\tails\mmg1\forest_0m_1", 1}, {"rhsafrf\addons\rhs_sounds\tails\mmg1\forest_0m_2", 1}, {"rhsafrf\addons\rhs_sounds\tails\mmg1\forest_0m_3", 1}};
        volume = "3.85*((1-interior/1.4)*trees/3)";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHS_mmg1_Trees_150m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\tails\mmg1\forest_150m_1", 1}, {"rhsafrf\addons\rhs_sounds\tails\mmg1\forest_150m_2", 1}, {"rhsafrf\addons\rhs_sounds\tails\mmg1\forest_150m_3", 1}};
        volume = "3.85*((1-interior/1.4)*trees/3)";
        range = 3300;
        rangeCurve[] = {{0, 0}, {150, 1}, {3300, 0}};
        limitation = 1;
    };
    class RHS_mmg1_Forest_0m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\tails\mmg1\Forest_0m_1", 1}, {"rhsafrf\addons\rhs_sounds\tails\mmg1\Forest_0m_2", 1}, {"rhsafrf\addons\rhs_sounds\tails\mmg1\Forest_0m_3", 1}};
        volume = "3.85*((1-interior/1.4)*Forest/3)";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHS_mmg1_Forest_150m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\tails\mmg1\Forest_150m_1", 1}, {"rhsafrf\addons\rhs_sounds\tails\mmg1\Forest_150m_2", 1}, {"rhsafrf\addons\rhs_sounds\tails\mmg1\Forest_150m_3", 1}};
        volume = "3.85*(1.4*((1-interior/1.4)*forest/3))";
        range = 3300;
        rangeCurve[] = {{0, 0}, {150, 1}, {3300, 0}};
        limitation = 1;
    };
    class RHS_mmg1_Interior_0m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\tails\mmg1\Interior_0m_1", 1}, {"rhsafrf\addons\rhs_sounds\tails\mmg1\Interior_0m_2", 1}, {"rhsafrf\addons\rhs_sounds\tails\mmg1\Interior_0m_3", 1}};
        volume = "3.85*((interior)*0.65)";
        range = 50;
        rangeCurve[] = {{0, 1}, {50, 0}};
        limitation = 1;
    };
    class RHS_mmg1_Interior_50m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\tails\mmg1\Interior_50m_1", 1}, {"rhsafrf\addons\rhs_sounds\tails\mmg1\Interior_50m_2", 1}, {"rhsafrf\addons\rhs_sounds\tails\mmg1\Interior_50m_3", 1}};
        volume = "3.85*((interior)*0.65)";
        range = 150;
        rangeCurve[] = {{0, 0}, {50, 1}, {150, 0}};
        limitation = 1;
    };
    class RHS_mmg1_Interior_150m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\tails\mmg1\Interior_150m_1", 1}, {"rhsafrf\addons\rhs_sounds\tails\mmg1\Interior_150m_2", 1}, {"rhsafrf\addons\rhs_sounds\tails\mmg1\Interior_150m_3", 1}};
        volume = "3.85*((interior)*0.65)";
        range = 550;
        rangeCurve[] = {{0, 0}, {50, 0}, {150, 1}, {550, 0}};
        limitation = 1;
    };
    class RHS_mmg1_Interior_550m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\tails\mmg1\Interior_550m_1", 1}, {"rhsafrf\addons\rhs_sounds\tails\mmg1\Interior_550m_2", 1}, {"rhsafrf\addons\rhs_sounds\tails\mmg1\Interior_550m_3", 1}};
        volume = "3.85*((interior)*0.65)";
        range = 1000;
        rangeCurve[] = {{0, 0}, {150, 0}, {550, 1}, {1000, 0}};
        limitation = 1;
    };
    class RHS_sniper1_Meadows_0m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\tails\sniper1\Meadows_0m_1", 1}, {"rhsafrf\addons\rhs_sounds\tails\sniper1\Meadows_0m_2", 1}, {"rhsafrf\addons\rhs_sounds\tails\sniper1\Meadows_0m_3", 1}};
        volume = "3.85*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHS_sniper1_Meadows_150m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\tails\sniper1\Meadows_150m_1", 1}, {"rhsafrf\addons\rhs_sounds\tails\sniper1\Meadows_150m_2", 1}, {"rhsafrf\addons\rhs_sounds\tails\sniper1\Meadows_150m_3", 1}};
        volume = "3.85*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
        range = 3800;
        rangeCurve[] = {{0, 0}, {150, 1}, {3800, 0}};
        limitation = 1;
    };
    class RHS_sniper1_Houses_0m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\tails\sniper1\Houses_0m_1", 1}, {"rhsafrf\addons\rhs_sounds\tails\sniper1\Houses_0m_2", 1}, {"rhsafrf\addons\rhs_sounds\tails\sniper1\Houses_0m_3", 1}};
        volume = "3.85*((1-interior/1.4)*houses/3)";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHS_sniper1_Houses_150m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\tails\sniper1\Houses_150m_1", 1}, {"rhsafrf\addons\rhs_sounds\tails\sniper1\Houses_150m_2", 1}, {"rhsafrf\addons\rhs_sounds\tails\sniper1\Houses_150m_3", 1}};
        volume = "3.85*((1-interior/1.4)*houses/3)";
        range = 3800;
        rangeCurve[] = {{0, 0}, {150, 1}, {3800, 0}};
        limitation = 1;
    };
    class RHS_sniper1_Trees_0m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\tails\sniper1\forest_0m_1", 1}, {"rhsafrf\addons\rhs_sounds\tails\sniper1\forest_0m_2", 1}, {"rhsafrf\addons\rhs_sounds\tails\sniper1\forest_0m_3", 1}};
        volume = "3.85*((1-interior/1.4)*trees/3)";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHS_sniper1_Trees_150m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\tails\sniper1\forest_150m_1", 1}, {"rhsafrf\addons\rhs_sounds\tails\sniper1\forest_150m_2", 1}, {"rhsafrf\addons\rhs_sounds\tails\sniper1\forest_150m_3", 1}};
        volume = "3.85*((1-interior/1.4)*trees/3)";
        range = 3800;
        rangeCurve[] = {{0, 0}, {150, 1}, {3800, 0}};
        limitation = 1;
    };
    class RHS_sniper1_Forest_0m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\tails\sniper1\Forest_0m_1", 1}, {"rhsafrf\addons\rhs_sounds\tails\sniper1\Forest_0m_2", 1}, {"rhsafrf\addons\rhs_sounds\tails\sniper1\Forest_0m_3", 1}};
        volume = "3.85*((1-interior/1.4)*Forest/3)";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHS_sniper1_Forest_150m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\tails\sniper1\Forest_150m_1", 1}, {"rhsafrf\addons\rhs_sounds\tails\sniper1\Forest_150m_2", 1}, {"rhsafrf\addons\rhs_sounds\tails\sniper1\Forest_150m_3", 1}};
        volume = "3.85*(1.4*((1-interior/1.4)*forest/3))";
        range = 3800;
        rangeCurve[] = {{0, 0}, {150, 1}, {3800, 0}};
        limitation = 1;
    };
    class RHS_sniper1_Interior_0m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\tails\sniper1\Interior_0m_1", 1}, {"rhsafrf\addons\rhs_sounds\tails\sniper1\Interior_0m_2", 1}, {"rhsafrf\addons\rhs_sounds\tails\sniper1\Interior_0m_3", 1}};
        volume = "3.85*((interior)*0.65)";
        range = 50;
        rangeCurve[] = {{0, 1}, {50, 0}};
        limitation = 1;
    };
    class RHS_sniper1_Interior_50m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\tails\sniper1\Interior_50m_1", 1}, {"rhsafrf\addons\rhs_sounds\tails\sniper1\Interior_50m_2", 1}, {"rhsafrf\addons\rhs_sounds\tails\sniper1\Interior_50m_3", 1}};
        volume = "3.85*((interior)*0.65)";
        range = 150;
        rangeCurve[] = {{0, 0}, {50, 1}, {150, 0}};
        limitation = 1;
    };
    class RHS_sniper1_Interior_150m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\tails\sniper1\Interior_150m_1", 1}, {"rhsafrf\addons\rhs_sounds\tails\sniper1\Interior_150m_2", 1}, {"rhsafrf\addons\rhs_sounds\tails\sniper1\Interior_150m_3", 1}};
        volume = "3.85*((interior)*0.65)";
        range = 550;
        rangeCurve[] = {{0, 0}, {50, 0}, {150, 1}, {550, 0}};
        limitation = 1;
    };
    class RHS_sniper1_Interior_550m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\tails\sniper1\Interior_550m_1", 1}, {"rhsafrf\addons\rhs_sounds\tails\sniper1\Interior_550m_2", 1}, {"rhsafrf\addons\rhs_sounds\tails\sniper1\Interior_550m_3", 1}};
        volume = "3.85*((interior)*0.65)";
        range = 1000;
        rangeCurve[] = {{0, 0}, {150, 0}, {550, 1}, {1000, 0}};
        limitation = 1;
    };
    class RHS_pistol1_Meadows_0m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\tails\pistol1\Meadows_0m_1", 1}, {"rhsafrf\addons\rhs_sounds\tails\pistol1\Meadows_0m_2", 1}, {"rhsafrf\addons\rhs_sounds\tails\pistol1\Meadows_0m_3", 1}};
        volume = "3.85*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHS_pistol1_Meadows_150m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\tails\pistol1\Meadows_150m_1", 1}, {"rhsafrf\addons\rhs_sounds\tails\pistol1\Meadows_150m_2", 1}, {"rhsafrf\addons\rhs_sounds\tails\pistol1\Meadows_150m_3", 1}};
        volume = "3.85*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
        range = 2750;
        rangeCurve[] = {{0, 0}, {150, 1}, {2750, 0}};
        limitation = 1;
    };
    class RHS_pistol1_Houses_0m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\tails\pistol1\Houses_0m_1", 1}, {"rhsafrf\addons\rhs_sounds\tails\pistol1\Houses_0m_2", 1}, {"rhsafrf\addons\rhs_sounds\tails\pistol1\Houses_0m_3", 1}};
        volume = "3.85*((1-interior/1.4)*houses/3)";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHS_pistol1_Houses_150m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\tails\pistol1\Houses_150m_1", 1}, {"rhsafrf\addons\rhs_sounds\tails\pistol1\Houses_150m_2", 1}, {"rhsafrf\addons\rhs_sounds\tails\pistol1\Houses_150m_3", 1}};
        volume = "3.85*((1-interior/1.4)*houses/3)";
        range = 2750;
        rangeCurve[] = {{0, 0}, {150, 1}, {2750, 0}};
        limitation = 1;
    };
    class RHS_pistol1_Trees_0m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\tails\pistol1\forest_0m_1", 1}, {"rhsafrf\addons\rhs_sounds\tails\pistol1\forest_0m_2", 1}, {"rhsafrf\addons\rhs_sounds\tails\pistol1\forest_0m_3", 1}};
        volume = "3.85*((1-interior/1.4)*trees/3)";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHS_pistol1_Trees_150m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\tails\pistol1\forest_150m_1", 1}, {"rhsafrf\addons\rhs_sounds\tails\pistol1\forest_150m_2", 1}, {"rhsafrf\addons\rhs_sounds\tails\pistol1\forest_150m_3", 1}};
        volume = "3.85*((1-interior/1.4)*trees/3)";
        range = 2750;
        rangeCurve[] = {{0, 0}, {150, 1}, {2750, 0}};
        limitation = 1;
    };
    class RHS_pistol1_Forest_0m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\tails\pistol1\Forest_0m_1", 1}, {"rhsafrf\addons\rhs_sounds\tails\pistol1\Forest_0m_2", 1}, {"rhsafrf\addons\rhs_sounds\tails\pistol1\Forest_0m_3", 1}};
        volume = "3.85*((1-interior/1.4)*Forest/3)";
        range = 150;
        rangeCurve[] = {{0, 1}, {150, 0}};
        limitation = 1;
    };
    class RHS_pistol1_Forest_150m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\tails\pistol1\Forest_150m_1", 1}, {"rhsafrf\addons\rhs_sounds\tails\pistol1\Forest_150m_2", 1}, {"rhsafrf\addons\rhs_sounds\tails\pistol1\Forest_150m_3", 1}};
        volume = "3.85*(1.4*((1-interior/1.4)*forest/3))";
        range = 2750;
        rangeCurve[] = {{0, 0}, {150, 1}, {2750, 0}};
        limitation = 1;
    };
    class RHS_pistol1_Interior_0m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\tails\pistol1\Interior_0m_1", 1}, {"rhsafrf\addons\rhs_sounds\tails\pistol1\Interior_0m_2", 1}, {"rhsafrf\addons\rhs_sounds\tails\pistol1\Interior_0m_3", 1}};
        volume = "3.85*((interior)*0.65)";
        range = 50;
        rangeCurve[] = {{0, 1}, {50, 0}};
        limitation = 1;
    };
    class RHS_pistol1_Interior_50m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\tails\pistol1\Interior_50m_1", 1}, {"rhsafrf\addons\rhs_sounds\tails\pistol1\Interior_50m_2", 1}, {"rhsafrf\addons\rhs_sounds\tails\pistol1\Interior_50m_3", 1}};
        volume = "3.85*((interior)*0.65)";
        range = 150;
        rangeCurve[] = {{0, 0}, {50, 1}, {150, 0}};
        limitation = 1;
    };
    class RHS_pistol1_Interior_150m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\tails\pistol1\Interior_150m_1", 1}, {"rhsafrf\addons\rhs_sounds\tails\pistol1\Interior_150m_2", 1}, {"rhsafrf\addons\rhs_sounds\tails\pistol1\Interior_150m_3", 1}};
        volume = "3.85*((interior)*0.65)";
        range = 550;
        rangeCurve[] = {{0, 0}, {50, 0}, {150, 1}, {550, 0}};
        limitation = 1;
    };
    class RHS_pistol1_Interior_550m_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\tails\pistol1\Interior_550m_1", 1}, {"rhsafrf\addons\rhs_sounds\tails\pistol1\Interior_550m_2", 1}, {"rhsafrf\addons\rhs_sounds\tails\pistol1\Interior_550m_3", 1}};
        volume = "3.85*((interior)*0.65)";
        range = 1000;
        rangeCurve[] = {{0, 0}, {150, 0}, {550, 1}, {1000, 0}};
        limitation = 1;
    };
    class RHS_cannon_Meadows_0m_SoundShader {
        samples[] = {{"RHSAFRF\addons\rhs_sounds\tails\cannon\Meadows_0m_1", 1}, {"RHSAFRF\addons\rhs_sounds\tails\cannon\Meadows_0m_2", 1}, {"RHSAFRF\addons\rhs_sounds\tails\cannon\Meadows_0m_3", 1}};
        volume = "5.45*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
        range = 350;
        rangeCurve[] = {{0, 1}, {350, 0}};
        limitation = 1;
    };
    class RHS_cannon_Meadows_350m_SoundShader {
        samples[] = {{"RHSAFRF\addons\rhs_sounds\tails\cannon\Meadows_350m_1", 1}, {"RHSAFRF\addons\rhs_sounds\tails\cannon\Meadows_350m_2", 1}, {"RHSAFRF\addons\rhs_sounds\tails\cannon\Meadows_350m_3", 1}};
        volume = "5.45*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
        range = 4200;
        rangeCurve[] = {{0, 0}, {350, 1}, {4200, 0}};
        limitation = 1;
    };
    class RHS_cannon_Houses_0m_SoundShader {
        samples[] = {{"RHSAFRF\addons\rhs_sounds\tails\cannon\Houses_0m_1", 1}, {"RHSAFRF\addons\rhs_sounds\tails\cannon\Houses_0m_2", 1}, {"RHSAFRF\addons\rhs_sounds\tails\cannon\Houses_0m_3", 1}};
        volume = "5.45*((1-interior/1.4)*houses/3)";
        range = 350;
        rangeCurve[] = {{0, 1}, {350, 0}};
        limitation = 1;
    };
    class RHS_cannon_Houses_350m_SoundShader {
        samples[] = {{"RHSAFRF\addons\rhs_sounds\tails\cannon\Houses_350m_1", 1}, {"RHSAFRF\addons\rhs_sounds\tails\cannon\Houses_350m_2", 1}, {"RHSAFRF\addons\rhs_sounds\tails\cannon\Houses_350m_3", 1}};
        volume = "5.45*((1-interior/1.4)*houses/3)";
        range = 4200;
        rangeCurve[] = {{0, 0}, {350, 1}, {4200, 0}};
        limitation = 1;
    };
    class RHS_cannon_Trees_0m_SoundShader {
        samples[] = {{"RHSAFRF\addons\rhs_sounds\tails\cannon\forest_0m_1", 1}, {"RHSAFRF\addons\rhs_sounds\tails\cannon\forest_0m_2", 1}, {"RHSAFRF\addons\rhs_sounds\tails\cannon\forest_0m_3", 1}};
        volume = "5.45*((1-interior/1.4)*trees/3)";
        range = 350;
        rangeCurve[] = {{0, 1}, {350, 0}};
        limitation = 1;
    };
    class RHS_cannon_Trees_350m_SoundShader {
        samples[] = {{"RHSAFRF\addons\rhs_sounds\tails\cannon\forest_350m_1", 1}, {"RHSAFRF\addons\rhs_sounds\tails\cannon\forest_350m_2", 1}, {"RHSAFRF\addons\rhs_sounds\tails\cannon\forest_350m_3", 1}};
        volume = "5.45*((1-interior/1.4)*trees/3)";
        range = 4200;
        rangeCurve[] = {{0, 0}, {350, 1}, {4200, 0}};
        limitation = 1;
    };
    class RHS_cannon_Forest_0m_SoundShader {
        samples[] = {{"RHSAFRF\addons\rhs_sounds\tails\cannon\Forest_0m_1", 1}, {"RHSAFRF\addons\rhs_sounds\tails\cannon\Forest_0m_2", 1}, {"RHSAFRF\addons\rhs_sounds\tails\cannon\Forest_0m_3", 1}};
        volume = "5.45*((1-interior/1.4)*Forest/3)";
        range = 350;
        rangeCurve[] = {{0, 1}, {350, 0}};
        limitation = 1;
    };
    class RHS_cannon_Forest_350m_SoundShader {
        samples[] = {{"RHSAFRF\addons\rhs_sounds\tails\cannon\Forest_350m_1", 1}, {"RHSAFRF\addons\rhs_sounds\tails\cannon\Forest_350m_2", 1}, {"RHSAFRF\addons\rhs_sounds\tails\cannon\Forest_350m_3", 1}};
        volume = "5.45*(1.4*((1-interior/1.4)*forest/3))";
        range = 4200;
        rangeCurve[] = {{0, 0}, {350, 1}, {4200, 0}};
        limitation = 1;
    };
    class RHS_autocannon_Meadows_0m_SoundShader {
        samples[] = {{"RHSAFRF\addons\rhs_sounds\tails\autocannon\Meadows_0m_1", 1}, {"RHSAFRF\addons\rhs_sounds\tails\autocannon\Meadows_0m_2", 1}, {"RHSAFRF\addons\rhs_sounds\tails\autocannon\Meadows_0m_3", 1}};
        volume = "5.45*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
        range = 350;
        rangeCurve[] = {{0, 1}, {350, 0}};
        limitation = 1;
    };
    class RHS_autocannon_Meadows_350m_SoundShader {
        samples[] = {{"RHSAFRF\addons\rhs_sounds\tails\autocannon\Meadows_350m_1", 1}, {"RHSAFRF\addons\rhs_sounds\tails\autocannon\Meadows_350m_2", 1}, {"RHSAFRF\addons\rhs_sounds\tails\autocannon\Meadows_350m_3", 1}};
        volume = "5.45*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
        range = 3700;
        rangeCurve[] = {{0, 0}, {350, 1}, {3700, 0}};
        limitation = 1;
    };
    class RHS_autocannon_Houses_0m_SoundShader {
        samples[] = {{"RHSAFRF\addons\rhs_sounds\tails\autocannon\Houses_0m_1", 1}, {"RHSAFRF\addons\rhs_sounds\tails\autocannon\Houses_0m_2", 1}, {"RHSAFRF\addons\rhs_sounds\tails\autocannon\Houses_0m_3", 1}};
        volume = "5.45*((1-interior/1.4)*houses/3)";
        range = 350;
        rangeCurve[] = {{0, 1}, {350, 0}};
        limitation = 1;
    };
    class RHS_autocannon_Houses_350m_SoundShader {
        samples[] = {{"RHSAFRF\addons\rhs_sounds\tails\autocannon\Houses_350m_1", 1}, {"RHSAFRF\addons\rhs_sounds\tails\autocannon\Houses_350m_2", 1}, {"RHSAFRF\addons\rhs_sounds\tails\autocannon\Houses_350m_3", 1}};
        volume = "5.45*((1-interior/1.4)*houses/3)";
        range = 3700;
        rangeCurve[] = {{0, 0}, {350, 1}, {3700, 0}};
        limitation = 1;
    };
    class RHS_autocannon_Trees_0m_SoundShader {
        samples[] = {{"RHSAFRF\addons\rhs_sounds\tails\autocannon\forest_0m_1", 1}, {"RHSAFRF\addons\rhs_sounds\tails\autocannon\forest_0m_2", 1}, {"RHSAFRF\addons\rhs_sounds\tails\autocannon\forest_0m_3", 1}};
        volume = "5.45*((1-interior/1.4)*trees/3)";
        range = 350;
        rangeCurve[] = {{0, 1}, {350, 0}};
        limitation = 1;
    };
    class RHS_autocannon_Trees_350m_SoundShader {
        samples[] = {{"RHSAFRF\addons\rhs_sounds\tails\autocannon\forest_350m_1", 1}, {"RHSAFRF\addons\rhs_sounds\tails\autocannon\forest_350m_2", 1}, {"RHSAFRF\addons\rhs_sounds\tails\autocannon\forest_350m_3", 1}};
        volume = "5.45*((1-interior/1.4)*trees/3)";
        range = 3700;
        rangeCurve[] = {{0, 0}, {350, 1}, {3700, 0}};
        limitation = 1;
    };
    class RHS_autocannon_Forest_0m_SoundShader {
        samples[] = {{"RHSAFRF\addons\rhs_sounds\tails\autocannon\Forest_0m_1", 1}, {"RHSAFRF\addons\rhs_sounds\tails\autocannon\Forest_0m_2", 1}, {"RHSAFRF\addons\rhs_sounds\tails\autocannon\Forest_0m_3", 1}};
        volume = "5.45*((1-interior/1.4)*Forest/3)";
        range = 350;
        rangeCurve[] = {{0, 1}, {350, 0}};
        limitation = 1;
    };
    class RHS_autocannon_Forest_350m_SoundShader {
        samples[] = {{"RHSAFRF\addons\rhs_sounds\tails\autocannon\Forest_350m_1", 1}, {"RHSAFRF\addons\rhs_sounds\tails\autocannon\Forest_350m_2", 1}, {"RHSAFRF\addons\rhs_sounds\tails\autocannon\Forest_350m_3", 1}};
        volume = "5.45*(1.4*((1-interior/1.4)*forest/3))";
        range = 3700;
        rangeCurve[] = {{0, 0}, {350, 1}, {3700, 0}};
        limitation = 1;
    };
    class rhs_nuke_explosion_soundshader {
        samples[] = {{"rhsafrf\addons\rhs_c_heavyweapons\sounds\nuke", 1}};
        volume = 1.12202;
        range = 8000;
        rangeCurve[] = {{0, 1}, {100, 1}, {300, 1}, {8000, 1}};
    };
    class rhs_gp25_closeShot_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\ugl\GP-25_1", 1}, {"rhsafrf\addons\rhs_sounds\ugl\GP-25_2", 1}};
        volume = 1;
        range = 30;
        rangeCurve = "closeShotCurve";
    };
    class rhs_afganitaps_closeShot_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\afganit\afganitAPS_closeShot01", 1}};
        volume = 1;
        range = 300;
        rangeCurve[] = {{0, 1}, {30, 1}, {300, 0}};
    };
    class rhs_afganitaps_distShot_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_sounds\afganit\afganitAPS_distShot01", 1}};
        volume = 1.99526;
        range = 4000;
        rangeCurve[] = {{0, 0}, {30, 0}, {300, 1}, {4000, 1}};
    };
};
class CfgSoundSets {
    class RHS_AK74_Closure_SoundSet {
        soundShaders[] = {"RHS_AK74_Closure_SoundShader"};
        volumeFactor = 0.95;
        volumeCurve = "RHS_rifleSoundCurve";
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "RHS_defaultDistanceFilter";
        frequencyRandomizer = 0.05;
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHS_AK74_Shot_SoundSet {
        soundShaders[] = {
            "RHS_AK74_0m_SoundShader",
            "RHS_AK74_50m_SoundShader",
            "RHS_AK74_150m_SoundShader",
            "RHS_AK74_550m_SoundShader",
            "RHS_AK74_1000m_SoundShader",
            "RHS_AK74_1800m_SoundShader"
        };
        volumeFactor = 1.35;
        volumeCurve = "RHS_rifleSoundCurve";
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "RHS_defaultDistanceFilter";
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHS_AK74_ShotSD_SoundSet {
        soundShaders[] = {
            "RHS_AK74_SD_0m_SoundShader",
            "RHS_AK74_SD_30m_SoundShader",
            "RHS_AK74_SD_150m_SoundShader",
            "RHS_AK74_SD_350m_SoundShader"
        };
        volumeFactor = 0.9;
        volumeCurve = "RHS_silencedSoundCurve";
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "RHS_defaultDistanceFilter";
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHS_AKM_Closure_SoundSet {
        soundShaders[] = {"RHS_AKM_Closure_SoundShader"};
        volumeFactor = 0.95;
        volumeCurve = "RHS_rifleSoundCurve";
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "RHS_defaultDistanceFilter";
        frequencyRandomizer = 0.05;
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHS_AKM_Shot_SoundSet {
        soundShaders[] = {
            "RHS_AKM_0m_SoundShader",
            "RHS_AKM_50m_SoundShader",
            "RHS_AKM_150m_SoundShader",
            "RHS_AKM_550m_SoundShader",
            "RHS_AKM_1000m_SoundShader",
            "RHS_AKM_1800m_SoundShader"
        };
        volumeFactor = 1.35;
        volumeCurve = "RHS_rifleSoundCurve";
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "RHS_defaultDistanceFilter";
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHS_AKM_ShotSD_SoundSet {
        soundShaders[] = {
            "RHS_AKM_SD_0m_SoundShader",
            "RHS_AKM_SD_30m_SoundShader",
            "RHS_AKM_SD_150m_SoundShader",
            "RHS_AKM_SD_350m_SoundShader"
        };
        volumeFactor = 0.9;
        volumeCurve = "RHS_silencedSoundCurve";
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "RHS_defaultDistanceFilter";
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHS_PKP_Closure_SoundSet {
        soundShaders[] = {"RHS_PKP_Closure_SoundShader"};
        volumeFactor = 0.95;
        volumeCurve = "RHS_rifleSoundCurve";
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "RHS_defaultDistanceFilter";
        frequencyRandomizer = 0.05;
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHS_PKP_Shot_SoundSet {
        soundShaders[] = {
            "RHS_PKP_0m_SoundShader",
            "RHS_PKP_50m_SoundShader",
            "RHS_PKP_150m_SoundShader",
            "RHS_PKP_550m_SoundShader",
            "RHS_PKP_1000m_SoundShader",
            "RHS_PKP_1800m_SoundShader"
        };
        volumeFactor = 1.35;
        volumeCurve = "RHS_rifleSoundCurve";
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "RHS_defaultDistanceFilter";
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHS_PP2000_Closure_SoundSet {
        soundShaders[] = {"RHS_PP2000_Closure_SoundShader"};
        volumeFactor = 0.95;
        volumeCurve = "RHS_rifleSoundCurve";
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "RHS_defaultDistanceFilter";
        frequencyRandomizer = 0.05;
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHS_PP2000_Shot_SoundSet {
        soundShaders[] = {
            "RHS_PP2000_0m_SoundShader",
            "RHS_PP2000_50m_SoundShader",
            "RHS_PP2000_150m_SoundShader",
            "RHS_PP2000_550m_SoundShader",
            "RHS_PP2000_1000m_SoundShader",
            "RHS_PP2000_1800m_SoundShader"
        };
        volumeFactor = 1.35;
        volumeCurve = "RHS_rifleSoundCurve";
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "RHS_defaultDistanceFilter";
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHS_kar98_Closure_SoundSet {
        soundShaders[] = {"RHS_kar98_Closure_SoundShader"};
        volumeFactor = 0.95;
        volumeCurve = "RHS_rifleSoundCurve";
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "RHS_defaultDistanceFilter";
        frequencyRandomizer = 0.05;
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHS_kar98_Shot_SoundSet {
        soundShaders[] = {
            "RHS_kar98_0m_SoundShader",
            "RHS_kar98_50m_SoundShader",
            "RHS_kar98_150m_SoundShader",
            "RHS_kar98_550m_SoundShader",
            "RHS_kar98_1000m_SoundShader",
            "RHS_kar98_1800m_SoundShader"
        };
        volumeFactor = 1.35;
        volumeCurve = "RHS_rifleSoundCurve";
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "RHS_defaultDistanceFilter";
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHS_ASVAL_Closure_SoundSet {
        soundShaders[] = {"RHS_ASVAL_Closure_SoundShader"};
        volumeFactor = 0.95;
        volumeCurve = "RHS_rifleSoundCurve";
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "RHS_defaultDistanceFilter";
        frequencyRandomizer = 0.05;
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHS_ASVAL_ShotSD_SoundSet {
        soundShaders[] = {
            "RHS_ASVAL_SD_0m_SoundShader",
            "RHS_ASVAL_SD_30m_SoundShader",
            "RHS_ASVAL_SD_150m_SoundShader",
            "RHS_ASVAL_SD_350m_SoundShader"
        };
        volumeFactor = 0.9;
        volumeCurve = "RHS_silencedSoundCurve";
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "RHS_defaultDistanceFilter";
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHS_DSHKM_Closure_SoundSet {
        soundShaders[] = {"RHS_DSHKM_Closure_SoundShader"};
        volumeFactor = 0.95;
        volumeCurve = "RHS_rifleSoundCurve";
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "RHS_defaultDistanceFilter";
        frequencyRandomizer = 0.05;
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHS_DSHKM_Shot_SoundSet {
        soundShaders[] = {
            "RHS_DSHKM_0m_SoundShader",
            "RHS_DSHKM_50m_SoundShader",
            "RHS_DSHKM_150m_SoundShader",
            "RHS_DSHKM_550m_SoundShader",
            "RHS_DSHKM_1000m_SoundShader",
            "RHS_DSHKM_1800m_SoundShader"
        };
        volumeFactor = 1.35;
        volumeCurve = "RHS_rifleSoundCurve";
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "RHS_defaultDistanceFilter";
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHS_DSHKM_Int_Shot_SoundSet {
        soundShaders[] = {"RHS_DSHKM_int_0m_SoundShader", "RHS_DSHKM_int_Closure_SoundShader"};
        volumeFactor = 1.35;
        volumeCurve = "RHS_cannonSoundCurve";
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "RHS_vehicletDistanceFilter";
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHS_KPVT_Closure_SoundSet {
        soundShaders[] = {"RHS_KPVT_Closure_SoundShader"};
        volumeFactor = 0.95;
        volumeCurve = "RHS_rifleSoundCurve";
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "RHS_defaultDistanceFilter";
        frequencyRandomizer = 0.05;
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHS_KPVT_Shot_SoundSet {
        soundShaders[] = {
            "RHS_KPVT_0m_SoundShader",
            "RHS_KPVT_50m_SoundShader",
            "RHS_KPVT_150m_SoundShader",
            "RHS_KPVT_550m_SoundShader",
            "RHS_KPVT_1000m_SoundShader",
            "RHS_KPVT_1800m_SoundShader"
        };
        volumeFactor = 1.35;
        volumeCurve = "RHS_rifleSoundCurve";
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "RHS_defaultDistanceFilter";
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHS_KPVT_Int_Shot_SoundSet {
        soundShaders[] = {"RHS_KPVT_int_0m_SoundShader", "RHS_KPVT_int_Closure_SoundShader"};
        volumeFactor = 1.35;
        volumeCurve = "RHS_cannonSoundCurve";
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "RHS_vehicletDistanceFilter";
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHS_120mm_Closure_SoundSet {
        soundShaders[] = {"RHS_120mm_Closure_SoundShader"};
        volumeFactor = 1.1;
        volumeCurve = "RHS_cannonSoundCurve";
        sound3DProcessingType = "WeaponHeavyShot3DProcessingTypee";
        distanceFilter = "RHS_defaultDistanceFilter";
        frequencyRandomizer = 0.05;
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHS_120mm_Shot_SoundSet {
        soundShaders[] = {
            "RHS_120mm_0m_SoundShader",
            "RHS_120mm_50m_SoundShader",
            "RHS_120mm_150m_SoundShader",
            "RHS_120mm_550m_SoundShader",
            "RHS_120mm_1000m_SoundShader",
            "RHS_120mm_1800m_SoundShader"
        };
        volumeFactor = 1.35;
        volumeCurve = "RHS_cannonSoundCurve";
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "RHS_defaultDistanceFilter";
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHS_120mm_Int_Shot_SoundSet {
        soundShaders[] = {"RHS_120mm_int_0m_SoundShader", "RHS_120mm_int_Closure_SoundShader"};
        volumeFactor = 1.35;
        volumeCurve = "RHS_cannonSoundCurve";
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "RHS_vehicletDistanceFilter";
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHS_155mm_Closure_SoundSet {
        soundShaders[] = {"RHS_155mm_Closure_SoundShader"};
        volumeFactor = 1.1;
        volumeCurve = "RHS_cannonSoundCurve";
        sound3DProcessingType = "WeaponHeavyShot3DProcessingTypee";
        distanceFilter = "RHS_defaultDistanceFilter";
        frequencyRandomizer = 0.05;
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHS_155mm_Shot_SoundSet {
        soundShaders[] = {
            "RHS_155mm_0m_SoundShader",
            "RHS_155mm_50m_SoundShader",
            "RHS_155mm_150m_SoundShader",
            "RHS_155mm_550m_SoundShader",
            "RHS_155mm_1000m_SoundShader",
            "RHS_155mm_1800m_SoundShader"
        };
        volumeFactor = 1.35;
        volumeCurve = "RHS_cannonSoundCurve";
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "RHS_defaultDistanceFilter";
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHS_155mm_Int_Shot_SoundSet {
        soundShaders[] = {"RHS_155mm_int_0m_SoundShader", "RHS_155mm_int_Closure_SoundShader"};
        volumeFactor = 1.35;
        volumeCurve = "RHS_cannonSoundCurve";
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "RHS_vehicletDistanceFilter";
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHS_autocannon_Closure_SoundSet {
        soundShaders[] = {"RHS_autocannon_Closure_SoundShader"};
        volumeFactor = 1.1;
        volumeCurve = "RHS_cannonSoundCurve";
        sound3DProcessingType = "WeaponHeavyShot3DProcessingTypee";
        distanceFilter = "RHS_defaultDistanceFilter";
        frequencyRandomizer = 0.05;
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHS_autocannon_Shot_SoundSet {
        soundShaders[] = {
            "RHS_autocannon_0m_SoundShader",
            "RHS_autocannon_50m_SoundShader",
            "RHS_autocannon_150m_SoundShader",
            "RHS_autocannon_550m_SoundShader",
            "RHS_autocannon_1000m_SoundShader",
            "RHS_autocannon_1800m_SoundShader"
        };
        volumeFactor = 1.25;
        volumeCurve = "RHS_miniCannonSoundCurve";
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "RHS_defaultDistanceFilter";
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHS_autocannon_Int_Shot_SoundSet {
        soundShaders[] = {"RHS_autocannon_int_0m_SoundShader", "RHS_autocannon_int_Closure_SoundShader"};
        volumeFactor = 1.35;
        volumeCurve = "RHS_cannonSoundCurve";
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "RHS_vehicletDistanceFilter";
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHS_yakb_Closure_SoundSet {
        soundShaders[] = {"RHS_yakb_Closure_SoundShader"};
        volumeFactor = 1.1;
        volumeCurve = "RHS_cannonSoundCurve";
        sound3DProcessingType = "WeaponHeavyShot3DProcessingTypee";
        distanceFilter = "RHS_defaultDistanceFilter";
        frequencyRandomizer = 0.05;
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHS_yakb_Shot_SoundSet {
        soundShaders[] = {
            "RHS_yakb_0m_SoundShader",
            "RHS_yakb_50m_SoundShader",
            "RHS_yakb_150m_SoundShader",
            "RHS_yakb_550m_SoundShader",
            "RHS_yakb_1000m_SoundShader",
            "RHS_yakb_1800m_SoundShader"
        };
        volumeFactor = 1.25;
        volumeCurve = "RHS_miniCannonSoundCurve";
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "RHS_defaultDistanceFilter";
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHS_yakb_Int_Shot_SoundSet {
        soundShaders[] = {"RHS_yakb_int_0m_SoundShader", "RHS_yakb_int_Closure_SoundShader"};
        volumeFactor = 1.35;
        volumeCurve = "RHS_cannonSoundCurve";
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "RHS_vehicletDistanceFilter";
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHS_Rifle1_Tail_SoundSet {
        soundShaders[] = {
            "RHS_Rifle1_Meadows_0m_SoundShader",
            "RHS_Rifle1_Meadows_150m_SoundShader",
            "RHS_Rifle1_Houses_0m_SoundShader",
            "RHS_Rifle1_Houses_150m_SoundShader",
            "RHS_Rifle1_Trees_0m_SoundShader",
            "RHS_Rifle1_Trees_150m_SoundShader",
            "RHS_Rifle1_Forest_0m_SoundShader",
            "RHS_Rifle1_Forest_150m_SoundShader",
            "RHS_Rifle1_Interior_0m_SoundShader",
            "RHS_Rifle1_Interior_50m_SoundShader",
            "RHS_Rifle1_Interior_150m_SoundShader",
            "RHS_Rifle1_Interior_550m_SoundShader"
        };
        volumeFactor = 1;
        volumeCurve = "RHS_tailSoundCurve";
        sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
        soundShadersLimit = 2;
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        distanceFilter = "RHS_rifleTailDistanceFilter";
        frequencyRandomizer = 0.1;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHS_Rifle1_SD_Tail_SoundSet {
        soundShaders[] = {
            "RHS_Rifle1_SD_Meadows_0m_SoundShader",
            "RHS_Rifle1_SD_Meadows_150m_SoundShader",
            "RHS_Rifle1_SD_Houses_0m_SoundShader",
            "RHS_Rifle1_SD_Houses_150m_SoundShader",
            "RHS_Rifle1_SD_Trees_0m_SoundShader",
            "RHS_Rifle1_SD_Trees_150m_SoundShader",
            "RHS_Rifle1_SD_Forest_0m_SoundShader",
            "RHS_Rifle1_SD_Forest_150m_SoundShader",
            "RHS_Rifle1_SD_Interior_0m_SoundShader",
            "RHS_Rifle1_SD_Interior_40m_SoundShader",
            "RHS_Rifle1_SD_Interior_150m_SoundShader"
        };
        volumeFactor = 1;
        volumeCurve = "RHS_silencedSoundCurve";
        sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
        soundShadersLimit = 2;
        distanceFilter = "RHS_rifleTailDistanceFilter";
        frequencyRandomizer = 0.1;
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHS_lmg1_Tail_SoundSet {
        soundShaders[] = {
            "RHS_lmg1_Meadows_0m_SoundShader",
            "RHS_lmg1_Meadows_150m_SoundShader",
            "RHS_lmg1_Houses_0m_SoundShader",
            "RHS_lmg1_Houses_150m_SoundShader",
            "RHS_lmg1_Trees_0m_SoundShader",
            "RHS_lmg1_Trees_150m_SoundShader",
            "RHS_lmg1_Forest_0m_SoundShader",
            "RHS_lmg1_Forest_150m_SoundShader",
            "RHS_lmg1_Interior_0m_SoundShader",
            "RHS_lmg1_Interior_50m_SoundShader",
            "RHS_lmg1_Interior_150m_SoundShader",
            "RHS_lmg1_Interior_550m_SoundShader"
        };
        volumeFactor = 1;
        volumeCurve = "RHS_tailSoundCurve";
        sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
        soundShadersLimit = 2;
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        distanceFilter = "RHS_rifleTailDistanceFilter";
        frequencyRandomizer = 0.1;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHS_mmg1_Tail_SoundSet {
        soundShaders[] = {
            "RHS_mmg1_Meadows_0m_SoundShader",
            "RHS_mmg1_Meadows_150m_SoundShader",
            "RHS_mmg1_Houses_0m_SoundShader",
            "RHS_mmg1_Houses_150m_SoundShader",
            "RHS_mmg1_Trees_0m_SoundShader",
            "RHS_mmg1_Trees_150m_SoundShader",
            "RHS_mmg1_Forest_0m_SoundShader",
            "RHS_mmg1_Forest_150m_SoundShader",
            "RHS_mmg1_Interior_0m_SoundShader",
            "RHS_mmg1_Interior_50m_SoundShader",
            "RHS_mmg1_Interior_150m_SoundShader",
            "RHS_mmg1_Interior_550m_SoundShader"
        };
        volumeFactor = 1;
        volumeCurve = "RHS_tailSoundCurve";
        sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
        soundShadersLimit = 2;
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        distanceFilter = "RHS_rifleTailDistanceFilter";
        frequencyRandomizer = 0.1;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHS_sniper1_Tail_SoundSet {
        soundShaders[] = {
            "RHS_sniper1_Meadows_0m_SoundShader",
            "RHS_sniper1_Meadows_150m_SoundShader",
            "RHS_sniper1_Houses_0m_SoundShader",
            "RHS_sniper1_Houses_150m_SoundShader",
            "RHS_sniper1_Trees_0m_SoundShader",
            "RHS_sniper1_Trees_150m_SoundShader",
            "RHS_sniper1_Forest_0m_SoundShader",
            "RHS_sniper1_Forest_150m_SoundShader",
            "RHS_sniper1_Interior_0m_SoundShader",
            "RHS_sniper1_Interior_50m_SoundShader",
            "RHS_sniper1_Interior_150m_SoundShader",
            "RHS_sniper1_Interior_550m_SoundShader"
        };
        volumeFactor = 1;
        volumeCurve = "RHS_tailSoundCurve";
        sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
        soundShadersLimit = 2;
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        distanceFilter = "RHS_rifleTailDistanceFilter";
        frequencyRandomizer = 0.1;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHS_pistol1_Tail_SoundSet {
        soundShaders[] = {
            "RHS_pistol1_Meadows_0m_SoundShader",
            "RHS_pistol1_Meadows_150m_SoundShader",
            "RHS_pistol1_Houses_0m_SoundShader",
            "RHS_pistol1_Houses_150m_SoundShader",
            "RHS_pistol1_Trees_0m_SoundShader",
            "RHS_pistol1_Trees_150m_SoundShader",
            "RHS_pistol1_Forest_0m_SoundShader",
            "RHS_pistol1_Forest_150m_SoundShader",
            "RHS_pistol1_Interior_0m_SoundShader",
            "RHS_pistol1_Interior_50m_SoundShader",
            "RHS_pistol1_Interior_150m_SoundShader",
            "RHS_pistol1_Interior_550m_SoundShader"
        };
        volumeFactor = 1;
        volumeCurve = "RHS_tailSoundCurve";
        sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
        soundShadersLimit = 2;
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        distanceFilter = "RHS_rifleTailDistanceFilter";
        frequencyRandomizer = 0.1;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHS_cannon_Tail_SoundSet {
        soundShaders[] = {
            "RHS_cannon_Meadows_0m_SoundShader",
            "RHS_cannon_Meadows_350m_SoundShader",
            "RHS_cannon_Houses_0m_SoundShader",
            "RHS_cannon_Houses_350m_SoundShader",
            "RHS_cannon_Trees_0m_SoundShader",
            "RHS_cannon_Trees_350m_SoundShader",
            "RHS_cannon_Forest_0m_SoundShader",
            "RHS_cannon_Forest_350m_SoundShader"
        };
        volumeFactor = 1;
        volumeCurve = "rhs_cannonSoundCurve";
        sound3DProcessingType = "rhs_Cannon_3DProcessingType";
        soundShadersLimit = 2;
        distanceFilter = "rhs_defaultDistanceFilter";
        frequencyRandomizer = 0.1;
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class RHS_autocannon_Tail_SoundSet {
        soundShaders[] = {
            "RHS_autocannon_Meadows_0m_SoundShader",
            "RHS_autocannon_Meadows_350m_SoundShader",
            "RHS_autocannon_Houses_0m_SoundShader",
            "RHS_autocannon_Houses_350m_SoundShader",
            "RHS_autocannon_Trees_0m_SoundShader",
            "RHS_autocannon_Trees_350m_SoundShader",
            "RHS_autocannon_Forest_0m_SoundShader",
            "RHS_autocannon_Forest_350m_SoundShader"
        };
        volumeFactor = 1;
        volumeCurve = "rhs_cannonSoundCurve";
        sound3DProcessingType = "rhs_Cannon_3DProcessingType";
        soundShadersLimit = 2;
        distanceFilter = "rhs_defaultDistanceFilter";
        frequencyRandomizer = 0.1;
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class rhs_nuke_explosion_soundset {
        soundShaders[] = {"rhs_nuke_explosion_soundshader"};
        volumeFactor = 1.5;
        volumeCurve = "LinearCurve";
        spatial = 1;
        doppler = 0;
        loop = 0;
        sound3DProcessingType = "ExplosionHeavy3DProcessingType";
        distanceFilter = "explosionDistanceFreqAttenuationFilter";
    };
    class Rifle_Shot_Base_SoundSet;
    class rhs_gp25_shot_SoundSet: Rifle_Shot_Base_SoundSet {
        soundShaders[] = {"rhs_gp25_closeShot_SoundShader", "UGL_midShot_SoundShader", "UGL_distShot_SoundShader"};
        volumeFactor = 1.4;
    };
    class rhs_afganitAPS_soundset {
        soundShaders[] = {
            "rhs_afganitaps_closeShot_SoundShader",
            "rhs_Afganitaps_distShot_SoundShader",
            "Launcher_Adds_Kick_SoundShader",
            "Launcher_Adds_Metal_SoundShader"
        };
        volumeFactor = 1;
        volumeCurve = "LinearCurve";
        spatial = 1;
        doppler = 1;
        loop = 0;
        sound3DProcessingType = "Launcher3DProcessingType";
        distanceFilter = "explosionDistanceFreqAttenuationFilter";
    };
};
class CfgWeapons {
    class InventoryOpticsItem_Base_F;
    class Rifle_Base_F;
    class arifle_MX_Base_F: Rifle_Base_F {};
    class Rifle_Long_Base_F;
    class GrenadeLauncher;
    class UGL_F: GrenadeLauncher {};
    class srifle_EBR_F;
    class LMG_Mk200_F;
    class LMG_M200;
    class MGun;
    class pdw2000_base_F;
    class hgun_PDW2000_F: pdw2000_base_F {
        class Single;
        class FullAuto;
        class WeaponSlotsInfo;
    };
    class rhs_weap_pp2000: hgun_PDW2000_F {
        class Single: Single {
            class StandardSound {
                soundSetShot[] = {"RHS_pp2000_Closure_SoundSet", "RHS_pp2000_Shot_SoundSet", "RHS_pistol1_Tail_SoundSet"};
            };
        };
        class FullAuto: FullAuto {
            class StandardSound {
                soundSetShot[] = {"RHS_pp2000_Closure_SoundSet", "RHS_pp2000_Shot_SoundSet", "RHS_pistol1_Tail_SoundSet"};
            };
        };
    };
    class rhs_weap_ak74m_Base_F: Rifle_Base_F {
        reloadMagazineSound[] = {
            "rhsafrf\addons\rhs_sounds\ak_shared\reload",
            0.8,
            1,
            10
        };
        changeFiremodeSound[] = {
            "rhsafrf\addons\rhs_sounds\ak_shared\firemode",
            0.6,
            1,
            5
        };
        class Single: Mode_SemiAuto {
            class StandardSound {
                soundSetShot[] = {"RHS_ak74_Closure_SoundSet", "RHS_ak74_Shot_SoundSet", "RHS_rifle1_Tail_SoundSet"};
            };
            class SilencedSound {
                soundSetShot[] = {"RHS_ak74_Closure_SoundSet", "RHS_ak74_ShotSD_SoundSet", "RHS_Rifle1_SD_Tail_SoundSet"};
            };
        };
        class FullAuto: Mode_FullAuto {
            class StandardSound {
                soundSetShot[] = {"RHS_ak74_Closure_SoundSet", "RHS_ak74_Shot_SoundSet", "RHS_rifle1_Tail_SoundSet"};
            };
            class SilencedSound {
                soundSetShot[] = {"RHS_ak74_Closure_SoundSet", "RHS_ak74_ShotSD_SoundSet", "RHS_Rifle1_SD_Tail_SoundSet"};
            };
        };
    };
    class rhs_weap_ak74m: rhs_weap_ak74m_Base_F {};
    class rhs_weap_asval: rhs_weap_ak74m {
        L_ES_Prefix = "nosound";
        L_ES_maxPlopp = 0;
        class Single: Single {
            class StandardSound {
                soundSetShot[] = {"RHS_ASVAL_Closure_SoundSet", "RHS_ASVAL_ShotSD_SoundSet", "RHS_rifle1_SD_Tail_SoundSet"};
            };
        };
        class FullAuto: FullAuto {
            class StandardSound {
                soundSetShot[] = {"RHS_ASVAL_Closure_SoundSet", "RHS_ASVAL_ShotSD_SoundSet", "RHS_rifle1_SD_Tail_SoundSet"};
            };
        };
    };
    class rhs_weap_akm: rhs_weap_ak74m {
        reloadMagazineSound[] = {
            "rhsafrf\addons\rhs_sounds\ak_shared\reload_AK762",
            0.8,
            1,
            10
        };
        changeFiremodeSound[] = {
            "rhsafrf\addons\rhs_sounds\ak_shared\firemode",
            0.6,
            1,
            5
        };
        class Single: Mode_SemiAuto {
            class StandardSound {
                soundSetShot[] = {"RHS_akm_Closure_SoundSet", "RHS_akm_Shot_SoundSet", "RHS_lmg1_Tail_SoundSet"};
            };
            class SilencedSound {
                soundSetShot[] = {"RHS_akm_Closure_SoundSet", "RHS_akm_ShotSD_SoundSet", "RHS_Rifle1_SD_Tail_SoundSet"};
            };
        };
        class FullAuto: Mode_FullAuto {
            class StandardSound {
                soundSetShot[] = {"RHS_akm_Closure_SoundSet", "RHS_akm_Shot_SoundSet", "RHS_lmg1_Tail_SoundSet"};
            };
            class SilencedSound {
                soundSetShot[] = {"RHS_akm_Closure_SoundSet", "RHS_akm_ShotSD_SoundSet", "RHS_Rifle1_SD_Tail_SoundSet"};
            };
        };
    };
    class rhs_weap_ak103_base: rhs_weap_akm {
        reloadMagazineSound[] = {
            "rhsafrf\addons\rhs_sounds\ak_shared\reload",
            0.8,
            1,
            10
        };
    };
    class rhs_pkp_base: Rifle_Long_Base_F {
        reloadMagazineSound[] = {"rhsafrf\addons\rhs_sounds\pkp\reload", 1.1, 1, 12};
        class Single: Mode_SemiAuto {
            class StandardSound {
                soundSetShot[] = {"RHS_pkp_Closure_SoundSet", "RHS_pkp_Shot_SoundSet", "RHS_mmg1_Tail_SoundSet"};
            };
            class SilencedSound {
                soundSetShot[] = {"RHS_pkp_Closure_SoundSet", "RHS_pkp_Shot_SoundSet", "RHS_mmg1_Tail_SoundSet"};
            };
        };
        class FullAuto: Mode_FullAuto {
            class StandardSound {
                soundSetShot[] = {"RHS_pkp_Closure_SoundSet", "RHS_pkp_Shot_SoundSet", "RHS_mmg1_Tail_SoundSet"};
            };
            class SilencedSound {
                soundSetShot[] = {"RHS_pkp_Closure_SoundSet", "RHS_pkp_Shot_SoundSet", "RHS_mmg1_Tail_SoundSet"};
            };
        };
    };
    class rhs_weap_pkp: rhs_pkp_base {};
    class rhs_weap_rpk_base: Rifle_Long_Base_F {
        reloadMagazineSound[] = {
            "rhsafrf\addons\rhs_sounds\ak_shared\reload_AK762",
            0.8,
            1,
            10
        };
        changeFiremodeSound[] = {
            "rhsafrf\addons\rhs_sounds\ak_shared\firemode",
            0.6,
            1,
            5
        };
    };
    class PKT: MGun {};
    class rhs_weap_pkt: PKT {
        class manual: MGun {
            sounds[] = {"StandardSound"};
            class StandardSound {
                soundSetShot[] = {"RHS_pkp_Closure_SoundSet", "RHS_pkp_Shot_SoundSet", "RHS_mmg1_Tail_SoundSet"};
            };
        };
    };
    class rhs_weap_svd: rhs_weap_ak74m {
        reloadMagazineSound[] = {
            "rhsafrf\addons\rhs_sounds\svd\rhs_reload_svd",
            1.2,
            1,
            15
        };
        changeFiremodeSound[] = {
            "rhsafrf\addons\rhs_sounds\ak_shared\firemode",
            0.6,
            1,
            5
        };
        class Single: Mode_SemiAuto {
            class StandardSound {
                soundSetShot[] = {"RHS_svd_Closure_SoundSet", "RHS_akm_Shot_SoundSet", "RHS_mmg1_Tail_SoundSet"};
            };
            class SilencedSound {
                soundSetShot[] = {"RHS_svd_Closure_SoundSet", "RHS_akm_ShotSD_SoundSet", "RHS_rifle1_SD_Tail_SoundSet"};
            };
        };
    };
    class rhs_weap_svdp: rhs_weap_svd {
        reloadMagazineSound[] = {
            "rhsafrf\addons\rhs_sounds\svd\rhs_reload_svd",
            1.2,
            1,
            15
        };
        changeFiremodeSound[] = {
            "rhsafrf\addons\rhs_sounds\ak_shared\firemode",
            0.6,
            1,
            5
        };
        class Single: Mode_SemiAuto {
            class StandardSound {
                soundSetShot[] = {"RHS_svd_Closure_SoundSet", "RHS_akm_Shot_SoundSet", "RHS_mmg1_Tail_SoundSet"};
            };
            class SilencedSound {
                soundSetShot[] = {"RHS_svd_Closure_SoundSet", "RHS_akm_ShotSD_SoundSet", "RHS_rifle1_SD_Tail_SoundSet"};
            };
        };
    };
    class GP25_Base: UGL_F {
        class Single: Mode_SemiAuto {
            sounds[] = {"StandardSound"};
            class StandardSound {
                soundSetShot[] = {"rhs_gp25_shot_SoundSet", "UGL_Tail_SoundSet", "UGL_InteriorTail_SoundSet"};
            };
        };
    };
    class rhs_weap_orsis_Base_F: Rifle_Base_F {
        reloadMagazineSound[] = {
            "rhsafrf\addons\rhs_sounds\t5000\reload",
            1.2,
            1,
            15
        };
    };
    class hgun_Rook40_F;
    class rhs_weap_pya: hgun_Rook40_F {
        sounds[] = {"StandardSound", "SilencedSound"};
        class StandardSound {
            begin1[] = {
                "rhsafrf\addons\rhs_sounds\mp-443\mp-443_1",
                2.55,
                1,
                1000
            };
            begin2[] = {
                "rhsafrf\addons\rhs_sounds\mp-443\mp-443_2",
                2.55,
                1,
                1000
            };
            soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
            soundClosure[] = {};
        };
        class SilencedSound {
            begin1[] = {
                "rhsafrf\addons\rhs_sounds\mp-443\mp-443_1",
                2.55,
                1,
                1000
            };
            begin2[] = {
                "rhsafrf\addons\rhs_sounds\mp-443\mp-443_2",
                2.55,
                1,
                1000
            };
            soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
            soundClosure[] = {};
        };
    };
    class Launcher;
    class Launcher_Base_F: Launcher {};
    class MissileLauncher;
    class rhs_weap_rpg26: Launcher_Base_F {
        class single: Mode_SemiAuto {
            sounds[] = {"StandardSound"};
            class StandardSound {
                weaponSoundEffect = "DefaultRifle";
                begin1[] = {
                    "rhsafrf\addons\rhs_sounds\rpg\rpg_1",
                    2.35,
                    1,
                    1100
                };
                begin2[] = {
                    "rhsafrf\addons\rhs_sounds\rpg\rpg_2",
                    2.35,
                    1,
                    1100
                };
                soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
            };
        };
    };
    class rhs_weap_rpg7: Launcher_Base_F {
        class single: Mode_SemiAuto {
            sounds[] = {"StandardSound"};
            class StandardSound {
                weaponSoundEffect = "DefaultRifle";
                begin1[] = {
                    "rhsafrf\addons\rhs_sounds\rpg\rpg_1",
                    2.35,
                    1,
                    1100
                };
                begin2[] = {
                    "rhsafrf\addons\rhs_sounds\rpg\rpg_2",
                    2.35,
                    1,
                    1100
                };
                soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
            };
            sound[] = {
                "rhsafrf\addons\rhs_sounds\rpg\rpg_1",
                2.35,
                1,
                900
            };
        };
    };
    class rhs_weap_9k11: MissileLauncher {
        sounds[] = {"StandardSound"};
        class StandardSound {
            weaponSoundEffect = "DefaultRifle";
            begin1[] = {
                "rhsafrf\addons\rhs_sounds\atgm\atgm_1",
                2.35,
                1,
                1400
            };
            begin2[] = {
                "rhsafrf\addons\rhs_sounds\atgm\atgm_2",
                2.35,
                1,
                1400
            };
            soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
            soundsetshot[] = {"RocketsMedium_Shot_SoundSet"};
        };
    };
    class missiles_Zephyr;
    class missiles_titan;
    class rhs_weap_9m111: MissileLauncher {
        sounds[] = {"StandardSound"};
        class StandardSound {
            weaponSoundEffect = "DefaultRifle";
            begin1[] = {
                "rhsafrf\addons\rhs_sounds\atgm\atgm_1",
                2.35,
                1,
                1400
            };
            begin2[] = {
                "rhsafrf\addons\rhs_sounds\atgm\atgm_2",
                2.35,
                1,
                1400
            };
            soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
        };
    };
    class rhs_weap_9m119: rhs_weap_9m111 {
        sounds[] = {"StandardSound"};
        class StandardSound {
            weaponSoundEffect = "DefaultRifle";
            begin1[] = {
                "rhsafrf\addons\rhs_sounds\atgm\atgm_1",
                2.35,
                1,
                1400
            };
            begin2[] = {
                "rhsafrf\addons\rhs_sounds\atgm\atgm_2",
                2.35,
                1,
                1400
            };
            soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
        };
    };
    class rhs_weap_2k4: rhs_weap_9m111 {
        sounds[] = {"StandardSound"};
        class StandardSound {
            weaponSoundEffect = "DefaultRifle";
            begin1[] = {
                "rhsafrf\addons\rhs_sounds\atgm\atgm_1",
                2.35,
                1,
                1400
            };
            begin2[] = {
                "rhsafrf\addons\rhs_sounds\atgm\atgm_2",
                2.35,
                1,
                1400
            };
            soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
        };
    };
    class rhs_weap_9k133: rhs_weap_9m111 {
        sounds[] = {"StandardSound"};
        class StandardSound {
            weaponSoundEffect = "DefaultRifle";
            begin1[] = {
                "rhsafrf\addons\rhs_sounds\atgm\atgm_1",
                2.35,
                1,
                1400
            };
            begin2[] = {
                "rhsafrf\addons\rhs_sounds\atgm\atgm_2",
                2.35,
                1,
                1400
            };
            soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
        };
    };
    class RocketPods;
    class rockets_Skyfire: RocketPods {
        class Far_AI;
        class Medium_AI;
        class Close_AI;
        class Burst;
    };
    class rhs_weap_s5: rockets_Skyfire {
        class Far_AI: Far_AI {
            sounds[] = {"StandardSound"};
            class StandardSound {
                weaponSoundEffect = "DefaultRifle";
                begin1[] = {
                    "rhsafrf\addons\rhs_sounds\atgm\atgm_1",
                    2.35,
                    1,
                    1400
                };
                begin2[] = {
                    "rhsafrf\addons\rhs_sounds\atgm\atgm_2",
                    2.35,
                    1,
                    1400
                };
                soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
                soundsetshot[] = {"RocketsMedium_Shot_SoundSet"};
            };
        };
        class Medium_AI: Medium_AI {
            sounds[] = {"StandardSound"};
            class StandardSound {
                weaponSoundEffect = "DefaultRifle";
                begin1[] = {
                    "rhsafrf\addons\rhs_sounds\atgm\atgm_1",
                    2.35,
                    1,
                    1400
                };
                begin2[] = {
                    "rhsafrf\addons\rhs_sounds\atgm\atgm_2",
                    2.35,
                    1,
                    1400
                };
                soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
                soundsetshot[] = {"RocketsMedium_Shot_SoundSet"};
            };
        };
        class Close_AI: Close_AI {
            sounds[] = {"StandardSound"};
            class StandardSound {
                weaponSoundEffect = "DefaultRifle";
                begin1[] = {
                    "rhsafrf\addons\rhs_sounds\atgm\atgm_1",
                    2.35,
                    1,
                    1400
                };
                begin2[] = {
                    "rhsafrf\addons\rhs_sounds\atgm\atgm_2",
                    2.35,
                    1,
                    1400
                };
                soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
                soundsetshot[] = {"RocketsMedium_Shot_SoundSet"};
            };
        };
        class Burst_AI: RocketPods {
            sounds[] = {"StandardSound"};
            class StandardSound {
                weaponSoundEffect = "DefaultRifle";
                begin1[] = {
                    "rhsafrf\addons\rhs_sounds\atgm\atgm_1",
                    2.35,
                    1,
                    1400
                };
                begin2[] = {
                    "rhsafrf\addons\rhs_sounds\atgm\atgm_2",
                    2.35,
                    1,
                    1400
                };
                soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
                soundsetshot[] = {"RocketsMedium_Shot_SoundSet"};
            };
        };
        class Burst: Burst {
            sounds[] = {"StandardSound"};
            class StandardSound {
                weaponSoundEffect = "DefaultRifle";
                begin1[] = {
                    "rhsafrf\addons\rhs_sounds\atgm\atgm_1",
                    2.35,
                    1,
                    1400
                };
                begin2[] = {
                    "rhsafrf\addons\rhs_sounds\atgm\atgm_2",
                    2.35,
                    1,
                    1400
                };
                soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
                soundsetshot[] = {"RocketsMedium_Shot_SoundSet"};
            };
        };
    };
    class rhs_weap_9K114_launcher: MissileLauncher {
        sounds[] = {"StandardSound"};
        class StandardSound {
            weaponSoundEffect = "DefaultRifle";
            begin1[] = {
                "rhsafrf\addons\rhs_sounds\atgm\atgm_1",
                2.35,
                1,
                1400
            };
            begin2[] = {
                "rhsafrf\addons\rhs_sounds\atgm\atgm_2",
                2.35,
                1,
                1400
            };
            soundsetshot[] = {"RocketsMedium_Shot_SoundSet"};
            soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
        };
    };
    class Missile_AA_04_Plane_CAS_01_F;
    class rhs_weap_r73_Launcher: Missile_AA_04_Plane_CAS_01_F {
        sounds[] = {"StandardSound"};
        class StandardSound {
            weaponSoundEffect = "DefaultRifle";
            begin1[] = {
                "rhsafrf\addons\rhs_sounds\atgm\atgm_1",
                2.35,
                1,
                1400
            };
            begin2[] = {
                "rhsafrf\addons\rhs_sounds\atgm\atgm_2",
                2.35,
                1,
                1400
            };
            soundsetshot[] = {"RocketsMedium_Shot_SoundSet"};
            soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
        };
    };
    class Missile_AGM_02_Plane_CAS_01_F;
    class rhs_weap_kh25_Launcher: Missile_AGM_02_Plane_CAS_01_F {
        sounds[] = {"StandardSound"};
        class StandardSound {
            weaponSoundEffect = "DefaultRifle";
            begin1[] = {
                "rhsafrf\addons\rhs_sounds\atgm\atgm_1",
                2.35,
                1,
                1400
            };
            begin2[] = {
                "rhsafrf\addons\rhs_sounds\atgm\atgm_2",
                2.35,
                1,
                1400
            };
            soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
            soundsetshot[] = {"RocketsMedium_Shot_SoundSet"};
        };
    };
    class gatling_30mm;
    class rhs_weap_yakB: gatling_30mm {
        class manual: Mode_FullAuto {
            sounds[] = {"StandardSound"};
            class StandardSound {
                soundSetShot[] = {"RHS_yakb_Shot_SoundSet", "RHS_yakb_Int_Shot_SoundSet", "RHS_sniper1_Tail_SoundSet"};
            };
            soundburst = 0;
            soundcontinuous = 0;
        };
    };
    class CannonCore;
    class cannon_120mm: CannonCore {
        class player;
        class close;
        class short;
        class medium;
        class far;
    };
    class autocannon_30mm_CTWS;
    class rhs_weap_d81: cannon_120mm {
        class player: player {
            class StandardSound {
                soundSetShot[] = {"RHS_120mm_Shot_SoundSet", "RHS_120mm_int_Shot_SoundSet", "RHS_cannon_Tail_SoundSet"};
            };
        };
        class close: close {
            class StandardSound {
                soundSetShot[] = {"RHS_120mm_Shot_SoundSet", "RHS_120mm_int_Shot_SoundSet", "RHS_cannon_Tail_SoundSet"};
            };
        };
        class short: short {
            class StandardSound {
                soundSetShot[] = {"RHS_120mm_Shot_SoundSet", "RHS_120mm_int_Shot_SoundSet", "RHS_cannon_Tail_SoundSet"};
            };
        };
        class medium: medium {
            class StandardSound {
                soundSetShot[] = {"RHS_120mm_Shot_SoundSet", "RHS_120mm_int_Shot_SoundSet", "RHS_cannon_Tail_SoundSet"};
            };
        };
        class far: far {
            class StandardSound {
                soundSetShot[] = {"RHS_120mm_Shot_SoundSet", "RHS_120mm_int_Shot_SoundSet", "RHS_cannon_Tail_SoundSet"};
            };
        };
    };
    class rhs_weap_2a42_base: autocannon_30mm_CTWS {
        class LowROFBMD2: Mode_FullAuto {
            sounds[] = {"StandardSound"};
            class StandardSound {
                soundSetShot[] = {"RHS_autocannon_Shot_SoundSet", "RHS_autocannon_int_Shot_SoundSet", "RHS_autocannon_Tail_SoundSet"};
            };
        };
        class HighROFBMD2: LowROFBMD2 {
            class StandardSound {
                soundSetShot[] = {"RHS_autocannon_Shot_SoundSet", "RHS_autocannon_int_Shot_SoundSet", "RHS_autocannon_Tail_SoundSet"};
            };
        };
    };
    class rhs_weap_2a28_base: cannon_120mm {
        sounds[] = {"StandardSound"};
        class StandardSound {
            weaponSoundEffect = "DefaultRifle";
            begin1[] = {
                "rhsafrf\addons\rhs_sounds\2a28\2a28_1",
                3.15,
                1,
                2700
            };
            begin2[] = {
                "rhsafrf\addons\rhs_sounds\2a28\2a28_2",
                3.15,
                1,
                2700
            };
            soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
        };
    };
    class RHS_weap_AZP23: CannonCore {
        class manual: CannonCore {
            sounds[] = {"StandardSound"};
            class StandardSound {
                soundSetShot[] = {
                    "RHS_KPVT_Closure_SoundSet",
                    "RHS_KPVT_Shot_SoundSet",
                    "RHS_KPVT_Int_Shot_SoundSet",
                    "RHS_autocannon_Tail_SoundSet"
                };
            };
        };
    };
    class LMG_RCWS: MGun {};
    class rhs_weap_DSHKM: LMG_RCWS {
        class manual: MGun {
            class StandardSound {
                soundSetShot[] = {
                    "RHS_DSHKM_Closure_SoundSet",
                    "RHS_DSHKM_Shot_SoundSet",
                    "RHS_DSHKM_Int_Shot_SoundSet",
                    "RHS_sniper1_Tail_SoundSet"
                };
            };
        };
    };
    class rhs_weap_nsvt: rhs_weap_DSHKM {
        class manual: MGun {
            class StandardSound {
                soundSetShot[] = {
                    "RHS_DSHKM_Closure_SoundSet",
                    "RHS_DSHKM_Shot_SoundSet",
                    "RHS_DSHKM_Int_Shot_SoundSet",
                    "RHS_sniper1_Tail_SoundSet"
                };
            };
        };
    };
    class rhs_weap_nsvt_effects: rhs_weap_nsvt {};
    class rhs_weap_kord: rhs_weap_nsvt_effects {
        class manual: manual {
            class StandardSound {
                soundSetShot[] = {
                    "RHS_DSHKM_Closure_SoundSet",
                    "RHS_DSHKM_Shot_SoundSet",
                    "RHS_DSHKM_Int_Shot_SoundSet",
                    "RHS_sniper1_Tail_SoundSet"
                };
            };
        };
    };
    class rhs_weap_kpvt: MGun {
        class manual: MGun {
            sounds[] = {"StandardSound"};
            class StandardSound {
                soundSetShot[] = {
                    "RHS_KPVT_Closure_SoundSet",
                    "RHS_KPVT_Shot_SoundSet",
                    "RHS_KPVT_Int_Shot_SoundSet",
                    "RHS_sniper1_Tail_SoundSet"
                };
            };
        };
    };
    class RHS_weap_GSh30: gatling_30mm {
        class manual: Mode_FullAuto {
            sounds[] = {"StandardSound"};
            class StandardSound {
                soundSetShot[] = {
                    "RHS_KPVT_Closure_SoundSet",
                    "RHS_KPVT_Shot_SoundSet",
                    "RHS_KPVT_Int_Shot_SoundSet",
                    "RHS_autocannon_Tail_SoundSet"
                };
            };
        };
    };
    class RHS_Weap_GSh301: RHS_weap_GSh30 {
        class manual: manual {
            sounds[] = {"StandardSound"};
            class StandardSound {
                soundSetShot[] = {
                    "RHS_KPVT_Closure_SoundSet",
                    "RHS_KPVT_Shot_SoundSet",
                    "RHS_KPVT_Int_Shot_SoundSet",
                    "RHS_autocannon_Tail_SoundSet"
                };
            };
        };
    };
    class mortar_155mm_AMOS;
    class rhs_weap_2a33: mortar_155mm_AMOS {
        class Single1: Mode_SemiAuto {
            sounds[] = {"StandardSound"};
            class StandardSound {
                soundSetShot[] = {"RHS_155mm_Shot_SoundSet", "RHS_155mm_int_Shot_SoundSet", "RHS_cannon_Tail_SoundSet"};
            };
        };
        class Burst1: Mode_Burst {
            sounds[] = {"StandardSound"};
            class StandardSound {
                soundSetShot[] = {"RHS_155mm_Shot_SoundSet", "RHS_155mm_int_Shot_SoundSet", "RHS_cannon_Tail_SoundSet"};
            };
        };
    };
    class rhs_weap_d30: mortar_155mm_AMOS {
        class Single1: Mode_SemiAuto {
            sounds[] = {"StandardSound"};
            class StandardSound {
                soundSetShot[] = {"RHS_155mm_Shot_SoundSet", "RHS_155mm_int_Shot_SoundSet", "RHS_cannon_Tail_SoundSet"};
            };
        };
        class Burst1: Mode_Burst {
            sounds[] = {"StandardSound"};
            class StandardSound {
                soundSetShot[] = {"RHS_155mm_Shot_SoundSet", "RHS_155mm_int_Shot_SoundSet", "RHS_cannon_Tail_SoundSet"};
            };
        };
    };
    class SmokeLauncher;
    class rhs_weap_902a: SmokeLauncher {
        sounds[] = {"StandardSound"};
        class StandardSound {
            begin1[] = {
                "rhsafrf\addons\rhs_sounds\smoke\902A_1",
                2.8,
                1,
                600
            };
            begin2[] = {
                "rhsafrf\addons\rhs_sounds\smoke\902A_2",
                2.8,
                1,
                600
            };
            soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
        };
    };
    class rhs_weap_902b: rhs_weap_902a {
        class Double: rhs_weap_902a {
            sounds[] = {"StandardSound"};
            class StandardSound {
                begin1[] = {
                    "rhsafrf\addons\rhs_sounds\smoke\902A_1",
                    2.8,
                    1,
                    600
                };
                begin2[] = {
                    "rhsafrf\addons\rhs_sounds\smoke\902A_2",
                    2.8,
                    1,
                    600
                };
                soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
            };
        };
        class Volley: Double {};
    };
};
