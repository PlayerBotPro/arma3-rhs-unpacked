class CfgPatches {
    class rhs_c_vehiclesounds {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.32;
        requiredAddons[] = {
            "rhs_main",
            "rhs_c_a2port_car",
            "rhs_c_kamaz",
            "rhs_c_zil131",
            "rhs_c_cars",
            "rhs_c_tanks",
            "rhs_c_t72",
            "rhs_c_sprut"
        };
        version = 1;
    };
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgVehicles {
    class Tank;
    class Tank_F: Tank {};
    class rhs_2s1tank_base: Tank_F {};
    class rhs_tank_base: Tank_F {
        attenuationEffectType = "TankAttenuation";
        soundGetIn[] = {"A3\Sounds_F_EPB\Tracked\noises\get_in_out", 0.56234133, 1};
        soundGetOut[] = {
            "A3\Sounds_F_EPB\Tracked\noises\get_in_out",
            0.56234133,
            1,
            20
        };
        soundTurnIn[] = {
            "A3\Sounds_F\vehicles\noises\Turn_in_out",
            1.7782794,
            1,
            20
        };
        soundTurnOut[] = {
            "A3\Sounds_F\vehicles\noises\Turn_in_out",
            1.7782794,
            1,
            20
        };
        soundTurnInInternal[] = {
            "A3\Sounds_F\vehicles\noises\Turn_in_out",
            1.7782794,
            1,
            20
        };
        soundTurnOutInternal[] = {
            "A3\Sounds_F\vehicles\noises\Turn_in_out",
            1.7782794,
            1,
            20
        };
        soundDammage[] = {"", 0.56234133, 1};
        soundEngineOnInt[] = {"rhsafrf\addons\rhs_vehiclesounds\sounds\armor\t80\t80_engine_ext_start", 1.7782794, 1};
        soundEngineOnExt[] = {
            "rhsafrf\addons\rhs_vehiclesounds\sounds\armor\t80\t80_engine_ext_start",
            1.7782794,
            1,
            100
        };
        soundEngineOffInt[] = {"A3\Sounds_F\vehicles2\armor\MBT_02\MBT_02_Engine_Int_Stop", 1, 1};
        soundEngineOffExt[] = {
            "A3\Sounds_F\vehicles2\armor\MBT_02\MBT_02_Engine_Ext_Stop",
            3.1622777,
            1,
            100
        };
        BushCrash1[] = {
            "A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_Collision_Light_Bush_01",
            0.63095737,
            1,
            100
        };
        BushCrash2[] = {
            "A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_Collision_Light_Bush_02",
            0.63095737,
            1,
            100
        };
        BushCrash3[] = {
            "A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_Collision_Light_Bush_03",
            0.63095737,
            1,
            100
        };
        soundBushCrash[] = {
            "BushCrash1",
            0.33,
            "BushCrash2",
            0.33,
            "BushCrash3",
            0.33
        };
        buildCrash0[] = {
            "A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_01",
            3.1622777,
            1,
            200
        };
        buildCrash1[] = {
            "A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_02",
            3.1622777,
            1,
            200
        };
        buildCrash2[] = {
            "A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_03",
            3.1622777,
            1,
            200
        };
        buildCrash3[] = {
            "A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_04",
            3.1622777,
            1,
            200
        };
        buildCrash4[] = {
            "A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_05",
            3.1622777,
            1,
            200
        };
        buildCrash5[] = {
            "A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_06",
            3.1622777,
            1,
            200
        };
        soundBuildingCrash[] = {
            "buildCrash0",
            0.166,
            "buildCrash1",
            0.166,
            "buildCrash2",
            0.166,
            "buildCrash3",
            0.166,
            "buildCrash4",
            0.166,
            "buildCrash5",
            0.166
        };
        woodCrash0[] = {
            "A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_01",
            3.1622777,
            1,
            200
        };
        woodCrash1[] = {
            "A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_02",
            3.1622777,
            1,
            200
        };
        woodCrash2[] = {
            "A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_03",
            3.1622777,
            1,
            200
        };
        woodCrash3[] = {
            "A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_04",
            3.1622777,
            1,
            200
        };
        woodCrash4[] = {
            "A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_05",
            3.1622777,
            1,
            200
        };
        woodCrash5[] = {
            "A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_06",
            3.1622777,
            1,
            200
        };
        soundWoodCrash[] = {
            "woodCrash0",
            0.166,
            "woodCrash1",
            0.166,
            "woodCrash2",
            0.166,
            "woodCrash3",
            0.166,
            "woodCrash4",
            0.166,
            "woodCrash5",
            0.166
        };
        ArmorCrash0[] = {
            "A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_01",
            3.1622777,
            1,
            200
        };
        ArmorCrash1[] = {
            "A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_02",
            3.1622777,
            1,
            200
        };
        ArmorCrash2[] = {
            "A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_03",
            3.1622777,
            1,
            200
        };
        ArmorCrash3[] = {
            "A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_04",
            3.1622777,
            1,
            200
        };
        ArmorCrash4[] = {
            "A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_05",
            3.1622777,
            1,
            200
        };
        ArmorCrash5[] = {
            "A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_06",
            3.1622777,
            1,
            200
        };
        soundArmorCrash[] = {
            "ArmorCrash0",
            0.166,
            "ArmorCrash1",
            0.166,
            "ArmorCrash2",
            0.166,
            "ArmorCrash3",
            0.166,
            "ArmorCrash4",
            0.166,
            "ArmorCrash5",
            0.166
        };
        class Sounds {
            soundSetsInt[] = {
                "RHS_T80_Engine_RPM0_INT_SoundSet",
                "RHS_T80_Engine_RPM1_INT_SoundSet",
                "RHS_T80_Engine_RPM2_INT_SoundSet",
                "RHS_T80_Engine_INT_Burst_SoundSet",
                "RHS_T80_Tracks_01_INT_SoundSet",
                "RHS_T80_Tracks_02_INT_SoundSet",
                "RHS_T80_Tracks_03_INT_SoundSet",
                "RHS_T80_Tracks_04_INT_SoundSet",
                "RHS_T80_Tracks_05_INT_SoundSet",
                "RHS_T80_Tracks_06_INT_SoundSet",
                "RHS_T80_Interior_Tone_Engine_Off_SoundSet",
                "RHS_T80_Interior_Tone_Engine_On_SoundSet",
                "RHS_T80_Rattling_INT_SoundSet",
                "RHS_T80_Rain_INT_SoundSet",
                "RHS_T80_Tracks_Brake_Hard_INT_SoundSet",
                "RHS_T80_Tracks_Brake_Soft_INT_SoundSet",
                "RHS_T80_Tracks_Turn_Hard_INT_SoundSet",
                "RHS_T80_Tracks_Turn_Soft_INT_SoundSet",
                "RHS_T80_Drive_Water_INT_SoundSet",
                "RHS_T80_Drive_Dirt_INT_SoundSet",
                "",
                "MBT_02_Turbine01_Int_Tonal_SoundSet",
                "MBT_02_Turbine01_Int_Noisy_SoundSet",
                "MBT_02_Servo01_Int_SoundSet",
                "Tracks_Movement_Dirt_Int_01_SoundSet",
                "Tracks_Surface_Soft_Int_SoundSet",
                "Tracks_Surface_Sand_Int_SoundSet",
                "Tracks_Surface_Squeaks_Soft_Int_SoundSet",
                "Tracks_Surface_Squeaks_Hard_Int_SoundSet",
                "Tanks_Material_Strain_Int_SoundSet",
                "Tank_General_Collision_Int_SoundSet",
                "rhs_tank_t72_int_autoloader_SoundSet"
            };
            soundSetsExt[] = {
                "RHS_T80_Engine_RPM0_EXT_SoundSet",
                "RHS_T80_Engine_RPM1_EXT_SoundSet",
                "RHS_T80_Engine_RPM2_EXT_SoundSet",
                "RHS_T80_Engine_EXT_Burst_SoundSet",
                "RHS_T80_Tracks_01_EXT_SoundSet",
                "RHS_T80_Tracks_02_EXT_SoundSet",
                "RHS_T80_Tracks_03_EXT_SoundSet",
                "RHS_T80_Tracks_04_EXT_SoundSet",
                "RHS_T80_Tracks_05_EXT_SoundSet",
                "RHS_T80_Tracks_06_EXT_SoundSet",
                "RHS_T80_Rain_EXT_SoundSet",
                "RHS_T80_Tracks_Brake_Hard_EXT_SoundSet",
                "RHS_T80_Tracks_Brake_Soft_EXT_SoundSet",
                "RHS_T80_Tracks_Turn_Hard_EXT_SoundSet",
                "RHS_T80_Tracks_Turn_Soft_EXT_SoundSet",
                "RHS_T80_Drive_Water_EXT_SoundSet",
                "RHS_T80_Drive_Dirt_EXT_SoundSet",
                "",
                "MBT_02_Turbine01_Ext_Front_Tonal_SoundSet",
                "MBT_02_Turbine01_Ext_Rear_Tonal_SoundSet",
                "MBT_02_Turbine01_Ext_Front_Noisy_SoundSet",
                "MBT_02_Turbine01_Ext_Rear_Noisy_SoundSet",
                "MBT_02_Servo01_Ext_SoundSet",
                "MBT_02_Servo02_Ext_SoundSet",
                "Tracks_Movement_Dirt_Ext_01_SoundSet",
                "Tracks_Surface_Soft_Ext_SoundSet",
                "Tracks_Surface_Sand_Ext_SoundSet",
                "Tracks_Surface_Squeaks_Soft_Ext_SoundSet",
                "Tracks_Surface_Squeaks_Hard_Ext_SoundSet",
                "Tank_General_Collision_SoundShader",
                "rhs_tank_t72_ext_autoloader_SoundSet"
            };
        };
    };
    class rhs_a3t72tank_base: Tank_F {
        attenuationEffectType = "TankAttenuation";
        soundGetIn[] = {"A3\Sounds_F_EPB\Tracked\noises\get_in_out", 0.56234133, 1};
        soundGetOut[] = {
            "A3\Sounds_F_EPB\Tracked\noises\get_in_out",
            0.56234133,
            1,
            20
        };
        soundTurnIn[] = {
            "A3\Sounds_F\vehicles\noises\Turn_in_out",
            1.7782794,
            1,
            20
        };
        soundTurnOut[] = {
            "A3\Sounds_F\vehicles\noises\Turn_in_out",
            1.7782794,
            1,
            20
        };
        soundTurnInInternal[] = {
            "A3\Sounds_F\vehicles\noises\Turn_in_out",
            1.7782794,
            1,
            20
        };
        soundTurnOutInternal[] = {
            "A3\Sounds_F\vehicles\noises\Turn_in_out",
            1.7782794,
            1,
            20
        };
        soundDammage[] = {"", 0.56234133, 1};
        soundEngineOnInt[] = {"rhsafrf\addons\rhs_vehiclesounds\sounds\armor\t72\t72_engine_ext_startup", 0.56234133, 1};
        soundEngineOffInt[] = {"rhsafrf\addons\rhs_vehiclesounds\sounds\armor\t72\t72_engine_ext_shutdown", 0.56234133, 1};
        soundEngineOnExt[] = {
            "rhsafrf\addons\rhs_vehiclesounds\sounds\armor\t72\t72_engine_ext_startup",
            6.3095737,
            1,
            100
        };
        soundEngineOffExt[] = {
            "rhsafrf\addons\rhs_vehiclesounds\sounds\armor\t72\t72_engine_ext_shutdown",
            6.3095737,
            1,
            100
        };
        BushCrash1[] = {
            "A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_Collision_Light_Bush_01",
            0.63095737,
            1,
            100
        };
        BushCrash2[] = {
            "A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_Collision_Light_Bush_02",
            0.63095737,
            1,
            100
        };
        BushCrash3[] = {
            "A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_Collision_Light_Bush_03",
            0.63095737,
            1,
            100
        };
        soundBushCrash[] = {
            "BushCrash1",
            0.33,
            "BushCrash2",
            0.33,
            "BushCrash3",
            0.33
        };
        buildCrash0[] = {
            "A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_01",
            3.1622777,
            1,
            200
        };
        buildCrash1[] = {
            "A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_02",
            3.1622777,
            1,
            200
        };
        buildCrash2[] = {
            "A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_03",
            3.1622777,
            1,
            200
        };
        buildCrash3[] = {
            "A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_04",
            3.1622777,
            1,
            200
        };
        buildCrash4[] = {
            "A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_05",
            3.1622777,
            1,
            200
        };
        buildCrash5[] = {
            "A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_06",
            3.1622777,
            1,
            200
        };
        soundBuildingCrash[] = {
            "buildCrash0",
            0.166,
            "buildCrash1",
            0.166,
            "buildCrash2",
            0.166,
            "buildCrash3",
            0.166,
            "buildCrash4",
            0.166,
            "buildCrash5",
            0.166
        };
        woodCrash0[] = {
            "A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_01",
            3.1622777,
            1,
            200
        };
        woodCrash1[] = {
            "A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_02",
            3.1622777,
            1,
            200
        };
        woodCrash2[] = {
            "A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_03",
            3.1622777,
            1,
            200
        };
        woodCrash3[] = {
            "A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_04",
            3.1622777,
            1,
            200
        };
        woodCrash4[] = {
            "A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_05",
            3.1622777,
            1,
            200
        };
        woodCrash5[] = {
            "A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_06",
            3.1622777,
            1,
            200
        };
        soundWoodCrash[] = {
            "woodCrash0",
            0.166,
            "woodCrash1",
            0.166,
            "woodCrash2",
            0.166,
            "woodCrash3",
            0.166,
            "woodCrash4",
            0.166,
            "woodCrash5",
            0.166
        };
        ArmorCrash0[] = {
            "A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_01",
            3.1622777,
            1,
            200
        };
        ArmorCrash1[] = {
            "A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_02",
            3.1622777,
            1,
            200
        };
        ArmorCrash2[] = {
            "A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_03",
            3.1622777,
            1,
            200
        };
        ArmorCrash3[] = {
            "A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_04",
            3.1622777,
            1,
            200
        };
        ArmorCrash4[] = {
            "A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_05",
            3.1622777,
            1,
            200
        };
        ArmorCrash5[] = {
            "A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_06",
            3.1622777,
            1,
            200
        };
        soundArmorCrash[] = {
            "ArmorCrash0",
            0.166,
            "ArmorCrash1",
            0.166,
            "ArmorCrash2",
            0.166,
            "ArmorCrash3",
            0.166,
            "ArmorCrash4",
            0.166,
            "ArmorCrash5",
            0.166
        };
        class Sounds {
            soundSetsInt[] = {
                "RHS_T72_Engine_RPM0_INT_SoundSet",
                "RHS_T72_Engine_RPM1_INT_SoundSet",
                "RHS_T72_Engine_RPM2_INT_SoundSet",
                "RHS_T72_Engine_INT_Burst_SoundSet",
                "RHS_T72_Tracks_01_INT_SoundSet",
                "RHS_T72_Tracks_02_INT_SoundSet",
                "RHS_T72_Tracks_03_INT_SoundSet",
                "RHS_T72_Tracks_04_INT_SoundSet",
                "RHS_T72_Tracks_05_INT_SoundSet",
                "RHS_T72_Tracks_06_INT_SoundSet",
                "RHS_T72_Interior_Tone_Engine_Off_SoundSet",
                "RHS_T72_Interior_Tone_Engine_On_SoundSet",
                "RHS_T72_Rattling_INT_SoundSet",
                "RHS_T72_Rain_INT_SoundSet",
                "RHS_T72_Tracks_Brake_Hard_INT_SoundSet",
                "RHS_T72_Tracks_Brake_Soft_INT_SoundSet",
                "RHS_T72_Tracks_Turn_Hard_INT_SoundSet",
                "RHS_T72_Tracks_Turn_Soft_INT_SoundSet",
                "RHS_T72_Drive_Water_INT_SoundSet",
                "RHS_T72_Drive_Dirt_INT_SoundSet",
                "",
                "Tracks_Movement_Dirt_Int_01_SoundSet",
                "Tracks_Surface_Soft_Int_SoundSet",
                "Tracks_Surface_Sand_Int_SoundSet",
                "Tracks_Surface_Squeaks_Soft_Int_SoundSet",
                "Tracks_Surface_Squeaks_Hard_Int_SoundSet",
                "Tanks_Material_Strain_Int_SoundSet",
                "Tank_General_Collision_Int_SoundSet",
                "rhs_tank_t72_int_autoloader_SoundSet"
            };
            soundSetsExt[] = {
                "RHS_T72_Engine_RPM0_EXT_SoundSet",
                "RHS_T72_Engine_RPM1_EXT_SoundSet",
                "RHS_T72_Engine_RPM2_EXT_SoundSet",
                "RHS_T72_Engine_EXT_Burst_SoundSet",
                "RHS_T72_Tracks_01_EXT_SoundSet",
                "RHS_T72_Tracks_02_EXT_SoundSet",
                "RHS_T72_Tracks_03_EXT_SoundSet",
                "RHS_T72_Tracks_04_EXT_SoundSet",
                "RHS_T72_Tracks_05_EXT_SoundSet",
                "RHS_T72_Tracks_06_EXT_SoundSet",
                "RHS_T72_Rain_EXT_SoundSet",
                "RHS_T72_Tracks_Brake_Hard_EXT_SoundSet",
                "RHS_T72_Tracks_Brake_Soft_EXT_SoundSet",
                "RHS_T72_Tracks_Turn_Hard_EXT_SoundSet",
                "RHS_T72_Tracks_Turn_Soft_EXT_SoundSet",
                "RHS_T72_Drive_Water_EXT_SoundSet",
                "RHS_T72_Drive_Dirt_EXT_SoundSet",
                "",
                "Tracks_Movement_Dirt_Ext_01_SoundSet",
                "Tracks_Surface_Soft_Ext_SoundSet",
                "Tracks_Surface_Sand_Ext_SoundSet",
                "Tracks_Surface_Squeaks_Soft_Ext_SoundSet",
                "Tracks_Surface_Squeaks_Hard_Ext_SoundSet",
                "Tank_General_Collision_SoundShader",
                "rhs_tank_t72_ext_autoloader_SoundSet"
            };
        };
    };
    class Truck_F;
    class O_Truck_02_covered_F;
    class OTR21_Base: Truck_F {
        attenuationEffectType = "TruckAttenuation";
        soundDammage[] = {"", 0.56234133, 1};
        soundGetIn[] = {
            "rhsafrf\addons\rhs_vehiclesounds\sounds\soft\ural4320\ural4320_engine_int_getout",
            1.7782794,
            1,
            9
        };
        soundGetOut[] = {
            "rhsafrf\addons\rhs_vehiclesounds\sounds\soft\ural4320\ural4320_engine_ext_getout",
            2.5118864,
            1,
            25
        };
        soundEngineOnInt[] = {"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\ural4320\ural4320_engine_int_start", 1.4125376, 1};
        soundEngineOnExt[] = {
            "rhsafrf\addons\rhs_vehiclesounds\sounds\soft\ural4320\ural4320_engine_ext_start",
            1.4125376,
            1,
            200
        };
        soundEngineOffInt[] = {"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\ural4320\ural4320_engine_int_stop", 1.4125376, 1};
        soundEngineOffExt[] = {
            "rhsafrf\addons\rhs_vehiclesounds\sounds\soft\ural4320\ural4320_engine_ext_stop",
            1.4125376,
            1,
            200
        };
        buildCrash0[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_01",
            1.9952624,
            1,
            75
        };
        buildCrash1[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_02",
            1.9952624,
            1,
            75
        };
        buildCrash2[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_03",
            1.9952624,
            1,
            75
        };
        buildCrash3[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_04",
            1.9952624,
            1,
            75
        };
        buildCrash4[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_05",
            1.9952624,
            1,
            75
        };
        buildCrash5[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_06",
            1.9952624,
            1,
            75
        };
        buildCrash6[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_07",
            1.9952624,
            1,
            75
        };
        buildCrash7[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_08",
            1.9952624,
            1,
            75
        };
        soundBuildingCrash[] = {
            "buildCrash0",
            0.125,
            "buildCrash1",
            0.125,
            "buildCrash2",
            0.125,
            "buildCrash3",
            0.125,
            "buildCrash4",
            0.125,
            "buildCrash5",
            0.125,
            "buildCrash6",
            0.125,
            "buildCrash7",
            0.125
        };
        WoodCrash0[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_01",
            1.9952624,
            1,
            75
        };
        WoodCrash1[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_02",
            1.9952624,
            1,
            75
        };
        WoodCrash2[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_03",
            1.9952624,
            1,
            75
        };
        WoodCrash3[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_04",
            1.9952624,
            1,
            75
        };
        WoodCrash4[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_05",
            1.9952624,
            1,
            75
        };
        WoodCrash5[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_06",
            1.9952624,
            1,
            75
        };
        WoodCrash6[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_07",
            1.9952624,
            1,
            75
        };
        WoodCrash7[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_08",
            1.9952624,
            1,
            75
        };
        soundWoodCrash[] = {
            "woodCrash0",
            0.125,
            "woodCrash1",
            0.125,
            "woodCrash2",
            0.125,
            "woodCrash3",
            0.125,
            "woodCrash4",
            0.125,
            "woodCrash5",
            0.125,
            "woodCrash6",
            0.125,
            "woodCrash7",
            0.125
        };
        armorCrash0[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_01",
            1.9952624,
            1,
            75
        };
        armorCrash1[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_02",
            1.9952624,
            1,
            75
        };
        armorCrash2[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_03",
            1.9952624,
            1,
            75
        };
        armorCrash3[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_04",
            1.9952624,
            1,
            75
        };
        armorCrash4[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_05",
            1.9952624,
            1,
            75
        };
        armorCrash5[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_06",
            1.9952624,
            1,
            75
        };
        armorCrash6[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_07",
            1.9952624,
            1,
            75
        };
        armorCrash7[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_08",
            1.9952624,
            1,
            75
        };
        soundArmorCrash[] = {
            "ArmorCrash0",
            0.125,
            "ArmorCrash1",
            0.125,
            "ArmorCrash2",
            0.125,
            "ArmorCrash3",
            0.125,
            "ArmorCrash4",
            0.125,
            "ArmorCrash5",
            0.125,
            "ArmorCrash6",
            0.125,
            "ArmorCrash7",
            0.125
        };
        Crash0[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_01",
            1.9952624,
            1,
            75
        };
        Crash1[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_02",
            1.9952624,
            1,
            75
        };
        Crash2[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_03",
            1.9952624,
            1,
            75
        };
        Crash3[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_04",
            1.9952624,
            1,
            75
        };
        Crash4[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_05",
            1.9952624,
            1,
            75
        };
        Crash5[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_06",
            1.9952624,
            1,
            75
        };
        Crash6[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_07",
            1.9952624,
            1,
            75
        };
        Crash7[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_08",
            1.9952624,
            1,
            75
        };
        soundCrashes[] = {
            "Crash0",
            0.125,
            "Crash1",
            0.125,
            "Crash2",
            0.125,
            "Crash3",
            0.125,
            "Crash4",
            0.125,
            "Crash5",
            0.125,
            "Crash6",
            0.125,
            "Crash7",
            0.125
        };
        BushCrash1[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Light_Bush_01",
            0.63095737,
            1,
            50
        };
        BushCrash2[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Light_Bush_02",
            0.63095737,
            1,
            50
        };
        BushCrash3[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Light_Bush_03",
            0.63095737,
            1,
            50
        };
        BushCrash4[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Light_Bush_03",
            0.63095737,
            0.8,
            50
        };
        soundBushCrash[] = {
            "BushCrash1",
            0.25,
            "BushCrash2",
            0.25,
            "BushCrash3",
            0.25,
            "BushCrash4",
            0.25
        };
        class Sounds {
            soundSetsInt[] = {
                "RHS_OTR21_Engine_RPM0_INT_SoundSet",
                "RHS_OTR21_Engine_RPM1_INT_SoundSet",
                "RHS_OTR21_Engine_RPM2_INT_SoundSet",
                "RHS_OTR21_Engine_INT_Burst_SoundSet",
                "RHS_OTR21_Rattling_INT_SoundSet",
                "RHS_OTR21_Stress_INT_SoundSet",
                "RHS_OTR21_Rain_INT_SoundSet",
                "RHS_OTR21_Tires_Rock_Fast_INT_SoundSet",
                "RHS_OTR21_Tires_Grass_Fast_INT_SoundSet",
                "RHS_OTR21_Tires_Sand_Fast_INT_SoundSet",
                "RHS_OTR21_Tires_Gravel_Fast_INT_SoundSet",
                "RHS_OTR21_Tires_Mud_Fast_INT_SoundSet",
                "RHS_OTR21_Tires_Asphalt_Fast_INT_SoundSet",
                "RHS_OTR21_Tires_Water_Fast_INT_SoundSet",
                "RHS_OTR21_Tires_Rock_Slow_INT_SoundSet",
                "RHS_OTR21_Tires_Grass_Slow_INT_SoundSet",
                "RHS_OTR21_Tires_Sand_Slow_INT_SoundSet",
                "RHS_OTR21_Tires_Gravel_Slow_INT_SoundSet",
                "RHS_OTR21_Tires_Mud_Slow_INT_SoundSet",
                "RHS_OTR21_Tires_Asphalt_Slow_INT_SoundSet",
                "RHS_OTR21_Tires_Water_Slow_INT_SoundSet",
                "RHS_OTR21_Tires_Turn_Hard_INT_SoundSet",
                "RHS_OTR21_Tires_Turn_Soft_INT_SoundSet",
                "RHS_OTR21_Tires_Brake_Hard_INT_SoundSet",
                "RHS_OTR21_Tires_Brake_Soft_INT_SoundSet"
            };
            soundSetsExt[] = {
                "RHS_OTR21_Engine_RPM0_EXT_SoundSet",
                "RHS_OTR21_Engine_RPM1_EXT_SoundSet",
                "RHS_OTR21_Engine_RPM2_EXT_SoundSet",
                "RHS_OTR21_Engine_EXT_Burst_SoundSet",
                "RHS_OTR21_Rattling_EXT_SoundSet",
                "RHS_OTR21_Stress_EXT_SoundSet",
                "RHS_OTR21_Rain_EXT_SoundSet",
                "RHS_OTR21_Tires_Rock_Fast_EXT_SoundSet",
                "RHS_OTR21_Tires_Grass_Fast_EXT_SoundSet",
                "RHS_OTR21_Tires_Sand_Fast_EXT_SoundSet",
                "RHS_OTR21_Tires_Gravel_Fast_EXT_SoundSet",
                "RHS_OTR21_Tires_Mud_Fast_EXT_SoundSet",
                "RHS_OTR21_Tires_Asphalt_Fast_EXT_SoundSet",
                "RHS_OTR21_Tires_Water_Fast_EXT_SoundSet",
                "RHS_OTR21_Tires_Rock_Slow_EXT_SoundSet",
                "RHS_OTR21_Tires_Grass_Slow_EXT_SoundSet",
                "RHS_OTR21_Tires_Sand_Slow_EXT_SoundSet",
                "RHS_OTR21_Tires_Gravel_Slow_EXT_SoundSet",
                "RHS_OTR21_Tires_Mud_Slow_EXT_SoundSet",
                "RHS_OTR21_Tires_Asphalt_Slow_EXT_SoundSet",
                "RHS_OTR21_Tires_Water_Slow_EXT_SoundSet",
                "RHS_OTR21_Tires_Turn_Hard_EXT_SoundSet",
                "RHS_OTR21_Tires_Turn_Soft_EXT_SoundSet",
                "RHS_OTR21_Tires_Brake_Hard_EXT_SoundSet",
                "RHS_OTR21_Tires_Brake_Soft_EXT_SoundSet"
            };
        };
    };
    class rhs_kamaz5350: O_Truck_02_covered_F {
        attenuationEffectType = "TruckAttenuation";
        soundDammage[] = {"", 0.56234133, 1};
        soundGetIn[] = {"A3\Sounds_F\vehicles2\soft\Truck_02\Truck_02_Enter", 0.4466836, 1};
        soundGetOut[] = {
            "A3\Sounds_F\vehicles2\soft\Truck_02\Truck_02_Exit",
            0.4466836,
            1,
            40
        };
        soundEngineOnInt[] = {"A3\Sounds_F\vehicles2\soft\Truck_02\Truck_02_Engine_Int_Start", 0.5011872, 1};
        soundEngineOffInt[] = {"A3\Sounds_F\vehicles2\soft\Truck_02\Truck_02_Engine_Int_stop", 0.39810717, 1};
        soundEngineOnExt[] = {
            "A3\Sounds_F\vehicles2\soft\Truck_02\Truck_02_Engine_Ext_Start",
            1.9952624,
            1,
            50
        };
        soundEngineOffExt[] = {
            "A3\Sounds_F\vehicles2\soft\Truck_02\Truck_02_Engine_Ext_stop",
            1.9952624,
            1,
            50
        };
        buildCrash0[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_01",
            1.9952624,
            1,
            75
        };
        buildCrash1[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_02",
            1.9952624,
            1,
            75
        };
        buildCrash2[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_03",
            1.9952624,
            1,
            75
        };
        buildCrash3[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_04",
            1.9952624,
            1,
            75
        };
        buildCrash4[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_05",
            1.9952624,
            1,
            75
        };
        buildCrash5[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_06",
            1.9952624,
            1,
            75
        };
        buildCrash6[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_07",
            1.9952624,
            1,
            75
        };
        buildCrash7[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_08",
            1.9952624,
            1,
            75
        };
        soundBuildingCrash[] = {
            "buildCrash0",
            0.125,
            "buildCrash1",
            0.125,
            "buildCrash2",
            0.125,
            "buildCrash3",
            0.125,
            "buildCrash4",
            0.125,
            "buildCrash5",
            0.125,
            "buildCrash6",
            0.125,
            "buildCrash7",
            0.125
        };
        WoodCrash0[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_01",
            1.9952624,
            1,
            75
        };
        WoodCrash1[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_02",
            1.9952624,
            1,
            75
        };
        WoodCrash2[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_03",
            1.9952624,
            1,
            75
        };
        WoodCrash3[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_04",
            1.9952624,
            1,
            75
        };
        WoodCrash4[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_05",
            1.9952624,
            1,
            75
        };
        WoodCrash5[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_06",
            1.9952624,
            1,
            75
        };
        WoodCrash6[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_07",
            1.9952624,
            1,
            75
        };
        WoodCrash7[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_08",
            1.9952624,
            1,
            75
        };
        soundWoodCrash[] = {
            "woodCrash0",
            0.125,
            "woodCrash1",
            0.125,
            "woodCrash2",
            0.125,
            "woodCrash3",
            0.125,
            "woodCrash4",
            0.125,
            "woodCrash5",
            0.125,
            "woodCrash6",
            0.125,
            "woodCrash7",
            0.125
        };
        armorCrash0[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_01",
            1.9952624,
            1,
            75
        };
        armorCrash1[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_02",
            1.9952624,
            1,
            75
        };
        armorCrash2[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_03",
            1.9952624,
            1,
            75
        };
        armorCrash3[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_04",
            1.9952624,
            1,
            75
        };
        armorCrash4[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_05",
            1.9952624,
            1,
            75
        };
        armorCrash5[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_06",
            1.9952624,
            1,
            75
        };
        armorCrash6[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_07",
            1.9952624,
            1,
            75
        };
        armorCrash7[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_08",
            1.9952624,
            1,
            75
        };
        soundArmorCrash[] = {
            "ArmorCrash0",
            0.125,
            "ArmorCrash1",
            0.125,
            "ArmorCrash2",
            0.125,
            "ArmorCrash3",
            0.125,
            "ArmorCrash4",
            0.125,
            "ArmorCrash5",
            0.125,
            "ArmorCrash6",
            0.125,
            "ArmorCrash7",
            0.125
        };
        Crash0[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_01",
            1.9952624,
            1,
            75
        };
        Crash1[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_02",
            1.9952624,
            1,
            75
        };
        Crash2[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_03",
            1.9952624,
            1,
            75
        };
        Crash3[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_04",
            1.9952624,
            1,
            75
        };
        Crash4[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_05",
            1.9952624,
            1,
            75
        };
        Crash5[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_06",
            1.9952624,
            1,
            75
        };
        Crash6[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_07",
            1.9952624,
            1,
            75
        };
        Crash7[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_08",
            1.9952624,
            1,
            75
        };
        soundCrashes[] = {
            "Crash0",
            0.125,
            "Crash1",
            0.125,
            "Crash2",
            0.125,
            "Crash3",
            0.125,
            "Crash4",
            0.125,
            "Crash5",
            0.125,
            "Crash6",
            0.125,
            "Crash7",
            0.125
        };
        BushCrash1[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Light_Bush_01",
            0.63095737,
            1,
            50
        };
        BushCrash2[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Light_Bush_02",
            0.63095737,
            1,
            50
        };
        BushCrash3[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Light_Bush_03",
            0.63095737,
            1,
            50
        };
        BushCrash4[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Light_Bush_03",
            0.63095737,
            0.8,
            50
        };
        soundBushCrash[] = {
            "BushCrash1",
            0.25,
            "BushCrash2",
            0.25,
            "BushCrash3",
            0.25,
            "BushCrash4",
            0.25
        };
        class Sounds {
            soundSetsInt[] = {
                "RHS_kamaz_Engine_RPM0_INT_SoundSet",
                "RHS_kamaz_Engine_RPM1_INT_SoundSet",
                "RHS_kamaz_Engine_RPM2_INT_SoundSet",
                "RHS_kamaz_Engine_INT_Burst_SoundSet",
                "RHS_kamaz_Brakes_INT_SoundSet",
                "RHS_kamaz_Rattling_INT_SoundSet",
                "RHS_kamaz_Stress_INT_SoundSet",
                "RHS_kamaz_Rain_INT_SoundSet",
                "RHS_kamaz_Tires_Rock_Fast_INT_SoundSet",
                "RHS_kamaz_Tires_Grass_Fast_INT_SoundSet",
                "RHS_kamaz_Tires_Sand_Fast_INT_SoundSet",
                "RHS_kamaz_Tires_Gravel_Fast_INT_SoundSet",
                "RHS_kamaz_Tires_Mud_Fast_INT_SoundSet",
                "RHS_kamaz_Tires_Asphalt_Fast_INT_SoundSet",
                "RHS_kamaz_Tires_Water_Fast_INT_SoundSet",
                "RHS_kamaz_Tires_Rock_Slow_INT_SoundSet",
                "RHS_kamaz_Tires_Grass_Slow_INT_SoundSet",
                "RHS_kamaz_Tires_Sand_Slow_INT_SoundSet",
                "RHS_kamaz_Tires_Gravel_Slow_INT_SoundSet",
                "RHS_kamaz_Tires_Mud_Slow_INT_SoundSet",
                "RHS_kamaz_Tires_Asphalt_Slow_INT_SoundSet",
                "RHS_kamaz_Tires_Water_Slow_INT_SoundSet",
                "RHS_kamaz_Tires_Turn_Hard_INT_SoundSet",
                "RHS_kamaz_Tires_Turn_Soft_INT_SoundSet",
                "RHS_kamaz_Tires_Brake_Hard_INT_SoundSet",
                "RHS_kamaz_Tires_Brake_Soft_INT_SoundSet"
            };
            soundSetsExt[] = {
                "RHS_kamaz_Engine_RPM0_EXT_SoundSet",
                "RHS_kamaz_Engine_RPM1_EXT_SoundSet",
                "RHS_kamaz_Engine_RPM2_EXT_SoundSet",
                "RHS_kamaz_Engine_EXT_Burst_SoundSet",
                "RHS_kamaz_Brakes_EXT_SoundSet",
                "RHS_kamaz_Rattling_EXT_SoundSet",
                "RHS_kamaz_Stress_EXT_SoundSet",
                "RHS_kamaz_Rain_EXT_SoundSet",
                "RHS_kamaz_Tires_Rock_Fast_EXT_SoundSet",
                "RHS_kamaz_Tires_Grass_Fast_EXT_SoundSet",
                "RHS_kamaz_Tires_Sand_Fast_EXT_SoundSet",
                "RHS_kamaz_Tires_Gravel_Fast_EXT_SoundSet",
                "RHS_kamaz_Tires_Mud_Fast_EXT_SoundSet",
                "RHS_kamaz_Tires_Asphalt_Fast_EXT_SoundSet",
                "RHS_kamaz_Tires_Water_Fast_EXT_SoundSet",
                "RHS_kamaz_Tires_Rock_Slow_EXT_SoundSet",
                "RHS_kamaz_Tires_Grass_Slow_EXT_SoundSet",
                "RHS_kamaz_Tires_Sand_Slow_EXT_SoundSet",
                "RHS_kamaz_Tires_Gravel_Slow_EXT_SoundSet",
                "RHS_kamaz_Tires_Mud_Slow_EXT_SoundSet",
                "RHS_kamaz_Tires_Asphalt_Slow_EXT_SoundSet",
                "RHS_kamaz_Tires_Water_Slow_EXT_SoundSet",
                "RHS_kamaz_Tires_Turn_Hard_EXT_SoundSet",
                "RHS_kamaz_Tires_Turn_Soft_EXT_SoundSet",
                "RHS_kamaz_Tires_Brake_Hard_EXT_SoundSet",
                "RHS_kamaz_Tires_Brake_Soft_EXT_SoundSet"
            };
        };
    };
    class rhs_zil131_base: Truck_F {
        attenuationEffectType = "TruckAttenuation";
        soundDammage[] = {"", 0.56234133, 1};
        soundGetIn[] = {
            "rhsafrf\addons\rhs_vehiclesounds\sounds\soft\ural4320\ural4320_engine_int_getout",
            1.7782794,
            1,
            9
        };
        soundGetOut[] = {
            "rhsafrf\addons\rhs_vehiclesounds\sounds\soft\ural4320\ural4320_engine_ext_getout",
            2.5118864,
            1,
            25
        };
        soundEngineOnInt[] = {"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\ural4320\ural4320_engine_int_start", 1.4125376, 1};
        soundEngineOnExt[] = {
            "rhsafrf\addons\rhs_vehiclesounds\sounds\soft\ural4320\ural4320_engine_ext_start",
            1.4125376,
            1,
            200
        };
        soundEngineOffInt[] = {"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\ural4320\ural4320_engine_int_stop", 1.4125376, 1};
        soundEngineOffExt[] = {
            "rhsafrf\addons\rhs_vehiclesounds\sounds\soft\ural4320\ural4320_engine_ext_stop",
            1.4125376,
            1,
            200
        };
        buildCrash0[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_01",
            1.9952624,
            1,
            75
        };
        buildCrash1[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_02",
            1.9952624,
            1,
            75
        };
        buildCrash2[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_03",
            1.9952624,
            1,
            75
        };
        buildCrash3[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_04",
            1.9952624,
            1,
            75
        };
        buildCrash4[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_05",
            1.9952624,
            1,
            75
        };
        buildCrash5[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_06",
            1.9952624,
            1,
            75
        };
        buildCrash6[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_07",
            1.9952624,
            1,
            75
        };
        buildCrash7[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_08",
            1.9952624,
            1,
            75
        };
        soundBuildingCrash[] = {
            "buildCrash0",
            0.125,
            "buildCrash1",
            0.125,
            "buildCrash2",
            0.125,
            "buildCrash3",
            0.125,
            "buildCrash4",
            0.125,
            "buildCrash5",
            0.125,
            "buildCrash6",
            0.125,
            "buildCrash7",
            0.125
        };
        WoodCrash0[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_01",
            1.9952624,
            1,
            75
        };
        WoodCrash1[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_02",
            1.9952624,
            1,
            75
        };
        WoodCrash2[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_03",
            1.9952624,
            1,
            75
        };
        WoodCrash3[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_04",
            1.9952624,
            1,
            75
        };
        WoodCrash4[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_05",
            1.9952624,
            1,
            75
        };
        WoodCrash5[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_06",
            1.9952624,
            1,
            75
        };
        WoodCrash6[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_07",
            1.9952624,
            1,
            75
        };
        WoodCrash7[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_08",
            1.9952624,
            1,
            75
        };
        soundWoodCrash[] = {
            "woodCrash0",
            0.125,
            "woodCrash1",
            0.125,
            "woodCrash2",
            0.125,
            "woodCrash3",
            0.125,
            "woodCrash4",
            0.125,
            "woodCrash5",
            0.125,
            "woodCrash6",
            0.125,
            "woodCrash7",
            0.125
        };
        armorCrash0[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_01",
            1.9952624,
            1,
            75
        };
        armorCrash1[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_02",
            1.9952624,
            1,
            75
        };
        armorCrash2[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_03",
            1.9952624,
            1,
            75
        };
        armorCrash3[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_04",
            1.9952624,
            1,
            75
        };
        armorCrash4[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_05",
            1.9952624,
            1,
            75
        };
        armorCrash5[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_06",
            1.9952624,
            1,
            75
        };
        armorCrash6[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_07",
            1.9952624,
            1,
            75
        };
        armorCrash7[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_08",
            1.9952624,
            1,
            75
        };
        soundArmorCrash[] = {
            "ArmorCrash0",
            0.125,
            "ArmorCrash1",
            0.125,
            "ArmorCrash2",
            0.125,
            "ArmorCrash3",
            0.125,
            "ArmorCrash4",
            0.125,
            "ArmorCrash5",
            0.125,
            "ArmorCrash6",
            0.125,
            "ArmorCrash7",
            0.125
        };
        Crash0[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_01",
            1.9952624,
            1,
            75
        };
        Crash1[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_02",
            1.9952624,
            1,
            75
        };
        Crash2[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_03",
            1.9952624,
            1,
            75
        };
        Crash3[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_04",
            1.9952624,
            1,
            75
        };
        Crash4[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_05",
            1.9952624,
            1,
            75
        };
        Crash5[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_06",
            1.9952624,
            1,
            75
        };
        Crash6[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_07",
            1.9952624,
            1,
            75
        };
        Crash7[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_08",
            1.9952624,
            1,
            75
        };
        soundCrashes[] = {
            "Crash0",
            0.125,
            "Crash1",
            0.125,
            "Crash2",
            0.125,
            "Crash3",
            0.125,
            "Crash4",
            0.125,
            "Crash5",
            0.125,
            "Crash6",
            0.125,
            "Crash7",
            0.125
        };
        BushCrash1[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Light_Bush_01",
            0.63095737,
            1,
            50
        };
        BushCrash2[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Light_Bush_02",
            0.63095737,
            1,
            50
        };
        BushCrash3[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Light_Bush_03",
            0.63095737,
            1,
            50
        };
        BushCrash4[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Light_Bush_03",
            0.63095737,
            0.8,
            50
        };
        soundBushCrash[] = {
            "BushCrash1",
            0.25,
            "BushCrash2",
            0.25,
            "BushCrash3",
            0.25,
            "BushCrash4",
            0.25
        };
        class Sounds {
            soundSetsInt[] = {
                "RHS_zil131_Engine_RPM0_INT_SoundSet",
                "RHS_zil131_Engine_RPM1_INT_SoundSet",
                "RHS_zil131_Engine_RPM2_INT_SoundSet",
                "RHS_zil131_Engine_RPM3_INT_SoundSet",
                "RHS_zil131_Engine_INT_Burst_SoundSet",
                "RHS_zil131_Rattling_INT_SoundSet",
                "RHS_zil131_Stress_INT_SoundSet",
                "RHS_zil131_Rain_INT_SoundSet",
                "RHS_zil131_Tires_Rock_Fast_INT_SoundSet",
                "RHS_zil131_Tires_Grass_Fast_INT_SoundSet",
                "RHS_zil131_Tires_Sand_Fast_INT_SoundSet",
                "RHS_zil131_Tires_Gravel_Fast_INT_SoundSet",
                "RHS_zil131_Tires_Mud_Fast_INT_SoundSet",
                "RHS_zil131_Tires_Asphalt_Fast_INT_SoundSet",
                "RHS_zil131_Tires_Water_Fast_INT_SoundSet",
                "RHS_zil131_Tires_Rock_Slow_INT_SoundSet",
                "RHS_zil131_Tires_Grass_Slow_INT_SoundSet",
                "RHS_zil131_Tires_Sand_Slow_INT_SoundSet",
                "RHS_zil131_Tires_Gravel_Slow_INT_SoundSet",
                "RHS_zil131_Tires_Mud_Slow_INT_SoundSet",
                "RHS_zil131_Tires_Asphalt_Slow_INT_SoundSet",
                "RHS_zil131_Tires_Water_Slow_INT_SoundSet",
                "RHS_zil131_Tires_Turn_Hard_INT_SoundSet",
                "RHS_zil131_Tires_Turn_Soft_INT_SoundSet",
                "RHS_zil131_Tires_Brake_Hard_INT_SoundSet",
                "RHS_zil131_Tires_Brake_Soft_INT_SoundSet"
            };
            soundSetsExt[] = {
                "RHS_zil131_Engine_RPM0_EXT_SoundSet",
                "RHS_zil131_Engine_RPM1_EXT_SoundSet",
                "RHS_zil131_Engine_RPM2_EXT_SoundSet",
                "RHS_zil131_Engine_RPM3_EXT_SoundSet",
                "RHS_zil131_Engine_EXT_Burst_SoundSet",
                "RHS_zil131_Rattling_EXT_SoundSet",
                "RHS_zil131_Stress_EXT_SoundSet",
                "RHS_zil131_Rain_EXT_SoundSet",
                "RHS_zil131_Tires_Rock_Fast_EXT_SoundSet",
                "RHS_zil131_Tires_Grass_Fast_EXT_SoundSet",
                "RHS_zil131_Tires_Sand_Fast_EXT_SoundSet",
                "RHS_zil131_Tires_Gravel_Fast_EXT_SoundSet",
                "RHS_zil131_Tires_Mud_Fast_EXT_SoundSet",
                "RHS_zil131_Tires_Asphalt_Fast_EXT_SoundSet",
                "RHS_zil131_Tires_Water_Fast_EXT_SoundSet",
                "RHS_zil131_Tires_Rock_Slow_EXT_SoundSet",
                "RHS_zil131_Tires_Grass_Slow_EXT_SoundSet",
                "RHS_zil131_Tires_Sand_Slow_EXT_SoundSet",
                "RHS_zil131_Tires_Gravel_Slow_EXT_SoundSet",
                "RHS_zil131_Tires_Mud_Slow_EXT_SoundSet",
                "RHS_zil131_Tires_Asphalt_Slow_EXT_SoundSet",
                "RHS_zil131_Tires_Water_Slow_EXT_SoundSet",
                "RHS_zil131_Tires_Turn_Hard_EXT_SoundSet",
                "RHS_zil131_Tires_Turn_Soft_EXT_SoundSet",
                "RHS_zil131_Tires_Brake_Hard_EXT_SoundSet",
                "RHS_zil131_Tires_Brake_Soft_EXT_SoundSet"
            };
        };
    };
    class rhs_truck: Truck_F {
        attenuationEffectType = "TruckAttenuation";
        soundDammage[] = {"", 0.56234133, 1};
        soundGetIn[] = {
            "rhsafrf\addons\rhs_vehiclesounds\sounds\soft\ural4320\ural4320_engine_int_getout",
            1.7782794,
            1,
            9
        };
        soundGetOut[] = {
            "rhsafrf\addons\rhs_vehiclesounds\sounds\soft\ural4320\ural4320_engine_ext_getout",
            2.5118864,
            1,
            25
        };
        soundEngineOnInt[] = {"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\ural4320\ural4320_engine_int_start", 1.4125376, 1};
        soundEngineOnExt[] = {
            "rhsafrf\addons\rhs_vehiclesounds\sounds\soft\ural4320\ural4320_engine_ext_start",
            1.4125376,
            1,
            200
        };
        soundEngineOffInt[] = {"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\ural4320\ural4320_engine_int_stop", 1.4125376, 1};
        soundEngineOffExt[] = {
            "rhsafrf\addons\rhs_vehiclesounds\sounds\soft\ural4320\ural4320_engine_ext_stop",
            1.4125376,
            1,
            200
        };
        buildCrash0[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_01",
            1.9952624,
            1,
            75
        };
        buildCrash1[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_02",
            1.9952624,
            1,
            75
        };
        buildCrash2[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_03",
            1.9952624,
            1,
            75
        };
        buildCrash3[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_04",
            1.9952624,
            1,
            75
        };
        buildCrash4[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_05",
            1.9952624,
            1,
            75
        };
        buildCrash5[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_06",
            1.9952624,
            1,
            75
        };
        buildCrash6[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_07",
            1.9952624,
            1,
            75
        };
        buildCrash7[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_08",
            1.9952624,
            1,
            75
        };
        soundBuildingCrash[] = {
            "buildCrash0",
            0.125,
            "buildCrash1",
            0.125,
            "buildCrash2",
            0.125,
            "buildCrash3",
            0.125,
            "buildCrash4",
            0.125,
            "buildCrash5",
            0.125,
            "buildCrash6",
            0.125,
            "buildCrash7",
            0.125
        };
        WoodCrash0[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_01",
            1.9952624,
            1,
            75
        };
        WoodCrash1[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_02",
            1.9952624,
            1,
            75
        };
        WoodCrash2[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_03",
            1.9952624,
            1,
            75
        };
        WoodCrash3[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_04",
            1.9952624,
            1,
            75
        };
        WoodCrash4[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_05",
            1.9952624,
            1,
            75
        };
        WoodCrash5[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_06",
            1.9952624,
            1,
            75
        };
        WoodCrash6[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_07",
            1.9952624,
            1,
            75
        };
        WoodCrash7[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_08",
            1.9952624,
            1,
            75
        };
        soundWoodCrash[] = {
            "woodCrash0",
            0.125,
            "woodCrash1",
            0.125,
            "woodCrash2",
            0.125,
            "woodCrash3",
            0.125,
            "woodCrash4",
            0.125,
            "woodCrash5",
            0.125,
            "woodCrash6",
            0.125,
            "woodCrash7",
            0.125
        };
        armorCrash0[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_01",
            1.9952624,
            1,
            75
        };
        armorCrash1[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_02",
            1.9952624,
            1,
            75
        };
        armorCrash2[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_03",
            1.9952624,
            1,
            75
        };
        armorCrash3[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_04",
            1.9952624,
            1,
            75
        };
        armorCrash4[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_05",
            1.9952624,
            1,
            75
        };
        armorCrash5[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_06",
            1.9952624,
            1,
            75
        };
        armorCrash6[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_07",
            1.9952624,
            1,
            75
        };
        armorCrash7[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_08",
            1.9952624,
            1,
            75
        };
        soundArmorCrash[] = {
            "ArmorCrash0",
            0.125,
            "ArmorCrash1",
            0.125,
            "ArmorCrash2",
            0.125,
            "ArmorCrash3",
            0.125,
            "ArmorCrash4",
            0.125,
            "ArmorCrash5",
            0.125,
            "ArmorCrash6",
            0.125,
            "ArmorCrash7",
            0.125
        };
        Crash0[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_01",
            1.9952624,
            1,
            75
        };
        Crash1[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_02",
            1.9952624,
            1,
            75
        };
        Crash2[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_03",
            1.9952624,
            1,
            75
        };
        Crash3[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_04",
            1.9952624,
            1,
            75
        };
        Crash4[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_05",
            1.9952624,
            1,
            75
        };
        Crash5[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_06",
            1.9952624,
            1,
            75
        };
        Crash6[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_07",
            1.9952624,
            1,
            75
        };
        Crash7[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_08",
            1.9952624,
            1,
            75
        };
        soundCrashes[] = {
            "Crash0",
            0.125,
            "Crash1",
            0.125,
            "Crash2",
            0.125,
            "Crash3",
            0.125,
            "Crash4",
            0.125,
            "Crash5",
            0.125,
            "Crash6",
            0.125,
            "Crash7",
            0.125
        };
        BushCrash1[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Light_Bush_01",
            0.63095737,
            1,
            50
        };
        BushCrash2[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Light_Bush_02",
            0.63095737,
            1,
            50
        };
        BushCrash3[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Light_Bush_03",
            0.63095737,
            1,
            50
        };
        BushCrash4[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Light_Bush_03",
            0.63095737,
            0.8,
            50
        };
        soundBushCrash[] = {
            "BushCrash1",
            0.25,
            "BushCrash2",
            0.25,
            "BushCrash3",
            0.25,
            "BushCrash4",
            0.25
        };
        class Sounds {
            soundSetsInt[] = {
                "RHS_gaz66_Engine_RPM0_INT_SoundSet",
                "RHS_gaz66_Engine_RPM1_INT_SoundSet",
                "RHS_gaz66_Engine_RPM2_INT_SoundSet",
                "RHS_gaz66_Engine_RPM3_INT_SoundSet",
                "RHS_gaz66_Rattling_INT_SoundSet",
                "RHS_gaz66_Stress_INT_SoundSet",
                "RHS_gaz66_Rain_INT_SoundSet",
                "RHS_gaz66_Tires_Rock_Fast_INT_SoundSet",
                "RHS_gaz66_Tires_Grass_Fast_INT_SoundSet",
                "RHS_gaz66_Tires_Sand_Fast_INT_SoundSet",
                "RHS_gaz66_Tires_Gravel_Fast_INT_SoundSet",
                "RHS_gaz66_Tires_Mud_Fast_INT_SoundSet",
                "RHS_gaz66_Tires_Asphalt_Fast_INT_SoundSet",
                "RHS_gaz66_Tires_Water_Fast_INT_SoundSet",
                "RHS_gaz66_Tires_Rock_Slow_INT_SoundSet",
                "RHS_gaz66_Tires_Grass_Slow_INT_SoundSet",
                "RHS_gaz66_Tires_Sand_Slow_INT_SoundSet",
                "RHS_gaz66_Tires_Gravel_Slow_INT_SoundSet",
                "RHS_gaz66_Tires_Mud_Slow_INT_SoundSet",
                "RHS_gaz66_Tires_Asphalt_Slow_INT_SoundSet",
                "RHS_gaz66_Tires_Water_Slow_INT_SoundSet",
                "RHS_gaz66_Tires_Turn_Hard_INT_SoundSet",
                "RHS_gaz66_Tires_Turn_Soft_INT_SoundSet",
                "RHS_gaz66_Tires_Brake_Hard_INT_SoundSet",
                "RHS_gaz66_Tires_Brake_Soft_INT_SoundSet"
            };
            soundSetsExt[] = {
                "RHS_gaz66_Engine_RPM0_EXT_SoundSet",
                "RHS_gaz66_Engine_RPM1_EXT_SoundSet",
                "RHS_gaz66_Engine_RPM2_EXT_SoundSet",
                "RHS_gaz66_Engine_RPM3_EXT_SoundSet",
                "RHS_gaz66_Rattling_EXT_SoundSet",
                "RHS_gaz66_Stress_EXT_SoundSet",
                "RHS_gaz66_Rain_EXT_SoundSet",
                "RHS_gaz66_Tires_Rock_Fast_EXT_SoundSet",
                "RHS_gaz66_Tires_Grass_Fast_EXT_SoundSet",
                "RHS_gaz66_Tires_Sand_Fast_EXT_SoundSet",
                "RHS_gaz66_Tires_Gravel_Fast_EXT_SoundSet",
                "RHS_gaz66_Tires_Mud_Fast_EXT_SoundSet",
                "RHS_gaz66_Tires_Asphalt_Fast_EXT_SoundSet",
                "RHS_gaz66_Tires_Water_Fast_EXT_SoundSet",
                "RHS_gaz66_Tires_Rock_Slow_EXT_SoundSet",
                "RHS_gaz66_Tires_Grass_Slow_EXT_SoundSet",
                "RHS_gaz66_Tires_Sand_Slow_EXT_SoundSet",
                "RHS_gaz66_Tires_Gravel_Slow_EXT_SoundSet",
                "RHS_gaz66_Tires_Mud_Slow_EXT_SoundSet",
                "RHS_gaz66_Tires_Asphalt_Slow_EXT_SoundSet",
                "RHS_gaz66_Tires_Water_Slow_EXT_SoundSet",
                "RHS_gaz66_Tires_Turn_Hard_EXT_SoundSet",
                "RHS_gaz66_Tires_Turn_Soft_EXT_SoundSet",
                "RHS_gaz66_Tires_Brake_Hard_EXT_SoundSet",
                "RHS_gaz66_Tires_Brake_Soft_EXT_SoundSet"
            };
        };
    };
    class RHS_Ural_BaseTurret: Truck_F {
        attenuationEffectType = "TruckAttenuation";
        soundDammage[] = {"", 0.56234133, 1};
        soundGetIn[] = {
            "rhsafrf\addons\rhs_vehiclesounds\sounds\soft\ural4320\ural4320_engine_int_getout",
            1.7782794,
            1,
            9
        };
        soundGetOut[] = {
            "rhsafrf\addons\rhs_vehiclesounds\sounds\soft\ural4320\ural4320_engine_ext_getout",
            2.5118864,
            1,
            25
        };
        soundEngineOnInt[] = {"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\ural4320\ural4320_engine_int_start", 1.4125376, 1};
        soundEngineOnExt[] = {
            "rhsafrf\addons\rhs_vehiclesounds\sounds\soft\ural4320\ural4320_engine_ext_start",
            1.4125376,
            1,
            200
        };
        soundEngineOffInt[] = {"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\ural4320\ural4320_engine_int_stop", 1.4125376, 1};
        soundEngineOffExt[] = {
            "rhsafrf\addons\rhs_vehiclesounds\sounds\soft\ural4320\ural4320_engine_ext_stop",
            1.4125376,
            1,
            200
        };
        buildCrash0[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_01",
            1.9952624,
            1,
            75
        };
        buildCrash1[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_02",
            1.9952624,
            1,
            75
        };
        buildCrash2[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_03",
            1.9952624,
            1,
            75
        };
        buildCrash3[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_04",
            1.9952624,
            1,
            75
        };
        buildCrash4[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_05",
            1.9952624,
            1,
            75
        };
        buildCrash5[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_06",
            1.9952624,
            1,
            75
        };
        buildCrash6[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_07",
            1.9952624,
            1,
            75
        };
        buildCrash7[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_08",
            1.9952624,
            1,
            75
        };
        soundBuildingCrash[] = {
            "buildCrash0",
            0.125,
            "buildCrash1",
            0.125,
            "buildCrash2",
            0.125,
            "buildCrash3",
            0.125,
            "buildCrash4",
            0.125,
            "buildCrash5",
            0.125,
            "buildCrash6",
            0.125,
            "buildCrash7",
            0.125
        };
        WoodCrash0[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_01",
            1.9952624,
            1,
            75
        };
        WoodCrash1[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_02",
            1.9952624,
            1,
            75
        };
        WoodCrash2[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_03",
            1.9952624,
            1,
            75
        };
        WoodCrash3[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_04",
            1.9952624,
            1,
            75
        };
        WoodCrash4[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_05",
            1.9952624,
            1,
            75
        };
        WoodCrash5[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_06",
            1.9952624,
            1,
            75
        };
        WoodCrash6[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_07",
            1.9952624,
            1,
            75
        };
        WoodCrash7[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_08",
            1.9952624,
            1,
            75
        };
        soundWoodCrash[] = {
            "woodCrash0",
            0.125,
            "woodCrash1",
            0.125,
            "woodCrash2",
            0.125,
            "woodCrash3",
            0.125,
            "woodCrash4",
            0.125,
            "woodCrash5",
            0.125,
            "woodCrash6",
            0.125,
            "woodCrash7",
            0.125
        };
        armorCrash0[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_01",
            1.9952624,
            1,
            75
        };
        armorCrash1[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_02",
            1.9952624,
            1,
            75
        };
        armorCrash2[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_03",
            1.9952624,
            1,
            75
        };
        armorCrash3[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_04",
            1.9952624,
            1,
            75
        };
        armorCrash4[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_05",
            1.9952624,
            1,
            75
        };
        armorCrash5[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_06",
            1.9952624,
            1,
            75
        };
        armorCrash6[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_07",
            1.9952624,
            1,
            75
        };
        armorCrash7[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_08",
            1.9952624,
            1,
            75
        };
        soundArmorCrash[] = {
            "ArmorCrash0",
            0.125,
            "ArmorCrash1",
            0.125,
            "ArmorCrash2",
            0.125,
            "ArmorCrash3",
            0.125,
            "ArmorCrash4",
            0.125,
            "ArmorCrash5",
            0.125,
            "ArmorCrash6",
            0.125,
            "ArmorCrash7",
            0.125
        };
        Crash0[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_01",
            1.9952624,
            1,
            75
        };
        Crash1[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_02",
            1.9952624,
            1,
            75
        };
        Crash2[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_03",
            1.9952624,
            1,
            75
        };
        Crash3[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_04",
            1.9952624,
            1,
            75
        };
        Crash4[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_05",
            1.9952624,
            1,
            75
        };
        Crash5[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_06",
            1.9952624,
            1,
            75
        };
        Crash6[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_07",
            1.9952624,
            1,
            75
        };
        Crash7[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_08",
            1.9952624,
            1,
            75
        };
        soundCrashes[] = {
            "Crash0",
            0.125,
            "Crash1",
            0.125,
            "Crash2",
            0.125,
            "Crash3",
            0.125,
            "Crash4",
            0.125,
            "Crash5",
            0.125,
            "Crash6",
            0.125,
            "Crash7",
            0.125
        };
        BushCrash1[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Light_Bush_01",
            0.63095737,
            1,
            50
        };
        BushCrash2[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Light_Bush_02",
            0.63095737,
            1,
            50
        };
        BushCrash3[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Light_Bush_03",
            0.63095737,
            1,
            50
        };
        BushCrash4[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Light_Bush_03",
            0.63095737,
            0.8,
            50
        };
        soundBushCrash[] = {
            "BushCrash1",
            0.25,
            "BushCrash2",
            0.25,
            "BushCrash3",
            0.25,
            "BushCrash4",
            0.25
        };
        class Sounds {
            soundSetsInt[] = {
                "RHS_ural4320_Engine_RPM0_INT_SoundSet",
                "RHS_ural4320_Engine_RPM1_INT_SoundSet",
                "RHS_ural4320_Engine_RPM2_INT_SoundSet",
                "RHS_ural4320_Engine_INT_Burst_SoundSet",
                "RHS_ural4320_Rattling_INT_SoundSet",
                "RHS_ural4320_Stress_INT_SoundSet",
                "RHS_ural4320_Rain_INT_SoundSet",
                "RHS_ural4320_Tires_Rock_Fast_INT_SoundSet",
                "RHS_ural4320_Tires_Grass_Fast_INT_SoundSet",
                "RHS_ural4320_Tires_Sand_Fast_INT_SoundSet",
                "RHS_ural4320_Tires_Gravel_Fast_INT_SoundSet",
                "RHS_ural4320_Tires_Mud_Fast_INT_SoundSet",
                "RHS_ural4320_Tires_Asphalt_Fast_INT_SoundSet",
                "RHS_ural4320_Tires_Water_Fast_INT_SoundSet",
                "RHS_ural4320_Tires_Rock_Slow_INT_SoundSet",
                "RHS_ural4320_Tires_Grass_Slow_INT_SoundSet",
                "RHS_ural4320_Tires_Sand_Slow_INT_SoundSet",
                "RHS_ural4320_Tires_Gravel_Slow_INT_SoundSet",
                "RHS_ural4320_Tires_Mud_Slow_INT_SoundSet",
                "RHS_ural4320_Tires_Asphalt_Slow_INT_SoundSet",
                "RHS_ural4320_Tires_Water_Slow_INT_SoundSet",
                "RHS_ural4320_Tires_Turn_Hard_INT_SoundSet",
                "RHS_ural4320_Tires_Turn_Soft_INT_SoundSet",
                "RHS_ural4320_Tires_Brake_Hard_INT_SoundSet",
                "RHS_ural4320_Tires_Brake_Soft_INT_SoundSet"
            };
            soundSetsExt[] = {
                "RHS_ural4320_Engine_RPM0_EXT_SoundSet",
                "RHS_ural4320_Engine_RPM1_EXT_SoundSet",
                "RHS_ural4320_Engine_RPM2_EXT_SoundSet",
                "RHS_ural4320_Engine_EXT_Burst_SoundSet",
                "RHS_ural4320_Rattling_EXT_SoundSet",
                "RHS_ural4320_Stress_EXT_SoundSet",
                "RHS_ural4320_Rain_EXT_SoundSet",
                "RHS_ural4320_Tires_Rock_Fast_EXT_SoundSet",
                "RHS_ural4320_Tires_Grass_Fast_EXT_SoundSet",
                "RHS_ural4320_Tires_Sand_Fast_EXT_SoundSet",
                "RHS_ural4320_Tires_Gravel_Fast_EXT_SoundSet",
                "RHS_ural4320_Tires_Mud_Fast_EXT_SoundSet",
                "RHS_ural4320_Tires_Asphalt_Fast_EXT_SoundSet",
                "RHS_ural4320_Tires_Water_Fast_EXT_SoundSet",
                "RHS_ural4320_Tires_Rock_Slow_EXT_SoundSet",
                "RHS_ural4320_Tires_Grass_Slow_EXT_SoundSet",
                "RHS_ural4320_Tires_Sand_Slow_EXT_SoundSet",
                "RHS_ural4320_Tires_Gravel_Slow_EXT_SoundSet",
                "RHS_ural4320_Tires_Mud_Slow_EXT_SoundSet",
                "RHS_ural4320_Tires_Asphalt_Slow_EXT_SoundSet",
                "RHS_ural4320_Tires_Water_Slow_EXT_SoundSet",
                "RHS_ural4320_Tires_Turn_Hard_EXT_SoundSet",
                "RHS_ural4320_Tires_Turn_Soft_EXT_SoundSet",
                "RHS_ural4320_Tires_Brake_Hard_EXT_SoundSet",
                "RHS_ural4320_Tires_Brake_Soft_EXT_SoundSet"
            };
        };
    };
    class Offroad_01_base_F;
    class RHS_UAZ_Base: Offroad_01_base_F {
        attenuationEffectType = "SemiOpenCarAttenuation2";
        soundGetIn[] = {
            "rhsafrf\addons\rhs_vehiclesounds\sounds\soft\uaz469\ext-uaz469_engine-getin",
            1.5848932,
            1,
            9
        };
        soundGetOut[] = {
            "rhsafrf\addons\rhs_vehiclesounds\sounds\soft\uaz469\ext-uaz469_engine-getout",
            1.5848932,
            1,
            25
        };
        soundDammage[] = {"", 0.56234133, 1};
        soundEngineOnInt[] = {"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\uaz469\uaz469_engine_int_start1", 1.5848932, 1};
        soundEngineOnExt[] = {
            "rhsafrf\addons\rhs_vehiclesounds\sounds\soft\uaz469\uaz469_engine_ext_start1",
            1.4125376,
            1,
            200
        };
        soundEngineOffInt[] = {"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\uaz469\uaz469_engine_int_stop1", 1.5848932, 1};
        soundEngineOffExt[] = {
            "rhsafrf\addons\rhs_vehiclesounds\sounds\soft\uaz469\uaz469_engine_ext_stop1",
            1.4125376,
            1,
            200
        };
        buildCrash0[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_01",
            1.9952624,
            1,
            75
        };
        buildCrash1[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_02",
            1.9952624,
            1,
            75
        };
        buildCrash2[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_03",
            1.9952624,
            1,
            75
        };
        buildCrash3[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_04",
            1.9952624,
            1,
            75
        };
        buildCrash4[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_05",
            1.9952624,
            1,
            75
        };
        buildCrash5[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_06",
            1.9952624,
            1,
            75
        };
        buildCrash6[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_07",
            1.9952624,
            1,
            75
        };
        buildCrash7[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_08",
            1.9952624,
            1,
            75
        };
        soundBuildingCrash[] = {
            "buildCrash0",
            0.125,
            "buildCrash1",
            0.125,
            "buildCrash2",
            0.125,
            "buildCrash3",
            0.125,
            "buildCrash4",
            0.125,
            "buildCrash5",
            0.125,
            "buildCrash6",
            0.125,
            "buildCrash7",
            0.125
        };
        WoodCrash0[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_01",
            1.9952624,
            1,
            75
        };
        WoodCrash1[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_02",
            1.9952624,
            1,
            75
        };
        WoodCrash2[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_03",
            1.9952624,
            1,
            75
        };
        WoodCrash3[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_04",
            1.9952624,
            1,
            75
        };
        WoodCrash4[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_05",
            1.9952624,
            1,
            75
        };
        WoodCrash5[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_06",
            1.9952624,
            1,
            75
        };
        WoodCrash6[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_07",
            1.9952624,
            1,
            75
        };
        WoodCrash7[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_08",
            1.9952624,
            1,
            75
        };
        soundWoodCrash[] = {
            "woodCrash0",
            0.125,
            "woodCrash1",
            0.125,
            "woodCrash2",
            0.125,
            "woodCrash3",
            0.125,
            "woodCrash4",
            0.125,
            "woodCrash5",
            0.125,
            "woodCrash6",
            0.125,
            "woodCrash7",
            0.125
        };
        armorCrash0[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_01",
            1.9952624,
            1,
            75
        };
        armorCrash1[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_02",
            1.9952624,
            1,
            75
        };
        armorCrash2[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_03",
            1.9952624,
            1,
            75
        };
        armorCrash3[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_04",
            1.9952624,
            1,
            75
        };
        armorCrash4[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_05",
            1.9952624,
            1,
            75
        };
        armorCrash5[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_06",
            1.9952624,
            1,
            75
        };
        armorCrash6[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_07",
            1.9952624,
            1,
            75
        };
        armorCrash7[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_08",
            1.9952624,
            1,
            75
        };
        soundArmorCrash[] = {
            "ArmorCrash0",
            0.125,
            "ArmorCrash1",
            0.125,
            "ArmorCrash2",
            0.125,
            "ArmorCrash3",
            0.125,
            "ArmorCrash4",
            0.125,
            "ArmorCrash5",
            0.125,
            "ArmorCrash6",
            0.125,
            "ArmorCrash7",
            0.125
        };
        Crash0[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_01",
            1.9952624,
            1,
            75
        };
        Crash1[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_02",
            1.9952624,
            1,
            75
        };
        Crash2[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_03",
            1.9952624,
            1,
            75
        };
        Crash3[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_04",
            1.9952624,
            1,
            75
        };
        Crash4[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_05",
            1.9952624,
            1,
            75
        };
        Crash5[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_06",
            1.9952624,
            1,
            75
        };
        Crash6[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_07",
            1.9952624,
            1,
            75
        };
        Crash7[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_08",
            1.9952624,
            1,
            75
        };
        soundCrashes[] = {
            "Crash0",
            0.125,
            "Crash1",
            0.125,
            "Crash2",
            0.125,
            "Crash3",
            0.125,
            "Crash4",
            0.125,
            "Crash5",
            0.125,
            "Crash6",
            0.125,
            "Crash7",
            0.125
        };
        BushCrash1[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Light_Bush_01",
            0.63095737,
            1,
            50
        };
        BushCrash2[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Light_Bush_02",
            0.63095737,
            1,
            50
        };
        BushCrash3[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Light_Bush_03",
            0.63095737,
            1,
            50
        };
        BushCrash4[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Light_Bush_03",
            0.63095737,
            0.8,
            50
        };
        soundBushCrash[] = {
            "BushCrash1",
            0.25,
            "BushCrash2",
            0.25,
            "BushCrash3",
            0.25,
            "BushCrash4",
            0.25
        };
        class Sounds {
            soundSetsInt[] = {
                "RHS_UAZ469_Engine_RPM0_INT_SoundSet",
                "RHS_UAZ469_Engine_RPM1_INT_SoundSet",
                "RHS_UAZ469_Engine_RPM2_INT_SoundSet",
                "RHS_UAZ469_Engine_RPM3_INT_SoundSet",
                "RHS_UAZ469_Engine_INT_Burst_SoundSet",
                "RHS_UAZ469_Rattling_INT_SoundSet",
                "RHS_UAZ469_Stress_INT_SoundSet",
                "RHS_UAZ469_Rain_INT_SoundSet",
                "RHS_UAZ469_Tires_Rock_Fast_INT_SoundSet",
                "RHS_UAZ469_Tires_Grass_Fast_INT_SoundSet",
                "RHS_UAZ469_Tires_Sand_Fast_INT_SoundSet",
                "RHS_UAZ469_Tires_Gravel_Fast_INT_SoundSet",
                "RHS_UAZ469_Tires_Mud_Fast_INT_SoundSet",
                "RHS_UAZ469_Tires_Asphalt_Fast_INT_SoundSet",
                "RHS_UAZ469_Tires_Water_Fast_INT_SoundSet",
                "RHS_UAZ469_Tires_Rock_Slow_INT_SoundSet",
                "RHS_UAZ469_Tires_Grass_Slow_INT_SoundSet",
                "RHS_UAZ469_Tires_Sand_Slow_INT_SoundSet",
                "RHS_UAZ469_Tires_Gravel_Slow_INT_SoundSet",
                "RHS_UAZ469_Tires_Mud_Slow_INT_SoundSet",
                "RHS_UAZ469_Tires_Asphalt_Slow_INT_SoundSet",
                "RHS_UAZ469_Tires_Water_Slow_INT_SoundSet",
                "RHS_UAZ469_Tires_Turn_Hard_INT_SoundSet",
                "RHS_UAZ469_Tires_Turn_Soft_INT_SoundSet",
                "RHS_UAZ469_Tires_Brake_Hard_INT_SoundSet",
                "RHS_UAZ469_Tires_Brake_Soft_INT_SoundSet",
                "",
                "Tires_Movement_Dirt_Int_01_SoundSet"
            };
            soundSetsExt[] = {
                "RHS_UAZ469_Engine_RPM0_EXT_SoundSet",
                "RHS_UAZ469_Engine_RPM1_EXT_SoundSet",
                "RHS_UAZ469_Engine_RPM2_EXT_SoundSet",
                "RHS_UAZ469_Engine_RPM3_EXT_SoundSet",
                "RHS_UAZ469_Engine_EXT_Burst_SoundSet",
                "RHS_UAZ469_Rattling_EXT_SoundSet",
                "RHS_UAZ469_Stress_EXT_SoundSet",
                "RHS_UAZ469_Rain_EXT_SoundSet",
                "RHS_UAZ469_Tires_Rock_Fast_EXT_SoundSet",
                "RHS_UAZ469_Tires_Grass_Fast_EXT_SoundSet",
                "RHS_UAZ469_Tires_Sand_Fast_EXT_SoundSet",
                "RHS_UAZ469_Tires_Gravel_Fast_EXT_SoundSet",
                "RHS_UAZ469_Tires_Mud_Fast_EXT_SoundSet",
                "RHS_UAZ469_Tires_Asphalt_Fast_EXT_SoundSet",
                "RHS_UAZ469_Tires_Water_Fast_EXT_SoundSet",
                "RHS_UAZ469_Tires_Rock_Slow_EXT_SoundSet",
                "RHS_UAZ469_Tires_Grass_Slow_EXT_SoundSet",
                "RHS_UAZ469_Tires_Sand_Slow_EXT_SoundSet",
                "RHS_UAZ469_Tires_Gravel_Slow_EXT_SoundSet",
                "RHS_UAZ469_Tires_Mud_Slow_EXT_SoundSet",
                "RHS_UAZ469_Tires_Asphalt_Slow_EXT_SoundSet",
                "RHS_UAZ469_Tires_Water_Slow_EXT_SoundSet",
                "RHS_UAZ469_Tires_Turn_Hard_EXT_SoundSet",
                "RHS_UAZ469_Tires_Turn_Soft_EXT_SoundSet",
                "RHS_UAZ469_Tires_Brake_Hard_EXT_SoundSet",
                "RHS_UAZ469_Tires_Brake_Soft_EXT_SoundSet",
                "",
                "Tires_Movement_Dirt_Ext_01_SoundSet"
            };
        };
    };
};
class CfgSoundSets {
    class Engine_Base_EXT_SoundSet {
        sound3DProcessingType = "VehicleExt_3DProcessingType";
        distanceFilter = "softVehiclesDistanceFreqAttenuationFilter";
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        volumeFactor = 1;
        spatial = 1;
        loop = 1;
    };
    class Engine_Base_RPM0_EXT_SoundSet: Engine_Base_EXT_SoundSet {
        soundShaders[] = {"Engine_Base_RPM0_EXT_SoundShader"};
    };
    class Engine_Base_RPM1_EXT_SoundSet: Engine_Base_EXT_SoundSet {
        soundShaders[] = {"Engine_Base_RPM1_EXT_SoundShader"};
    };
    class Engine_Base_RPM2_EXT_SoundSet: Engine_Base_EXT_SoundSet {
        soundShaders[] = {"Engine_Base_RPM2_EXT_SoundShader"};
    };
    class Engine_Base_RPM3_EXT_SoundSet: Engine_Base_EXT_SoundSet {
        soundShaders[] = {"Engine_Base_RPM3_EXT_SoundShader"};
    };
    class Engine_Base_RPM4_EXT_SoundSet: Engine_Base_EXT_SoundSet {
        soundShaders[] = {"Engine_Base_RPM4_EXT_SoundShader"};
    };
    class Engine_Base_RPM5_EXT_SoundSet: Engine_Base_EXT_SoundSet {
        soundShaders[] = {"Engine_Base_RPM5_EXT_SoundShader"};
    };
    class Engine_Base_RPM6_EXT_SoundSet: Engine_Base_EXT_SoundSet {
        soundShaders[] = {"Engine_Base_RPM6_EXT_SoundShader"};
    };
    class Engine_Base_RPM7_EXT_SoundSet: Engine_Base_EXT_SoundSet {
        soundShaders[] = {"Engine_Base_RPM7_EXT_SoundShader"};
    };
    class Engine_Base_RPM8_EXT_SoundSet: Engine_Base_EXT_SoundSet {
        soundShaders[] = {"Engine_Base_RPM8_EXT_SoundShader"};
    };
    class Engine_Base_INT_SoundSet {
        sound3DProcessingType = "VehicleInt_Front_3DProcessingType";
        distanceFilter = "softVehiclesDistanceFreqAttenuationFilter";
        volumeFactor = 1;
        spatial = 0;
        loop = 1;
    };
    class Engine_Base_RPM0_INT_SoundSet: Engine_Base_INT_SoundSet {
        soundShaders[] = {"Engine_Base_RPM0_INT_SoundShader"};
    };
    class Engine_Base_RPM1_INT_SoundSet: Engine_Base_INT_SoundSet {
        soundShaders[] = {"Engine_Base_RPM1_INT_SoundShader"};
    };
    class Engine_Base_RPM2_INT_SoundSet: Engine_Base_INT_SoundSet {
        soundShaders[] = {"Engine_Base_RPM2_INT_SoundShader"};
    };
    class Engine_Base_RPM3_INT_SoundSet: Engine_Base_INT_SoundSet {
        soundShaders[] = {"Engine_Base_RPM3_INT_SoundShader"};
    };
    class Engine_Base_RPM4_INT_SoundSet: Engine_Base_INT_SoundSet {
        soundShaders[] = {"Engine_Base_RPM4_INT_SoundShader"};
    };
    class Engine_Base_RPM5_INT_SoundSet: Engine_Base_INT_SoundSet {
        soundShaders[] = {"Engine_Base_RPM5_INT_SoundShader"};
    };
    class Engine_Base_RPM6_INT_SoundSet: Engine_Base_INT_SoundSet {
        soundShaders[] = {"Engine_Base_RPM6_INT_SoundShader"};
    };
    class Engine_Base_RPM7_INT_SoundSet: Engine_Base_INT_SoundSet {
        soundShaders[] = {"Engine_Base_RPM7_INT_SoundShader"};
    };
    class Engine_Base_RPM8_INT_SoundSet: Engine_Base_INT_SoundSet {
        soundShaders[] = {"Engine_Base_RPM8_INT_SoundShader"};
    };
    class Base_Tires_Ext_SoundSet {
        sound3DProcessingType = "VehicleExt_3DProcessingType";
        distanceFilter = "softVehiclesDistanceFreqAttenuationFilter";
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        volumeFactor = 1;
        spatial = 1;
        loop = 1;
    };
    class Base_Tires_Rock_Fast_Ext_SoundSet: Base_Tires_Ext_SoundSet {
        soundShaders[] = {"General_Tires_Rock_Fast_Ext_SoundShader"};
    };
    class Base_Tires_Grass_Fast_Ext_SoundSet: Base_Tires_Ext_SoundSet {
        soundShaders[] = {"General_Tires_Grass_Fast_Ext_SoundShader"};
    };
    class Base_Tires_Sand_Fast_Ext_SoundSet: Base_Tires_Ext_SoundSet {
        soundShaders[] = {"General_Tires_Sand_Fast_Ext_SoundShader"};
    };
    class Base_Tires_Gravel_Fast_Ext_SoundSet: Base_Tires_Ext_SoundSet {
        soundShaders[] = {"General_Tires_Gravel_Fast_Ext_SoundShader"};
    };
    class Base_Tires_Mud_Fast_Ext_SoundSet: Base_Tires_Ext_SoundSet {
        soundShaders[] = {"General_Tires_Mud_Fast_Ext_SoundShader"};
    };
    class Base_Tires_Asphalt_Fast_Ext_SoundSet: Base_Tires_Ext_SoundSet {
        soundShaders[] = {"General_Tires_Asphalt_Fast_Ext_SoundShader"};
    };
    class Base_Tires_Water_Fast_Ext_SoundSet: Base_Tires_Ext_SoundSet {
        soundShaders[] = {"General_Tires_Water_Fast_Ext_SoundShader"};
    };
    class Base_Tires_Rock_Slow_Ext_SoundSet: Base_Tires_Ext_SoundSet {
        soundShaders[] = {"General_Tires_Rock_Slow_Ext_SoundShader"};
    };
    class Base_Tires_Grass_Slow_Ext_SoundSet: Base_Tires_Ext_SoundSet {
        soundShaders[] = {"General_Tires_Grass_Slow_Ext_SoundShader"};
    };
    class Base_Tires_Sand_Slow_Ext_SoundSet: Base_Tires_Ext_SoundSet {
        soundShaders[] = {"General_Tires_Sand_Slow_Ext_SoundShader"};
    };
    class Base_Tires_Gravel_Slow_Ext_SoundSet: Base_Tires_Ext_SoundSet {
        soundShaders[] = {"General_Tires_Gravel_Slow_Ext_SoundShader"};
    };
    class Base_Tires_Mud_Slow_Ext_SoundSet: Base_Tires_Ext_SoundSet {
        soundShaders[] = {"General_Tires_Mud_Slow_Ext_SoundShader"};
    };
    class Base_Tires_Asphalt_Slow_Ext_SoundSet: Base_Tires_Ext_SoundSet {
        soundShaders[] = {"General_Tires_Asphalt_Slow_Ext_SoundShader"};
    };
    class Base_Tires_Water_Slow_Ext_SoundSet: Base_Tires_Ext_SoundSet {
        soundShaders[] = {"General_Tires_Water_Slow_Ext_SoundShader"};
    };
    class Base_Tires_Int_SoundSet {
        sound3DProcessingType = "VehicleInt_Middle_3DProcessingType";
        distanceFilter = "softVehiclesDistanceFreqAttenuationFilter";
        volumeFactor = 1;
        spatial = 0;
        loop = 1;
    };
    class Base_Tires_Rock_Fast_Int_SoundSet: Base_Tires_Int_SoundSet {
        soundShaders[] = {"General_Tires_Rock_Fast_Int_SoundShader"};
    };
    class Base_Tires_Grass_Fast_Int_SoundSet: Base_Tires_Int_SoundSet {
        soundShaders[] = {"General_Tires_Grass_Fast_Int_SoundShader"};
    };
    class Base_Tires_Sand_Fast_Int_SoundSet: Base_Tires_Int_SoundSet {
        soundShaders[] = {"General_Tires_Sand_Fast_Int_SoundShader"};
    };
    class Base_Tires_Gravel_Fast_Int_SoundSet: Base_Tires_Int_SoundSet {
        soundShaders[] = {"General_Tires_Gravel_Fast_Int_SoundShader"};
    };
    class Base_Tires_Mud_Fast_Int_SoundSet: Base_Tires_Int_SoundSet {
        soundShaders[] = {"General_Tires_Mud_Fast_Int_SoundShader"};
    };
    class Base_Tires_Asphalt_Fast_Int_SoundSet: Base_Tires_Int_SoundSet {
        soundShaders[] = {"General_Tires_Asphalt_Fast_Int_SoundShader"};
    };
    class Base_Tires_Water_Fast_Int_SoundSet: Base_Tires_Int_SoundSet {
        soundShaders[] = {"General_Tires_Water_Fast_Int_SoundShader"};
    };
    class Base_Tires_Rock_Slow_Int_SoundSet: Base_Tires_Int_SoundSet {
        soundShaders[] = {"General_Tires_Rock_Slow_Int_SoundShader"};
    };
    class Base_Tires_Grass_Slow_Int_SoundSet: Base_Tires_Int_SoundSet {
        soundShaders[] = {"General_Tires_Grass_Slow_Int_SoundShader"};
    };
    class Base_Tires_Sand_Slow_Int_SoundSet: Base_Tires_Int_SoundSet {
        soundShaders[] = {"General_Tires_Sand_Slow_Int_SoundShader"};
    };
    class Base_Tires_Gravel_Slow_Int_SoundSet: Base_Tires_Int_SoundSet {
        soundShaders[] = {"General_Tires_Gravel_Slow_Int_SoundShader"};
    };
    class Base_Tires_Mud_Slow_Int_SoundSet: Base_Tires_Int_SoundSet {
        soundShaders[] = {"General_Tires_Mud_Slow_Int_SoundShader"};
    };
    class Base_Tires_Asphalt_Slow_Int_SoundSet: Base_Tires_Int_SoundSet {
        soundShaders[] = {"General_Tires_Asphalt_Slow_Int_SoundShader"};
    };
    class Base_Tires_Water_Slow_Int_SoundSet: Base_Tires_Int_SoundSet {
        soundShaders[] = {"General_Tires_Water_Slow_Int_SoundShader"};
    };
    class Base_Tires_Open_SoundSet {
        sound3DProcessingType = "VehicleInt_Middle_3DProcessingType";
        distanceFilter = "softVehiclesDistanceFreqAttenuationFilter";
        volumeFactor = 1;
        spatial = 0;
        loop = 1;
    };
    class Base_Tires_Rock_Fast_Open_SoundSet: Base_Tires_Open_SoundSet {
        soundShaders[] = {"General_Tires_Rock_Fast_Open_SoundShader"};
    };
    class Base_Tires_Grass_Fast_Open_SoundSet: Base_Tires_Open_SoundSet {
        soundShaders[] = {"General_Tires_Grass_Fast_Open_SoundShader"};
    };
    class Base_Tires_Sand_Fast_Open_SoundSet: Base_Tires_Open_SoundSet {
        soundShaders[] = {"General_Tires_Sand_Fast_Open_SoundShader"};
    };
    class Base_Tires_Gravel_Fast_Open_SoundSet: Base_Tires_Open_SoundSet {
        soundShaders[] = {"General_Tires_Gravel_Fast_Open_SoundShader"};
    };
    class Base_Tires_Mud_Fast_Open_SoundSet: Base_Tires_Open_SoundSet {
        soundShaders[] = {"General_Tires_Mud_Fast_Open_SoundShader"};
    };
    class Base_Tires_Asphalt_Fast_Open_SoundSet: Base_Tires_Open_SoundSet {
        soundShaders[] = {"General_Tires_Asphalt_Fast_Open_SoundShader"};
    };
    class Base_Tires_Water_Fast_Open_SoundSet: Base_Tires_Open_SoundSet {
        soundShaders[] = {"General_Tires_Water_Fast_Open_SoundShader"};
    };
    class Base_Tires_Rock_Slow_Open_SoundSet: Base_Tires_Open_SoundSet {
        soundShaders[] = {"General_Tires_Rock_Slow_Open_SoundShader"};
    };
    class Base_Tires_Grass_Slow_Open_SoundSet: Base_Tires_Open_SoundSet {
        soundShaders[] = {"General_Tires_Grass_Slow_Open_SoundShader"};
    };
    class Base_Tires_Sand_Slow_Open_SoundSet: Base_Tires_Open_SoundSet {
        soundShaders[] = {"General_Tires_Sand_Slow_Open_SoundShader"};
    };
    class Base_Tires_Gravel_Slow_Open_SoundSet: Base_Tires_Open_SoundSet {
        soundShaders[] = {"General_Tires_Gravel_Slow_Open_SoundShader"};
    };
    class Base_Tires_Mud_Slow_Open_SoundSet: Base_Tires_Open_SoundSet {
        soundShaders[] = {"General_Tires_Mud_Slow_Open_SoundShader"};
    };
    class Base_Tires_Asphalt_Slow_Open_SoundSet: Base_Tires_Open_SoundSet {
        soundShaders[] = {"General_Tires_Asphalt_Slow_Open_SoundShader"};
    };
    class Base_Tires_Water_Slow_Open_SoundSet: Base_Tires_Open_SoundSet {
        soundShaders[] = {"General_Tires_Water_Slow_Open_SoundShader"};
    };
    class Base_Tracks_EXT_SoundSet {
        sound3DProcessingType = "VehicleExt_3DProcessingType";
        distanceFilter = "softVehiclesDistanceFreqAttenuationFilter";
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        volumeFactor = 1;
        spatial = 1;
        loop = 1;
    };
    class Base_Tracks_01_EXT_SoundSet: Base_Tracks_EXT_SoundSet {
        soundShaders[] = {"Base_Tracks_01_EXT_SoundShader"};
    };
    class Base_Tracks_02_EXT_SoundSet: Base_Tracks_EXT_SoundSet {
        soundShaders[] = {"Base_Tracks_02_EXT_SoundShader"};
    };
    class Base_Tracks_03_EXT_SoundSet: Base_Tracks_EXT_SoundSet {
        soundShaders[] = {"Base_Tracks_03_EXT_SoundShader"};
    };
    class Base_Tracks_04_EXT_SoundSet: Base_Tracks_EXT_SoundSet {
        soundShaders[] = {"Base_Tracks_04_EXT_SoundShader"};
    };
    class Base_Tracks_05_EXT_SoundSet: Base_Tracks_EXT_SoundSet {
        soundShaders[] = {"Base_Tracks_05_EXT_SoundShader"};
    };
    class Base_Tracks_06_EXT_SoundSet: Base_Tracks_EXT_SoundSet {
        soundShaders[] = {"Base_Tracks_06_EXT_SoundShader"};
    };
    class Base_Tracks_Brake_Hard_EXT_SoundSet: Base_Tracks_EXT_SoundSet {
        soundShaders[] = {"Base_Tracks_Brake_Hard_EXT_SoundShader"};
    };
    class Base_Tracks_Brake_Soft_EXT_SoundSet: Base_Tracks_EXT_SoundSet {
        soundShaders[] = {"Base_Tracks_Brake_Soft_EXT_SoundShader"};
    };
    class Base_Tracks_Turn_Hard_EXT_SoundSet: Base_Tracks_EXT_SoundSet {
        soundShaders[] = {"Base_Tracks_Turn_Hard_EXT_SoundShader"};
    };
    class Base_Tracks_Turn_Soft_EXT_SoundSet: Base_Tracks_EXT_SoundSet {
        soundShaders[] = {"Base_Tracks_Turn_Soft_EXT_SoundShader"};
    };
    class Base_Drive_Water_EXT_SoundSet {
        sound3DProcessingType = "VehicleExt_3DProcessingType";
        distanceFilter = "softVehiclesDistanceFreqAttenuationFilter";
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        volumeFactor = 1;
        spatial = 1;
        loop = 1;
    };
    class Base_Drive_Dirt_EXT_SoundSet {
        sound3DProcessingType = "VehicleExt_3DProcessingType";
        distanceFilter = "softVehiclesDistanceFreqAttenuationFilter";
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        volumeFactor = 1;
        spatial = 1;
        loop = 1;
    };
    class Base_Tracks_INT_SoundSet {
        sound3DProcessingType = "VehicleInt_Middle_3DProcessingType";
        distanceFilter = "softVehiclesDistanceFreqAttenuationFilter";
        volumeFactor = 1;
        spatial = 0;
        loop = 1;
    };
    class Base_Tracks_01_INT_SoundSet: Base_Tracks_INT_SoundSet {
        soundShaders[] = {"Base_Tracks_01_INT_SoundShader"};
    };
    class Base_Tracks_02_INT_SoundSet: Base_Tracks_INT_SoundSet {
        soundShaders[] = {"Base_Tracks_02_INT_SoundShader"};
    };
    class Base_Tracks_03_INT_SoundSet: Base_Tracks_INT_SoundSet {
        soundShaders[] = {"Base_Tracks_03_INT_SoundShader"};
    };
    class Base_Tracks_04_INT_SoundSet: Base_Tracks_INT_SoundSet {
        soundShaders[] = {"Base_Tracks_04_INT_SoundShader"};
    };
    class Base_Tracks_05_INT_SoundSet: Base_Tracks_INT_SoundSet {
        soundShaders[] = {"Base_Tracks_05_INT_SoundShader"};
    };
    class Base_Tracks_06_INT_SoundSet: Base_Tracks_INT_SoundSet {
        soundShaders[] = {"Base_Tracks_06_INT_SoundShader"};
    };
    class Base_Tracks_Brake_Hard_INT_SoundSet: Base_Tracks_INT_SoundSet {
        soundShaders[] = {"Base_Tracks_Brake_Hard_INT_SoundShader"};
    };
    class Base_Tracks_Brake_Soft_INT_SoundSet: Base_Tracks_INT_SoundSet {
        soundShaders[] = {"Base_Tracks_Brake_Soft_INT_SoundShader"};
    };
    class Base_Tracks_Turn_Hard_INT_SoundSet: Base_Tracks_INT_SoundSet {
        soundShaders[] = {"Base_Tracks_Turn_Hard_INT_SoundShader"};
    };
    class Base_Tracks_Turn_Soft_INT_SoundSet: Base_Tracks_INT_SoundSet {
        soundShaders[] = {"Base_Tracks_Turn_Soft_INT_SoundShader"};
    };
    class Base_Drive_Water_INT_SoundSet {
        sound3DProcessingType = "VehicleInt_Front_3DProcessingType";
        distanceFilter = "softVehiclesDistanceFreqAttenuationFilter";
        volumeFactor = 1;
        spatial = 0;
        loop = 1;
    };
    class Base_Drive_Dirt_INT_SoundSet {
        sound3DProcessingType = "VehicleInt_Front_3DProcessingType";
        distanceFilter = "softVehiclesDistanceFreqAttenuationFilter";
        volumeFactor = 1;
        spatial = 0;
        loop = 1;
    };
    class Vehicle_Base_Body_INT_SoundSet;
    class RHS_Vehicle_Base_Body_INT_SoundSet: Vehicle_Base_Body_INT_SoundSet {
        sound3DProcessingType = "VehicleInt_Middle_3DProcessingType";
        distanceFilter = "softVehiclesDistanceFreqAttenuationFilter";
        volumeFactor = 1;
        spatial = 0;
        loop = 1;
    };
    class Vehicle_Base_Body_OPEN_SoundSet;
    class RHS_Vehicle_Base_Body_OPEN_SoundSet: Vehicle_Base_Body_OPEN_SoundSet {
        sound3DProcessingType = "VehicleInt_Middle_3DProcessingType";
        distanceFilter = "softVehiclesDistanceFreqAttenuationFilter";
        volumeFactor = 1;
        spatial = 0;
        loop = 1;
    };
    class Vehicle_Base_Body_EXT_SoundSet;
    class RHS_Vehicle_Base_Body_EXT_SoundSet: Vehicle_Base_Body_EXT_SoundSet {
        sound3DProcessingType = "VehicleExt_3DProcessingType";
        distanceFilter = "softVehiclesDistanceFreqAttenuationFilter";
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        volumeFactor = 1;
        spatial = 1;
        loop = 1;
    };
    class rhs_vehicle_autoloader_t72_int_SoundSet {
        soundShaders[] = {"rhs_vehicle_autoloader_t72_int_SoundShader"};
        volumeFactor = 1;
        volumeCurve = "LinearCurve";
        spatial = 1;
        doppler = 1;
        loop = 0;
        sound3DProcessingType = "Launcher3DProcessingType";
        distanceFilter = "explosionDistanceFreqAttenuationFilter";
    };
    class rhs_vehicle_autoloader_t72_ext_SoundSet {
        soundShaders[] = {"rhs_vehicle_autoloader_t72_ext_SoundShader"};
        volumeFactor = 1;
        volumeCurve = "LinearCurve";
        spatial = 1;
        doppler = 1;
        loop = 0;
        sound3DProcessingType = "Launcher3DProcessingType";
        distanceFilter = "explosionDistanceFreqAttenuationFilter";
    };
    class RHS_2S1_Engine_RPM0_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet {
        soundShaders[] = {"RHS_2S1_Engine_RPM0_EXT_SoundShader"};
        sound3DProcessingType = "VehicleExt_3DProcessingType";
        posOffset[] = {0.5, -0.7, 1};
        volumeFactor = 0.85;
    };
    class RHS_2S1_Engine_RPM1_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet {
        soundShaders[] = {"RHS_2S1_Engine_RPM1_EXT_SoundShader"};
        sound3DProcessingType = "VehicleExt_3DProcessingType";
        volumeCurve = "InverseSquare3Curve";
        posOffset[] = {0.5, -0.7, 1};
        volumeFactor = 0.95;
    };
    class RHS_2S1_Engine_RPM2_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet {
        soundShaders[] = {"RHS_2S1_Engine_RPM2_EXT_SoundShader"};
        sound3DProcessingType = "VehicleExt_3DProcessingType";
        volumeCurve = "InverseSquare3Curve";
        posOffset[] = {0.5, -0.7, 1};
        volumeFactor = 1.05;
    };
    class RHS_2S1_Engine_RPM3_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet {
        soundShaders[] = {"RHS_2S1_Engine_RPM3_EXT_SoundShader"};
        sound3DProcessingType = "VehicleExt_3DProcessingType";
        volumeCurve = "InverseSquare3Curve";
        posOffset[] = {0.5, -0.7, 1};
        volumeFactor = 1.1;
    };
    class RHS_2S1_Engine_RPM0_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet {
        soundShaders[] = {"RHS_2S1_Engine_RPM0_INT_SoundShader"};
        sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
        posOffset[] = {0, 0, 0};
        volumeFactor = 0.85;
    };
    class RHS_2S1_Engine_RPM1_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet {
        soundShaders[] = {"RHS_2S1_Engine_RPM1_INT_SoundShader"};
        sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
        volumeCurve = "InverseSquare3Curve";
        posOffset[] = {0, 0, 0};
        volumeFactor = 0.95;
    };
    class RHS_2S1_Engine_RPM2_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet {
        soundShaders[] = {"RHS_2S1_Engine_RPM2_INT_SoundShader"};
        sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
        volumeCurve = "InverseSquare3Curve";
        posOffset[] = {0, 0, 0};
        volumeFactor = 1.05;
    };
    class RHS_2S1_Engine_RPM3_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet {
        soundShaders[] = {"RHS_2S1_Engine_RPM3_INT_SoundShader"};
        sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
        volumeCurve = "InverseSquare3Curve";
        posOffset[] = {0, 0, 0};
        volumeFactor = 1.1;
    };
    class RHS_2S1_Engine_EXT_Burst_SoundSet {
        soundShaders[] = {"RHS_2S1_Engine_EXT_Burst_SoundShader"};
        playTrigger = "(thrust * (angVelocity factor[0.1,0]) * ((abs(speed)) factor[15,14.9]) - 0.5)";
        posOffset[] = {0.5, -0.7, 1};
        distanceFilter = "softVehiclesDistanceFreqAttenuationFilter";
        frequencyRandomizer = 1;
        frequencyRandomizerMin = 0;
        sound3DProcessingType = "VehicleExt_3DProcessingType";
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        volumeFactor = 1;
        spatial = 1;
        loop = 0;
    };
    class RHS_2S1_Engine_INT_Burst_SoundSet {
        soundShaders[] = {"RHS_2S1_Engine_INT_Burst_SoundShader"};
        playTrigger = "(thrust * (angVelocity factor[0.1,0]) * ((abs(speed)) factor[15,14.9]) - 0.5)";
        posOffset[] = {0, 0, 0};
        distanceFilter = "softVehiclesDistanceFreqAttenuationFilter";
        frequencyRandomizer = 1;
        frequencyRandomizerMin = 0;
        sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        volumeFactor = 1;
        spatial = 1;
        loop = 0;
    };
    class RHS_2S1_Tracks_01_EXT_SoundSet: Base_Tracks_01_EXT_SoundSet {
        soundShaders[] = {"RHS_2S1_Tracks_01_EXT_SoundShader"};
        posOffset[] = {0, -0.7, -1};
    };
    class RHS_2S1_Tracks_02_EXT_SoundSet: Base_Tracks_02_EXT_SoundSet {
        soundShaders[] = {"RHS_2S1_Tracks_02_EXT_SoundShader"};
        posOffset[] = {0, -0.7, -1};
    };
    class RHS_2S1_Tracks_03_EXT_SoundSet: Base_Tracks_03_EXT_SoundSet {
        soundShaders[] = {"RHS_2S1_Tracks_03_EXT_SoundShader"};
        posOffset[] = {0, -0.7, -1};
    };
    class RHS_2S1_Tracks_04_EXT_SoundSet: Base_Tracks_04_EXT_SoundSet {
        soundShaders[] = {"RHS_2S1_Tracks_04_EXT_SoundShader"};
        posOffset[] = {0, -0.7, -1};
    };
    class RHS_2S1_Tracks_05_EXT_SoundSet: Base_Tracks_05_EXT_SoundSet {
        soundShaders[] = {"RHS_2S1_Tracks_05_EXT_SoundShader"};
        posOffset[] = {0, -0.7, -1};
    };
    class RHS_2S1_Tracks_06_EXT_SoundSet: Base_Tracks_06_EXT_SoundSet {
        soundShaders[] = {"RHS_2S1_Tracks_06_EXT_SoundShader"};
        posOffset[] = {0, -0.7, -1};
    };
    class RHS_2S1_Tracks_Brake_Hard_EXT_SoundSet: Base_Tracks_Brake_Hard_EXT_SoundSet {
        soundShaders[] = {"RHS_2S1_Tracks_Brake_Hard_EXT_SoundShader"};
        posOffset[] = {0, -0.7, -1};
    };
    class RHS_2S1_Tracks_Brake_Soft_EXT_SoundSet: Base_Tracks_Brake_Soft_EXT_SoundSet {
        soundShaders[] = {"RHS_2S1_Tracks_Brake_Soft_EXT_SoundShader"};
        posOffset[] = {0, -0.7, -1};
    };
    class RHS_2S1_Tracks_Turn_Hard_EXT_SoundSet: Base_Tracks_Turn_Hard_EXT_SoundSet {
        soundShaders[] = {"RHS_2S1_Tracks_Turn_Hard_EXT_SoundShader"};
        posOffset[] = {0, -0.7, -1};
    };
    class RHS_2S1_Tracks_Turn_Soft_EXT_SoundSet: Base_Tracks_Turn_Soft_EXT_SoundSet {
        soundShaders[] = {"RHS_2S1_Tracks_Turn_Soft_EXT_SoundShader"};
        posOffset[] = {0, -0.7, -1};
    };
    class RHS_2S1_Drive_Water_EXT_SoundSet: Base_Drive_Water_EXT_SoundSet {
        soundShaders[] = {"RHS_2S1_Drive_Water_EXT_SoundShader"};
        posOffset[] = {0, -0.7, -1};
    };
    class RHS_2S1_Drive_Dirt_EXT_SoundSet: Base_Drive_Dirt_EXT_SoundSet {
        soundShaders[] = {"RHS_2S1_Drive_Dirt_EXT_SoundShader"};
        posOffset[] = {0, -0.7, -1};
    };
    class RHS_2S1_Tracks_01_INT_SoundSet: Base_Tracks_01_INT_SoundSet {
        soundShaders[] = {"RHS_2S1_Tracks_01_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_2S1_Tracks_02_INT_SoundSet: Base_Tracks_02_INT_SoundSet {
        soundShaders[] = {"RHS_2S1_Tracks_02_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_2S1_Tracks_03_INT_SoundSet: Base_Tracks_03_INT_SoundSet {
        soundShaders[] = {"RHS_2S1_Tracks_03_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_2S1_Tracks_04_INT_SoundSet: Base_Tracks_04_INT_SoundSet {
        soundShaders[] = {"RHS_2S1_Tracks_04_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_2S1_Tracks_05_INT_SoundSet: Base_Tracks_05_INT_SoundSet {
        soundShaders[] = {"RHS_2S1_Tracks_05_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_2S1_Tracks_06_INT_SoundSet: Base_Tracks_06_INT_SoundSet {
        soundShaders[] = {"RHS_2S1_Tracks_06_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_2S1_Tracks_Brake_Hard_INT_SoundSet: Base_Tracks_Brake_Hard_INT_SoundSet {
        soundShaders[] = {"RHS_2S1_Tracks_Brake_Hard_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_2S1_Tracks_Brake_Soft_INT_SoundSet: Base_Tracks_Brake_Soft_INT_SoundSet {
        soundShaders[] = {"RHS_2S1_Tracks_Brake_Soft_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_2S1_Tracks_Turn_Hard_INT_SoundSet: Base_Tracks_Turn_Hard_INT_SoundSet {
        soundShaders[] = {"RHS_2S1_Tracks_Turn_Hard_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_2S1_Tracks_Turn_Soft_INT_SoundSet: Base_Tracks_Turn_Soft_INT_SoundSet {
        soundShaders[] = {"RHS_2S1_Tracks_Turn_Soft_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_2S1_Drive_Water_INT_SoundSet: Base_Drive_Water_INT_SoundSet {
        soundShaders[] = {"RHS_2S1_Drive_Water_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_2S1_Drive_Dirt_INT_SoundSet: Base_Drive_Dirt_INT_SoundSet {
        soundShaders[] = {"RHS_2S1_Drive_Dirt_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_2S1_Interior_Tone_Engine_Off_SoundSet: Vehicle_Base_Body_INT_SoundSet {
        soundShaders[] = {"RHS_2S1_Interior_Tone_Engine_Off_SoundShader"};
    };
    class RHS_2S1_Interior_Tone_Engine_On_SoundSet: Vehicle_Base_Body_INT_SoundSet {
        soundShaders[] = {"RHS_2S1_Interior_Tone_Engine_On_SoundShader"};
    };
    class RHS_2S1_Rattling_INT_SoundSet: Vehicle_Base_Body_INT_SoundSet {
        soundShaders[] = {"RHS_2S1_Rattling_INT_SoundShader"};
    };
    class RHS_2S1_Rain_INT_SoundSet: Vehicle_Base_Body_INT_SoundSet {
        soundShaders[] = {"RHS_2S1_Rain_INT_SoundShader"};
        sound3DProcessingType = "VehicleInt_Front_3DProcessingType";
    };
    class RHS_2S1_Rain_EXT_SoundSet: Vehicle_Base_Body_EXT_SoundSet {
        soundShaders[] = {"RHS_2S1_Rain_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_T72_Engine_RPM0_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet {
        soundShaders[] = {"RHS_T72_Engine_RPM0_EXT_SoundShader"};
        sound3DProcessingType = "VehicleExt_3DProcessingType";
        posOffset[] = {-0.5, -0.3, -4};
        volumeFactor = 0.85;
    };
    class RHS_T72_Engine_RPM1_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet {
        soundShaders[] = {"RHS_T72_Engine_RPM1_EXT_SoundShader"};
        sound3DProcessingType = "VehicleExt_3DProcessingType";
        volumeCurve = "InverseSquare3Curve";
        posOffset[] = {-0.5, -0.3, -4};
        volumeFactor = 1.35;
    };
    class RHS_T72_Engine_RPM2_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet {
        soundShaders[] = {"RHS_T72_Engine_RPM2_EXT_SoundShader"};
        sound3DProcessingType = "VehicleExt_3DProcessingType";
        volumeCurve = "InverseSquare3Curve";
        posOffset[] = {-0.5, -0.3, -4};
        volumeFactor = 1.45;
    };
    class RHS_T72_Engine_RPM0_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet {
        soundShaders[] = {"RHS_T72_Engine_RPM0_INT_SoundShader"};
        sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
        posOffset[] = {0, 0, 0};
        volumeFactor = 0.85;
    };
    class RHS_T72_Engine_RPM1_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet {
        soundShaders[] = {"RHS_T72_Engine_RPM1_INT_SoundShader"};
        sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
        volumeCurve = "InverseSquare3Curve";
        posOffset[] = {0, 0, 0};
        volumeFactor = 1.35;
    };
    class RHS_T72_Engine_RPM2_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet {
        soundShaders[] = {"RHS_T72_Engine_RPM2_INT_SoundShader"};
        sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
        volumeCurve = "InverseSquare3Curve";
        posOffset[] = {0, 0, 0};
        volumeFactor = 1.45;
    };
    class RHS_T72_Engine_EXT_Burst_SoundSet {
        soundShaders[] = {"RHS_T72_Engine_EXT_Burst_SoundShader"};
        playTrigger = "(thrust * (angVelocity factor[0.1,0]) * ((abs(speed)) factor[15,14.9]) - 0.5)";
        posOffset[] = {-0.5, -0.3, -4};
        distanceFilter = "softVehiclesDistanceFreqAttenuationFilter";
        frequencyRandomizer = 1;
        frequencyRandomizerMin = 0;
        sound3DProcessingType = "VehicleExt_3DProcessingType";
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        volumeFactor = 1;
        spatial = 1;
        loop = 0;
    };
    class RHS_T72_Engine_INT_Burst_SoundSet {
        soundShaders[] = {"RHS_T72_Engine_INT_Burst_SoundShader"};
        playTrigger = "(thrust * (angVelocity factor[0.1,0]) * ((abs(speed)) factor[15,14.9]) - 0.5)";
        posOffset[] = {0, 0, 0};
        distanceFilter = "softVehiclesDistanceFreqAttenuationFilter";
        frequencyRandomizer = 1;
        frequencyRandomizerMin = 0;
        sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        volumeFactor = 1;
        spatial = 1;
        loop = 0;
    };
    class RHS_T72_Tracks_01_EXT_SoundSet: Base_Tracks_01_EXT_SoundSet {
        soundShaders[] = {"RHS_T72_Tracks_01_EXT_SoundShader"};
        posOffset[] = {0, -0.7, -1};
    };
    class RHS_T72_Tracks_02_EXT_SoundSet: Base_Tracks_02_EXT_SoundSet {
        soundShaders[] = {"RHS_T72_Tracks_02_EXT_SoundShader"};
        posOffset[] = {0, -0.7, -1};
    };
    class RHS_T72_Tracks_03_EXT_SoundSet: Base_Tracks_03_EXT_SoundSet {
        soundShaders[] = {"RHS_T72_Tracks_03_EXT_SoundShader"};
        posOffset[] = {0, -0.7, -1};
    };
    class RHS_T72_Tracks_04_EXT_SoundSet: Base_Tracks_04_EXT_SoundSet {
        soundShaders[] = {"RHS_T72_Tracks_04_EXT_SoundShader"};
        posOffset[] = {0, -0.7, -1};
    };
    class RHS_T72_Tracks_05_EXT_SoundSet: Base_Tracks_05_EXT_SoundSet {
        soundShaders[] = {"RHS_T72_Tracks_05_EXT_SoundShader"};
        posOffset[] = {0, -0.7, -1};
    };
    class RHS_T72_Tracks_06_EXT_SoundSet: Base_Tracks_06_EXT_SoundSet {
        soundShaders[] = {"RHS_T72_Tracks_06_EXT_SoundShader"};
        posOffset[] = {0, -0.7, -1};
    };
    class RHS_T72_Tracks_Brake_Hard_EXT_SoundSet: Base_Tracks_Brake_Hard_EXT_SoundSet {
        soundShaders[] = {"RHS_T72_Tracks_Brake_Hard_EXT_SoundShader"};
        posOffset[] = {0, -0.7, -1};
    };
    class RHS_T72_Tracks_Brake_Soft_EXT_SoundSet: Base_Tracks_Brake_Soft_EXT_SoundSet {
        soundShaders[] = {"RHS_T72_Tracks_Brake_Soft_EXT_SoundShader"};
        posOffset[] = {0, -0.7, -1};
    };
    class RHS_T72_Tracks_Turn_Hard_EXT_SoundSet: Base_Tracks_Turn_Hard_EXT_SoundSet {
        soundShaders[] = {"RHS_T72_Tracks_Turn_Hard_EXT_SoundShader"};
        posOffset[] = {0, -0.7, -1};
    };
    class RHS_T72_Tracks_Turn_Soft_EXT_SoundSet: Base_Tracks_Turn_Soft_EXT_SoundSet {
        soundShaders[] = {"RHS_T72_Tracks_Turn_Soft_EXT_SoundShader"};
        posOffset[] = {0, -0.7, -1};
    };
    class RHS_T72_Drive_Water_EXT_SoundSet: Base_Drive_Water_EXT_SoundSet {
        soundShaders[] = {"RHS_T72_Drive_Water_EXT_SoundShader"};
        posOffset[] = {0, -0.7, -1};
    };
    class RHS_T72_Drive_Dirt_EXT_SoundSet: Base_Drive_Dirt_EXT_SoundSet {
        soundShaders[] = {"RHS_T72_Drive_Dirt_EXT_SoundShader"};
        posOffset[] = {0, -0.7, -1};
    };
    class RHS_T72_Tracks_01_INT_SoundSet: Base_Tracks_01_INT_SoundSet {
        soundShaders[] = {"RHS_T72_Tracks_01_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_T72_Tracks_02_INT_SoundSet: Base_Tracks_02_INT_SoundSet {
        soundShaders[] = {"RHS_T72_Tracks_02_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_T72_Tracks_03_INT_SoundSet: Base_Tracks_03_INT_SoundSet {
        soundShaders[] = {"RHS_T72_Tracks_03_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_T72_Tracks_04_INT_SoundSet: Base_Tracks_04_INT_SoundSet {
        soundShaders[] = {"RHS_T72_Tracks_04_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_T72_Tracks_05_INT_SoundSet: Base_Tracks_05_INT_SoundSet {
        soundShaders[] = {"RHS_T72_Tracks_05_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_T72_Tracks_06_INT_SoundSet: Base_Tracks_06_INT_SoundSet {
        soundShaders[] = {"RHS_T72_Tracks_06_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_T72_Tracks_Brake_Hard_INT_SoundSet: Base_Tracks_Brake_Hard_INT_SoundSet {
        soundShaders[] = {"RHS_T72_Tracks_Brake_Hard_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_T72_Tracks_Brake_Soft_INT_SoundSet: Base_Tracks_Brake_Soft_INT_SoundSet {
        soundShaders[] = {"RHS_T72_Tracks_Brake_Soft_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_T72_Tracks_Turn_Hard_INT_SoundSet: Base_Tracks_Turn_Hard_INT_SoundSet {
        soundShaders[] = {"RHS_T72_Tracks_Turn_Hard_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_T72_Tracks_Turn_Soft_INT_SoundSet: Base_Tracks_Turn_Soft_INT_SoundSet {
        soundShaders[] = {"RHS_T72_Tracks_Turn_Soft_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_T72_Drive_Water_INT_SoundSet: Base_Drive_Water_INT_SoundSet {
        soundShaders[] = {"RHS_T72_Drive_Water_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_T72_Drive_Dirt_INT_SoundSet: Base_Drive_Dirt_INT_SoundSet {
        soundShaders[] = {"RHS_T72_Drive_Dirt_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_T72_Interior_Tone_Engine_Off_SoundSet: Vehicle_Base_Body_INT_SoundSet {
        soundShaders[] = {"RHS_T72_Interior_Tone_Engine_Off_SoundShader"};
    };
    class RHS_T72_Interior_Tone_Engine_On_SoundSet: Vehicle_Base_Body_INT_SoundSet {
        soundShaders[] = {"RHS_T72_Interior_Tone_Engine_On_SoundShader"};
    };
    class RHS_T72_Rattling_INT_SoundSet: Vehicle_Base_Body_INT_SoundSet {
        soundShaders[] = {"RHS_T72_Rattling_INT_SoundShader"};
    };
    class RHS_T72_Rain_INT_SoundSet: Vehicle_Base_Body_INT_SoundSet {
        soundShaders[] = {"RHS_T72_Rain_INT_SoundShader"};
        sound3DProcessingType = "VehicleInt_Front_3DProcessingType";
    };
    class RHS_T72_Rain_EXT_SoundSet: Vehicle_Base_Body_EXT_SoundSet {
        soundShaders[] = {"RHS_T72_Rain_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_T80_Engine_RPM0_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet {
        soundShaders[] = {"RHS_T80_Engine_RPM0_EXT_SoundShader"};
        sound3DProcessingType = "VehicleExt_3DProcessingType";
        posOffset[] = {0, -0.2, -4.3};
        volumeFactor = 0.65;
    };
    class RHS_T80_Engine_RPM1_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet {
        soundShaders[] = {"RHS_T80_Engine_RPM1_EXT_SoundShader"};
        sound3DProcessingType = "VehicleExt_3DProcessingType";
        volumeCurve = "InverseSquare3Curve";
        posOffset[] = {0, -0.2, -4.3};
        volumeFactor = 0.75;
    };
    class RHS_T80_Engine_RPM2_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet {
        soundShaders[] = {"RHS_T80_Engine_RPM2_EXT_SoundShader"};
        sound3DProcessingType = "VehicleExt_3DProcessingType";
        volumeCurve = "InverseSquare3Curve";
        posOffset[] = {0, -0.2, -4.3};
        volumeFactor = 0.75;
    };
    class RHS_T80_Engine_RPM0_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet {
        soundShaders[] = {"RHS_T80_Engine_RPM0_INT_SoundShader"};
        sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
        posOffset[] = {0, 0, 0};
        volumeFactor = 0.65;
    };
    class RHS_T80_Engine_RPM1_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet {
        soundShaders[] = {"RHS_T80_Engine_RPM1_INT_SoundShader"};
        sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
        volumeCurve = "InverseSquare3Curve";
        posOffset[] = {0, 0, 0};
        volumeFactor = 0.75;
    };
    class RHS_T80_Engine_RPM2_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet {
        soundShaders[] = {"RHS_T80_Engine_RPM2_INT_SoundShader"};
        sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
        volumeCurve = "InverseSquare3Curve";
        posOffset[] = {0, 0, 0};
        volumeFactor = 0.75;
    };
    class RHS_T80_Engine_EXT_Burst_SoundSet {
        soundShaders[] = {"RHS_T80_Engine_EXT_Burst_SoundShader"};
        playTrigger = "(thrust * (angVelocity factor[0.1,0]) * ((abs(speed)) factor[15,14.9]) - 0.5)";
        posOffset[] = {0, -0.2, -4.3};
        distanceFilter = "softVehiclesDistanceFreqAttenuationFilter";
        frequencyRandomizer = 1;
        frequencyRandomizerMin = 0;
        sound3DProcessingType = "VehicleExt_3DProcessingType";
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        volumeFactor = 1;
        spatial = 1;
        loop = 0;
    };
    class RHS_T80_Engine_INT_Burst_SoundSet {
        soundShaders[] = {"RHS_T80_Engine_INT_Burst_SoundShader"};
        playTrigger = "(thrust * (angVelocity factor[0.1,0]) * ((abs(speed)) factor[15,14.9]) - 0.5)";
        posOffset[] = {0, 0, 0};
        distanceFilter = "softVehiclesDistanceFreqAttenuationFilter";
        frequencyRandomizer = 1;
        frequencyRandomizerMin = 0;
        sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        volumeFactor = 1;
        spatial = 1;
        loop = 0;
    };
    class RHS_T80_Tracks_01_EXT_SoundSet: Base_Tracks_01_EXT_SoundSet {
        soundShaders[] = {"RHS_T80_Tracks_01_EXT_SoundShader"};
        posOffset[] = {0, -0.7, -1};
    };
    class RHS_T80_Tracks_02_EXT_SoundSet: Base_Tracks_02_EXT_SoundSet {
        soundShaders[] = {"RHS_T80_Tracks_02_EXT_SoundShader"};
        posOffset[] = {0, -0.7, -1};
    };
    class RHS_T80_Tracks_03_EXT_SoundSet: Base_Tracks_03_EXT_SoundSet {
        soundShaders[] = {"RHS_T80_Tracks_03_EXT_SoundShader"};
        posOffset[] = {0, -0.7, -1};
    };
    class RHS_T80_Tracks_04_EXT_SoundSet: Base_Tracks_04_EXT_SoundSet {
        soundShaders[] = {"RHS_T80_Tracks_04_EXT_SoundShader"};
        posOffset[] = {0, -0.7, -1};
    };
    class RHS_T80_Tracks_05_EXT_SoundSet: Base_Tracks_05_EXT_SoundSet {
        soundShaders[] = {"RHS_T80_Tracks_05_EXT_SoundShader"};
        posOffset[] = {0, -0.7, -1};
    };
    class RHS_T80_Tracks_06_EXT_SoundSet: Base_Tracks_06_EXT_SoundSet {
        soundShaders[] = {"RHS_T80_Tracks_06_EXT_SoundShader"};
        posOffset[] = {0, -0.7, -1};
    };
    class RHS_T80_Tracks_Brake_Hard_EXT_SoundSet: Base_Tracks_Brake_Hard_EXT_SoundSet {
        soundShaders[] = {"RHS_T80_Tracks_Brake_Hard_EXT_SoundShader"};
        posOffset[] = {0, -0.7, -1};
    };
    class RHS_T80_Tracks_Brake_Soft_EXT_SoundSet: Base_Tracks_Brake_Soft_EXT_SoundSet {
        soundShaders[] = {"RHS_T80_Tracks_Brake_Soft_EXT_SoundShader"};
        posOffset[] = {0, -0.7, -1};
    };
    class RHS_T80_Tracks_Turn_Hard_EXT_SoundSet: Base_Tracks_Turn_Hard_EXT_SoundSet {
        soundShaders[] = {"RHS_T80_Tracks_Turn_Hard_EXT_SoundShader"};
        posOffset[] = {0, -0.7, -1};
    };
    class RHS_T80_Tracks_Turn_Soft_EXT_SoundSet: Base_Tracks_Turn_Soft_EXT_SoundSet {
        soundShaders[] = {"RHS_T80_Tracks_Turn_Soft_EXT_SoundShader"};
        posOffset[] = {0, -0.7, -1};
    };
    class RHS_T80_Drive_Water_EXT_SoundSet: Base_Drive_Water_EXT_SoundSet {
        soundShaders[] = {"RHS_T80_Drive_Water_EXT_SoundShader"};
        posOffset[] = {0, -0.7, -1};
    };
    class RHS_T80_Drive_Dirt_EXT_SoundSet: Base_Drive_Dirt_EXT_SoundSet {
        soundShaders[] = {"RHS_T80_Drive_Dirt_EXT_SoundShader"};
        posOffset[] = {0, -0.7, -1};
    };
    class RHS_T80_Tracks_01_INT_SoundSet: Base_Tracks_01_INT_SoundSet {
        soundShaders[] = {"RHS_T80_Tracks_01_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_T80_Tracks_02_INT_SoundSet: Base_Tracks_02_INT_SoundSet {
        soundShaders[] = {"RHS_T80_Tracks_02_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_T80_Tracks_03_INT_SoundSet: Base_Tracks_03_INT_SoundSet {
        soundShaders[] = {"RHS_T80_Tracks_03_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_T80_Tracks_04_INT_SoundSet: Base_Tracks_04_INT_SoundSet {
        soundShaders[] = {"RHS_T80_Tracks_04_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_T80_Tracks_05_INT_SoundSet: Base_Tracks_05_INT_SoundSet {
        soundShaders[] = {"RHS_T80_Tracks_05_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_T80_Tracks_06_INT_SoundSet: Base_Tracks_06_INT_SoundSet {
        soundShaders[] = {"RHS_T80_Tracks_06_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_T80_Tracks_Brake_Hard_INT_SoundSet: Base_Tracks_Brake_Hard_INT_SoundSet {
        soundShaders[] = {"RHS_T80_Tracks_Brake_Hard_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_T80_Tracks_Brake_Soft_INT_SoundSet: Base_Tracks_Brake_Soft_INT_SoundSet {
        soundShaders[] = {"RHS_T80_Tracks_Brake_Soft_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_T80_Tracks_Turn_Hard_INT_SoundSet: Base_Tracks_Turn_Hard_INT_SoundSet {
        soundShaders[] = {"RHS_T80_Tracks_Turn_Hard_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_T80_Tracks_Turn_Soft_INT_SoundSet: Base_Tracks_Turn_Soft_INT_SoundSet {
        soundShaders[] = {"RHS_T80_Tracks_Turn_Soft_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_T80_Drive_Water_INT_SoundSet: Base_Drive_Water_INT_SoundSet {
        soundShaders[] = {"RHS_T80_Drive_Water_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_T80_Drive_Dirt_INT_SoundSet: Base_Drive_Dirt_INT_SoundSet {
        soundShaders[] = {"RHS_T80_Drive_Dirt_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_T80_Interior_Tone_Engine_Off_SoundSet: Vehicle_Base_Body_INT_SoundSet {
        soundShaders[] = {"RHS_T80_Interior_Tone_Engine_Off_SoundShader"};
    };
    class RHS_T80_Interior_Tone_Engine_On_SoundSet: Vehicle_Base_Body_INT_SoundSet {
        soundShaders[] = {"RHS_T80_Interior_Tone_Engine_On_SoundShader"};
    };
    class RHS_T80_Rattling_INT_SoundSet: Vehicle_Base_Body_INT_SoundSet {
        soundShaders[] = {"RHS_T80_Rattling_INT_SoundShader"};
    };
    class RHS_T80_Rain_INT_SoundSet: Vehicle_Base_Body_INT_SoundSet {
        soundShaders[] = {"RHS_T80_Rain_INT_SoundShader"};
        sound3DProcessingType = "VehicleInt_Front_3DProcessingType";
    };
    class RHS_T80_Rain_EXT_SoundSet: Vehicle_Base_Body_EXT_SoundSet {
        soundShaders[] = {"RHS_T80_Rain_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_UAZ469_Engine_RPM0_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet {
        soundShaders[] = {"RHS_UAZ469_Engine_RPM0_EXT_SoundShader"};
        sound3DProcessingType = "VehicleExt_3DProcessingType";
        posOffset[] = {0, -0.6, 1.2};
        volumeFactor = 0.79;
    };
    class RHS_UAZ469_Engine_RPM1_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet {
        soundShaders[] = {"RHS_UAZ469_Engine_RPM1_EXT_SoundShader"};
        sound3DProcessingType = "VehicleExt_3DProcessingType";
        volumeCurve = "InverseSquare2Curve";
        posOffset[] = {0, -0.6, 1.2};
        volumeFactor = 1;
    };
    class RHS_UAZ469_Engine_RPM2_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet {
        soundShaders[] = {"RHS_UAZ469_Engine_RPM2_EXT_SoundShader"};
        sound3DProcessingType = "VehicleExt_3DProcessingType";
        volumeCurve = "InverseSquare2Curve";
        posOffset[] = {0, -0.6, 1.2};
        volumeFactor = 1.2;
    };
    class RHS_UAZ469_Engine_RPM3_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet {
        soundShaders[] = {"RHS_UAZ469_Engine_RPM3_EXT_SoundShader"};
        sound3DProcessingType = "VehicleExt_3DProcessingType";
        volumeCurve = "InverseSquare2Curve";
        posOffset[] = {0, -0.6, 1.2};
        volumeFactor = 1.5;
    };
    class RHS_UAZ469_Engine_RPM0_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet {
        soundShaders[] = {"RHS_UAZ469_Engine_RPM0_INT_SoundShader"};
        sound3DProcessingType = "VehicleInt_Front_3DProcessingType";
        posOffset[] = {0, 0, 0};
        volumeFactor = 0.79;
    };
    class RHS_UAZ469_Engine_RPM1_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet {
        soundShaders[] = {"RHS_UAZ469_Engine_RPM1_INT_SoundShader"};
        sound3DProcessingType = "VehicleInt_Front_3DProcessingType";
        volumeCurve = "InverseSquare2Curve";
        posOffset[] = {0, 0, 0};
        volumeFactor = 1;
    };
    class RHS_UAZ469_Engine_RPM2_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet {
        soundShaders[] = {"RHS_UAZ469_Engine_RPM2_INT_SoundShader"};
        sound3DProcessingType = "VehicleInt_Front_3DProcessingType";
        volumeCurve = "InverseSquare2Curve";
        posOffset[] = {0, 0, 0};
        volumeFactor = 1.2;
    };
    class RHS_UAZ469_Engine_RPM3_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet {
        soundShaders[] = {"RHS_UAZ469_Engine_RPM3_INT_SoundShader"};
        sound3DProcessingType = "VehicleInt_Front_3DProcessingType";
        volumeCurve = "InverseSquare2Curve";
        posOffset[] = {0, 0, 0};
        volumeFactor = 1.5;
    };
    class RHS_UAZ469_Engine_EXT_Burst_SoundSet {
        soundShaders[] = {"RHS_UAZ469_Engine_EXT_Burst_SoundShader"};
        playTrigger = "(thrust * (((abs(speed)) factor[14,13.9]) - 0.1)) * (acceleration factor [0.02,0.03])";
        posOffset[] = {0, -0.6, 1.2};
        distanceFilter = "softVehiclesDistanceFreqAttenuationFilter";
        frequencyRandomizer = 1;
        frequencyRandomizerMin = 0;
        sound3DProcessingType = "VehicleExt_3DProcessingType";
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        volumeFactor = 1;
        spatial = 1;
        loop = 0;
    };
    class RHS_UAZ469_Engine_INT_Burst_SoundSet {
        soundShaders[] = {"RHS_UAZ469_Engine_INT_Burst_SoundShader"};
        playTrigger = "(thrust * (((abs(speed)) factor[14,13.9]) - 0.1)) * (acceleration factor [0.02,0.03])";
        posOffset[] = {0, 0, 0};
        distanceFilter = "softVehiclesDistanceFreqAttenuationFilter";
        frequencyRandomizer = 1;
        frequencyRandomizerMin = 0;
        sound3DProcessingType = "VehicleInt_Front_3DProcessingType";
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        volumeFactor = 1;
        spatial = 1;
        loop = 0;
    };
    class RHS_UAZ469_Tires_Rock_Fast_INT_SoundSet: Base_Tires_Rock_Fast_Int_SoundSet {
        soundShaders[] = {"RHS_UAZ469_Tires_Rock_Fast_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_UAZ469_Tires_Grass_Fast_INT_SoundSet: Base_Tires_Grass_Fast_Int_SoundSet {
        soundShaders[] = {"RHS_UAZ469_Tires_Grass_Fast_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_UAZ469_Tires_Sand_Fast_INT_SoundSet: Base_Tires_Sand_Fast_Int_SoundSet {
        soundShaders[] = {"RHS_UAZ469_Tires_Sand_Fast_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_UAZ469_Tires_Gravel_Fast_INT_SoundSet: Base_Tires_Gravel_Fast_Int_SoundSet {
        soundShaders[] = {"RHS_UAZ469_Tires_Gravel_Fast_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_UAZ469_Tires_Mud_Fast_INT_SoundSet: Base_Tires_Mud_Fast_Int_SoundSet {
        soundShaders[] = {"RHS_UAZ469_Tires_Mud_Fast_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_UAZ469_Tires_Asphalt_Fast_INT_SoundSet: Base_Tires_Asphalt_Fast_Int_SoundSet {
        soundShaders[] = {"RHS_UAZ469_Tires_Asphalt_Fast_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_UAZ469_Tires_Water_Fast_INT_SoundSet: Base_Tires_Water_Fast_Int_SoundSet {
        soundShaders[] = {"RHS_UAZ469_Tires_Water_Fast_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_UAZ469_Tires_Rock_Slow_INT_SoundSet: Base_Tires_Rock_Slow_Int_SoundSet {
        soundShaders[] = {"RHS_UAZ469_Tires_Rock_Slow_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_UAZ469_Tires_Grass_Slow_INT_SoundSet: Base_Tires_Grass_Slow_Int_SoundSet {
        soundShaders[] = {"RHS_UAZ469_Tires_Grass_Slow_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_UAZ469_Tires_Sand_Slow_INT_SoundSet: Base_Tires_Sand_Slow_Int_SoundSet {
        soundShaders[] = {"RHS_UAZ469_Tires_Sand_Slow_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_UAZ469_Tires_Gravel_Slow_INT_SoundSet: Base_Tires_Gravel_Slow_Int_SoundSet {
        soundShaders[] = {"RHS_UAZ469_Tires_Gravel_Slow_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_UAZ469_Tires_Mud_Slow_INT_SoundSet: Base_Tires_Mud_Slow_Int_SoundSet {
        soundShaders[] = {"RHS_UAZ469_Tires_Mud_Slow_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_UAZ469_Tires_Asphalt_Slow_INT_SoundSet: Base_Tires_Asphalt_Slow_Int_SoundSet {
        soundShaders[] = {"RHS_UAZ469_Tires_Asphalt_Slow_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_UAZ469_Tires_Water_Slow_INT_SoundSet: Base_Tires_Water_Slow_Int_SoundSet {
        soundShaders[] = {"RHS_UAZ469_Tires_Water_Slow_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_UAZ469_Tires_Turn_Hard_INT_SoundSet: Base_Tires_Int_SoundSet {
        soundShaders[] = {"RHS_UAZ469_Tires_Turn_Hard_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_UAZ469_Tires_Turn_Soft_INT_SoundSet: Base_Tires_Int_SoundSet {
        soundShaders[] = {"RHS_UAZ469_Tires_Turn_Soft_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_UAZ469_Tires_Brake_Hard_INT_SoundSet: Base_Tires_Int_SoundSet {
        soundShaders[] = {"RHS_UAZ469_Tires_Brake_Hard_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_UAZ469_Tires_Brake_Soft_INT_SoundSet: Base_Tires_Int_SoundSet {
        soundShaders[] = {"RHS_UAZ469_Tires_Brake_Soft_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_UAZ469_Tires_Rock_Fast_EXT_SoundSet: Base_Tires_Rock_Fast_Ext_SoundSet {
        soundShaders[] = {"RHS_UAZ469_Tires_Rock_Fast_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_UAZ469_Tires_Grass_Fast_EXT_SoundSet: Base_Tires_Grass_Fast_Ext_SoundSet {
        soundShaders[] = {"RHS_UAZ469_Tires_Grass_Fast_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_UAZ469_Tires_Sand_Fast_EXT_SoundSet: Base_Tires_Sand_Fast_Ext_SoundSet {
        soundShaders[] = {"RHS_UAZ469_Tires_Sand_Fast_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_UAZ469_Tires_Gravel_Fast_EXT_SoundSet: Base_Tires_Gravel_Fast_Ext_SoundSet {
        soundShaders[] = {"RHS_UAZ469_Tires_Gravel_Fast_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_UAZ469_Tires_Mud_Fast_EXT_SoundSet: Base_Tires_Mud_Fast_Ext_SoundSet {
        soundShaders[] = {"RHS_UAZ469_Tires_Mud_Fast_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_UAZ469_Tires_Asphalt_Fast_EXT_SoundSet: Base_Tires_Asphalt_Fast_Ext_SoundSet {
        soundShaders[] = {"RHS_UAZ469_Tires_Asphalt_Fast_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_UAZ469_Tires_Water_Fast_EXT_SoundSet: Base_Tires_Water_Fast_Ext_SoundSet {
        soundShaders[] = {"RHS_UAZ469_Tires_Water_Fast_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_UAZ469_Tires_Rock_Slow_EXT_SoundSet: Base_Tires_Rock_Slow_Ext_SoundSet {
        soundShaders[] = {"RHS_UAZ469_Tires_Rock_Slow_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_UAZ469_Tires_Grass_Slow_EXT_SoundSet: Base_Tires_Grass_Slow_Ext_SoundSet {
        soundShaders[] = {"RHS_UAZ469_Tires_Grass_Slow_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_UAZ469_Tires_Sand_Slow_EXT_SoundSet: Base_Tires_Sand_Slow_Ext_SoundSet {
        soundShaders[] = {"RHS_UAZ469_Tires_Sand_Slow_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_UAZ469_Tires_Gravel_Slow_EXT_SoundSet: Base_Tires_Gravel_Slow_Ext_SoundSet {
        soundShaders[] = {"RHS_UAZ469_Tires_Gravel_Slow_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_UAZ469_Tires_Mud_Slow_EXT_SoundSet: Base_Tires_Mud_Slow_Ext_SoundSet {
        soundShaders[] = {"RHS_UAZ469_Tires_Mud_Slow_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_UAZ469_Tires_Asphalt_Slow_EXT_SoundSet: Base_Tires_Asphalt_Slow_Ext_SoundSet {
        soundShaders[] = {"RHS_UAZ469_Tires_Asphalt_Slow_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_UAZ469_Tires_Water_Slow_EXT_SoundSet: Base_Tires_Water_Slow_Ext_SoundSet {
        soundShaders[] = {"RHS_UAZ469_Tires_Water_Slow_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_UAZ469_Tires_Turn_Hard_EXT_SoundSet: Base_Tires_Ext_SoundSet {
        soundShaders[] = {"RHS_UAZ469_Tires_Turn_Hard_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_UAZ469_Tires_Turn_Soft_EXT_SoundSet: Base_Tires_Ext_SoundSet {
        soundShaders[] = {"RHS_UAZ469_Tires_Turn_Soft_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_UAZ469_Tires_Brake_Hard_EXT_SoundSet: Base_Tires_Ext_SoundSet {
        soundShaders[] = {"RHS_UAZ469_Tires_Brake_Hard_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_UAZ469_Tires_Brake_Soft_EXT_SoundSet: Base_Tires_Ext_SoundSet {
        soundShaders[] = {"RHS_UAZ469_Tires_Brake_Soft_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_UAZ469_Rattling_INT_SoundSet: Vehicle_Base_Body_INT_SoundSet {
        soundShaders[] = {"RHS_UAZ469_Rattling_INT_SoundShader"};
    };
    class RHS_UAZ469_Stress_INT_SoundSet: Vehicle_Base_Body_INT_SoundSet {
        soundShaders[] = {"RHS_UAZ469_Stress_INT_SoundShader"};
    };
    class RHS_UAZ469_Rain_INT_SoundSet: Vehicle_Base_Body_INT_SoundSet {
        soundShaders[] = {"RHS_UAZ469_Rain_INT_SoundShader"};
        sound3DProcessingType = "VehicleInt_Front_3DProcessingType";
    };
    class RHS_UAZ469_Rattling_EXT_SoundSet: Vehicle_Base_Body_EXT_SoundSet {
        soundShaders[] = {"RHS_UAZ469_Rattling_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_UAZ469_Stress_EXT_SoundSet: Vehicle_Base_Body_EXT_SoundSet {
        soundShaders[] = {"RHS_UAZ469_Stress_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_UAZ469_Rain_EXT_SoundSet: Vehicle_Base_Body_EXT_SoundSet {
        soundShaders[] = {"RHS_UAZ469_Rain_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_OTR21_Engine_RPM0_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet {
        soundShaders[] = {"RHS_OTR21_Engine_RPM0_EXT_SoundShader"};
        sound3DProcessingType = "VehicleExt_3DProcessingType";
        posOffset[] = {0, -0.1, 1.2};
        volumeFactor = 1;
    };
    class RHS_OTR21_Engine_RPM1_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet {
        soundShaders[] = {"RHS_OTR21_Engine_RPM1_EXT_SoundShader"};
        sound3DProcessingType = "VehicleExt_3DProcessingType";
        volumeCurve = "InverseSquare2Curve";
        posOffset[] = {0, -0.1, 1.2};
        volumeFactor = 1;
    };
    class RHS_OTR21_Engine_RPM2_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet {
        soundShaders[] = {"RHS_OTR21_Engine_RPM2_EXT_SoundShader"};
        sound3DProcessingType = "VehicleExt_3DProcessingType";
        volumeCurve = "InverseSquare2Curve";
        posOffset[] = {0, -0.1, 1.2};
        volumeFactor = 1;
    };
    class RHS_OTR21_Engine_RPM0_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet {
        soundShaders[] = {"RHS_OTR21_Engine_RPM0_INT_SoundShader"};
        sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
        posOffset[] = {0, 0, 0};
        volumeFactor = 1;
    };
    class RHS_OTR21_Engine_RPM1_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet {
        soundShaders[] = {"RHS_OTR21_Engine_RPM1_INT_SoundShader"};
        sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
        volumeCurve = "InverseSquare2Curve";
        posOffset[] = {0, 0, 0};
        volumeFactor = 1;
    };
    class RHS_OTR21_Engine_RPM2_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet {
        soundShaders[] = {"RHS_OTR21_Engine_RPM2_INT_SoundShader"};
        sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
        volumeCurve = "InverseSquare2Curve";
        posOffset[] = {0, 0, 0};
        volumeFactor = 1;
    };
    class RHS_OTR21_Engine_EXT_Burst_SoundSet {
        soundShaders[] = {"RHS_OTR21_Engine_EXT_Burst_SoundShader"};
        playTrigger = "(thrust * (((abs(speed)) factor[2,1.9]) - 0.6)) * (acceleration factor [0.02,0.03])";
        posOffset[] = {0, -0.1, 1.2};
        distanceFilter = "softVehiclesDistanceFreqAttenuationFilter";
        frequencyRandomizer = 1;
        frequencyRandomizerMin = 0;
        sound3DProcessingType = "VehicleExt_3DProcessingType";
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        volumeFactor = 1;
        spatial = 1;
        loop = 0;
    };
    class RHS_OTR21_Engine_INT_Burst_SoundSet {
        soundShaders[] = {"RHS_OTR21_Engine_INT_Burst_SoundShader"};
        playTrigger = "(thrust * (((abs(speed)) factor[2,1.9]) - 0.6)) * (acceleration factor [0.02,0.03])";
        posOffset[] = {0, 0, 0};
        distanceFilter = "softVehiclesDistanceFreqAttenuationFilter";
        frequencyRandomizer = 1;
        frequencyRandomizerMin = 0;
        sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        volumeFactor = 1;
        spatial = 1;
        loop = 0;
    };
    class RHS_OTR21_Tires_Rock_Fast_INT_SoundSet: Base_Tires_Rock_Fast_Int_SoundSet {
        soundShaders[] = {"RHS_OTR21_Tires_Rock_Fast_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_OTR21_Tires_Grass_Fast_INT_SoundSet: Base_Tires_Grass_Fast_Int_SoundSet {
        soundShaders[] = {"RHS_OTR21_Tires_Grass_Fast_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_OTR21_Tires_Sand_Fast_INT_SoundSet: Base_Tires_Sand_Fast_Int_SoundSet {
        soundShaders[] = {"RHS_OTR21_Tires_Sand_Fast_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_OTR21_Tires_Gravel_Fast_INT_SoundSet: Base_Tires_Gravel_Fast_Int_SoundSet {
        soundShaders[] = {"RHS_OTR21_Tires_Gravel_Fast_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_OTR21_Tires_Mud_Fast_INT_SoundSet: Base_Tires_Mud_Fast_Int_SoundSet {
        soundShaders[] = {"RHS_OTR21_Tires_Mud_Fast_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_OTR21_Tires_Asphalt_Fast_INT_SoundSet: Base_Tires_Asphalt_Fast_Int_SoundSet {
        soundShaders[] = {"RHS_OTR21_Tires_Asphalt_Fast_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_OTR21_Tires_Water_Fast_INT_SoundSet: Base_Tires_Water_Fast_Int_SoundSet {
        soundShaders[] = {"RHS_OTR21_Tires_Water_Fast_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_OTR21_Tires_Rock_Slow_INT_SoundSet: Base_Tires_Rock_Slow_Int_SoundSet {
        soundShaders[] = {"RHS_OTR21_Tires_Rock_Slow_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_OTR21_Tires_Grass_Slow_INT_SoundSet: Base_Tires_Grass_Slow_Int_SoundSet {
        soundShaders[] = {"RHS_OTR21_Tires_Grass_Slow_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_OTR21_Tires_Sand_Slow_INT_SoundSet: Base_Tires_Sand_Slow_Int_SoundSet {
        soundShaders[] = {"RHS_OTR21_Tires_Sand_Slow_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_OTR21_Tires_Gravel_Slow_INT_SoundSet: Base_Tires_Gravel_Slow_Int_SoundSet {
        soundShaders[] = {"RHS_OTR21_Tires_Gravel_Slow_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_OTR21_Tires_Mud_Slow_INT_SoundSet: Base_Tires_Mud_Slow_Int_SoundSet {
        soundShaders[] = {"RHS_OTR21_Tires_Mud_Slow_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_OTR21_Tires_Asphalt_Slow_INT_SoundSet: Base_Tires_Asphalt_Slow_Int_SoundSet {
        soundShaders[] = {"RHS_OTR21_Tires_Asphalt_Slow_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_OTR21_Tires_Water_Slow_INT_SoundSet: Base_Tires_Water_Slow_Int_SoundSet {
        soundShaders[] = {"RHS_OTR21_Tires_Water_Slow_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_OTR21_Tires_Turn_Hard_INT_SoundSet: Base_Tires_Int_SoundSet {
        soundShaders[] = {"RHS_OTR21_Tires_Turn_Hard_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_OTR21_Tires_Turn_Soft_INT_SoundSet: Base_Tires_Int_SoundSet {
        soundShaders[] = {"RHS_OTR21_Tires_Turn_Soft_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_OTR21_Tires_Brake_Hard_INT_SoundSet: Base_Tires_Int_SoundSet {
        soundShaders[] = {"RHS_OTR21_Tires_Brake_Hard_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_OTR21_Tires_Brake_Soft_INT_SoundSet: Base_Tires_Int_SoundSet {
        soundShaders[] = {"RHS_OTR21_Tires_Brake_Soft_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_OTR21_Tires_Rock_Fast_EXT_SoundSet: Base_Tires_Rock_Fast_Ext_SoundSet {
        soundShaders[] = {"RHS_OTR21_Tires_Rock_Fast_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_OTR21_Tires_Grass_Fast_EXT_SoundSet: Base_Tires_Grass_Fast_Ext_SoundSet {
        soundShaders[] = {"RHS_OTR21_Tires_Grass_Fast_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_OTR21_Tires_Sand_Fast_EXT_SoundSet: Base_Tires_Sand_Fast_Ext_SoundSet {
        soundShaders[] = {"RHS_OTR21_Tires_Sand_Fast_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_OTR21_Tires_Gravel_Fast_EXT_SoundSet: Base_Tires_Gravel_Fast_Ext_SoundSet {
        soundShaders[] = {"RHS_OTR21_Tires_Gravel_Fast_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_OTR21_Tires_Mud_Fast_EXT_SoundSet: Base_Tires_Mud_Fast_Ext_SoundSet {
        soundShaders[] = {"RHS_OTR21_Tires_Mud_Fast_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_OTR21_Tires_Asphalt_Fast_EXT_SoundSet: Base_Tires_Asphalt_Fast_Ext_SoundSet {
        soundShaders[] = {"RHS_OTR21_Tires_Asphalt_Fast_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_OTR21_Tires_Water_Fast_EXT_SoundSet: Base_Tires_Water_Fast_Ext_SoundSet {
        soundShaders[] = {"RHS_OTR21_Tires_Water_Fast_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_OTR21_Tires_Rock_Slow_EXT_SoundSet: Base_Tires_Rock_Slow_Ext_SoundSet {
        soundShaders[] = {"RHS_OTR21_Tires_Rock_Slow_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_OTR21_Tires_Grass_Slow_EXT_SoundSet: Base_Tires_Grass_Slow_Ext_SoundSet {
        soundShaders[] = {"RHS_OTR21_Tires_Grass_Slow_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_OTR21_Tires_Sand_Slow_EXT_SoundSet: Base_Tires_Sand_Slow_Ext_SoundSet {
        soundShaders[] = {"RHS_OTR21_Tires_Sand_Slow_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_OTR21_Tires_Gravel_Slow_EXT_SoundSet: Base_Tires_Gravel_Slow_Ext_SoundSet {
        soundShaders[] = {"RHS_OTR21_Tires_Gravel_Slow_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_OTR21_Tires_Mud_Slow_EXT_SoundSet: Base_Tires_Mud_Slow_Ext_SoundSet {
        soundShaders[] = {"RHS_OTR21_Tires_Mud_Slow_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_OTR21_Tires_Asphalt_Slow_EXT_SoundSet: Base_Tires_Asphalt_Slow_Ext_SoundSet {
        soundShaders[] = {"RHS_OTR21_Tires_Asphalt_Slow_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_OTR21_Tires_Water_Slow_EXT_SoundSet: Base_Tires_Water_Slow_Ext_SoundSet {
        soundShaders[] = {"RHS_OTR21_Tires_Water_Slow_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_OTR21_Tires_Turn_Hard_EXT_SoundSet: Base_Tires_Ext_SoundSet {
        soundShaders[] = {"RHS_OTR21_Tires_Turn_Hard_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_OTR21_Tires_Turn_Soft_EXT_SoundSet: Base_Tires_Ext_SoundSet {
        soundShaders[] = {"RHS_OTR21_Tires_Turn_Soft_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_OTR21_Tires_Brake_Hard_EXT_SoundSet: Base_Tires_Ext_SoundSet {
        soundShaders[] = {"RHS_OTR21_Tires_Brake_Hard_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_OTR21_Tires_Brake_Soft_EXT_SoundSet: Base_Tires_Ext_SoundSet {
        soundShaders[] = {"RHS_OTR21_Tires_Brake_Soft_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_OTR21_Rattling_INT_SoundSet: Vehicle_Base_Body_INT_SoundSet {
        soundShaders[] = {"RHS_OTR21_Rattling_INT_SoundShader"};
    };
    class RHS_OTR21_Stress_INT_SoundSet: Vehicle_Base_Body_INT_SoundSet {
        soundShaders[] = {"RHS_OTR21_Stress_INT_SoundShader"};
    };
    class RHS_OTR21_Rain_INT_SoundSet: Vehicle_Base_Body_INT_SoundSet {
        soundShaders[] = {"RHS_OTR21_Rain_INT_SoundShader"};
        sound3DProcessingType = "VehicleInt_Front_3DProcessingType";
    };
    class RHS_OTR21_Rattling_EXT_SoundSet: Vehicle_Base_Body_EXT_SoundSet {
        soundShaders[] = {"RHS_OTR21_Rattling_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_OTR21_Stress_EXT_SoundSet: Vehicle_Base_Body_EXT_SoundSet {
        soundShaders[] = {"RHS_OTR21_Stress_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_OTR21_Rain_EXT_SoundSet: Vehicle_Base_Body_EXT_SoundSet {
        soundShaders[] = {"RHS_OTR21_Rain_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_gaz66_Engine_RPM0_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet {
        soundShaders[] = {"RHS_gaz66_Engine_RPM0_EXT_SoundShader"};
        sound3DProcessingType = "VehicleExt_3DProcessingType";
        posOffset[] = {0, -0.4, 2.2};
        volumeFactor = 1;
    };
    class RHS_gaz66_Engine_RPM1_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet {
        soundShaders[] = {"RHS_gaz66_Engine_RPM1_EXT_SoundShader"};
        sound3DProcessingType = "VehicleExt_3DProcessingType";
        volumeCurve = "InverseSquare2Curve";
        posOffset[] = {0, -0.4, 2.2};
        volumeFactor = 1;
    };
    class RHS_gaz66_Engine_RPM2_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet {
        soundShaders[] = {"RHS_gaz66_Engine_RPM2_EXT_SoundShader"};
        sound3DProcessingType = "VehicleExt_3DProcessingType";
        volumeCurve = "InverseSquare2Curve";
        posOffset[] = {0, -0.4, 2.2};
        volumeFactor = 1;
    };
    class RHS_gaz66_Engine_RPM3_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet {
        soundShaders[] = {"RHS_gaz66_Engine_RPM3_EXT_SoundShader"};
        sound3DProcessingType = "VehicleExt_3DProcessingType";
        volumeCurve = "InverseSquare2Curve";
        posOffset[] = {0, -0.4, 2.2};
        volumeFactor = 1;
    };
    class RHS_gaz66_Engine_RPM0_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet {
        soundShaders[] = {"RHS_gaz66_Engine_RPM0_INT_SoundShader"};
        sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
        posOffset[] = {0, 0, 0};
        volumeFactor = 1;
    };
    class RHS_gaz66_Engine_RPM1_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet {
        soundShaders[] = {"RHS_gaz66_Engine_RPM1_INT_SoundShader"};
        sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
        volumeCurve = "InverseSquare2Curve";
        posOffset[] = {0, 0, 0};
        volumeFactor = 1;
    };
    class RHS_gaz66_Engine_RPM2_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet {
        soundShaders[] = {"RHS_gaz66_Engine_RPM2_INT_SoundShader"};
        sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
        volumeCurve = "InverseSquare2Curve";
        posOffset[] = {0, 0, 0};
        volumeFactor = 1;
    };
    class RHS_gaz66_Engine_RPM3_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet {
        soundShaders[] = {"RHS_gaz66_Engine_RPM3_INT_SoundShader"};
        sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
        volumeCurve = "InverseSquare2Curve";
        posOffset[] = {0, 0, 0};
        volumeFactor = 1;
    };
    class RHS_gaz66_Tires_Rock_Fast_INT_SoundSet: Base_Tires_Rock_Fast_Int_SoundSet {
        soundShaders[] = {"RHS_gaz66_Tires_Rock_Fast_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_gaz66_Tires_Grass_Fast_INT_SoundSet: Base_Tires_Grass_Fast_Int_SoundSet {
        soundShaders[] = {"RHS_gaz66_Tires_Grass_Fast_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_gaz66_Tires_Sand_Fast_INT_SoundSet: Base_Tires_Sand_Fast_Int_SoundSet {
        soundShaders[] = {"RHS_gaz66_Tires_Sand_Fast_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_gaz66_Tires_Gravel_Fast_INT_SoundSet: Base_Tires_Gravel_Fast_Int_SoundSet {
        soundShaders[] = {"RHS_gaz66_Tires_Gravel_Fast_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_gaz66_Tires_Mud_Fast_INT_SoundSet: Base_Tires_Mud_Fast_Int_SoundSet {
        soundShaders[] = {"RHS_gaz66_Tires_Mud_Fast_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_gaz66_Tires_Asphalt_Fast_INT_SoundSet: Base_Tires_Asphalt_Fast_Int_SoundSet {
        soundShaders[] = {"RHS_gaz66_Tires_Asphalt_Fast_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_gaz66_Tires_Water_Fast_INT_SoundSet: Base_Tires_Water_Fast_Int_SoundSet {
        soundShaders[] = {"RHS_gaz66_Tires_Water_Fast_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_gaz66_Tires_Rock_Slow_INT_SoundSet: Base_Tires_Rock_Slow_Int_SoundSet {
        soundShaders[] = {"RHS_gaz66_Tires_Rock_Slow_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_gaz66_Tires_Grass_Slow_INT_SoundSet: Base_Tires_Grass_Slow_Int_SoundSet {
        soundShaders[] = {"RHS_gaz66_Tires_Grass_Slow_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_gaz66_Tires_Sand_Slow_INT_SoundSet: Base_Tires_Sand_Slow_Int_SoundSet {
        soundShaders[] = {"RHS_gaz66_Tires_Sand_Slow_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_gaz66_Tires_Gravel_Slow_INT_SoundSet: Base_Tires_Gravel_Slow_Int_SoundSet {
        soundShaders[] = {"RHS_gaz66_Tires_Gravel_Slow_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_gaz66_Tires_Mud_Slow_INT_SoundSet: Base_Tires_Mud_Slow_Int_SoundSet {
        soundShaders[] = {"RHS_gaz66_Tires_Mud_Slow_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_gaz66_Tires_Asphalt_Slow_INT_SoundSet: Base_Tires_Asphalt_Slow_Int_SoundSet {
        soundShaders[] = {"RHS_gaz66_Tires_Asphalt_Slow_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_gaz66_Tires_Water_Slow_INT_SoundSet: Base_Tires_Water_Slow_Int_SoundSet {
        soundShaders[] = {"RHS_gaz66_Tires_Water_Slow_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_gaz66_Tires_Turn_Hard_INT_SoundSet: Base_Tires_Int_SoundSet {
        soundShaders[] = {"RHS_gaz66_Tires_Turn_Hard_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_gaz66_Tires_Turn_Soft_INT_SoundSet: Base_Tires_Int_SoundSet {
        soundShaders[] = {"RHS_gaz66_Tires_Turn_Soft_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_gaz66_Tires_Brake_Hard_INT_SoundSet: Base_Tires_Int_SoundSet {
        soundShaders[] = {"RHS_gaz66_Tires_Brake_Hard_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_gaz66_Tires_Brake_Soft_INT_SoundSet: Base_Tires_Int_SoundSet {
        soundShaders[] = {"RHS_gaz66_Tires_Brake_Soft_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_gaz66_Tires_Rock_Fast_EXT_SoundSet: Base_Tires_Rock_Fast_Ext_SoundSet {
        soundShaders[] = {"RHS_gaz66_Tires_Rock_Fast_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_gaz66_Tires_Grass_Fast_EXT_SoundSet: Base_Tires_Grass_Fast_Ext_SoundSet {
        soundShaders[] = {"RHS_gaz66_Tires_Grass_Fast_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_gaz66_Tires_Sand_Fast_EXT_SoundSet: Base_Tires_Sand_Fast_Ext_SoundSet {
        soundShaders[] = {"RHS_gaz66_Tires_Sand_Fast_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_gaz66_Tires_Gravel_Fast_EXT_SoundSet: Base_Tires_Gravel_Fast_Ext_SoundSet {
        soundShaders[] = {"RHS_gaz66_Tires_Gravel_Fast_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_gaz66_Tires_Mud_Fast_EXT_SoundSet: Base_Tires_Mud_Fast_Ext_SoundSet {
        soundShaders[] = {"RHS_gaz66_Tires_Mud_Fast_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_gaz66_Tires_Asphalt_Fast_EXT_SoundSet: Base_Tires_Asphalt_Fast_Ext_SoundSet {
        soundShaders[] = {"RHS_gaz66_Tires_Asphalt_Fast_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_gaz66_Tires_Water_Fast_EXT_SoundSet: Base_Tires_Water_Fast_Ext_SoundSet {
        soundShaders[] = {"RHS_gaz66_Tires_Water_Fast_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_gaz66_Tires_Rock_Slow_EXT_SoundSet: Base_Tires_Rock_Slow_Ext_SoundSet {
        soundShaders[] = {"RHS_gaz66_Tires_Rock_Slow_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_gaz66_Tires_Grass_Slow_EXT_SoundSet: Base_Tires_Grass_Slow_Ext_SoundSet {
        soundShaders[] = {"RHS_gaz66_Tires_Grass_Slow_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_gaz66_Tires_Sand_Slow_EXT_SoundSet: Base_Tires_Sand_Slow_Ext_SoundSet {
        soundShaders[] = {"RHS_gaz66_Tires_Sand_Slow_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_gaz66_Tires_Gravel_Slow_EXT_SoundSet: Base_Tires_Gravel_Slow_Ext_SoundSet {
        soundShaders[] = {"RHS_gaz66_Tires_Gravel_Slow_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_gaz66_Tires_Mud_Slow_EXT_SoundSet: Base_Tires_Mud_Slow_Ext_SoundSet {
        soundShaders[] = {"RHS_gaz66_Tires_Mud_Slow_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_gaz66_Tires_Asphalt_Slow_EXT_SoundSet: Base_Tires_Asphalt_Slow_Ext_SoundSet {
        soundShaders[] = {"RHS_gaz66_Tires_Asphalt_Slow_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_gaz66_Tires_Water_Slow_EXT_SoundSet: Base_Tires_Water_Slow_Ext_SoundSet {
        soundShaders[] = {"RHS_gaz66_Tires_Water_Slow_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_gaz66_Tires_Turn_Hard_EXT_SoundSet: Base_Tires_Ext_SoundSet {
        soundShaders[] = {"RHS_gaz66_Tires_Turn_Hard_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_gaz66_Tires_Turn_Soft_EXT_SoundSet: Base_Tires_Ext_SoundSet {
        soundShaders[] = {"RHS_gaz66_Tires_Turn_Soft_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_gaz66_Tires_Brake_Hard_EXT_SoundSet: Base_Tires_Ext_SoundSet {
        soundShaders[] = {"RHS_gaz66_Tires_Brake_Hard_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_gaz66_Tires_Brake_Soft_EXT_SoundSet: Base_Tires_Ext_SoundSet {
        soundShaders[] = {"RHS_gaz66_Tires_Brake_Soft_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_gaz66_Rattling_INT_SoundSet: Vehicle_Base_Body_INT_SoundSet {
        soundShaders[] = {"RHS_gaz66_Rattling_INT_SoundShader"};
    };
    class RHS_gaz66_Stress_INT_SoundSet: Vehicle_Base_Body_INT_SoundSet {
        soundShaders[] = {"RHS_gaz66_Stress_INT_SoundShader"};
    };
    class RHS_gaz66_Rain_INT_SoundSet: Vehicle_Base_Body_INT_SoundSet {
        soundShaders[] = {"RHS_gaz66_Rain_INT_SoundShader"};
        sound3DProcessingType = "VehicleInt_Front_3DProcessingType";
    };
    class RHS_gaz66_Rattling_EXT_SoundSet: Vehicle_Base_Body_EXT_SoundSet {
        soundShaders[] = {"RHS_gaz66_Rattling_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_gaz66_Stress_EXT_SoundSet: Vehicle_Base_Body_EXT_SoundSet {
        soundShaders[] = {"RHS_gaz66_Stress_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_gaz66_Rain_EXT_SoundSet: Vehicle_Base_Body_EXT_SoundSet {
        soundShaders[] = {"RHS_gaz66_Rain_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_zil131_Engine_RPM0_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet {
        soundShaders[] = {"RHS_zil131_Engine_RPM0_EXT_SoundShader"};
        sound3DProcessingType = "VehicleExt_3DProcessingType";
        posOffset[] = {0, -1, 3.5};
        volumeFactor = 1;
    };
    class RHS_zil131_Engine_RPM1_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet {
        soundShaders[] = {"RHS_zil131_Engine_RPM1_EXT_SoundShader"};
        sound3DProcessingType = "VehicleExt_3DProcessingType";
        volumeCurve = "InverseSquare2Curve";
        posOffset[] = {0, -1, 3.5};
        volumeFactor = 1;
    };
    class RHS_zil131_Engine_RPM2_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet {
        soundShaders[] = {"RHS_zil131_Engine_RPM2_EXT_SoundShader"};
        sound3DProcessingType = "VehicleExt_3DProcessingType";
        volumeCurve = "InverseSquare2Curve";
        posOffset[] = {0, -1, 3.5};
        volumeFactor = 1;
    };
    class RHS_zil131_Engine_RPM3_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet {
        soundShaders[] = {"RHS_zil131_Engine_RPM3_EXT_SoundShader"};
        sound3DProcessingType = "VehicleExt_3DProcessingType";
        volumeCurve = "InverseSquare2Curve";
        posOffset[] = {0, -1, 3.5};
        volumeFactor = 1;
    };
    class RHS_zil131_Engine_RPM0_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet {
        soundShaders[] = {"RHS_zil131_Engine_RPM0_INT_SoundShader"};
        sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
        posOffset[] = {0, 0, 0};
        volumeFactor = 1;
    };
    class RHS_zil131_Engine_RPM1_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet {
        soundShaders[] = {"RHS_zil131_Engine_RPM1_INT_SoundShader"};
        sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
        volumeCurve = "InverseSquare2Curve";
        posOffset[] = {0, 0, 0};
        volumeFactor = 1;
    };
    class RHS_zil131_Engine_RPM2_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet {
        soundShaders[] = {"RHS_zil131_Engine_RPM2_INT_SoundShader"};
        sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
        volumeCurve = "InverseSquare2Curve";
        posOffset[] = {0, 0, 0};
        volumeFactor = 1;
    };
    class RHS_zil131_Engine_RPM3_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet {
        soundShaders[] = {"RHS_zil131_Engine_RPM3_INT_SoundShader"};
        sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
        volumeCurve = "InverseSquare2Curve";
        posOffset[] = {0, 0, 0};
        volumeFactor = 1;
    };
    class RHS_zil131_Engine_EXT_Burst_SoundSet {
        soundShaders[] = {"RHS_zil131_Engine_EXT_Burst_SoundShader"};
        playTrigger = "(thrust * (((abs(speed)) factor[5,4.9]) - 0.6)) * (acceleration factor [0.02,0.03])";
        posOffset[] = {0, -1, 3.5};
        distanceFilter = "softVehiclesDistanceFreqAttenuationFilter";
        frequencyRandomizer = 1;
        frequencyRandomizerMin = 0;
        sound3DProcessingType = "VehicleExt_3DProcessingType";
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        volumeFactor = 1;
        spatial = 1;
        loop = 0;
    };
    class RHS_zil131_Engine_INT_Burst_SoundSet {
        soundShaders[] = {"RHS_zil131_Engine_INT_Burst_SoundShader"};
        playTrigger = "(thrust * (((abs(speed)) factor[5,4.9]) - 0.6)) * (acceleration factor [0.02,0.03])";
        posOffset[] = {0, 0, 0};
        distanceFilter = "softVehiclesDistanceFreqAttenuationFilter";
        frequencyRandomizer = 1;
        frequencyRandomizerMin = 0;
        sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        volumeFactor = 1;
        spatial = 1;
        loop = 0;
    };
    class RHS_zil131_Tires_Rock_Fast_INT_SoundSet: Base_Tires_Rock_Fast_Int_SoundSet {
        soundShaders[] = {"RHS_zil131_Tires_Rock_Fast_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_zil131_Tires_Grass_Fast_INT_SoundSet: Base_Tires_Grass_Fast_Int_SoundSet {
        soundShaders[] = {"RHS_zil131_Tires_Grass_Fast_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_zil131_Tires_Sand_Fast_INT_SoundSet: Base_Tires_Sand_Fast_Int_SoundSet {
        soundShaders[] = {"RHS_zil131_Tires_Sand_Fast_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_zil131_Tires_Gravel_Fast_INT_SoundSet: Base_Tires_Gravel_Fast_Int_SoundSet {
        soundShaders[] = {"RHS_zil131_Tires_Gravel_Fast_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_zil131_Tires_Mud_Fast_INT_SoundSet: Base_Tires_Mud_Fast_Int_SoundSet {
        soundShaders[] = {"RHS_zil131_Tires_Mud_Fast_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_zil131_Tires_Asphalt_Fast_INT_SoundSet: Base_Tires_Asphalt_Fast_Int_SoundSet {
        soundShaders[] = {"RHS_zil131_Tires_Asphalt_Fast_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_zil131_Tires_Water_Fast_INT_SoundSet: Base_Tires_Water_Fast_Int_SoundSet {
        soundShaders[] = {"RHS_zil131_Tires_Water_Fast_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_zil131_Tires_Rock_Slow_INT_SoundSet: Base_Tires_Rock_Slow_Int_SoundSet {
        soundShaders[] = {"RHS_zil131_Tires_Rock_Slow_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_zil131_Tires_Grass_Slow_INT_SoundSet: Base_Tires_Grass_Slow_Int_SoundSet {
        soundShaders[] = {"RHS_zil131_Tires_Grass_Slow_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_zil131_Tires_Sand_Slow_INT_SoundSet: Base_Tires_Sand_Slow_Int_SoundSet {
        soundShaders[] = {"RHS_zil131_Tires_Sand_Slow_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_zil131_Tires_Gravel_Slow_INT_SoundSet: Base_Tires_Gravel_Slow_Int_SoundSet {
        soundShaders[] = {"RHS_zil131_Tires_Gravel_Slow_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_zil131_Tires_Mud_Slow_INT_SoundSet: Base_Tires_Mud_Slow_Int_SoundSet {
        soundShaders[] = {"RHS_zil131_Tires_Mud_Slow_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_zil131_Tires_Asphalt_Slow_INT_SoundSet: Base_Tires_Asphalt_Slow_Int_SoundSet {
        soundShaders[] = {"RHS_zil131_Tires_Asphalt_Slow_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_zil131_Tires_Water_Slow_INT_SoundSet: Base_Tires_Water_Slow_Int_SoundSet {
        soundShaders[] = {"RHS_zil131_Tires_Water_Slow_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_zil131_Tires_Turn_Hard_INT_SoundSet: Base_Tires_Int_SoundSet {
        soundShaders[] = {"RHS_zil131_Tires_Turn_Hard_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_zil131_Tires_Turn_Soft_INT_SoundSet: Base_Tires_Int_SoundSet {
        soundShaders[] = {"RHS_zil131_Tires_Turn_Soft_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_zil131_Tires_Brake_Hard_INT_SoundSet: Base_Tires_Int_SoundSet {
        soundShaders[] = {"RHS_zil131_Tires_Brake_Hard_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_zil131_Tires_Brake_Soft_INT_SoundSet: Base_Tires_Int_SoundSet {
        soundShaders[] = {"RHS_zil131_Tires_Brake_Soft_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_zil131_Tires_Rock_Fast_EXT_SoundSet: Base_Tires_Rock_Fast_Ext_SoundSet {
        soundShaders[] = {"RHS_zil131_Tires_Rock_Fast_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_zil131_Tires_Grass_Fast_EXT_SoundSet: Base_Tires_Grass_Fast_Ext_SoundSet {
        soundShaders[] = {"RHS_zil131_Tires_Grass_Fast_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_zil131_Tires_Sand_Fast_EXT_SoundSet: Base_Tires_Sand_Fast_Ext_SoundSet {
        soundShaders[] = {"RHS_zil131_Tires_Sand_Fast_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_zil131_Tires_Gravel_Fast_EXT_SoundSet: Base_Tires_Gravel_Fast_Ext_SoundSet {
        soundShaders[] = {"RHS_zil131_Tires_Gravel_Fast_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_zil131_Tires_Mud_Fast_EXT_SoundSet: Base_Tires_Mud_Fast_Ext_SoundSet {
        soundShaders[] = {"RHS_zil131_Tires_Mud_Fast_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_zil131_Tires_Asphalt_Fast_EXT_SoundSet: Base_Tires_Asphalt_Fast_Ext_SoundSet {
        soundShaders[] = {"RHS_zil131_Tires_Asphalt_Fast_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_zil131_Tires_Water_Fast_EXT_SoundSet: Base_Tires_Water_Fast_Ext_SoundSet {
        soundShaders[] = {"RHS_zil131_Tires_Water_Fast_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_zil131_Tires_Rock_Slow_EXT_SoundSet: Base_Tires_Rock_Slow_Ext_SoundSet {
        soundShaders[] = {"RHS_zil131_Tires_Rock_Slow_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_zil131_Tires_Grass_Slow_EXT_SoundSet: Base_Tires_Grass_Slow_Ext_SoundSet {
        soundShaders[] = {"RHS_zil131_Tires_Grass_Slow_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_zil131_Tires_Sand_Slow_EXT_SoundSet: Base_Tires_Sand_Slow_Ext_SoundSet {
        soundShaders[] = {"RHS_zil131_Tires_Sand_Slow_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_zil131_Tires_Gravel_Slow_EXT_SoundSet: Base_Tires_Gravel_Slow_Ext_SoundSet {
        soundShaders[] = {"RHS_zil131_Tires_Gravel_Slow_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_zil131_Tires_Mud_Slow_EXT_SoundSet: Base_Tires_Mud_Slow_Ext_SoundSet {
        soundShaders[] = {"RHS_zil131_Tires_Mud_Slow_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_zil131_Tires_Asphalt_Slow_EXT_SoundSet: Base_Tires_Asphalt_Slow_Ext_SoundSet {
        soundShaders[] = {"RHS_zil131_Tires_Asphalt_Slow_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_zil131_Tires_Water_Slow_EXT_SoundSet: Base_Tires_Water_Slow_Ext_SoundSet {
        soundShaders[] = {"RHS_zil131_Tires_Water_Slow_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_zil131_Tires_Turn_Hard_EXT_SoundSet: Base_Tires_Ext_SoundSet {
        soundShaders[] = {"RHS_zil131_Tires_Turn_Hard_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_zil131_Tires_Turn_Soft_EXT_SoundSet: Base_Tires_Ext_SoundSet {
        soundShaders[] = {"RHS_zil131_Tires_Turn_Soft_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_zil131_Tires_Brake_Hard_EXT_SoundSet: Base_Tires_Ext_SoundSet {
        soundShaders[] = {"RHS_zil131_Tires_Brake_Hard_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_zil131_Tires_Brake_Soft_EXT_SoundSet: Base_Tires_Ext_SoundSet {
        soundShaders[] = {"RHS_zil131_Tires_Brake_Soft_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_zil131_Rattling_INT_SoundSet: Vehicle_Base_Body_INT_SoundSet {
        soundShaders[] = {"RHS_zil131_Rattling_INT_SoundShader"};
    };
    class RHS_zil131_Stress_INT_SoundSet: Vehicle_Base_Body_INT_SoundSet {
        soundShaders[] = {"RHS_zil131_Stress_INT_SoundShader"};
    };
    class RHS_zil131_Rain_INT_SoundSet: Vehicle_Base_Body_INT_SoundSet {
        soundShaders[] = {"RHS_zil131_Rain_INT_SoundShader"};
        sound3DProcessingType = "VehicleInt_Front_3DProcessingType";
    };
    class RHS_zil131_Rattling_EXT_SoundSet: Vehicle_Base_Body_EXT_SoundSet {
        soundShaders[] = {"RHS_zil131_Rattling_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_zil131_Stress_EXT_SoundSet: Vehicle_Base_Body_EXT_SoundSet {
        soundShaders[] = {"RHS_zil131_Stress_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_zil131_Rain_EXT_SoundSet: Vehicle_Base_Body_EXT_SoundSet {
        soundShaders[] = {"RHS_zil131_Rain_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_ural4320_Engine_RPM0_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet {
        soundShaders[] = {"RHS_ural4320_Engine_RPM0_EXT_SoundShader"};
        sound3DProcessingType = "VehicleExt_3DProcessingType";
        posOffset[] = {0, -1, 3.5};
        volumeFactor = 1;
    };
    class RHS_ural4320_Engine_RPM1_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet {
        soundShaders[] = {"RHS_ural4320_Engine_RPM1_EXT_SoundShader"};
        sound3DProcessingType = "VehicleExt_3DProcessingType";
        volumeCurve = "InverseSquare2Curve";
        posOffset[] = {0, -1, 3.5};
        volumeFactor = 1;
    };
    class RHS_ural4320_Engine_RPM2_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet {
        soundShaders[] = {"RHS_ural4320_Engine_RPM2_EXT_SoundShader"};
        sound3DProcessingType = "VehicleExt_3DProcessingType";
        volumeCurve = "InverseSquare2Curve";
        posOffset[] = {0, -1, 3.5};
        volumeFactor = 1;
    };
    class RHS_ural4320_Engine_RPM0_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet {
        soundShaders[] = {"RHS_ural4320_Engine_RPM0_INT_SoundShader"};
        sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
        posOffset[] = {0, 0, 0};
        volumeFactor = 1;
    };
    class RHS_ural4320_Engine_RPM1_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet {
        soundShaders[] = {"RHS_ural4320_Engine_RPM1_INT_SoundShader"};
        sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
        volumeCurve = "InverseSquare2Curve";
        posOffset[] = {0, 0, 0};
        volumeFactor = 1;
    };
    class RHS_ural4320_Engine_RPM2_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet {
        soundShaders[] = {"RHS_ural4320_Engine_RPM2_INT_SoundShader"};
        sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
        volumeCurve = "InverseSquare2Curve";
        posOffset[] = {0, 0, 0};
        volumeFactor = 1;
    };
    class RHS_ural4320_Engine_EXT_Burst_SoundSet {
        soundShaders[] = {"RHS_ural4320_Engine_EXT_Burst_SoundShader"};
        playTrigger = "(thrust * (((abs(speed)) factor[5,4.9]) - 0.6)) * (acceleration factor [0.02,0.03])";
        posOffset[] = {0, -1, 3.5};
        distanceFilter = "softVehiclesDistanceFreqAttenuationFilter";
        frequencyRandomizer = 1;
        frequencyRandomizerMin = 0;
        sound3DProcessingType = "VehicleExt_3DProcessingType";
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        volumeFactor = 1;
        spatial = 1;
        loop = 0;
    };
    class RHS_ural4320_Engine_INT_Burst_SoundSet {
        soundShaders[] = {"RHS_ural4320_Engine_INT_Burst_SoundShader"};
        playTrigger = "(thrust * (((abs(speed)) factor[5,4.9]) - 0.6)) * (acceleration factor [0.02,0.03])";
        posOffset[] = {0, 0, 0};
        distanceFilter = "softVehiclesDistanceFreqAttenuationFilter";
        frequencyRandomizer = 1;
        frequencyRandomizerMin = 0;
        sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        volumeFactor = 1;
        spatial = 1;
        loop = 0;
    };
    class RHS_ural4320_Tires_Rock_Fast_INT_SoundSet: Base_Tires_Rock_Fast_Int_SoundSet {
        soundShaders[] = {"RHS_ural4320_Tires_Rock_Fast_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_ural4320_Tires_Grass_Fast_INT_SoundSet: Base_Tires_Grass_Fast_Int_SoundSet {
        soundShaders[] = {"RHS_ural4320_Tires_Grass_Fast_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_ural4320_Tires_Sand_Fast_INT_SoundSet: Base_Tires_Sand_Fast_Int_SoundSet {
        soundShaders[] = {"RHS_ural4320_Tires_Sand_Fast_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_ural4320_Tires_Gravel_Fast_INT_SoundSet: Base_Tires_Gravel_Fast_Int_SoundSet {
        soundShaders[] = {"RHS_ural4320_Tires_Gravel_Fast_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_ural4320_Tires_Mud_Fast_INT_SoundSet: Base_Tires_Mud_Fast_Int_SoundSet {
        soundShaders[] = {"RHS_ural4320_Tires_Mud_Fast_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_ural4320_Tires_Asphalt_Fast_INT_SoundSet: Base_Tires_Asphalt_Fast_Int_SoundSet {
        soundShaders[] = {"RHS_ural4320_Tires_Asphalt_Fast_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_ural4320_Tires_Water_Fast_INT_SoundSet: Base_Tires_Water_Fast_Int_SoundSet {
        soundShaders[] = {"RHS_ural4320_Tires_Water_Fast_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_ural4320_Tires_Rock_Slow_INT_SoundSet: Base_Tires_Rock_Slow_Int_SoundSet {
        soundShaders[] = {"RHS_ural4320_Tires_Rock_Slow_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_ural4320_Tires_Grass_Slow_INT_SoundSet: Base_Tires_Grass_Slow_Int_SoundSet {
        soundShaders[] = {"RHS_ural4320_Tires_Grass_Slow_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_ural4320_Tires_Sand_Slow_INT_SoundSet: Base_Tires_Sand_Slow_Int_SoundSet {
        soundShaders[] = {"RHS_ural4320_Tires_Sand_Slow_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_ural4320_Tires_Gravel_Slow_INT_SoundSet: Base_Tires_Gravel_Slow_Int_SoundSet {
        soundShaders[] = {"RHS_ural4320_Tires_Gravel_Slow_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_ural4320_Tires_Mud_Slow_INT_SoundSet: Base_Tires_Mud_Slow_Int_SoundSet {
        soundShaders[] = {"RHS_ural4320_Tires_Mud_Slow_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_ural4320_Tires_Asphalt_Slow_INT_SoundSet: Base_Tires_Asphalt_Slow_Int_SoundSet {
        soundShaders[] = {"RHS_ural4320_Tires_Asphalt_Slow_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_ural4320_Tires_Water_Slow_INT_SoundSet: Base_Tires_Water_Slow_Int_SoundSet {
        soundShaders[] = {"RHS_ural4320_Tires_Water_Slow_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_ural4320_Tires_Turn_Hard_INT_SoundSet: Base_Tires_Int_SoundSet {
        soundShaders[] = {"RHS_ural4320_Tires_Turn_Hard_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_ural4320_Tires_Turn_Soft_INT_SoundSet: Base_Tires_Int_SoundSet {
        soundShaders[] = {"RHS_ural4320_Tires_Turn_Soft_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_ural4320_Tires_Brake_Hard_INT_SoundSet: Base_Tires_Int_SoundSet {
        soundShaders[] = {"RHS_ural4320_Tires_Brake_Hard_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_ural4320_Tires_Brake_Soft_INT_SoundSet: Base_Tires_Int_SoundSet {
        soundShaders[] = {"RHS_ural4320_Tires_Brake_Soft_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_ural4320_Tires_Rock_Fast_EXT_SoundSet: Base_Tires_Rock_Fast_Ext_SoundSet {
        soundShaders[] = {"RHS_ural4320_Tires_Rock_Fast_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_ural4320_Tires_Grass_Fast_EXT_SoundSet: Base_Tires_Grass_Fast_Ext_SoundSet {
        soundShaders[] = {"RHS_ural4320_Tires_Grass_Fast_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_ural4320_Tires_Sand_Fast_EXT_SoundSet: Base_Tires_Sand_Fast_Ext_SoundSet {
        soundShaders[] = {"RHS_ural4320_Tires_Sand_Fast_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_ural4320_Tires_Gravel_Fast_EXT_SoundSet: Base_Tires_Gravel_Fast_Ext_SoundSet {
        soundShaders[] = {"RHS_ural4320_Tires_Gravel_Fast_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_ural4320_Tires_Mud_Fast_EXT_SoundSet: Base_Tires_Mud_Fast_Ext_SoundSet {
        soundShaders[] = {"RHS_ural4320_Tires_Mud_Fast_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_ural4320_Tires_Asphalt_Fast_EXT_SoundSet: Base_Tires_Asphalt_Fast_Ext_SoundSet {
        soundShaders[] = {"RHS_ural4320_Tires_Asphalt_Fast_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_ural4320_Tires_Water_Fast_EXT_SoundSet: Base_Tires_Water_Fast_Ext_SoundSet {
        soundShaders[] = {"RHS_ural4320_Tires_Water_Fast_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_ural4320_Tires_Rock_Slow_EXT_SoundSet: Base_Tires_Rock_Slow_Ext_SoundSet {
        soundShaders[] = {"RHS_ural4320_Tires_Rock_Slow_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_ural4320_Tires_Grass_Slow_EXT_SoundSet: Base_Tires_Grass_Slow_Ext_SoundSet {
        soundShaders[] = {"RHS_ural4320_Tires_Grass_Slow_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_ural4320_Tires_Sand_Slow_EXT_SoundSet: Base_Tires_Sand_Slow_Ext_SoundSet {
        soundShaders[] = {"RHS_ural4320_Tires_Sand_Slow_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_ural4320_Tires_Gravel_Slow_EXT_SoundSet: Base_Tires_Gravel_Slow_Ext_SoundSet {
        soundShaders[] = {"RHS_ural4320_Tires_Gravel_Slow_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_ural4320_Tires_Mud_Slow_EXT_SoundSet: Base_Tires_Mud_Slow_Ext_SoundSet {
        soundShaders[] = {"RHS_ural4320_Tires_Mud_Slow_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_ural4320_Tires_Asphalt_Slow_EXT_SoundSet: Base_Tires_Asphalt_Slow_Ext_SoundSet {
        soundShaders[] = {"RHS_ural4320_Tires_Asphalt_Slow_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_ural4320_Tires_Water_Slow_EXT_SoundSet: Base_Tires_Water_Slow_Ext_SoundSet {
        soundShaders[] = {"RHS_ural4320_Tires_Water_Slow_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_ural4320_Tires_Turn_Hard_EXT_SoundSet: Base_Tires_Ext_SoundSet {
        soundShaders[] = {"RHS_ural4320_Tires_Turn_Hard_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_ural4320_Tires_Turn_Soft_EXT_SoundSet: Base_Tires_Ext_SoundSet {
        soundShaders[] = {"RHS_ural4320_Tires_Turn_Soft_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_ural4320_Tires_Brake_Hard_EXT_SoundSet: Base_Tires_Ext_SoundSet {
        soundShaders[] = {"RHS_ural4320_Tires_Brake_Hard_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_ural4320_Tires_Brake_Soft_EXT_SoundSet: Base_Tires_Ext_SoundSet {
        soundShaders[] = {"RHS_ural4320_Tires_Brake_Soft_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_ural4320_Rattling_INT_SoundSet: Vehicle_Base_Body_INT_SoundSet {
        soundShaders[] = {"RHS_ural4320_Rattling_INT_SoundShader"};
    };
    class RHS_ural4320_Stress_INT_SoundSet: Vehicle_Base_Body_INT_SoundSet {
        soundShaders[] = {"RHS_ural4320_Stress_INT_SoundShader"};
    };
    class RHS_ural4320_Rain_INT_SoundSet: Vehicle_Base_Body_INT_SoundSet {
        soundShaders[] = {"RHS_ural4320_Rain_INT_SoundShader"};
        sound3DProcessingType = "VehicleInt_Front_3DProcessingType";
    };
    class RHS_ural4320_Rattling_EXT_SoundSet: Vehicle_Base_Body_EXT_SoundSet {
        soundShaders[] = {"RHS_ural4320_Rattling_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_ural4320_Stress_EXT_SoundSet: Vehicle_Base_Body_EXT_SoundSet {
        soundShaders[] = {"RHS_ural4320_Stress_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_ural4320_Rain_EXT_SoundSet: Vehicle_Base_Body_EXT_SoundSet {
        soundShaders[] = {"RHS_ural4320_Rain_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_kamaz_Engine_RPM0_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet {
        soundShaders[] = {"RHS_kamaz_Engine_RPM0_EXT_SoundShader"};
        sound3DProcessingType = "VehicleExt_3DProcessingType";
        posOffset[] = {0, -1, 3.5};
        volumeFactor = 1;
    };
    class RHS_kamaz_Engine_RPM1_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet {
        soundShaders[] = {"RHS_kamaz_Engine_RPM1_EXT_SoundShader"};
        sound3DProcessingType = "VehicleExt_3DProcessingType";
        volumeCurve = "InverseSquare2Curve";
        posOffset[] = {0, -1, 3.5};
        volumeFactor = 1;
    };
    class RHS_kamaz_Engine_RPM2_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet {
        soundShaders[] = {"RHS_kamaz_Engine_RPM2_EXT_SoundShader"};
        sound3DProcessingType = "VehicleExt_3DProcessingType";
        volumeCurve = "InverseSquare2Curve";
        posOffset[] = {0, -1, 3.5};
        volumeFactor = 1;
    };
    class RHS_kamaz_Engine_RPM0_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet {
        soundShaders[] = {"RHS_kamaz_Engine_RPM0_INT_SoundShader"};
        sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
        posOffset[] = {0, 0, 0};
        volumeFactor = 1;
    };
    class RHS_kamaz_Engine_RPM1_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet {
        soundShaders[] = {"RHS_kamaz_Engine_RPM1_INT_SoundShader"};
        sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
        volumeCurve = "InverseSquare2Curve";
        posOffset[] = {0, 0, 0};
        volumeFactor = 1;
    };
    class RHS_kamaz_Engine_RPM2_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet {
        soundShaders[] = {"RHS_kamaz_Engine_RPM2_INT_SoundShader"};
        sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
        volumeCurve = "InverseSquare2Curve";
        posOffset[] = {0, 0, 0};
        volumeFactor = 1;
    };
    class RHS_kamaz_Engine_EXT_Burst_SoundSet {
        soundShaders[] = {"RHS_kamaz_Engine_EXT_Burst_SoundShader"};
        playTrigger = "(thrust * (((abs(speed)) factor[5,4.9]) - 0.6)) * (acceleration factor [0.02,0.03])";
        posOffset[] = {0, -1, 3.5};
        distanceFilter = "softVehiclesDistanceFreqAttenuationFilter";
        frequencyRandomizer = 1;
        frequencyRandomizerMin = 0;
        sound3DProcessingType = "VehicleExt_3DProcessingType";
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        volumeFactor = 1;
        spatial = 1;
        loop = 0;
    };
    class RHS_kamaz_Engine_INT_Burst_SoundSet {
        soundShaders[] = {"RHS_kamaz_Engine_INT_Burst_SoundShader"};
        playTrigger = "(thrust * (((abs(speed)) factor[5,4.9]) - 0.6)) * (acceleration factor [0.02,0.03])";
        posOffset[] = {0, 0, 0};
        distanceFilter = "softVehiclesDistanceFreqAttenuationFilter";
        frequencyRandomizer = 1;
        frequencyRandomizerMin = 0;
        sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        volumeFactor = 1;
        spatial = 1;
        loop = 0;
    };
    class RHS_kamaz_Brakes_EXT_SoundSet {
        soundShaders[] = {"RHS_kamaz_Brakes_EXT_SoundShader"};
        playTrigger = "(thrust * (((abs(speed)) factor[3,2.9]) - 0.7))";
        posOffset[] = {0, -1, 3.5};
        distanceFilter = "softVehiclesDistanceFreqAttenuationFilter";
        frequencyRandomizer = 1;
        frequencyRandomizerMin = 0;
        sound3DProcessingType = "VehicleExt_3DProcessingType";
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        volumeFactor = 1;
        spatial = 1;
        loop = 0;
    };
    class RHS_kamaz_Brakes_INT_SoundSet {
        soundShaders[] = {"RHS_kamaz_Brakes_INT_SoundShader"};
        playTrigger = "(thrust * (((abs(speed)) factor[3,2.9]) - 0.7))";
        posOffset[] = {0, 0, 0};
        distanceFilter = "softVehiclesDistanceFreqAttenuationFilter";
        frequencyRandomizer = 1;
        frequencyRandomizerMin = 0;
        sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        volumeFactor = 1;
        spatial = 1;
        loop = 0;
    };
    class RHS_kamaz_Tires_Rock_Fast_INT_SoundSet: Base_Tires_Rock_Fast_Int_SoundSet {
        soundShaders[] = {"RHS_kamaz_Tires_Rock_Fast_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_kamaz_Tires_Grass_Fast_INT_SoundSet: Base_Tires_Grass_Fast_Int_SoundSet {
        soundShaders[] = {"RHS_kamaz_Tires_Grass_Fast_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_kamaz_Tires_Sand_Fast_INT_SoundSet: Base_Tires_Sand_Fast_Int_SoundSet {
        soundShaders[] = {"RHS_kamaz_Tires_Sand_Fast_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_kamaz_Tires_Gravel_Fast_INT_SoundSet: Base_Tires_Gravel_Fast_Int_SoundSet {
        soundShaders[] = {"RHS_kamaz_Tires_Gravel_Fast_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_kamaz_Tires_Mud_Fast_INT_SoundSet: Base_Tires_Mud_Fast_Int_SoundSet {
        soundShaders[] = {"RHS_kamaz_Tires_Mud_Fast_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_kamaz_Tires_Asphalt_Fast_INT_SoundSet: Base_Tires_Asphalt_Fast_Int_SoundSet {
        soundShaders[] = {"RHS_kamaz_Tires_Asphalt_Fast_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_kamaz_Tires_Water_Fast_INT_SoundSet: Base_Tires_Water_Fast_Int_SoundSet {
        soundShaders[] = {"RHS_kamaz_Tires_Water_Fast_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_kamaz_Tires_Rock_Slow_INT_SoundSet: Base_Tires_Rock_Slow_Int_SoundSet {
        soundShaders[] = {"RHS_kamaz_Tires_Rock_Slow_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_kamaz_Tires_Grass_Slow_INT_SoundSet: Base_Tires_Grass_Slow_Int_SoundSet {
        soundShaders[] = {"RHS_kamaz_Tires_Grass_Slow_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_kamaz_Tires_Sand_Slow_INT_SoundSet: Base_Tires_Sand_Slow_Int_SoundSet {
        soundShaders[] = {"RHS_kamaz_Tires_Sand_Slow_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_kamaz_Tires_Gravel_Slow_INT_SoundSet: Base_Tires_Gravel_Slow_Int_SoundSet {
        soundShaders[] = {"RHS_kamaz_Tires_Gravel_Slow_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_kamaz_Tires_Mud_Slow_INT_SoundSet: Base_Tires_Mud_Slow_Int_SoundSet {
        soundShaders[] = {"RHS_kamaz_Tires_Mud_Slow_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_kamaz_Tires_Asphalt_Slow_INT_SoundSet: Base_Tires_Asphalt_Slow_Int_SoundSet {
        soundShaders[] = {"RHS_kamaz_Tires_Asphalt_Slow_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_kamaz_Tires_Water_Slow_INT_SoundSet: Base_Tires_Water_Slow_Int_SoundSet {
        soundShaders[] = {"RHS_kamaz_Tires_Water_Slow_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_kamaz_Tires_Turn_Hard_INT_SoundSet: Base_Tires_Int_SoundSet {
        soundShaders[] = {"RHS_kamaz_Tires_Turn_Hard_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_kamaz_Tires_Turn_Soft_INT_SoundSet: Base_Tires_Int_SoundSet {
        soundShaders[] = {"RHS_kamaz_Tires_Turn_Soft_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_kamaz_Tires_Brake_Hard_INT_SoundSet: Base_Tires_Int_SoundSet {
        soundShaders[] = {"RHS_kamaz_Tires_Brake_Hard_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_kamaz_Tires_Brake_Soft_INT_SoundSet: Base_Tires_Int_SoundSet {
        soundShaders[] = {"RHS_kamaz_Tires_Brake_Soft_INT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_kamaz_Tires_Rock_Fast_EXT_SoundSet: Base_Tires_Rock_Fast_Ext_SoundSet {
        soundShaders[] = {"RHS_kamaz_Tires_Rock_Fast_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_kamaz_Tires_Grass_Fast_EXT_SoundSet: Base_Tires_Grass_Fast_Ext_SoundSet {
        soundShaders[] = {"RHS_kamaz_Tires_Grass_Fast_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_kamaz_Tires_Sand_Fast_EXT_SoundSet: Base_Tires_Sand_Fast_Ext_SoundSet {
        soundShaders[] = {"RHS_kamaz_Tires_Sand_Fast_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_kamaz_Tires_Gravel_Fast_EXT_SoundSet: Base_Tires_Gravel_Fast_Ext_SoundSet {
        soundShaders[] = {"RHS_kamaz_Tires_Gravel_Fast_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_kamaz_Tires_Mud_Fast_EXT_SoundSet: Base_Tires_Mud_Fast_Ext_SoundSet {
        soundShaders[] = {"RHS_kamaz_Tires_Mud_Fast_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_kamaz_Tires_Asphalt_Fast_EXT_SoundSet: Base_Tires_Asphalt_Fast_Ext_SoundSet {
        soundShaders[] = {"RHS_kamaz_Tires_Asphalt_Fast_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_kamaz_Tires_Water_Fast_EXT_SoundSet: Base_Tires_Water_Fast_Ext_SoundSet {
        soundShaders[] = {"RHS_kamaz_Tires_Water_Fast_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_kamaz_Tires_Rock_Slow_EXT_SoundSet: Base_Tires_Rock_Slow_Ext_SoundSet {
        soundShaders[] = {"RHS_kamaz_Tires_Rock_Slow_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_kamaz_Tires_Grass_Slow_EXT_SoundSet: Base_Tires_Grass_Slow_Ext_SoundSet {
        soundShaders[] = {"RHS_kamaz_Tires_Grass_Slow_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_kamaz_Tires_Sand_Slow_EXT_SoundSet: Base_Tires_Sand_Slow_Ext_SoundSet {
        soundShaders[] = {"RHS_kamaz_Tires_Sand_Slow_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_kamaz_Tires_Gravel_Slow_EXT_SoundSet: Base_Tires_Gravel_Slow_Ext_SoundSet {
        soundShaders[] = {"RHS_kamaz_Tires_Gravel_Slow_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_kamaz_Tires_Mud_Slow_EXT_SoundSet: Base_Tires_Mud_Slow_Ext_SoundSet {
        soundShaders[] = {"RHS_kamaz_Tires_Mud_Slow_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_kamaz_Tires_Asphalt_Slow_EXT_SoundSet: Base_Tires_Asphalt_Slow_Ext_SoundSet {
        soundShaders[] = {"RHS_kamaz_Tires_Asphalt_Slow_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_kamaz_Tires_Water_Slow_EXT_SoundSet: Base_Tires_Water_Slow_Ext_SoundSet {
        soundShaders[] = {"RHS_kamaz_Tires_Water_Slow_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_kamaz_Tires_Turn_Hard_EXT_SoundSet: Base_Tires_Ext_SoundSet {
        soundShaders[] = {"RHS_kamaz_Tires_Turn_Hard_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_kamaz_Tires_Turn_Soft_EXT_SoundSet: Base_Tires_Ext_SoundSet {
        soundShaders[] = {"RHS_kamaz_Tires_Turn_Soft_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_kamaz_Tires_Brake_Hard_EXT_SoundSet: Base_Tires_Ext_SoundSet {
        soundShaders[] = {"RHS_kamaz_Tires_Brake_Hard_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_kamaz_Tires_Brake_Soft_EXT_SoundSet: Base_Tires_Ext_SoundSet {
        soundShaders[] = {"RHS_kamaz_Tires_Brake_Soft_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_kamaz_Rattling_INT_SoundSet: Vehicle_Base_Body_INT_SoundSet {
        soundShaders[] = {"RHS_kamaz_Rattling_INT_SoundShader"};
    };
    class RHS_kamaz_Stress_INT_SoundSet: Vehicle_Base_Body_INT_SoundSet {
        soundShaders[] = {"RHS_kamaz_Stress_INT_SoundShader"};
    };
    class RHS_kamaz_Rain_INT_SoundSet: Vehicle_Base_Body_INT_SoundSet {
        soundShaders[] = {"RHS_kamaz_Rain_INT_SoundShader"};
        sound3DProcessingType = "VehicleInt_Front_3DProcessingType";
    };
    class RHS_kamaz_Rattling_EXT_SoundSet: Vehicle_Base_Body_EXT_SoundSet {
        soundShaders[] = {"RHS_kamaz_Rattling_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_kamaz_Stress_EXT_SoundSet: Vehicle_Base_Body_EXT_SoundSet {
        soundShaders[] = {"RHS_kamaz_Stress_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class RHS_kamaz_Rain_EXT_SoundSet: Vehicle_Base_Body_EXT_SoundSet {
        soundShaders[] = {"RHS_kamaz_Rain_EXT_SoundShader"};
        posOffset[] = {0, 0, 0};
    };
    class rhs_tank_t72_int_autoloader_SoundSet {
        soundShaders[] = {"rhs_tank_t72_int_autoloader_SoundShader"};
        volumeFactor = 1;
        volumeCurve = "LinearCurve";
        spatial = 1;
        doppler = 0;
        loop = 0;
        sound3DProcessingType = "ExplosionHeavy3DProcessingType";
        distanceFilter = "explosionDistanceFreqAttenuationFilter";
        playTrigger = "CustomSoundController1";
    };
    class rhs_tank_t72_ext_autoloader_SoundSet {
        soundShaders[] = {"rhs_tank_t72_ext_autoloader_SoundShader"};
        volumeFactor = 0.85;
        volumeCurve = "LinearCurve";
        spatial = 1;
        doppler = 0;
        loop = 0;
        sound3DProcessingType = "ExplosionHeavy3DProcessingType";
        distanceFilter = "RHS_vehicletDistanceFilter";
        playTrigger = "CustomSoundController1";
    };
    class rhs_spo15_beep_single_SoundSet {
        soundShaders[] = {"rhs_spo15_beep_single_SoundShader"};
        volumeFactor = 0.85;
        volumeCurve = "LinearCurve";
        spatial = 1;
        doppler = 0;
        loop = 0;
        sound3DProcessingType = "ExplosionHeavy3DProcessingType";
        distanceFilter = "softVehiclesDistanceFreqAttenuationFilter";
        playTrigger = "CustomSoundController10";
    };
    class rhs_spo15_beep_short_SoundSet: rhs_spo15_beep_single_SoundSet {
        soundShaders[] = {"rhs_spo15_beep_short_SoundShader"};
        playTrigger = "CustomSoundController11";
    };
    class rhs_spo15_beep_long_SoundSet: rhs_spo15_beep_single_SoundSet {
        soundShaders[] = {"rhs_spo15_beep_long_SoundShader"};
        loop = 1;
        playTrigger = "";
    };
};
class CfgSoundShaders {
    class Engine_Base_RPM0_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\Default\Engine_Ext_RPM0", 1}};
        range = 100;
    };
    class Engine_Base_RPM1_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\Default\Engine_Ext_RPM1", 1}};
        range = 125;
    };
    class Engine_Base_RPM2_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\Default\Engine_Ext_RPM2", 1}};
        range = 150;
    };
    class Engine_Base_RPM3_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\Default\Engine_Ext_RPM3", 1}};
        range = 175;
    };
    class Engine_Base_RPM4_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\Default\Engine_Ext_RPM4", 1}};
        range = 200;
    };
    class Engine_Base_RPM5_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\Default\Engine_Ext_RPM5", 1}};
        range = 225;
    };
    class Engine_Base_RPM6_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\Default\Engine_Ext_RPM6", 1}};
        range = 250;
    };
    class Engine_Base_RPM7_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\Default\Engine_Ext_RPM7", 1}};
        range = 250;
    };
    class Engine_Base_RPM8_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\Default\Engine_Ext_RPM8", 1}};
        range = 250;
    };
    class Engine_Base_RPM0_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\Default\Engine_Int_RPM0", 1}};
        range = 100;
    };
    class Engine_Base_RPM1_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\Default\Engine_Int_RPM1", 1}};
        range = 125;
    };
    class Engine_Base_RPM2_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\Default\Engine_Int_RPM2", 1}};
        range = 150;
    };
    class Engine_Base_RPM3_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\Default\Engine_Int_RPM3", 1}};
        range = 175;
    };
    class Engine_Base_RPM4_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\Default\Engine_Int_RPM4", 1}};
        range = 200;
    };
    class Engine_Base_RPM5_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\Default\Engine_Int_RPM5", 1}};
        range = 225;
    };
    class Engine_Base_RPM6_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\Default\Engine_Int_RPM6", 1}};
        range = 250;
    };
    class Engine_Base_RPM7_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\Default\Engine_Int_RPM7", 1}};
        range = 250;
    };
    class Engine_Base_RPM8_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\Default\Engine_Int_RPM8", 1}};
        range = 250;
    };
    class Base_Tires_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires1\Tires_Asphalt_Ext", 1}};
        volume = 1;
        frequency = 1;
        range = 60;
    };
    class Base_Tires_Rock_Fast_Ext_SoundShader: Base_Tires_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires1\Tires_Asphalt_Fast_Ext", 1}};
    };
    class Base_Tires_Grass_Fast_Ext_SoundShader: Base_Tires_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires1\Tires_Grass_Fast_Ext", 1}};
    };
    class Base_Tires_Sand_Fast_Ext_SoundShader: Base_Tires_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires1\Tires_Sand_Fast_Ext", 1}};
    };
    class Base_Tires_Gravel_Fast_Ext_SoundShader: Base_Tires_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires1\Tires_Gravel_Fast_Ext", 1}};
    };
    class Base_Tires_Mud_Fast_Ext_SoundShader: Base_Tires_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires1\Tires_Mud_Fast_Ext", 1}};
    };
    class Base_Tires_Asphalt_Fast_Ext_SoundShader: Base_Tires_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires1\Tires_Asphalt_Fast_Ext", 1}};
    };
    class Base_Tires_Water_Fast_Ext_SoundShader: Base_Tires_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires1\Tires_Water_Fast_Ext", 1}};
    };
    class Base_Tires_Rock_Slow_Ext_SoundShader: Base_Tires_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires1\Tires_Asphalt_Slow_Ext", 1}};
    };
    class Base_Tires_Grass_Slow_Ext_SoundShader: Base_Tires_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires1\Tires_Grass_Slow_Ext", 1}};
    };
    class Base_Tires_Sand_Slow_Ext_SoundShader: Base_Tires_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires1\Tires_Sand_Slow_Ext", 1}};
    };
    class Base_Tires_Gravel_Slow_Ext_SoundShader: Base_Tires_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires1\Tires_Gravel_Slow_Ext", 1}};
    };
    class Base_Tires_Mud_Slow_Ext_SoundShader: Base_Tires_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires1\Tires_Mud_Slow_Ext", 1}};
    };
    class Base_Tires_Asphalt_Slow_Ext_SoundShader: Base_Tires_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires1\Tires_Asphalt_Slow_Ext", 1}};
    };
    class Base_Tires_Water_Slow_Ext_SoundShader: Base_Tires_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires1\Tires_Water_Slow_Ext", 1}};
    };
    class Base_Tires_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires1\Tires_Asphalt_Ext", 1}};
        volume = 1;
        frequency = 1;
        range = 60;
    };
    class Base_Tires_Rock_Fast_Int_SoundShader: Base_Tires_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires1\Tires_Asphalt_Fast_Int", 1}};
    };
    class Base_Tires_Grass_Fast_Int_SoundShader: Base_Tires_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires1\Tires_Grass_Fast_Int", 1}};
    };
    class Base_Tires_Sand_Fast_Int_SoundShader: Base_Tires_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires1\Tires_Sand_Fast_Int", 1}};
    };
    class Base_Tires_Gravel_Fast_Int_SoundShader: Base_Tires_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires1\Tires_Gravel_Fast_Int", 1}};
    };
    class Base_Tires_Mud_Fast_Int_SoundShader: Base_Tires_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires1\Tires_Mud_Fast_Int", 1}};
    };
    class Base_Tires_Asphalt_Fast_Int_SoundShader: Base_Tires_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires1\Tires_Asphalt_Fast_Int", 1}};
    };
    class Base_Tires_Water_Fast_Int_SoundShader: Base_Tires_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires1\Tires_Water_Fast_Int", 1}};
    };
    class Base_Tires_Rock_Slow_Int_SoundShader: Base_Tires_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires1\Tires_Asphalt_Slow_Int", 1}};
    };
    class Base_Tires_Grass_Slow_Int_SoundShader: Base_Tires_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires1\Tires_Grass_Slow_Int", 1}};
    };
    class Base_Tires_Sand_Slow_Int_SoundShader: Base_Tires_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires1\Tires_Sand_Slow_Int", 1}};
    };
    class Base_Tires_Gravel_Slow_Int_SoundShader: Base_Tires_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires1\Tires_Gravel_Slow_Int", 1}};
    };
    class Base_Tires_Mud_Slow_Int_SoundShader: Base_Tires_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires1\Tires_Mud_Slow_Int", 1}};
    };
    class Base_Tires_Asphalt_Slow_Int_SoundShader: Base_Tires_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires1\Tires_Asphalt_Slow_Int", 1}};
    };
    class Base_Tires_Water_Slow_Int_SoundShader: Base_Tires_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires1\Tires_Water_Slow_Int", 1}};
    };
    class Base_Tires_Open_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires1\Tires_Asphalt_Ext", 1}};
        volume = 1;
        frequency = 1;
        range = 60;
    };
    class Base_Tires_Rock_Fast_Open_SoundShader: Base_Tires_Open_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires1\Tires_Asphalt_Fast_Open", 1}};
    };
    class Base_Tires_Grass_Fast_Open_SoundShader: Base_Tires_Open_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires1\Tires_Grass_Fast_Open", 1}};
    };
    class Base_Tires_Sand_Fast_Open_SoundShader: Base_Tires_Open_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires1\Tires_Sand_Fast_Open", 1}};
    };
    class Base_Tires_Gravel_Fast_Open_SoundShader: Base_Tires_Open_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires1\Tires_Gravel_Fast_Open", 1}};
    };
    class Base_Tires_Mud_Fast_Open_SoundShader: Base_Tires_Open_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires1\Tires_Mud_Fast_Open", 1}};
    };
    class Base_Tires_Asphalt_Fast_Open_SoundShader: Base_Tires_Open_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires1\Tires_Asphalt_Fast_Open", 1}};
    };
    class Base_Tires_Water_Fast_Open_SoundShader: Base_Tires_Open_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires1\Tires_Water_Fast_Open", 1}};
    };
    class Base_Tires_Rock_Slow_Open_SoundShader: Base_Tires_Open_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires1\Tires_Asphalt_Slow_Open", 1}};
    };
    class Base_Tires_Grass_Slow_Open_SoundShader: Base_Tires_Open_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires1\Tires_Grass_Slow_Open", 1}};
    };
    class Base_Tires_Sand_Slow_Open_SoundShader: Base_Tires_Open_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires1\Tires_Sand_Slow_Open", 1}};
    };
    class Base_Tires_Gravel_Slow_Open_SoundShader: Base_Tires_Open_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires1\Tires_Gravel_Slow_Open", 1}};
    };
    class Base_Tires_Mud_Slow_Open_SoundShader: Base_Tires_Open_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires1\Tires_Mud_Slow_Open", 1}};
    };
    class Base_Tires_Asphalt_Slow_Open_SoundShader: Base_Tires_Open_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires1\Tires_Asphalt_Slow_Open", 1}};
    };
    class Base_Tires_Water_Slow_Open_SoundShader: Base_Tires_Open_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires1\Tires_Water_Slow_Open", 1}};
    };
    class Base_Tracks_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks1\Tracks_01_Ext", 1}};
        volume = 1;
        frequency = 1;
        range = 300;
    };
    class Base_Tracks_01_EXT_SoundShader: Base_Tracks_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks1\Tracks_01_Ext", 1}};
    };
    class Base_Tracks_02_EXT_SoundShader: Base_Tracks_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks1\Tracks_02_Ext", 1}};
    };
    class Base_Tracks_03_EXT_SoundShader: Base_Tracks_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks1\Tracks_03_Ext", 1}};
    };
    class Base_Tracks_04_EXT_SoundShader: Base_Tracks_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks1\Tracks_04_Ext", 1}};
    };
    class Base_Tracks_05_EXT_SoundShader: Base_Tracks_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks1\Tracks_05_Ext", 1}};
    };
    class Base_Tracks_06_EXT_SoundShader: Base_Tracks_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks1\Tracks_06_Ext", 1}};
    };
    class Base_Tracks_Brake_Hard_EXT_SoundShader: Base_Tracks_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks_brakes\Tracks_Brake_Hard_01_EXT", 1}};
        range = 120;
    };
    class Base_Tracks_Brake_Soft_EXT_SoundShader: Base_Tracks_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks_brakes\Tracks_Brake_Soft_01_EXT", 1}};
        range = 40;
    };
    class Base_Tracks_Turn_Hard_EXT_SoundShader: Base_Tracks_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks_turns\Tracks_Turn_Hard_01_EXT", 1}};
        range = 120;
    };
    class Base_Tracks_Turn_Soft_EXT_SoundShader: Base_Tracks_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks_turns\Tracks_Turn_Soft_01_EXT", 1}};
        range = 40;
    };
    class Base_Drive_Water_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks_surface_movement\Drive_Water_01_EXT", 1}};
        volume = 1;
        frequency = 1;
        range = 40;
    };
    class Base_Drive_Dirt_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks_surface_movement\Drive_Dirt_01_EXT", 1}};
        volume = 1;
        frequency = 1;
        range = 40;
    };
    class Base_Tracks_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks1\Tracks_01_Int", 1}};
        volume = 1;
        frequency = 1;
        range = 60;
    };
    class Base_Tracks_01_INT_SoundShader: Base_Tracks_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks1\Tracks_01_Int", 1}};
    };
    class Base_Tracks_02_INT_SoundShader: Base_Tracks_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks1\Tracks_02_Int", 1}};
    };
    class Base_Tracks_03_INT_SoundShader: Base_Tracks_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks1\Tracks_03_Int", 1}};
    };
    class Base_Tracks_04_INT_SoundShader: Base_Tracks_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks1\Tracks_04_Int", 1}};
    };
    class Base_Tracks_05_INT_SoundShader: Base_Tracks_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks1\Tracks_05_Int", 1}};
    };
    class Base_Tracks_06_INT_SoundShader: Base_Tracks_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks1\Tracks_06_Int", 1}};
    };
    class Base_Tracks_Brake_Hard_INT_SoundShader: Base_Tracks_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks_brakes\Tracks_Brake_Hard_01_INT", 1}};
        range = 120;
    };
    class Base_Tracks_Brake_Soft_INT_SoundShader: Base_Tracks_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks_brakes\Tracks_Brake_Soft_01_INT", 1}};
        range = 40;
    };
    class Base_Tracks_Turn_Hard_INT_SoundShader: Base_Tracks_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks_turns\Tracks_Turn_Hard_01_INT", 1}};
        range = 120;
    };
    class Base_Tracks_Turn_Soft_INT_SoundShader: Base_Tracks_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks_turns\Tracks_Turn_Soft_01_INT", 1}};
        range = 40;
    };
    class Base_Drive_Water_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks_surface_movement\Drive_Water_01_INT", 1}};
        volume = 1;
        frequency = 1;
        range = 40;
    };
    class Base_Drive_Dirt_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks_surface_movement\Drive_Dirt_01_INT", 1}};
        volume = 1;
        frequency = 1;
        range = 40;
    };
    class RHS_2S1_Engine_RPM0_EXT_SoundShader: Engine_Base_RPM0_EXT_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_vehiclesounds\sounds\armor\2S1\2S1_Engine_EXT_RPM0", 1}};
        frequency = "1.0 * (1 + 0.8 * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [700,	2000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [700,	2000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [700,	2000])) - 0))";
        volume = "engineOn * 1.7 * 1.2*(1 + 0.2*(rpm factor[700,	2000]) + 0.2*thrust) * (rpm factor [0.15 *700, (0.15 *700 + 0.1 *(700-0.15 *700))]) * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [700,	2000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [700,	2000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [700,	2000])) factor [(900 - 700)/(1600 - 700) - (((900 - 700)/(1600 - 700) - 0) - (1.2 * ((900 - 700)/(1600 - 700) - 0)))/2, 0])";
        range = "6*210";
    };
    class RHS_2S1_Engine_RPM1_EXT_SoundShader: Engine_Base_RPM1_EXT_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_vehiclesounds\sounds\armor\2S1\2S1_Engine_EXT_RPM1", 1}};
        frequency = "1.0 * (1 + 0.8 * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [700,	2000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [700,	2000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [700,	2000])) - (900 - 700)/(1600 - 700)))";
        volume = "engineOn * 1.7 * 1.2*(1 + 0.2*(rpm factor[700,	2000]) + 0.2*thrust) * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [700,	2000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [700,	2000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [700,	2000])) factor[0, (900 - 700)/(1600 - 700) - (((900 - 700)/(1600 - 700) - 0) - (1.2 * ((900 - 700)/(1600 - 700) - 0)))/2]) * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [700,	2000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [700,	2000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [700,	2000])) factor [(1200 - 700)/(1600 - 700) - (((1200 - 700)/(1600 - 700) - (900 - 700)/(1600 - 700)) - (1.2 * ((1200 - 700)/(1600 - 700) - (900 - 700)/(1600 - 700))))/2, (900 - 700)/(1600 - 700) + (((1200 - 700)/(1600 - 700) - (900 - 700)/(1600 - 700)) - (1.2 * ((1200 - 700)/(1600 - 700) - (900 - 700)/(1600 - 700))))/2])";
        range = "6*215";
    };
    class RHS_2S1_Engine_RPM2_EXT_SoundShader: Engine_Base_RPM2_EXT_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_vehiclesounds\sounds\armor\2S1\2S1_Engine_EXT_RPM2", 1}};
        frequency = "1.0 * (1 + 0.8 * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [700,	2000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [700,	2000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [700,	2000])) - (1200 - 700)/(1600 - 700)))";
        volume = "engineOn * 1.7 * 1.2*(1 + 0.2*(rpm factor[700,	2000]) + 0.2*thrust) * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [700,	2000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [700,	2000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [700,	2000])) factor[(900 - 700)/(1600 - 700) + (((1200 - 700)/(1600 - 700) - (900 - 700)/(1600 - 700)) - (1.2 * ((1200 - 700)/(1600 - 700) - (900 - 700)/(1600 - 700))))/2, (1200 - 700)/(1600 - 700) - (((1200 - 700)/(1600 - 700) - (900 - 700)/(1600 - 700)) - (1.2 * ((1200 - 700)/(1600 - 700) - (900 - 700)/(1600 - 700))))/2]) * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [700,	2000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [700,	2000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [700,	2000])) factor [(1600 - 700)/(1600 - 700) - (((1600 - 700)/(1600 - 700) - (1200 - 700)/(1600 - 700)) - (1.2 * ((1600 - 700)/(1600 - 700) - (1200 - 700)/(1600 - 700))))/2, (1200 - 700)/(1600 - 700) + (((1600 - 700)/(1600 - 700) - (1200 - 700)/(1600 - 700)) - (1.2 * ((1600 - 700)/(1600 - 700) - (1200 - 700)/(1600 - 700))))/2])";
        range = "6*220";
    };
    class RHS_2S1_Engine_RPM3_EXT_SoundShader: Engine_Base_RPM3_EXT_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_vehiclesounds\sounds\armor\2S1\2S1_Engine_EXT_RPM3", 1}};
        frequency = "1.0 * (1 + 0.8 * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [700,	2000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [700,	2000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [700,	2000])) - (1600 - 700)/(1600 - 700)))";
        volume = "engineOn * 1.7 * 1.2*(1 + 0.2*(rpm factor[700,	2000]) + 0.2*thrust) * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [700,	2000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [700,	2000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [700,	2000])) factor[(1200 - 700)/(1600 - 700) + (((1600 - 700)/(1600 - 700) - (1200 - 700)/(1600 - 700)) - (1.2 * ((1600 - 700)/(1600 - 700) - (1200 - 700)/(1600 - 700))))/2, (1600 - 700)/(1600 - 700) - (((1600 - 700)/(1600 - 700) - (1200 - 700)/(1600 - 700)) - (1.2 * ((1600 - 700)/(1600 - 700) - (1200 - 700)/(1600 - 700))))/2])";
        range = "6*225";
    };
    class RHS_2S1_Engine_RPM0_INT_SoundShader: Engine_Base_RPM0_INT_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_vehiclesounds\sounds\armor\2S1\2S1_Engine_INT_RPM0", 1}};
        frequency = "1.0 * (1 + 0.8 * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [700,	2000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [700,	2000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [700,	2000])) - 0))";
        volume = "engineOn * 1 * 1.2 * (rpm factor [0.15 *700, (0.15 *700 + 0.1 *(700-0.15 *700))]) * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [700,	2000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [700,	2000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [700,	2000])) factor [(900 - 700)/(1600 - 700) - (((900 - 700)/(1600 - 700) - 0) - (1.2 * ((900 - 700)/(1600 - 700) - 0)))/2, 0])";
        range = "6*210";
    };
    class RHS_2S1_Engine_RPM1_INT_SoundShader: Engine_Base_RPM1_INT_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_vehiclesounds\sounds\armor\2S1\2S1_Engine_INT_RPM1", 1}};
        frequency = "1.0 * (1 + 0.8 * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [700,	2000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [700,	2000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [700,	2000])) - (900 - 700)/(1600 - 700)))";
        volume = "engineOn * 1 * 1.2 * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [700,	2000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [700,	2000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [700,	2000])) factor[0, (900 - 700)/(1600 - 700) - (((900 - 700)/(1600 - 700) - 0) - (1.2 * ((900 - 700)/(1600 - 700) - 0)))/2]) * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [700,	2000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [700,	2000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [700,	2000])) factor [(1200 - 700)/(1600 - 700) - (((1200 - 700)/(1600 - 700) - (900 - 700)/(1600 - 700)) - (1.2 * ((1200 - 700)/(1600 - 700) - (900 - 700)/(1600 - 700))))/2, (900 - 700)/(1600 - 700) + (((1200 - 700)/(1600 - 700) - (900 - 700)/(1600 - 700)) - (1.2 * ((1200 - 700)/(1600 - 700) - (900 - 700)/(1600 - 700))))/2])";
        range = "6*215";
    };
    class RHS_2S1_Engine_RPM2_INT_SoundShader: Engine_Base_RPM2_INT_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_vehiclesounds\sounds\armor\2S1\2S1_Engine_INT_RPM2", 1}};
        frequency = "1.0 * (1 + 0.8 * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [700,	2000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [700,	2000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [700,	2000])) - (1200 - 700)/(1600 - 700)))";
        volume = "engineOn * 1 * 1.2 * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [700,	2000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [700,	2000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [700,	2000])) factor[(900 - 700)/(1600 - 700) + (((1200 - 700)/(1600 - 700) - (900 - 700)/(1600 - 700)) - (1.2 * ((1200 - 700)/(1600 - 700) - (900 - 700)/(1600 - 700))))/2, (1200 - 700)/(1600 - 700) - (((1200 - 700)/(1600 - 700) - (900 - 700)/(1600 - 700)) - (1.2 * ((1200 - 700)/(1600 - 700) - (900 - 700)/(1600 - 700))))/2]) * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [700,	2000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [700,	2000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [700,	2000])) factor [(1600 - 700)/(1600 - 700) - (((1600 - 700)/(1600 - 700) - (1200 - 700)/(1600 - 700)) - (1.2 * ((1600 - 700)/(1600 - 700) - (1200 - 700)/(1600 - 700))))/2, (1200 - 700)/(1600 - 700) + (((1600 - 700)/(1600 - 700) - (1200 - 700)/(1600 - 700)) - (1.2 * ((1600 - 700)/(1600 - 700) - (1200 - 700)/(1600 - 700))))/2])";
        range = "6*220";
    };
    class RHS_2S1_Engine_RPM3_INT_SoundShader: Engine_Base_RPM3_INT_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_vehiclesounds\sounds\armor\2S1\2S1_Engine_INT_RPM3", 1}};
        frequency = "1.0 * (1 + 0.8 * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [700,	2000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [700,	2000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [700,	2000])) - (1600 - 700)/(1600 - 700)))";
        volume = "engineOn * 1 * 1.2 * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [700,	2000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [700,	2000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [700,	2000])) factor[(1200 - 700)/(1600 - 700) + (((1600 - 700)/(1600 - 700) - (1200 - 700)/(1600 - 700)) - (1.2 * ((1600 - 700)/(1600 - 700) - (1200 - 700)/(1600 - 700))))/2, (1600 - 700)/(1600 - 700) - (((1600 - 700)/(1600 - 700) - (1200 - 700)/(1600 - 700)) - (1.2 * ((1600 - 700)/(1600 - 700) - (1200 - 700)/(1600 - 700))))/2])";
        range = "6*225";
    };
    class RHS_2S1_Engine_EXT_Burst_SoundShader {
        samples[] = {
            {"rhsafrf\addons\rhs_vehiclesounds\sounds\armor\2S1\2S1_Engine_EXT_Burst01", 1},
            {"rhsafrf\addons\rhs_vehiclesounds\sounds\armor\2S1\2S1_Engine_EXT_Burst02", 1},
            {"rhsafrf\addons\rhs_vehiclesounds\sounds\armor\2S1\2S1_Engine_EXT_Burst03", 1},
            {"rhsafrf\addons\rhs_vehiclesounds\sounds\armor\2S1\2S1_Engine_EXT_Burst04", 1}
        };
        frequency = 1;
        range = "1*150";
        volume = "engineOn * 1.7 * 1.6 * (rpm factor[0,10])";
    };
    class RHS_2S1_Engine_INT_Burst_SoundShader {
        samples[] = {
            {"rhsafrf\addons\rhs_vehiclesounds\sounds\armor\2S1\2S1_Engine_INT_Burst01", 1},
            {"rhsafrf\addons\rhs_vehiclesounds\sounds\armor\2S1\2S1_Engine_INT_Burst02", 1},
            {"rhsafrf\addons\rhs_vehiclesounds\sounds\armor\2S1\2S1_Engine_INT_Burst03", 1},
            {"rhsafrf\addons\rhs_vehiclesounds\sounds\armor\2S1\2S1_Engine_INT_Burst04", 1}
        };
        frequency = 1;
        range = "1*150";
        volume = "engineOn * 1 * 1 * (rpm factor[0,10])";
    };
    class RHS_2S1_Tracks_01_INT_SoundShader: Base_Tracks_01_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks01\Tracks_01_INT", 1}};
        frequency = 0.95;
        range = 300;
        volume = "1 * 1.2 * (1 + ((2*damper2) factor [0, 2]) + (3*abs(latSlip))) * ((abs(speed)) factor[0,2]) * (rock + asphalt + 0.5 * gravel + 0.4 * (mud + grass)) * (1 + gmeterz factor [0.3, 0.6]) * ((abs(speed)) factor [0, (7/6)])*((abs(speed)) factor [2*(7/6),(7/6)])";
    };
    class RHS_2S1_Tracks_02_INT_SoundShader: Base_Tracks_02_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks01\Tracks_02_INT", 1}};
        frequency = 0.95;
        range = 300;
        volume = "1 * 1.2 * (1 + ((2*damper2) factor [0, 2]) + (3*abs(latSlip))) * ((abs(speed)) factor[0,2]) * (rock + asphalt + 0.5 * gravel + 0.4 * (mud + grass)) * (1 + gmeterz factor [0.3, 0.6]) * ((abs(speed)) factor [(7/6), 2*(7/6)])*((abs(speed)) factor [3*(7/6),2*(7/6)])";
    };
    class RHS_2S1_Tracks_03_INT_SoundShader: Base_Tracks_03_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks01\Tracks_03_INT", 1}};
        frequency = 0.95;
        range = 300;
        volume = "1 * 1.2 * (1 + ((2*damper2) factor [0, 2]) + (3*abs(latSlip))) * ((abs(speed)) factor[0,2]) * (rock + asphalt + 0.5 * gravel + 0.4 * (mud + grass)) * (1 + gmeterz factor [0.3, 0.6]) * ((abs(speed)) factor [2*(7/6), 3*(7/6)])*((abs(speed)) factor [4*(7/6),3*(7/6)])";
    };
    class RHS_2S1_Tracks_04_INT_SoundShader: Base_Tracks_04_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks01\Tracks_04_INT", 1}};
        frequency = 0.95;
        range = 300;
        volume = "1 * 1.2 * (1 + ((2*damper2) factor [0, 2]) + (3*abs(latSlip))) * ((abs(speed)) factor[0,2]) * (rock + asphalt + 0.5 * gravel + 0.4 * (mud + grass)) * (1 + gmeterz factor [0.3, 0.6]) * ((abs(speed)) factor [3*(7/6), 4*(7/6)])*((abs(speed)) factor [5*(7/6),4*(7/6)])";
    };
    class RHS_2S1_Tracks_05_INT_SoundShader: Base_Tracks_05_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks01\Tracks_05_INT", 1}};
        frequency = 0.95;
        range = 300;
        volume = "1 * 1.2 * (1 + ((2*damper2) factor [0, 2]) + (3*abs(latSlip))) * ((abs(speed)) factor[0,2]) * (rock + asphalt + 0.5 * gravel + 0.4 * (mud + grass)) * (1 + gmeterz factor [0.3, 0.6]) * ((abs(speed)) factor [4*(7/6), 5*(7/6)])*((abs(speed)) factor [6*(7/6),5*(7/6)])";
    };
    class RHS_2S1_Tracks_06_INT_SoundShader: Base_Tracks_06_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks01\Tracks_06_INT", 1}};
        frequency = 0.95;
        range = 300;
        volume = "1 * 1.2 * (1 + ((2*damper2) factor [0, 2]) + (3*abs(latSlip))) * ((abs(speed)) factor[0,2]) * (rock + asphalt + 0.5 * gravel + 0.4 * (mud + grass)) * (1 + gmeterz factor [0.3, 0.6]) * ((abs(speed)) factor [5*(7/6), 6*(7/6)])";
    };
    class RHS_2S1_Tracks_Brake_Hard_INT_SoundShader: Base_Tracks_Brake_Hard_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks_brakes\Tracks_Brake_Hard_01_INT", 1}};
        frequency = 1;
        volume = "1 * 1.5 * (rock + asphalt + gravel) * ((abs(longSlip)) factor [0.01,0.2]) * (speed factor[2,8])";
    };
    class RHS_2S1_Tracks_Brake_Soft_INT_SoundShader: Base_Tracks_Brake_Soft_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks_brakes\Tracks_Brake_Soft_01_INT", 1}};
        frequency = 1;
        volume = "1 * 1.5 * (1-(rock + asphalt + gravel)) * ((abs(longSlip)) factor [0.01,0.2]) * (speed factor[2,8])";
    };
    class RHS_2S1_Tracks_Turn_Hard_INT_SoundShader: Base_Tracks_Turn_Hard_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks_turns\Tracks_Turn_Hard_04_INT", 1}};
        frequency = 1;
        volume = "1 * 0.75 * 0.5 * (asphalt max rock) * (angVelocity factor[0.3,0.4])";
    };
    class RHS_2S1_Tracks_Turn_Soft_INT_SoundShader: Base_Tracks_Turn_Soft_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks_turns\Tracks_Turn_Soft_04_INT", 1}};
        frequency = 1;
        volume = "1 * 0.75 * (1-0.5 * (asphalt max rock) * (angVelocity factor[0.3,0.4])) * (angVelocity factor[0.3,0.4])";
    };
    class RHS_2S1_Drive_Water_INT_SoundShader: Base_Drive_Water_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks_surface_movement\Drive_Water_01_INT", 1}};
        frequency = 1;
        volume = "1 * 1 * water * ((abs(speed)) factor[0,4])";
    };
    class RHS_2S1_Drive_Dirt_INT_SoundShader: Base_Drive_Dirt_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks_surface_movement\Drive_Dirt_01_INT", 1}};
        frequency = 1;
        volume = "1 * 1 * ((gravel + rock + sand + grass) * (abs(speed) factor [0.1, 1.2]))";
    };
    class RHS_2S1_Tracks_01_EXT_SoundShader: Base_Tracks_01_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks01\Tracks_01_EXT", 1}};
        frequency = 0.95;
        range = 300;
        volume = "1.7 * 0.5 * (1 + ((2*damper2) factor [0, 2]) + (3*abs(latSlip))) * ((abs(speed)) factor[0,2]) * (rock + asphalt + 0.5 * gravel + 0.4 * (mud + grass)) * (1 + gmeterz factor [0.3, 0.6]) * ((abs(speed)) factor [0, (7/6)])*((abs(speed)) factor [2*(7/6),(7/6)])";
    };
    class RHS_2S1_Tracks_02_EXT_SoundShader: Base_Tracks_02_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks01\Tracks_02_EXT", 1}};
        frequency = 0.95;
        range = 300;
        volume = "1.7 * 0.5 * (1 + ((2*damper2) factor [0, 2]) + (3*abs(latSlip))) * ((abs(speed)) factor[0,2]) * (rock + asphalt + 0.5 * gravel + 0.4 * (mud + grass)) * (1 + gmeterz factor [0.3, 0.6]) * ((abs(speed)) factor [(7/6), 2*(7/6)])*((abs(speed)) factor [3*(7/6),2*(7/6)])";
    };
    class RHS_2S1_Tracks_03_EXT_SoundShader: Base_Tracks_03_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks01\Tracks_03_EXT", 1}};
        frequency = 0.95;
        range = 300;
        volume = "1.7 * 0.5 * (1 + ((2*damper2) factor [0, 2]) + (3*abs(latSlip))) * ((abs(speed)) factor[0,2]) * (rock + asphalt + 0.5 * gravel + 0.4 * (mud + grass)) * (1 + gmeterz factor [0.3, 0.6]) * ((abs(speed)) factor [2*(7/6), 3*(7/6)])*((abs(speed)) factor [4*(7/6),3*(7/6)])";
    };
    class RHS_2S1_Tracks_04_EXT_SoundShader: Base_Tracks_04_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks01\Tracks_04_EXT", 1}};
        frequency = 0.95;
        range = 300;
        volume = "1.7 * 0.5 * (1 + ((2*damper2) factor [0, 2]) + (3*abs(latSlip))) * ((abs(speed)) factor[0,2]) * (rock + asphalt + 0.5 * gravel + 0.4 * (mud + grass)) * (1 + gmeterz factor [0.3, 0.6]) * ((abs(speed)) factor [3*(7/6), 4*(7/6)])*((abs(speed)) factor [5*(7/6),4*(7/6)])";
    };
    class RHS_2S1_Tracks_05_EXT_SoundShader: Base_Tracks_05_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks01\Tracks_05_EXT", 1}};
        frequency = 0.95;
        range = 300;
        volume = "1.7 * 0.5 * (1 + ((2*damper2) factor [0, 2]) + (3*abs(latSlip))) * ((abs(speed)) factor[0,2]) * (rock + asphalt + 0.5 * gravel + 0.4 * (mud + grass)) * (1 + gmeterz factor [0.3, 0.6]) * ((abs(speed)) factor [4*(7/6), 5*(7/6)])*((abs(speed)) factor [6*(7/6),5*(7/6)])";
    };
    class RHS_2S1_Tracks_06_EXT_SoundShader: Base_Tracks_06_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks01\Tracks_06_EXT", 1}};
        frequency = 0.95;
        range = 300;
        volume = "1.7 * 0.5 * (1 + ((2*damper2) factor [0, 2]) + (3*abs(latSlip))) * ((abs(speed)) factor[0,2]) * (rock + asphalt + 0.5 * gravel + 0.4 * (mud + grass)) * (1 + gmeterz factor [0.3, 0.6]) * ((abs(speed)) factor [5*(7/6), 6*(7/6)])";
    };
    class RHS_2S1_Tracks_Brake_Hard_EXT_SoundShader: Base_Tracks_Brake_Hard_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks_brakes\Tracks_Brake_Hard_01_EXT", 1}};
        frequency = 1;
        volume = "1.7 * 0.1 * (rock + asphalt + gravel) * ((abs(longSlip)) factor [0.01,0.2]) * (speed factor[2,8])";
    };
    class RHS_2S1_Tracks_Brake_Soft_EXT_SoundShader: Base_Tracks_Brake_Soft_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks_brakes\Tracks_Brake_Soft_01_EXT", 1}};
        frequency = 1;
        volume = "1.7 * 0.6 * (1-(rock + asphalt + gravel)) * ((abs(longSlip)) factor [0.01,0.2]) * (speed factor[2,8])";
    };
    class RHS_2S1_Tracks_Turn_Hard_EXT_SoundShader: Base_Tracks_Turn_Hard_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks_turns\Tracks_Turn_Hard_04_EXT", 1}};
        frequency = 1;
        volume = "1.7 * 1.3 * (angVelocity factor[0.1,0.5]) * 0.5 * (asphalt max rock) * (angVelocity factor[0.3,0.4])";
    };
    class RHS_2S1_Tracks_Turn_Soft_EXT_SoundShader: Base_Tracks_Turn_Soft_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks_turns\Tracks_Turn_Soft_04_EXT", 1}};
        frequency = 1;
        volume = "1.7 * 1 * (angVelocity factor[0.1,0.9]) * (1-0.5 * (asphalt max rock) * (angVelocity factor[0.3,0.4])) * (angVelocity factor[0.3,0.4])";
    };
    class RHS_2S1_Drive_Water_EXT_SoundShader: Base_Drive_Water_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks_surface_movement\Drive_Water_01_EXT", 1}};
        frequency = 1;
        volume = "1.7 * 1 * water * ((abs(speed)) factor[0,4])";
    };
    class RHS_2S1_Drive_Dirt_EXT_SoundShader: Base_Drive_Dirt_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks_surface_movement\Drive_Dirt_01_EXT", 1}};
        frequency = 1;
        volume = "1.7 * 1 * ((gravel + rock + sand + grass) * (abs(speed) factor [0.1, 1.2]))";
    };
    class RHS_2S1_Interior_Tone_Engine_Off_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\add_layers\Tone_Engine_Off_01_INT", 1}};
        frequency = 1;
        volume = "1 * 0.2 * (rpm factor[700,0])";
        range = 60;
    };
    class RHS_2S1_Interior_Tone_Engine_On_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\add_layers\Tone_Engine_On_02_INT", 1}};
        frequency = "0.8 + (1.1* ((rpm factor[0,2240]) * ((abs(speed)) factor[0,20])) * (0.1 * thrust))";
        volume = "1 * 0.08 * (camint factor [0,1]) * (((rpm factor[700,2240]) * ((abs(speed)) factor[0,20])) + (0.1 * thrust)) * (rpm factor[0,700])";
        range = 60;
    };
    class RHS_2S1_Rattling_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\add_layers\Rattling_03_INT", 1}};
        frequency = 0.85;
        volume = "1 * 1 * 0.1 * ((rpm factor[0,500]) + ((speed factor[0,20]) + (0.1 * thrust)))";
        range = 60;
    };
    class RHS_2S1_Rain_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\add_layers\Rain_01_INT", 1}};
        frequency = 1;
        volume = "1 * 2 * rain";
        range = 60;
    };
    class RHS_2S1_Rain_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\add_layers\Rain_01_EXT", 1}};
        frequency = 1;
        volume = "1.7 * 1.8 * rain";
        range = 60;
    };
    class RHS_T72_Engine_RPM0_EXT_SoundShader: Engine_Base_RPM0_EXT_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_vehiclesounds\sounds\armor\T72\T72_Engine_EXT_RPM0", 1}};
        frequency = "1.0 * (1 + 0.8 * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [700,	2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [700,	2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [700,	2300])) - 0))";
        volume = "engineOn * 1.2 * 1.2*(1 + 0.2*(rpm factor[700,	2300]) + 0.2*thrust) * (rpm factor [0.15 *700, (0.15 *700 + 0.1 *(700-0.15 *700))]) * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [700,	2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [700,	2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [700,	2300])) factor [(1200 - 700)/(1700 - 700) - (((1200 - 700)/(1700 - 700) - 0) - (1.2 * ((1200 - 700)/(1700 - 700) - 0)))/2, 0])";
        range = "6*210";
    };
    class RHS_T72_Engine_RPM1_EXT_SoundShader: Engine_Base_RPM1_EXT_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_vehiclesounds\sounds\armor\T72\T72_Engine_EXT_RPM1", 1}};
        frequency = "1.0 * (1 + 0.8 * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [700,	2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [700,	2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [700,	2300])) - (1200 - 700)/(1700 - 700)))";
        volume = "engineOn * 1.2 * 1.2*(1 + 0.2*(rpm factor[700,	2300]) + 0.2*thrust) * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [700,	2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [700,	2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [700,	2300])) factor[0, (1200 - 700)/(1700 - 700) - (((1200 - 700)/(1700 - 700) - 0) - (1.2 * ((1200 - 700)/(1700 - 700) - 0)))/2]) * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [700,	2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [700,	2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [700,	2300])) factor [(1700 - 700)/(1700 - 700) - (((1700 - 700)/(1700 - 700) - (1200 - 700)/(1700 - 700)) - (1.2 * ((1700 - 700)/(1700 - 700) - (1200 - 700)/(1700 - 700))))/2, (1200 - 700)/(1700 - 700) + (((1700 - 700)/(1700 - 700) - (1200 - 700)/(1700 - 700)) - (1.2 * ((1700 - 700)/(1700 - 700) - (1200 - 700)/(1700 - 700))))/2])";
        range = "6*215";
    };
    class RHS_T72_Engine_RPM2_EXT_SoundShader: Engine_Base_RPM2_EXT_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_vehiclesounds\sounds\armor\T72\T72_Engine_EXT_RPM2", 1}};
        frequency = "1.0 * (1 + 0.8 * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [700,	2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [700,	2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [700,	2300])) - (1700 - 700)/(1700 - 700)))";
        volume = "engineOn * 1.2 * 1.2*(1 + 0.2*(rpm factor[700,	2300]) + 0.2*thrust) * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [700,	2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [700,	2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [700,	2300])) factor[(1200 - 700)/(1700 - 700) + (((1700 - 700)/(1700 - 700) - (1200 - 700)/(1700 - 700)) - (1.2 * ((1700 - 700)/(1700 - 700) - (1200 - 700)/(1700 - 700))))/2, (1700 - 700)/(1700 - 700) - (((1700 - 700)/(1700 - 700) - (1200 - 700)/(1700 - 700)) - (1.2 * ((1700 - 700)/(1700 - 700) - (1200 - 700)/(1700 - 700))))/2])";
        range = "6*220";
    };
    class RHS_T72_Engine_RPM0_INT_SoundShader: Engine_Base_RPM0_INT_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_vehiclesounds\sounds\armor\T72\T72_Engine_INT_RPM0", 1}};
        frequency = "1.0 * (1 + 0.8 * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [700,	2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [700,	2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [700,	2300])) - 0))";
        volume = "engineOn * 1 * 1.2 * (rpm factor [0.15 *700, (0.15 *700 + 0.1 *(700-0.15 *700))]) * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [700,	2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [700,	2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [700,	2300])) factor [(1200 - 700)/(1700 - 700) - (((1200 - 700)/(1700 - 700) - 0) - (1.2 * ((1200 - 700)/(1700 - 700) - 0)))/2, 0])";
        range = "6*210";
    };
    class RHS_T72_Engine_RPM1_INT_SoundShader: Engine_Base_RPM1_INT_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_vehiclesounds\sounds\armor\T72\T72_Engine_INT_RPM1", 1}};
        frequency = "1.0 * (1 + 0.8 * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [700,	2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [700,	2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [700,	2300])) - (1200 - 700)/(1700 - 700)))";
        volume = "engineOn * 1 * 1.2 * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [700,	2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [700,	2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [700,	2300])) factor[0, (1200 - 700)/(1700 - 700) - (((1200 - 700)/(1700 - 700) - 0) - (1.2 * ((1200 - 700)/(1700 - 700) - 0)))/2]) * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [700,	2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [700,	2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [700,	2300])) factor [(1700 - 700)/(1700 - 700) - (((1700 - 700)/(1700 - 700) - (1200 - 700)/(1700 - 700)) - (1.2 * ((1700 - 700)/(1700 - 700) - (1200 - 700)/(1700 - 700))))/2, (1200 - 700)/(1700 - 700) + (((1700 - 700)/(1700 - 700) - (1200 - 700)/(1700 - 700)) - (1.2 * ((1700 - 700)/(1700 - 700) - (1200 - 700)/(1700 - 700))))/2])";
        range = "6*215";
    };
    class RHS_T72_Engine_RPM2_INT_SoundShader: Engine_Base_RPM2_INT_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_vehiclesounds\sounds\armor\T72\T72_Engine_INT_RPM2", 1}};
        frequency = "1.0 * (1 + 0.8 * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [700,	2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [700,	2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [700,	2300])) - (1700 - 700)/(1700 - 700)))";
        volume = "engineOn * 1 * 1.2 * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [700,	2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [700,	2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [700,	2300])) factor[(1200 - 700)/(1700 - 700) + (((1700 - 700)/(1700 - 700) - (1200 - 700)/(1700 - 700)) - (1.2 * ((1700 - 700)/(1700 - 700) - (1200 - 700)/(1700 - 700))))/2, (1700 - 700)/(1700 - 700) - (((1700 - 700)/(1700 - 700) - (1200 - 700)/(1700 - 700)) - (1.2 * ((1700 - 700)/(1700 - 700) - (1200 - 700)/(1700 - 700))))/2])";
        range = "6*220";
    };
    class RHS_T72_Engine_EXT_Burst_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_vehiclesounds\sounds\armor\T72\T72_Engine_EXT_Burst01", 1}, {"rhsafrf\addons\rhs_vehiclesounds\sounds\armor\T72\T72_Engine_EXT_Burst02", 1}, {"rhsafrf\addons\rhs_vehiclesounds\sounds\armor\T72\T72_Engine_EXT_Burst03", 1}};
        frequency = 1;
        range = "1*150";
        volume = "engineOn * 1.2 * 1.2 * (rpm factor[0,10])";
    };
    class RHS_T72_Engine_INT_Burst_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_vehiclesounds\sounds\armor\T72\T72_Engine_INT_Burst01", 1}, {"rhsafrf\addons\rhs_vehiclesounds\sounds\armor\T72\T72_Engine_INT_Burst02", 1}, {"rhsafrf\addons\rhs_vehiclesounds\sounds\armor\T72\T72_Engine_INT_Burst03", 1}};
        frequency = 1;
        range = "1*150";
        volume = "engineOn * 1 * 1 * (rpm factor[0,10])";
    };
    class RHS_T72_Tracks_01_INT_SoundShader: Base_Tracks_01_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks01\Tracks_01_INT", 1}};
        frequency = 0.95;
        range = 300;
        volume = "1 * 1.2 * (1 + ((2*damper2) factor [0, 2]) + (3*abs(latSlip))) * ((abs(speed)) factor[0,2]) * (rock + asphalt + 0.5 * gravel + 0.4 * (mud + grass)) * (1 + gmeterz factor [0.3, 0.6]) * ((abs(speed)) factor [0, (7/6)])*((abs(speed)) factor [2*(7/6),(7/6)])";
    };
    class RHS_T72_Tracks_02_INT_SoundShader: Base_Tracks_02_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks01\Tracks_02_INT", 1}};
        frequency = 0.95;
        range = 300;
        volume = "1 * 1.2 * (1 + ((2*damper2) factor [0, 2]) + (3*abs(latSlip))) * ((abs(speed)) factor[0,2]) * (rock + asphalt + 0.5 * gravel + 0.4 * (mud + grass)) * (1 + gmeterz factor [0.3, 0.6]) * ((abs(speed)) factor [(7/6), 2*(7/6)])*((abs(speed)) factor [3*(7/6),2*(7/6)])";
    };
    class RHS_T72_Tracks_03_INT_SoundShader: Base_Tracks_03_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks01\Tracks_03_INT", 1}};
        frequency = 0.95;
        range = 300;
        volume = "1 * 1.2 * (1 + ((2*damper2) factor [0, 2]) + (3*abs(latSlip))) * ((abs(speed)) factor[0,2]) * (rock + asphalt + 0.5 * gravel + 0.4 * (mud + grass)) * (1 + gmeterz factor [0.3, 0.6]) * ((abs(speed)) factor [2*(7/6), 3*(7/6)])*((abs(speed)) factor [4*(7/6),3*(7/6)])";
    };
    class RHS_T72_Tracks_04_INT_SoundShader: Base_Tracks_04_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks01\Tracks_04_INT", 1}};
        frequency = 0.95;
        range = 300;
        volume = "1 * 1.2 * (1 + ((2*damper2) factor [0, 2]) + (3*abs(latSlip))) * ((abs(speed)) factor[0,2]) * (rock + asphalt + 0.5 * gravel + 0.4 * (mud + grass)) * (1 + gmeterz factor [0.3, 0.6]) * ((abs(speed)) factor [3*(7/6), 4*(7/6)])*((abs(speed)) factor [5*(7/6),4*(7/6)])";
    };
    class RHS_T72_Tracks_05_INT_SoundShader: Base_Tracks_05_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks01\Tracks_05_INT", 1}};
        frequency = 0.95;
        range = 300;
        volume = "1 * 1.2 * (1 + ((2*damper2) factor [0, 2]) + (3*abs(latSlip))) * ((abs(speed)) factor[0,2]) * (rock + asphalt + 0.5 * gravel + 0.4 * (mud + grass)) * (1 + gmeterz factor [0.3, 0.6]) * ((abs(speed)) factor [4*(7/6), 5*(7/6)])*((abs(speed)) factor [6*(7/6),5*(7/6)])";
    };
    class RHS_T72_Tracks_06_INT_SoundShader: Base_Tracks_06_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks01\Tracks_06_INT", 1}};
        frequency = 0.95;
        range = 300;
        volume = "1 * 1.2 * (1 + ((2*damper2) factor [0, 2]) + (3*abs(latSlip))) * ((abs(speed)) factor[0,2]) * (rock + asphalt + 0.5 * gravel + 0.4 * (mud + grass)) * (1 + gmeterz factor [0.3, 0.6]) * ((abs(speed)) factor [5*(7/6), 6*(7/6)])";
    };
    class RHS_T72_Tracks_Brake_Hard_INT_SoundShader: Base_Tracks_Brake_Hard_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks_brakes\Tracks_Brake_Hard_01_INT", 1}};
        frequency = 1;
        volume = "1 * 1.5 * (rock + asphalt + gravel) * ((abs(longSlip)) factor [0.01,0.2]) * (speed factor[2,8])";
    };
    class RHS_T72_Tracks_Brake_Soft_INT_SoundShader: Base_Tracks_Brake_Soft_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks_brakes\Tracks_Brake_Soft_01_INT", 1}};
        frequency = 1;
        volume = "1 * 1.5 * (1-(rock + asphalt + gravel)) * ((abs(longSlip)) factor [0.01,0.2]) * (speed factor[2,8])";
    };
    class RHS_T72_Tracks_Turn_Hard_INT_SoundShader: Base_Tracks_Turn_Hard_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks_turns\Tracks_Turn_Hard_04_INT", 1}};
        frequency = 1;
        volume = "1 * 0.75 * 0.5 * (asphalt max rock) * (angVelocity factor[0.3,0.4])";
    };
    class RHS_T72_Tracks_Turn_Soft_INT_SoundShader: Base_Tracks_Turn_Soft_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks_turns\Tracks_Turn_Soft_04_INT", 1}};
        frequency = 1;
        volume = "1 * 0.75 * (1-0.5 * (asphalt max rock) * (angVelocity factor[0.3,0.4])) * (angVelocity factor[0.3,0.4])";
    };
    class RHS_T72_Drive_Water_INT_SoundShader: Base_Drive_Water_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks_surface_movement\Drive_Water_01_INT", 1}};
        frequency = 1;
        volume = "1 * 1 * water * ((abs(speed)) factor[0,4])";
    };
    class RHS_T72_Drive_Dirt_INT_SoundShader: Base_Drive_Dirt_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks_surface_movement\Drive_Dirt_01_INT", 1}};
        frequency = 1;
        volume = "1 * 1 * ((gravel + rock + sand + grass) * (abs(speed) factor [0.1, 1.2]))";
    };
    class RHS_T72_Tracks_01_EXT_SoundShader: Base_Tracks_01_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks01\Tracks_01_EXT", 1}};
        frequency = 0.95;
        range = 300;
        volume = "1.2 * 0.45 * (1 + ((2*damper2) factor [0, 2]) + (3*abs(latSlip))) * ((abs(speed)) factor[0,2]) * (rock + asphalt + 0.5 * gravel + 0.4 * (mud + grass)) * (1 + gmeterz factor [0.3, 0.6]) * ((abs(speed)) factor [0, (7/6)])*((abs(speed)) factor [2*(7/6),(7/6)])";
    };
    class RHS_T72_Tracks_02_EXT_SoundShader: Base_Tracks_02_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks01\Tracks_02_EXT", 1}};
        frequency = 0.95;
        range = 300;
        volume = "1.2 * 0.45 * (1 + ((2*damper2) factor [0, 2]) + (3*abs(latSlip))) * ((abs(speed)) factor[0,2]) * (rock + asphalt + 0.5 * gravel + 0.4 * (mud + grass)) * (1 + gmeterz factor [0.3, 0.6]) * ((abs(speed)) factor [(7/6), 2*(7/6)])*((abs(speed)) factor [3*(7/6),2*(7/6)])";
    };
    class RHS_T72_Tracks_03_EXT_SoundShader: Base_Tracks_03_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks01\Tracks_03_EXT", 1}};
        frequency = 0.95;
        range = 300;
        volume = "1.2 * 0.45 * (1 + ((2*damper2) factor [0, 2]) + (3*abs(latSlip))) * ((abs(speed)) factor[0,2]) * (rock + asphalt + 0.5 * gravel + 0.4 * (mud + grass)) * (1 + gmeterz factor [0.3, 0.6]) * ((abs(speed)) factor [2*(7/6), 3*(7/6)])*((abs(speed)) factor [4*(7/6),3*(7/6)])";
    };
    class RHS_T72_Tracks_04_EXT_SoundShader: Base_Tracks_04_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks01\Tracks_04_EXT", 1}};
        frequency = 0.95;
        range = 300;
        volume = "1.2 * 0.45 * (1 + ((2*damper2) factor [0, 2]) + (3*abs(latSlip))) * ((abs(speed)) factor[0,2]) * (rock + asphalt + 0.5 * gravel + 0.4 * (mud + grass)) * (1 + gmeterz factor [0.3, 0.6]) * ((abs(speed)) factor [3*(7/6), 4*(7/6)])*((abs(speed)) factor [5*(7/6),4*(7/6)])";
    };
    class RHS_T72_Tracks_05_EXT_SoundShader: Base_Tracks_05_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks01\Tracks_05_EXT", 1}};
        frequency = 0.95;
        range = 300;
        volume = "1.2 * 0.45 * (1 + ((2*damper2) factor [0, 2]) + (3*abs(latSlip))) * ((abs(speed)) factor[0,2]) * (rock + asphalt + 0.5 * gravel + 0.4 * (mud + grass)) * (1 + gmeterz factor [0.3, 0.6]) * ((abs(speed)) factor [4*(7/6), 5*(7/6)])*((abs(speed)) factor [6*(7/6),5*(7/6)])";
    };
    class RHS_T72_Tracks_06_EXT_SoundShader: Base_Tracks_06_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks01\Tracks_06_EXT", 1}};
        frequency = 0.95;
        range = 300;
        volume = "1.2 * 0.45 * (1 + ((2*damper2) factor [0, 2]) + (3*abs(latSlip))) * ((abs(speed)) factor[0,2]) * (rock + asphalt + 0.5 * gravel + 0.4 * (mud + grass)) * (1 + gmeterz factor [0.3, 0.6]) * ((abs(speed)) factor [5*(7/6), 6*(7/6)])";
    };
    class RHS_T72_Tracks_Brake_Hard_EXT_SoundShader: Base_Tracks_Brake_Hard_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks_brakes\Tracks_Brake_Hard_01_EXT", 1}};
        frequency = 1;
        volume = "1.2 * 0.1 * (rock + asphalt + gravel) * ((abs(longSlip)) factor [0.01,0.2]) * (speed factor[2,8])";
    };
    class RHS_T72_Tracks_Brake_Soft_EXT_SoundShader: Base_Tracks_Brake_Soft_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks_brakes\Tracks_Brake_Soft_01_EXT", 1}};
        frequency = 1;
        volume = "1.2 * 0.6 * (1-(rock + asphalt + gravel)) * ((abs(longSlip)) factor [0.01,0.2]) * (speed factor[2,8])";
    };
    class RHS_T72_Tracks_Turn_Hard_EXT_SoundShader: Base_Tracks_Turn_Hard_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks_turns\Tracks_Turn_Hard_04_EXT", 1}};
        frequency = 1;
        volume = "1.2 * 1.3 * (angVelocity factor[0.1,0.5]) * 0.5 * (asphalt max rock) * (angVelocity factor[0.3,0.4])";
    };
    class RHS_T72_Tracks_Turn_Soft_EXT_SoundShader: Base_Tracks_Turn_Soft_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks_turns\Tracks_Turn_Soft_04_EXT", 1}};
        frequency = 1;
        volume = "1.2 * 1 * (angVelocity factor[0.1,0.9]) * (1-0.5 * (asphalt max rock) * (angVelocity factor[0.3,0.4])) * (angVelocity factor[0.3,0.4])";
    };
    class RHS_T72_Drive_Water_EXT_SoundShader: Base_Drive_Water_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks_surface_movement\Drive_Water_01_EXT", 1}};
        frequency = 1;
        volume = "1.2 * 1 * water * ((abs(speed)) factor[0,4])";
    };
    class RHS_T72_Drive_Dirt_EXT_SoundShader: Base_Drive_Dirt_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks_surface_movement\Drive_Dirt_01_EXT", 1}};
        frequency = 1;
        volume = "1.2 * 1 * ((gravel + rock + sand + grass) * (abs(speed) factor [0.1, 1.2]))";
    };
    class RHS_T72_Interior_Tone_Engine_Off_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\add_layers\Tone_Engine_Off_01_INT", 1}};
        frequency = 1;
        volume = "1 * 0.2 * (rpm factor[700,0])";
        range = 60;
    };
    class RHS_T72_Interior_Tone_Engine_On_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\add_layers\Tone_Engine_On_02_INT", 1}};
        frequency = "0.8 + (1.1* ((rpm factor[0,2240]) * ((abs(speed)) factor[0,20])) * (0.1 * thrust))";
        volume = "1 * 0.08 * (camint factor [0,1]) * (((rpm factor[700,2240]) * ((abs(speed)) factor[0,20])) + (0.1 * thrust)) * (rpm factor[0,700])";
        range = 60;
    };
    class RHS_T72_Rattling_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\add_layers\Rattling_03_INT", 1}};
        frequency = 0.85;
        volume = "1 * 1 * 0.1 * ((rpm factor[0,500]) + ((speed factor[0,20]) + (0.1 * thrust)))";
        range = 60;
    };
    class RHS_T72_Rain_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\add_layers\Rain_01_INT", 1}};
        frequency = 1;
        volume = "1 * 2 * rain";
        range = 60;
    };
    class RHS_T72_Rain_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\add_layers\Rain_01_EXT", 1}};
        frequency = 1;
        volume = "1.2 * 1.8 * rain";
        range = 60;
    };
    class RHS_T80_Engine_RPM0_EXT_SoundShader: Engine_Base_RPM0_EXT_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_vehiclesounds\sounds\armor\T80\T80_Engine_EXT_RPM0", 1}};
        frequency = "1.0 * (1 + 0.8 * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 18.82]) + 0.9  * (rpm factor [700,	3255])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 18.82]) + 0.9  * (rpm factor [700,	3255])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [700,	3255])) - 0))";
        volume = "engineOn * 1.3 * 1.2*(1 + 0.2*(rpm factor[700,	3255]) + 0.2*thrust) * (rpm factor [0.15 *700, (0.15 *700 + 0.1 *(700-0.15 *700))]) * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 18.82]) + 0.9  * (rpm factor [700,	3255])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 18.82]) + 0.9  * (rpm factor [700,	3255])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [700,	3255])) factor [(1900 - 700)/(3000 - 700) - (((1900 - 700)/(3000 - 700) - 0) - (1.2 * ((1900 - 700)/(3000 - 700) - 0)))/2, 0])";
        range = "6*210";
    };
    class RHS_T80_Engine_RPM1_EXT_SoundShader: Engine_Base_RPM1_EXT_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_vehiclesounds\sounds\armor\T80\T80_Engine_EXT_RPM1", 1}};
        frequency = "1.0 * (1 + 0.8 * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 18.82]) + 0.9  * (rpm factor [700,	3255])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 18.82]) + 0.9  * (rpm factor [700,	3255])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [700,	3255])) - (1900 - 700)/(3000 - 700)))";
        volume = "engineOn * 1.3 * 1.2*(1 + 0.2*(rpm factor[700,	3255]) + 0.2*thrust) * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 18.82]) + 0.9  * (rpm factor [700,	3255])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 18.82]) + 0.9  * (rpm factor [700,	3255])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [700,	3255])) factor[0, (1900 - 700)/(3000 - 700) - (((1900 - 700)/(3000 - 700) - 0) - (1.2 * ((1900 - 700)/(3000 - 700) - 0)))/2]) * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 18.82]) + 0.9  * (rpm factor [700,	3255])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 18.82]) + 0.9  * (rpm factor [700,	3255])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [700,	3255])) factor [(3000 - 700)/(3000 - 700) - (((3000 - 700)/(3000 - 700) - (1900 - 700)/(3000 - 700)) - (1.2 * ((3000 - 700)/(3000 - 700) - (1900 - 700)/(3000 - 700))))/2, (1900 - 700)/(3000 - 700) + (((3000 - 700)/(3000 - 700) - (1900 - 700)/(3000 - 700)) - (1.2 * ((3000 - 700)/(3000 - 700) - (1900 - 700)/(3000 - 700))))/2])";
        range = "6*215";
    };
    class RHS_T80_Engine_RPM2_EXT_SoundShader: Engine_Base_RPM2_EXT_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_vehiclesounds\sounds\armor\T80\T80_Engine_EXT_RPM2", 1}};
        frequency = "1.0 * (1 + 0.8 * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 18.82]) + 0.9  * (rpm factor [700,	3255])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 18.82]) + 0.9  * (rpm factor [700,	3255])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [700,	3255])) - (3000 - 700)/(3000 - 700)))";
        volume = "engineOn * 1.3 * 1.2*(1 + 0.2*(rpm factor[700,	3255]) + 0.2*thrust) * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 18.82]) + 0.9  * (rpm factor [700,	3255])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 18.82]) + 0.9  * (rpm factor [700,	3255])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [700,	3255])) factor[(1900 - 700)/(3000 - 700) + (((3000 - 700)/(3000 - 700) - (1900 - 700)/(3000 - 700)) - (1.2 * ((3000 - 700)/(3000 - 700) - (1900 - 700)/(3000 - 700))))/2, (3000 - 700)/(3000 - 700) - (((3000 - 700)/(3000 - 700) - (1900 - 700)/(3000 - 700)) - (1.2 * ((3000 - 700)/(3000 - 700) - (1900 - 700)/(3000 - 700))))/2])";
        range = "6*220";
    };
    class RHS_T80_Engine_RPM0_INT_SoundShader: Engine_Base_RPM0_INT_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_vehiclesounds\sounds\armor\T80\T80_Engine_INT_RPM0", 1}};
        frequency = "1.0 * (1 + 0.8 * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 18.82]) + 0.9  * (rpm factor [700,	3255])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 18.82]) + 0.9  * (rpm factor [700,	3255])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [700,	3255])) - 0))";
        volume = "engineOn * 1 * 1.2 * (rpm factor [0.15 *700, (0.15 *700 + 0.1 *(700-0.15 *700))]) * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 18.82]) + 0.9  * (rpm factor [700,	3255])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 18.82]) + 0.9  * (rpm factor [700,	3255])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [700,	3255])) factor [(1900 - 700)/(3000 - 700) - (((1900 - 700)/(3000 - 700) - 0) - (1.2 * ((1900 - 700)/(3000 - 700) - 0)))/2, 0])";
        range = "6*210";
    };
    class RHS_T80_Engine_RPM1_INT_SoundShader: Engine_Base_RPM1_INT_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_vehiclesounds\sounds\armor\T80\T80_Engine_INT_RPM1", 1}};
        frequency = "1.0 * (1 + 0.8 * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 18.82]) + 0.9  * (rpm factor [700,	3255])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 18.82]) + 0.9  * (rpm factor [700,	3255])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [700,	3255])) - (1900 - 700)/(3000 - 700)))";
        volume = "engineOn * 1 * 1.2 * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 18.82]) + 0.9  * (rpm factor [700,	3255])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 18.82]) + 0.9  * (rpm factor [700,	3255])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [700,	3255])) factor[0, (1900 - 700)/(3000 - 700) - (((1900 - 700)/(3000 - 700) - 0) - (1.2 * ((1900 - 700)/(3000 - 700) - 0)))/2]) * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 18.82]) + 0.9  * (rpm factor [700,	3255])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 18.82]) + 0.9  * (rpm factor [700,	3255])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [700,	3255])) factor [(3000 - 700)/(3000 - 700) - (((3000 - 700)/(3000 - 700) - (1900 - 700)/(3000 - 700)) - (1.2 * ((3000 - 700)/(3000 - 700) - (1900 - 700)/(3000 - 700))))/2, (1900 - 700)/(3000 - 700) + (((3000 - 700)/(3000 - 700) - (1900 - 700)/(3000 - 700)) - (1.2 * ((3000 - 700)/(3000 - 700) - (1900 - 700)/(3000 - 700))))/2])";
        range = "6*215";
    };
    class RHS_T80_Engine_RPM2_INT_SoundShader: Engine_Base_RPM2_INT_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_vehiclesounds\sounds\armor\T80\T80_Engine_INT_RPM2", 1}};
        frequency = "1.0 * (1 + 0.8 * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 18.82]) + 0.9  * (rpm factor [700,	3255])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 18.82]) + 0.9  * (rpm factor [700,	3255])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [700,	3255])) - (3000 - 700)/(3000 - 700)))";
        volume = "engineOn * 1 * 1.2 * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 18.82]) + 0.9  * (rpm factor [700,	3255])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 18.82]) + 0.9  * (rpm factor [700,	3255])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [700,	3255])) factor[(1900 - 700)/(3000 - 700) + (((3000 - 700)/(3000 - 700) - (1900 - 700)/(3000 - 700)) - (1.2 * ((3000 - 700)/(3000 - 700) - (1900 - 700)/(3000 - 700))))/2, (3000 - 700)/(3000 - 700) - (((3000 - 700)/(3000 - 700) - (1900 - 700)/(3000 - 700)) - (1.2 * ((3000 - 700)/(3000 - 700) - (1900 - 700)/(3000 - 700))))/2])";
        range = "6*220";
    };
    class RHS_T80_Engine_EXT_Burst_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_vehiclesounds\sounds\armor\T80\T80_Engine_EXT_Burst01", 1}, {"rhsafrf\addons\rhs_vehiclesounds\sounds\armor\T80\T80_Engine_EXT_Burst02", 1}};
        frequency = 1;
        range = "1*150";
        volume = "engineOn * 1.3 * 1.6 * (rpm factor[0,10])";
    };
    class RHS_T80_Engine_INT_Burst_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_vehiclesounds\sounds\armor\T80\T80_Engine_INT_Burst01", 1}, {"rhsafrf\addons\rhs_vehiclesounds\sounds\armor\T80\T80_Engine_INT_Burst02", 1}};
        frequency = 1;
        range = "1*150";
        volume = "engineOn * 1 * 1 * (rpm factor[0,10])";
    };
    class RHS_T80_Tracks_01_INT_SoundShader: Base_Tracks_01_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks02\Tracks_01_INT", 1}};
        frequency = 0.95;
        range = 300;
        volume = "1 * 1.2 * (1 + ((2*damper2) factor [0, 2]) + (3*abs(latSlip))) * ((abs(speed)) factor[0,2]) * (rock + asphalt + 0.5 * gravel + 0.4 * (mud + grass)) * (1 + gmeterz factor [0.3, 0.6]) * ((abs(speed)) factor [0, (7/6)])*((abs(speed)) factor [2*(7/6),(7/6)])";
    };
    class RHS_T80_Tracks_02_INT_SoundShader: Base_Tracks_02_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks02\Tracks_02_INT", 1}};
        frequency = 0.95;
        range = 300;
        volume = "1 * 1.2 * (1 + ((2*damper2) factor [0, 2]) + (3*abs(latSlip))) * ((abs(speed)) factor[0,2]) * (rock + asphalt + 0.5 * gravel + 0.4 * (mud + grass)) * (1 + gmeterz factor [0.3, 0.6]) * ((abs(speed)) factor [(7/6), 2*(7/6)])*((abs(speed)) factor [3*(7/6),2*(7/6)])";
    };
    class RHS_T80_Tracks_03_INT_SoundShader: Base_Tracks_03_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks02\Tracks_03_INT", 1}};
        frequency = 0.95;
        range = 300;
        volume = "1 * 1.2 * (1 + ((2*damper2) factor [0, 2]) + (3*abs(latSlip))) * ((abs(speed)) factor[0,2]) * (rock + asphalt + 0.5 * gravel + 0.4 * (mud + grass)) * (1 + gmeterz factor [0.3, 0.6]) * ((abs(speed)) factor [2*(7/6), 3*(7/6)])*((abs(speed)) factor [4*(7/6),3*(7/6)])";
    };
    class RHS_T80_Tracks_04_INT_SoundShader: Base_Tracks_04_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks02\Tracks_04_INT", 1}};
        frequency = 0.95;
        range = 300;
        volume = "1 * 1.2 * (1 + ((2*damper2) factor [0, 2]) + (3*abs(latSlip))) * ((abs(speed)) factor[0,2]) * (rock + asphalt + 0.5 * gravel + 0.4 * (mud + grass)) * (1 + gmeterz factor [0.3, 0.6]) * ((abs(speed)) factor [3*(7/6), 4*(7/6)])*((abs(speed)) factor [5*(7/6),4*(7/6)])";
    };
    class RHS_T80_Tracks_05_INT_SoundShader: Base_Tracks_05_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks02\Tracks_05_INT", 1}};
        frequency = 0.95;
        range = 300;
        volume = "1 * 1.2 * (1 + ((2*damper2) factor [0, 2]) + (3*abs(latSlip))) * ((abs(speed)) factor[0,2]) * (rock + asphalt + 0.5 * gravel + 0.4 * (mud + grass)) * (1 + gmeterz factor [0.3, 0.6]) * ((abs(speed)) factor [4*(7/6), 5*(7/6)])*((abs(speed)) factor [6*(7/6),5*(7/6)])";
    };
    class RHS_T80_Tracks_06_INT_SoundShader: Base_Tracks_06_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks02\Tracks_06_INT", 1}};
        frequency = 0.95;
        range = 300;
        volume = "1 * 1.2 * (1 + ((2*damper2) factor [0, 2]) + (3*abs(latSlip))) * ((abs(speed)) factor[0,2]) * (rock + asphalt + 0.5 * gravel + 0.4 * (mud + grass)) * (1 + gmeterz factor [0.3, 0.6]) * ((abs(speed)) factor [5*(7/6), 6*(7/6)])";
    };
    class RHS_T80_Tracks_Brake_Hard_INT_SoundShader: Base_Tracks_Brake_Hard_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks_brakes\Tracks_Brake_Hard_01_INT", 1}};
        frequency = 1;
        volume = "1 * 1.5 * (rock + asphalt + gravel) * ((abs(longSlip)) factor [0.01,0.2]) * (speed factor[2,8])";
    };
    class RHS_T80_Tracks_Brake_Soft_INT_SoundShader: Base_Tracks_Brake_Soft_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks_brakes\Tracks_Brake_Soft_01_INT", 1}};
        frequency = 1;
        volume = "1 * 1.5 * (1-(rock + asphalt + gravel)) * ((abs(longSlip)) factor [0.01,0.2]) * (speed factor[2,8])";
    };
    class RHS_T80_Tracks_Turn_Hard_INT_SoundShader: Base_Tracks_Turn_Hard_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks_turns\Tracks_Turn_Hard_04_INT", 1}};
        frequency = 1;
        volume = "1 * 0.75 * 0.5 * (asphalt max rock) * (angVelocity factor[0.3,0.4])";
    };
    class RHS_T80_Tracks_Turn_Soft_INT_SoundShader: Base_Tracks_Turn_Soft_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks_turns\Tracks_Turn_Soft_04_INT", 1}};
        frequency = 1;
        volume = "1 * 0.75 * (1-0.5 * (asphalt max rock) * (angVelocity factor[0.3,0.4])) * (angVelocity factor[0.3,0.4])";
    };
    class RHS_T80_Drive_Water_INT_SoundShader: Base_Drive_Water_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks_surface_movement\Drive_Water_01_INT", 1}};
        frequency = 1;
        volume = "1 * 1 * water * ((abs(speed)) factor[0,4])";
    };
    class RHS_T80_Drive_Dirt_INT_SoundShader: Base_Drive_Dirt_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks_surface_movement\Drive_Dirt_01_INT", 1}};
        frequency = 1;
        volume = "1 * 1 * ((gravel + rock + sand + grass) * (abs(speed) factor [0.1, 1.2]))";
    };
    class RHS_T80_Tracks_01_EXT_SoundShader: Base_Tracks_01_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks02\Tracks_01_EXT", 1}};
        frequency = 0.95;
        range = 300;
        volume = "1.3 * 0.45 * (1 + ((2*damper2) factor [0, 2]) + (3*abs(latSlip))) * ((abs(speed)) factor[0,2]) * (rock + asphalt + 0.5 * gravel + 0.4 * (mud + grass)) * (1 + gmeterz factor [0.3, 0.6]) * ((abs(speed)) factor [0, (7/6)])*((abs(speed)) factor [2*(7/6),(7/6)])";
    };
    class RHS_T80_Tracks_02_EXT_SoundShader: Base_Tracks_02_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks02\Tracks_02_EXT", 1}};
        frequency = 0.95;
        range = 300;
        volume = "1.3 * 0.45 * (1 + ((2*damper2) factor [0, 2]) + (3*abs(latSlip))) * ((abs(speed)) factor[0,2]) * (rock + asphalt + 0.5 * gravel + 0.4 * (mud + grass)) * (1 + gmeterz factor [0.3, 0.6]) * ((abs(speed)) factor [(7/6), 2*(7/6)])*((abs(speed)) factor [3*(7/6),2*(7/6)])";
    };
    class RHS_T80_Tracks_03_EXT_SoundShader: Base_Tracks_03_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks02\Tracks_03_EXT", 1}};
        frequency = 0.95;
        range = 300;
        volume = "1.3 * 0.45 * (1 + ((2*damper2) factor [0, 2]) + (3*abs(latSlip))) * ((abs(speed)) factor[0,2]) * (rock + asphalt + 0.5 * gravel + 0.4 * (mud + grass)) * (1 + gmeterz factor [0.3, 0.6]) * ((abs(speed)) factor [2*(7/6), 3*(7/6)])*((abs(speed)) factor [4*(7/6),3*(7/6)])";
    };
    class RHS_T80_Tracks_04_EXT_SoundShader: Base_Tracks_04_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks02\Tracks_04_EXT", 1}};
        frequency = 0.95;
        range = 300;
        volume = "1.3 * 0.45 * (1 + ((2*damper2) factor [0, 2]) + (3*abs(latSlip))) * ((abs(speed)) factor[0,2]) * (rock + asphalt + 0.5 * gravel + 0.4 * (mud + grass)) * (1 + gmeterz factor [0.3, 0.6]) * ((abs(speed)) factor [3*(7/6), 4*(7/6)])*((abs(speed)) factor [5*(7/6),4*(7/6)])";
    };
    class RHS_T80_Tracks_05_EXT_SoundShader: Base_Tracks_05_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks02\Tracks_05_EXT", 1}};
        frequency = 0.95;
        range = 300;
        volume = "1.3 * 0.45 * (1 + ((2*damper2) factor [0, 2]) + (3*abs(latSlip))) * ((abs(speed)) factor[0,2]) * (rock + asphalt + 0.5 * gravel + 0.4 * (mud + grass)) * (1 + gmeterz factor [0.3, 0.6]) * ((abs(speed)) factor [4*(7/6), 5*(7/6)])*((abs(speed)) factor [6*(7/6),5*(7/6)])";
    };
    class RHS_T80_Tracks_06_EXT_SoundShader: Base_Tracks_06_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks02\Tracks_06_EXT", 1}};
        frequency = 0.95;
        range = 300;
        volume = "1.3 * 0.45 * (1 + ((2*damper2) factor [0, 2]) + (3*abs(latSlip))) * ((abs(speed)) factor[0,2]) * (rock + asphalt + 0.5 * gravel + 0.4 * (mud + grass)) * (1 + gmeterz factor [0.3, 0.6]) * ((abs(speed)) factor [5*(7/6), 6*(7/6)])";
    };
    class RHS_T80_Tracks_Brake_Hard_EXT_SoundShader: Base_Tracks_Brake_Hard_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks_brakes\Tracks_Brake_Hard_01_EXT", 1}};
        frequency = 1;
        volume = "1.3 * 0.1 * (rock + asphalt + gravel) * ((abs(longSlip)) factor [0.01,0.2]) * (speed factor[2,8])";
    };
    class RHS_T80_Tracks_Brake_Soft_EXT_SoundShader: Base_Tracks_Brake_Soft_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks_brakes\Tracks_Brake_Soft_01_EXT", 1}};
        frequency = 1;
        volume = "1.3 * 0.6 * (1-(rock + asphalt + gravel)) * ((abs(longSlip)) factor [0.01,0.2]) * (speed factor[2,8])";
    };
    class RHS_T80_Tracks_Turn_Hard_EXT_SoundShader: Base_Tracks_Turn_Hard_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks_turns\Tracks_Turn_Hard_04_EXT", 1}};
        frequency = 1;
        volume = "1.3 * 1.3 * (angVelocity factor[0.1,0.5]) * 0.5 * (asphalt max rock) * (angVelocity factor[0.3,0.4])";
    };
    class RHS_T80_Tracks_Turn_Soft_EXT_SoundShader: Base_Tracks_Turn_Soft_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks_turns\Tracks_Turn_Soft_04_EXT", 1}};
        frequency = 1;
        volume = "1.3 * 1 * (angVelocity factor[0.1,0.9]) * (1-0.5 * (asphalt max rock) * (angVelocity factor[0.3,0.4])) * (angVelocity factor[0.3,0.4])";
    };
    class RHS_T80_Drive_Water_EXT_SoundShader: Base_Drive_Water_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks_surface_movement\Drive_Water_01_EXT", 1}};
        frequency = 1;
        volume = "1.3 * 1 * water * ((abs(speed)) factor[0,4])";
    };
    class RHS_T80_Drive_Dirt_EXT_SoundShader: Base_Drive_Dirt_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\tracks_surface_movement\Drive_Dirt_01_EXT", 1}};
        frequency = 1;
        volume = "1.3 * 1 * ((gravel + rock + sand + grass) * (abs(speed) factor [0.1, 1.2]))";
    };
    class RHS_T80_Interior_Tone_Engine_Off_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\add_layers\Tone_Engine_Off_01_INT", 1}};
        frequency = 1;
        volume = "1 * 0.2 * (rpm factor[700,0])";
        range = 60;
    };
    class RHS_T80_Interior_Tone_Engine_On_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\add_layers\Tone_Engine_On_02_INT", 1}};
        frequency = "0.8 + (1.1* ((rpm factor[0,2240]) * ((abs(speed)) factor[0,20])) * (0.1 * thrust))";
        volume = "1 * 0.08 * (camint factor [0,1]) * (((rpm factor[700,2240]) * ((abs(speed)) factor[0,20])) + (0.1 * thrust)) * (rpm factor[0,700])";
        range = 60;
    };
    class RHS_T80_Rattling_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\add_layers\Rattling_03_INT", 1}};
        frequency = 0.85;
        volume = "1 * 1 * 0.1 * ((rpm factor[0,500]) + ((speed factor[0,20]) + (0.1 * thrust)))";
        range = 60;
    };
    class RHS_T80_Rain_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\add_layers\Rain_01_INT", 1}};
        frequency = 1;
        volume = "1 * 2 * rain";
        range = 60;
    };
    class RHS_T80_Rain_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\add_layers\Rain_01_EXT", 1}};
        frequency = 1;
        volume = "1.3 * 1.8 * rain";
        range = 60;
    };
    class RHS_UAZ469_Engine_RPM0_EXT_SoundShader: Engine_Base_RPM0_EXT_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\UAZ469\UAZ469_Engine_EXT_RPM0", 1}};
        frequency = "1 * (1 + 0.8 * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 28]) + 0.9  * (rpm factor [250,	5000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 28]) + 0.9  * (rpm factor [250,	5000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [250,	5000])) - 0))";
        volume = "engineOn * 0.8 * (1.5 + 0.1*1 *thrust) * (rpm factor [0  *750, (0  *750 + 1 *(750-0  *750))]) * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 28]) + 0.9  * (rpm factor [250,	5000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 28]) + 0.9  * (rpm factor [250,	5000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [250,	5000])) factor [(900 - 750)/(3800 - 750) - (((900 - 750)/(3800 - 750) - 0) - (1 * ((900 - 750)/(3800 - 750) - 0)))/2, 0])";
        range = "1.5*210";
    };
    class RHS_UAZ469_Engine_RPM1_EXT_SoundShader: Engine_Base_RPM1_EXT_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\UAZ469\UAZ469_Engine_EXT_RPM1", 1}};
        frequency = "1 * (1 + 0.8 * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 28]) + 0.9  * (rpm factor [250,	5000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 28]) + 0.9  * (rpm factor [250,	5000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [250,	5000])) - (900 - 750)/(3800 - 750)))";
        volume = "engineOn * 0.8 * (1.5 + 0.1*1 *thrust) * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 28]) + 0.9  * (rpm factor [250,	5000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 28]) + 0.9  * (rpm factor [250,	5000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [250,	5000])) factor[0, (900 - 750)/(3800 - 750) - (((900 - 750)/(3800 - 750) - 0) - (1 * ((900 - 750)/(3800 - 750) - 0)))/2]) * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 28]) + 0.9  * (rpm factor [250,	5000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 28]) + 0.9  * (rpm factor [250,	5000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [250,	5000])) factor [(2900 - 750)/(3800 - 750) - (((2900 - 750)/(3800 - 750) - (900 - 750)/(3800 - 750)) - (1 * ((2900 - 750)/(3800 - 750) - (900 - 750)/(3800 - 750))))/2, (900 - 750)/(3800 - 750) + (((2900 - 750)/(3800 - 750) - (900 - 750)/(3800 - 750)) - (1 * ((2900 - 750)/(3800 - 750) - (900 - 750)/(3800 - 750))))/2])";
        range = "1.5*215";
    };
    class RHS_UAZ469_Engine_RPM2_EXT_SoundShader: Engine_Base_RPM2_EXT_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\UAZ469\UAZ469_Engine_EXT_RPM2", 1}};
        frequency = "1 * (1 + 0.8 * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 28]) + 0.9  * (rpm factor [250,	5000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 28]) + 0.9  * (rpm factor [250,	5000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [250,	5000])) - (2900 - 750)/(3800 - 750)))";
        volume = "engineOn * 0.8 * (1.5 + 0.1*1 *thrust) * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 28]) + 0.9  * (rpm factor [250,	5000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 28]) + 0.9  * (rpm factor [250,	5000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [250,	5000])) factor[(900 - 750)/(3800 - 750) + (((2900 - 750)/(3800 - 750) - (900 - 750)/(3800 - 750)) - (1 * ((2900 - 750)/(3800 - 750) - (900 - 750)/(3800 - 750))))/2, (2900 - 750)/(3800 - 750) - (((2900 - 750)/(3800 - 750) - (900 - 750)/(3800 - 750)) - (1 * ((2900 - 750)/(3800 - 750) - (900 - 750)/(3800 - 750))))/2]) * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 28]) + 0.9  * (rpm factor [250,	5000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 28]) + 0.9  * (rpm factor [250,	5000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [250,	5000])) factor [(3800 - 750)/(3800 - 750) - (((3800 - 750)/(3800 - 750) - (2900 - 750)/(3800 - 750)) - (1 * ((3800 - 750)/(3800 - 750) - (2900 - 750)/(3800 - 750))))/2, (2900 - 750)/(3800 - 750) + (((3800 - 750)/(3800 - 750) - (2900 - 750)/(3800 - 750)) - (1 * ((3800 - 750)/(3800 - 750) - (2900 - 750)/(3800 - 750))))/2])";
        range = "1.5*220";
    };
    class RHS_UAZ469_Engine_RPM3_EXT_SoundShader: Engine_Base_RPM3_EXT_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\UAZ469\UAZ469_Engine_EXT_RPM3", 1}};
        frequency = "1 * (1 + 0.8 * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 28]) + 0.9  * (rpm factor [250,	5000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 28]) + 0.9  * (rpm factor [250,	5000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [250,	5000])) - (3800 - 750)/(3800 - 750)))";
        volume = "engineOn * 0.8 * (1.5 + 0.1*1 *thrust) * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 28]) + 0.9  * (rpm factor [250,	5000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 28]) + 0.9  * (rpm factor [250,	5000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [250,	5000])) factor[(2900 - 750)/(3800 - 750) + (((3800 - 750)/(3800 - 750) - (2900 - 750)/(3800 - 750)) - (1 * ((3800 - 750)/(3800 - 750) - (2900 - 750)/(3800 - 750))))/2, (3800 - 750)/(3800 - 750) - (((3800 - 750)/(3800 - 750) - (2900 - 750)/(3800 - 750)) - (1 * ((3800 - 750)/(3800 - 750) - (2900 - 750)/(3800 - 750))))/2])";
        range = "1.5*225";
    };
    class RHS_UAZ469_Engine_RPM0_INT_SoundShader: Engine_Base_RPM0_INT_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\UAZ469\UAZ469_Engine_INT_RPM0", 1}};
        frequency = "1 * (1 + 0.8 * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 28]) + 0.9  * (rpm factor [250,	5000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 28]) + 0.9  * (rpm factor [250,	5000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [250,	5000])) - 0))";
        volume = "engineOn * 0.6 * (1 + 0.1*1 *thrust) * (rpm factor [0  *750, (0  *750 + 1 *(750-0  *750))]) * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 28]) + 0.9  * (rpm factor [250,	5000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 28]) + 0.9  * (rpm factor [250,	5000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [250,	5000])) factor [(900 - 750)/(3800 - 750) - (((900 - 750)/(3800 - 750) - 0) - (1 * ((900 - 750)/(3800 - 750) - 0)))/2, 0])";
        range = "1.5*210";
    };
    class RHS_UAZ469_Engine_RPM1_INT_SoundShader: Engine_Base_RPM1_INT_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\UAZ469\UAZ469_Engine_INT_RPM1", 1}};
        frequency = "1 * (1 + 0.8 * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 28]) + 0.9  * (rpm factor [250,	5000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 28]) + 0.9  * (rpm factor [250,	5000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [250,	5000])) - (900 - 750)/(3800 - 750)))";
        volume = "engineOn * 0.6 * (1 + 0.1*1 *thrust) * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 28]) + 0.9  * (rpm factor [250,	5000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 28]) + 0.9  * (rpm factor [250,	5000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [250,	5000])) factor[0, (900 - 750)/(3800 - 750) - (((900 - 750)/(3800 - 750) - 0) - (1 * ((900 - 750)/(3800 - 750) - 0)))/2]) * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 28]) + 0.9  * (rpm factor [250,	5000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 28]) + 0.9  * (rpm factor [250,	5000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [250,	5000])) factor [(2900 - 750)/(3800 - 750) - (((2900 - 750)/(3800 - 750) - (900 - 750)/(3800 - 750)) - (1 * ((2900 - 750)/(3800 - 750) - (900 - 750)/(3800 - 750))))/2, (900 - 750)/(3800 - 750) + (((2900 - 750)/(3800 - 750) - (900 - 750)/(3800 - 750)) - (1 * ((2900 - 750)/(3800 - 750) - (900 - 750)/(3800 - 750))))/2])";
        range = "1.5*215";
    };
    class RHS_UAZ469_Engine_RPM2_INT_SoundShader: Engine_Base_RPM2_INT_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\UAZ469\UAZ469_Engine_INT_RPM2", 1}};
        frequency = "1 * (1 + 0.8 * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 28]) + 0.9  * (rpm factor [250,	5000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 28]) + 0.9  * (rpm factor [250,	5000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [250,	5000])) - (2900 - 750)/(3800 - 750)))";
        volume = "engineOn * 0.6 * (1 + 0.1*1 *thrust) * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 28]) + 0.9  * (rpm factor [250,	5000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 28]) + 0.9  * (rpm factor [250,	5000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [250,	5000])) factor[(900 - 750)/(3800 - 750) + (((2900 - 750)/(3800 - 750) - (900 - 750)/(3800 - 750)) - (1 * ((2900 - 750)/(3800 - 750) - (900 - 750)/(3800 - 750))))/2, (2900 - 750)/(3800 - 750) - (((2900 - 750)/(3800 - 750) - (900 - 750)/(3800 - 750)) - (1 * ((2900 - 750)/(3800 - 750) - (900 - 750)/(3800 - 750))))/2]) * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 28]) + 0.9  * (rpm factor [250,	5000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 28]) + 0.9  * (rpm factor [250,	5000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [250,	5000])) factor [(3800 - 750)/(3800 - 750) - (((3800 - 750)/(3800 - 750) - (2900 - 750)/(3800 - 750)) - (1 * ((3800 - 750)/(3800 - 750) - (2900 - 750)/(3800 - 750))))/2, (2900 - 750)/(3800 - 750) + (((3800 - 750)/(3800 - 750) - (2900 - 750)/(3800 - 750)) - (1 * ((3800 - 750)/(3800 - 750) - (2900 - 750)/(3800 - 750))))/2])";
        range = "1.5*220";
    };
    class RHS_UAZ469_Engine_RPM3_INT_SoundShader: Engine_Base_RPM3_INT_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\UAZ469\UAZ469_Engine_INT_RPM3", 1}};
        frequency = "1 * (1 + 0.8 * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 28]) + 0.9  * (rpm factor [250,	5000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 28]) + 0.9  * (rpm factor [250,	5000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [250,	5000])) - (3800 - 750)/(3800 - 750)))";
        volume = "engineOn * 0.6 * (1 + 0.1*1 *thrust) * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 28]) + 0.9  * (rpm factor [250,	5000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 28]) + 0.9  * (rpm factor [250,	5000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [250,	5000])) factor[(2900 - 750)/(3800 - 750) + (((3800 - 750)/(3800 - 750) - (2900 - 750)/(3800 - 750)) - (1 * ((3800 - 750)/(3800 - 750) - (2900 - 750)/(3800 - 750))))/2, (3800 - 750)/(3800 - 750) - (((3800 - 750)/(3800 - 750) - (2900 - 750)/(3800 - 750)) - (1 * ((3800 - 750)/(3800 - 750) - (2900 - 750)/(3800 - 750))))/2])";
        range = "1.5*225";
    };
    class RHS_UAZ469_Engine_EXT_Burst_SoundShader {
        samples[] = {
            {"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\UAZ469\UAZ469_Engine_EXT_Burst01", 1},
            {"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\UAZ469\UAZ469_Engine_EXT_Burst02", 1},
            {"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\UAZ469\UAZ469_Engine_EXT_Burst03", 1},
            {"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\UAZ469\UAZ469_Engine_EXT_Burst04", 1}
        };
        frequency = 1;
        range = "1*150";
        volume = "engineOn * 0.8 * 2.8 * (rpm factor[0,10])";
    };
    class RHS_UAZ469_Engine_INT_Burst_SoundShader {
        samples[] = {
            {"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\UAZ469\UAZ469_Engine_INT_Burst01", 1},
            {"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\UAZ469\UAZ469_Engine_INT_Burst02", 1},
            {"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\UAZ469\UAZ469_Engine_INT_Burst03", 1},
            {"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\UAZ469\UAZ469_Engine_INT_Burst04", 1}
        };
        frequency = 1;
        range = "1*150";
        volume = "engineOn * 0.6 * 2.8 * (rpm factor[0,10])";
    };
    class RHS_UAZ469_Tires_Rock_Fast_INT_SoundShader: Base_Tires_Rock_Fast_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Rock_Fast_INT", 1}};
        frequency = 1;
        volume = "0.6 * 0.4 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * 0.5*(abs(speed) factor [4, 10]) * rock * (1 + 0.5*(damper0 factor [0.6,1]))*(1 + 0.3*(gmeterz factor [1,1.3]))";
        range = 30;
    };
    class RHS_UAZ469_Tires_Grass_Fast_INT_SoundShader: Base_Tires_Grass_Fast_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Grass_Fast_INT", 1}};
        frequency = 1;
        volume = "0.6 * 0.4 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * 0.5*(abs(speed) factor [4, 10]) * grass * (1 + 0.5*(damper0 factor [0.6,1]))*(1 + 0.3*(gmeterz factor [1,1.3]))";
        range = 50;
    };
    class RHS_UAZ469_Tires_Sand_Fast_INT_SoundShader: Base_Tires_Sand_Fast_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Sand_Fast_INT", 1}};
        frequency = 1;
        volume = "0.6 * 0.4 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * 0.5*(abs(speed) factor [4, 10]) * 0.4*sand * (1 + 0.5*(damper0 factor [0.6,1]))*(1 + 0.3*(gmeterz factor [1,1.3]))";
        range = 30;
    };
    class RHS_UAZ469_Tires_Gravel_Fast_INT_SoundShader: Base_Tires_Gravel_Fast_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Gravel_Fast_INT", 1}};
        frequency = 1;
        volume = "0.6 * 0.4 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * 0.5*(abs(speed) factor [4, 10]) * 1*gravel * (1 + 0.5*(damper0 factor [0.6,1]))*(1 + 0.3*(gmeterz factor [1,1.3]))";
        range = 50;
    };
    class RHS_UAZ469_Tires_Mud_Fast_INT_SoundShader: Base_Tires_Mud_Fast_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Mud_Fast_INT", 1}};
        frequency = 1;
        volume = "0.6 * 0.4 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * 0.5*(abs(speed) factor [4, 10]) * 0.2*mud * (1 + 0.5*(damper0 factor [0.6,1]))*(1 + 0.3*(gmeterz factor [1,1.3]))";
        range = 50;
    };
    class RHS_UAZ469_Tires_Asphalt_Fast_INT_SoundShader: Base_Tires_Asphalt_Fast_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Asphalt_Fast_INT", 1}};
        frequency = 1;
        volume = "0.6 * 0.4 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * 0.5*(abs(speed) factor [4, 10]) * 0.8*asphalt*(1+0.7*((abs(speed)) factor[2,10])) * (1 + 0.5*(damper0 factor [0.6,1]))*(1 + 0.3*(gmeterz factor [1,1.3]))";
        range = 40;
    };
    class RHS_UAZ469_Tires_Water_Fast_INT_SoundShader: Base_Tires_Water_Fast_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Water_Fast_INT", 1}};
        frequency = 1;
        volume = "0.6 * 0.4 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * 0.5*(abs(speed) factor [4, 10]) * 0.4*water * (1 + 0.5*(damper0 factor [0.6,1]))*(1 + 0.3*(gmeterz factor [1,1.3]))";
        range = 40;
    };
    class RHS_UAZ469_Tires_Rock_Slow_INT_SoundShader: Base_Tires_Rock_Slow_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Rock_Slow_INT", 1}};
        frequency = 1;
        volume = "0.6 * 0.4 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5]) * rock * (1 + 0.5*(damper0 factor [0.6,1]))*(1 + 0.3*(gmeterz factor [1,1.3]))";
        range = 30;
    };
    class RHS_UAZ469_Tires_Grass_Slow_INT_SoundShader: Base_Tires_Grass_Slow_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Grass_Slow_INT", 1}};
        frequency = 1;
        volume = "0.6 * 0.4 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5]) * grass * (1 + 0.5*(damper0 factor [0.6,1]))*(1 + 0.3*(gmeterz factor [1,1.3]))";
        range = 50;
    };
    class RHS_UAZ469_Tires_Sand_Slow_INT_SoundShader: Base_Tires_Sand_Slow_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Sand_Slow_INT", 1}};
        frequency = 1;
        volume = "0.6 * 0.4 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5]) * 0.4*sand * (1 + 0.5*(damper0 factor [0.6,1]))*(1 + 0.3*(gmeterz factor [1,1.3]))";
        range = 30;
    };
    class RHS_UAZ469_Tires_Gravel_Slow_INT_SoundShader: Base_Tires_Gravel_Slow_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Gravel_Slow_INT", 1}};
        frequency = 1;
        volume = "0.6 * 0.4 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5]) * 1*gravel * (1 + 0.5*(damper0 factor [0.6,1]))*(1 + 0.3*(gmeterz factor [1,1.3]))";
        range = 50;
    };
    class RHS_UAZ469_Tires_Mud_Slow_INT_SoundShader: Base_Tires_Mud_Slow_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Mud_Slow_INT", 1}};
        frequency = 1;
        volume = "0.6 * 0.4 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5]) * 0.2*mud * (1 + 0.5*(damper0 factor [0.6,1]))*(1 + 0.3*(gmeterz factor [1,1.3]))";
        range = 50;
    };
    class RHS_UAZ469_Tires_Asphalt_Slow_INT_SoundShader: Base_Tires_Asphalt_Slow_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Asphalt_Slow_INT", 1}};
        frequency = 1;
        volume = "0.6 * 0.4 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5]) * 0.8*asphalt*(1+0.7*((abs(speed)) factor[2,10])) * (1 + 0.5*(damper0 factor [0.6,1]))*(1 + 0.3*(gmeterz factor [1,1.3]))";
        range = 40;
    };
    class RHS_UAZ469_Tires_Water_Slow_INT_SoundShader: Base_Tires_Water_Slow_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Water_Slow_INT", 1}};
        frequency = 1;
        volume = "0.6 * 0.4 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5]) * 0.4*water * (1 + 0.5*(damper0 factor [0.6,1]))*(1 + 0.3*(gmeterz factor [1,1.3]))";
        range = 40;
    };
    class RHS_UAZ469_Tires_Turn_Hard_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires_turns\Tires_Turn_Hard_01_INT", 1}};
        frequency = 0.7;
        volume = "(asphalt max rock) * (abs(latSlip) factor [0.1,0.2]) * 0.6 * 0.5";
        range = 50;
    };
    class RHS_UAZ469_Tires_Turn_Soft_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires_turns\Tires_Turn_Soft_01_INT", 1}};
        frequency = 0.7;
        volume = "(1-asphalt)*(1-rock)*(1-water)*(1-sand) * (abs(latSlip) factor [0.07,0.2]) * 0.6 * 0.1";
        range = 50;
    };
    class RHS_UAZ469_Tires_Brake_Hard_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires_brakes\Tires_Brake_Hard_01_INT", 1}};
        frequency = 0.8;
        volume = "(asphalt max rock) * (0.5*(abs(longSlip) factor [0.1,0.3])) * 0.6 * 0.4";
        range = 50;
    };
    class RHS_UAZ469_Tires_Brake_Soft_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires_brakes\Tires_Brake_Soft_01_INT", 1}};
        frequency = 0.8;
        volume = "(1-asphalt)*(1-rock)*(1-water)*(1-sand) * ((abs(longSlip) factor [0.07,0.3])) * 0.6 * 0.3";
        range = 50;
    };
    class RHS_UAZ469_Tires_Rock_Fast_EXT_SoundShader: Base_Tires_Rock_Fast_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Rock_Fast_EXT", 1}};
        frequency = 1;
        volume = "0.8 * 3 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * 0.5*(abs(speed) factor [4, 10]) * rock * (1 + 0.5*(damper0 factor [0.6,1]))*(1 + 0.3*(gmeterz factor [1,1.3]))";
        range = 30;
    };
    class RHS_UAZ469_Tires_Grass_Fast_EXT_SoundShader: Base_Tires_Grass_Fast_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Grass_Fast_EXT", 1}};
        frequency = 1;
        volume = "0.8 * 3 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * 0.5*(abs(speed) factor [4, 10]) * grass * (1 + 0.5*(damper0 factor [0.6,1]))*(1 + 0.3*(gmeterz factor [1,1.3]))";
        range = 50;
    };
    class RHS_UAZ469_Tires_Sand_Fast_EXT_SoundShader: Base_Tires_Sand_Fast_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Sand_Fast_EXT", 1}};
        frequency = 1;
        volume = "0.8 * 3 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * 0.5*(abs(speed) factor [4, 10]) * 0.4*sand * (1 + 0.5*(damper0 factor [0.6,1]))*(1 + 0.3*(gmeterz factor [1,1.3]))";
        range = 30;
    };
    class RHS_UAZ469_Tires_Gravel_Fast_EXT_SoundShader: Base_Tires_Gravel_Fast_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Gravel_Fast_EXT", 1}};
        frequency = 1;
        volume = "0.8 * 3 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * 0.5*(abs(speed) factor [4, 10]) * 1*gravel * (1 + 0.5*(damper0 factor [0.6,1]))*(1 + 0.3*(gmeterz factor [1,1.3]))";
        range = 50;
    };
    class RHS_UAZ469_Tires_Mud_Fast_EXT_SoundShader: Base_Tires_Mud_Fast_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Mud_Fast_EXT", 1}};
        frequency = 1;
        volume = "0.8 * 3 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * 0.5*(abs(speed) factor [4, 10]) * 0.2*mud * (1 + 0.5*(damper0 factor [0.6,1]))*(1 + 0.3*(gmeterz factor [1,1.3]))";
        range = 50;
    };
    class RHS_UAZ469_Tires_Asphalt_Fast_EXT_SoundShader: Base_Tires_Asphalt_Fast_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Asphalt_Fast_EXT", 1}};
        frequency = 1;
        volume = "0.8 * 3 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * 0.5*(abs(speed) factor [4, 10]) * 0.8*asphalt*(1+0.7*((abs(speed)) factor[2,10])) * (1 + 0.5*(damper0 factor [0.6,1]))*(1 + 0.3*(gmeterz factor [1,1.3]))";
        range = 40;
    };
    class RHS_UAZ469_Tires_Water_Fast_EXT_SoundShader: Base_Tires_Water_Fast_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Water_Fast_EXT", 1}};
        frequency = 1;
        volume = "0.8 * 3 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * 0.5*(abs(speed) factor [4, 10]) * 0.4*water * (1 + 0.5*(damper0 factor [0.6,1]))*(1 + 0.3*(gmeterz factor [1,1.3]))";
        range = 40;
    };
    class RHS_UAZ469_Tires_Rock_Slow_EXT_SoundShader: Base_Tires_Rock_Slow_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Rock_Slow_EXT", 1}};
        frequency = 1;
        volume = "0.8 * 3 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5]) * rock * (1 + 0.5*(damper0 factor [0.6,1]))*(1 + 0.3*(gmeterz factor [1,1.3]))";
        range = 30;
    };
    class RHS_UAZ469_Tires_Grass_Slow_EXT_SoundShader: Base_Tires_Grass_Slow_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Grass_Slow_EXT", 1}};
        frequency = 1;
        volume = "0.8 * 3 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5]) * grass * (1 + 0.5*(damper0 factor [0.6,1]))*(1 + 0.3*(gmeterz factor [1,1.3]))";
        range = 50;
    };
    class RHS_UAZ469_Tires_Sand_Slow_EXT_SoundShader: Base_Tires_Sand_Slow_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Sand_Slow_EXT", 1}};
        frequency = 1;
        volume = "0.8 * 3 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5]) * 0.4*sand * (1 + 0.5*(damper0 factor [0.6,1]))*(1 + 0.3*(gmeterz factor [1,1.3]))";
        range = 30;
    };
    class RHS_UAZ469_Tires_Gravel_Slow_EXT_SoundShader: Base_Tires_Gravel_Slow_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Gravel_Slow_EXT", 1}};
        frequency = 1;
        volume = "0.8 * 3 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5]) * 1*gravel * (1 + 0.5*(damper0 factor [0.6,1]))*(1 + 0.3*(gmeterz factor [1,1.3]))";
        range = 50;
    };
    class RHS_UAZ469_Tires_Mud_Slow_EXT_SoundShader: Base_Tires_Mud_Slow_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Mud_Slow_EXT", 1}};
        frequency = 1;
        volume = "0.8 * 3 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5]) * 0.2*mud * (1 + 0.5*(damper0 factor [0.6,1]))*(1 + 0.3*(gmeterz factor [1,1.3]))";
        range = 50;
    };
    class RHS_UAZ469_Tires_Asphalt_Slow_EXT_SoundShader: Base_Tires_Asphalt_Slow_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Asphalt_Slow_EXT", 1}};
        frequency = 1;
        volume = "0.8 * 3 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5]) * 0.8*asphalt*(1+0.7*((abs(speed)) factor[2,10])) * (1 + 0.5*(damper0 factor [0.6,1]))*(1 + 0.3*(gmeterz factor [1,1.3]))";
        range = 40;
    };
    class RHS_UAZ469_Tires_Water_Slow_EXT_SoundShader: Base_Tires_Water_Slow_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Water_Slow_EXT", 1}};
        frequency = 1;
        volume = "0.8 * 3 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5]) * 0.4*water * (1 + 0.5*(damper0 factor [0.6,1]))*(1 + 0.3*(gmeterz factor [1,1.3]))";
        range = 40;
    };
    class RHS_UAZ469_Tires_Turn_Hard_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires_turns\Tires_Turn_Hard_01_EXT", 1}};
        frequency = 0.7;
        volume = "(asphalt max rock) * (abs(latSlip) factor [0.1,0.2]) * 0.8 * 5";
        range = 50;
    };
    class RHS_UAZ469_Tires_Turn_Soft_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires_turns\Tires_Turn_Soft_01_EXT", 1}};
        frequency = 0.7;
        volume = "(1-asphalt)*(1-rock)*(1-water)*(1-sand) * (abs(latSlip) factor [0.07,0.2]) * 0.8 * 1.1";
        range = 50;
    };
    class RHS_UAZ469_Tires_Brake_Hard_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires_brakes\Tires_Brake_Hard_01_EXT", 1}};
        frequency = 0.8;
        volume = "(asphalt max rock) * (0.5*(abs(longSlip) factor [0.1,0.3])) * 0.8 * 0.7";
        range = 50;
    };
    class RHS_UAZ469_Tires_Brake_Soft_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires_brakes\Tires_Brake_Soft_01_EXT", 1}};
        frequency = 0.8;
        volume = "(1-asphalt)*(1-rock)*(1-water)*(1-sand) * ((abs(longSlip) factor [0.07,0.3])) * 0.8 * 0.8";
        range = 50;
    };
    class RHS_UAZ469_Rattling_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\add_layers\Rattling_03_INT", 1}};
        frequency = 1;
        volume = "0.6 * 0.25 * (1 + 2*(damper0 factor [0.3, 0.8])) * (speed factor[5, 15]) * (1 - 0.8*(rock max asphalt)) * (1 - 0.4*(gravel))";
        range = 60;
    };
    class RHS_UAZ469_Stress_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\add_layers\Stress_01_INT", 1}};
        frequency = 1;
        volume = "0.6 * 0.25 * ((damper0 factor [0.5,1.5 ]) + (0.2*(gmeterz factor[0.5, 3]))) * (speed factor [12, 35])";
        range = 60;
    };
    class RHS_UAZ469_Rain_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\add_layers\Rain_01_INT", 1}};
        frequency = 1;
        volume = "0.6 * 1 * rain";
        range = 60;
    };
    class RHS_UAZ469_Rattling_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\add_layers\Rattling_03_EXT", 1}};
        frequency = 1;
        volume = "0.8 * 2 * (1 + 2*(damper0 factor [0.3, 0.8])) * (speed factor[5, 15]) * (1 - 0.8*(rock max asphalt)) * (1 - 0.4*(gravel))";
        range = 60;
    };
    class RHS_UAZ469_Stress_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\add_layers\Stress_01_EXT", 1}};
        frequency = 1;
        volume = "0.8 * 0 * ((damper0 factor [0.5,1.5 ]) + (0.2*(gmeterz factor[0.5, 3]))) * (speed factor [12, 35])";
        range = 60;
    };
    class RHS_UAZ469_Rain_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\add_layers\Rain_01_EXT", 1}};
        frequency = 1;
        volume = "0.8 * 1 * rain";
        range = 50;
    };
    class RHS_OTR21_Engine_RPM0_EXT_SoundShader: Engine_Base_RPM0_EXT_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\ural4320\ural4320_Engine_EXT_RPM0", 1}};
        frequency = "0.9 * (1 + 0.7 * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 18]) + 0.9  * (rpm factor [700,	2850])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 18]) + 0.9  * (rpm factor [700,	2850])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [700,	2850])) - 0))";
        volume = "engineOn * 0.8 * 1.5 * (rpm factor [0.05 *700, (0.05 *700 + 0.5 *(700-0.05 *700))]) * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 18]) + 0.9  * (rpm factor [700,	2850])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 18]) + 0.9  * (rpm factor [700,	2850])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [700,	2850])) factor [(1400 - 700)/(1700 - 700) - (((1400 - 700)/(1700 - 700) - 0) - (1.4 * ((1400 - 700)/(1700 - 700) - 0)))/2, 0])";
        range = "3.5*210";
    };
    class RHS_OTR21_Engine_RPM1_EXT_SoundShader: Engine_Base_RPM1_EXT_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\ural4320\ural4320_Engine_EXT_RPM1", 1}};
        frequency = "0.9 * (1 + 0.7 * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 18]) + 0.9  * (rpm factor [700,	2850])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 18]) + 0.9  * (rpm factor [700,	2850])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [700,	2850])) - (1400 - 700)/(1700 - 700)))";
        volume = "engineOn * 0.8 * 1.5 * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 18]) + 0.9  * (rpm factor [700,	2850])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 18]) + 0.9  * (rpm factor [700,	2850])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [700,	2850])) factor[0, (1400 - 700)/(1700 - 700) - (((1400 - 700)/(1700 - 700) - 0) - (1.4 * ((1400 - 700)/(1700 - 700) - 0)))/2]) * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 18]) + 0.9  * (rpm factor [700,	2850])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 18]) + 0.9  * (rpm factor [700,	2850])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [700,	2850])) factor [(1700 - 700)/(1700 - 700) - (((1700 - 700)/(1700 - 700) - (1400 - 700)/(1700 - 700)) - (1.3 * ((1700 - 700)/(1700 - 700) - (1400 - 700)/(1700 - 700))))/2, (1400 - 700)/(1700 - 700) + (((1700 - 700)/(1700 - 700) - (1400 - 700)/(1700 - 700)) - (1.3 * ((1700 - 700)/(1700 - 700) - (1400 - 700)/(1700 - 700))))/2])";
        range = "3.5*215";
    };
    class RHS_OTR21_Engine_RPM2_EXT_SoundShader: Engine_Base_RPM2_EXT_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\ural4320\ural4320_Engine_EXT_RPM2", 1}};
        frequency = "0.9 * (1 + 0.7 * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 18]) + 0.9  * (rpm factor [700,	2850])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 18]) + 0.9  * (rpm factor [700,	2850])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [700,	2850])) - (1700 - 700)/(1700 - 700)))";
        volume = "engineOn * 0.8 * 1.5 * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 18]) + 0.9  * (rpm factor [700,	2850])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 18]) + 0.9  * (rpm factor [700,	2850])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [700,	2850])) factor[(1400 - 700)/(1700 - 700) + (((1700 - 700)/(1700 - 700) - (1400 - 700)/(1700 - 700)) - (1.3 * ((1700 - 700)/(1700 - 700) - (1400 - 700)/(1700 - 700))))/2, (1700 - 700)/(1700 - 700) - (((1700 - 700)/(1700 - 700) - (1400 - 700)/(1700 - 700)) - (1.3 * ((1700 - 700)/(1700 - 700) - (1400 - 700)/(1700 - 700))))/2])";
        range = "3.5*220";
    };
    class RHS_OTR21_Engine_RPM0_INT_SoundShader: Engine_Base_RPM0_INT_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\ural4320\ural4320_Engine_INT_RPM0", 1}};
        frequency = "0.9 * (1 + 0.7 * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 18]) + 0.9  * (rpm factor [700,	2850])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 18]) + 0.9  * (rpm factor [700,	2850])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [700,	2850])) - 0))";
        volume = "engineOn * 0.6 * 1.6 * (rpm factor [0.05 *700, (0.05 *700 + 0.5 *(700-0.05 *700))]) * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 18]) + 0.9  * (rpm factor [700,	2850])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 18]) + 0.9  * (rpm factor [700,	2850])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [700,	2850])) factor [(1400 - 700)/(1700 - 700) - (((1400 - 700)/(1700 - 700) - 0) - (1.4 * ((1400 - 700)/(1700 - 700) - 0)))/2, 0])";
        range = "3.5*210";
    };
    class RHS_OTR21_Engine_RPM1_INT_SoundShader: Engine_Base_RPM1_INT_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\ural4320\ural4320_Engine_INT_RPM1", 1}};
        frequency = "0.9 * (1 + 0.7 * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 18]) + 0.9  * (rpm factor [700,	2850])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 18]) + 0.9  * (rpm factor [700,	2850])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [700,	2850])) - (1400 - 700)/(1700 - 700)))";
        volume = "engineOn * 0.6 * 1.6 * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 18]) + 0.9  * (rpm factor [700,	2850])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 18]) + 0.9  * (rpm factor [700,	2850])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [700,	2850])) factor[0, (1400 - 700)/(1700 - 700) - (((1400 - 700)/(1700 - 700) - 0) - (1.4 * ((1400 - 700)/(1700 - 700) - 0)))/2]) * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 18]) + 0.9  * (rpm factor [700,	2850])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 18]) + 0.9  * (rpm factor [700,	2850])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [700,	2850])) factor [(1700 - 700)/(1700 - 700) - (((1700 - 700)/(1700 - 700) - (1400 - 700)/(1700 - 700)) - (1.3 * ((1700 - 700)/(1700 - 700) - (1400 - 700)/(1700 - 700))))/2, (1400 - 700)/(1700 - 700) + (((1700 - 700)/(1700 - 700) - (1400 - 700)/(1700 - 700)) - (1.3 * ((1700 - 700)/(1700 - 700) - (1400 - 700)/(1700 - 700))))/2])";
        range = "3.5*215";
    };
    class RHS_OTR21_Engine_RPM2_INT_SoundShader: Engine_Base_RPM2_INT_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\ural4320\ural4320_Engine_INT_RPM2", 1}};
        frequency = "0.9 * (1 + 0.7 * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 18]) + 0.9  * (rpm factor [700,	2850])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 18]) + 0.9  * (rpm factor [700,	2850])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [700,	2850])) - (1700 - 700)/(1700 - 700)))";
        volume = "engineOn * 0.6 * 1.6 * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 18]) + 0.9  * (rpm factor [700,	2850])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 18]) + 0.9  * (rpm factor [700,	2850])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [700,	2850])) factor[(1400 - 700)/(1700 - 700) + (((1700 - 700)/(1700 - 700) - (1400 - 700)/(1700 - 700)) - (1.3 * ((1700 - 700)/(1700 - 700) - (1400 - 700)/(1700 - 700))))/2, (1700 - 700)/(1700 - 700) - (((1700 - 700)/(1700 - 700) - (1400 - 700)/(1700 - 700)) - (1.3 * ((1700 - 700)/(1700 - 700) - (1400 - 700)/(1700 - 700))))/2])";
        range = "3.5*220";
    };
    class RHS_OTR21_Engine_EXT_Burst_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\ural4320\ural4320_Engine_EXT_Burst01", 1}, {"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\ural4320\ural4320_Engine_EXT_Burst02", 1}, {"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\ural4320\ural4320_Engine_EXT_Burst03", 1}};
        frequency = 0.9;
        range = "1*150";
        volume = "engineOn * 0.8 * 1.5 * (rpm factor[0,10])";
    };
    class RHS_OTR21_Engine_INT_Burst_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\ural4320\ural4320_Engine_INT_Burst01", 1}, {"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\ural4320\ural4320_Engine_INT_Burst02", 1}, {"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\ural4320\ural4320_Engine_INT_Burst03", 1}};
        frequency = 0.9;
        range = "1*150";
        volume = "engineOn * 0.6 * 1.5 * (rpm factor[0,10])";
    };
    class RHS_OTR21_Tires_Rock_Fast_INT_SoundShader: Base_Tires_Rock_Fast_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Rock_Fast_INT", 1}};
        frequency = 1;
        volume = "0.6 * 0.35 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [4, 10]) * 0.6*rock * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 30;
    };
    class RHS_OTR21_Tires_Grass_Fast_INT_SoundShader: Base_Tires_Grass_Fast_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Grass_Fast_INT", 1}};
        frequency = 1;
        volume = "0.6 * 0.35 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [4, 10]) * 0.65*grass*(0.9 + 0.3*damper0) * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 50;
    };
    class RHS_OTR21_Tires_Sand_Fast_INT_SoundShader: Base_Tires_Sand_Fast_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Sand_Fast_INT", 1}};
        frequency = 1;
        volume = "0.6 * 0.35 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [4, 10]) * 0.2*sand * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 30;
    };
    class RHS_OTR21_Tires_Gravel_Fast_INT_SoundShader: Base_Tires_Gravel_Fast_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Gravel_Fast_INT", 1}};
        frequency = 1;
        volume = "0.6 * 0.35 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [4, 10]) * 0.6*gravel*(0.9 + 0.3*damper0) * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 50;
    };
    class RHS_OTR21_Tires_Mud_Fast_INT_SoundShader: Base_Tires_Mud_Fast_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Mud_Fast_INT", 1}};
        frequency = 1;
        volume = "0.6 * 0.35 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [4, 10]) * 0.65*mud*(0.9 + 0.3*damper0) * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 50;
    };
    class RHS_OTR21_Tires_Asphalt_Fast_INT_SoundShader: Base_Tires_Asphalt_Fast_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Asphalt_Fast_INT", 1}};
        frequency = 1;
        volume = "0.6 * 0.35 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [4, 10]) * 0.3*asphalt*(1+0.7*((abs(speed)) factor[5,15]))*(0.9 + 0.3*damper0) * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 40;
    };
    class RHS_OTR21_Tires_Water_Fast_INT_SoundShader: Base_Tires_Water_Fast_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Water_Fast_INT", 1}};
        frequency = 1;
        volume = "0.6 * 0.35 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [4, 10]) * 0.2*water";
        range = 40;
    };
    class RHS_OTR21_Tires_Rock_Slow_INT_SoundShader: Base_Tires_Rock_Slow_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Rock_Slow_INT", 1}};
        frequency = 1;
        volume = "0.6 * 0.35 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5]) * 0.6*rock * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 30;
    };
    class RHS_OTR21_Tires_Grass_Slow_INT_SoundShader: Base_Tires_Grass_Slow_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Grass_Slow_INT", 1}};
        frequency = 1;
        volume = "0.6 * 0.35 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5]) * 0.65*grass*(0.9 + 0.3*damper0) * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 50;
    };
    class RHS_OTR21_Tires_Sand_Slow_INT_SoundShader: Base_Tires_Sand_Slow_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Sand_Slow_INT", 1}};
        frequency = 1;
        volume = "0.6 * 0.35 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5]) * 0.2*sand * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 30;
    };
    class RHS_OTR21_Tires_Gravel_Slow_INT_SoundShader: Base_Tires_Gravel_Slow_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Gravel_Slow_INT", 1}};
        frequency = 1;
        volume = "0.6 * 0.35 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5]) * 0.6*gravel*(0.9 + 0.3*damper0) * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 50;
    };
    class RHS_OTR21_Tires_Mud_Slow_INT_SoundShader: Base_Tires_Mud_Slow_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Mud_Slow_INT", 1}};
        frequency = 1;
        volume = "0.6 * 0.35 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5]) * 0.65*mud*(0.9 + 0.3*damper0) * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 50;
    };
    class RHS_OTR21_Tires_Asphalt_Slow_INT_SoundShader: Base_Tires_Asphalt_Slow_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Asphalt_Slow_INT", 1}};
        frequency = 1;
        volume = "0.6 * 0.35 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5]) * 0.3*asphalt*(1+0.7*((abs(speed)) factor[5,15]))*(0.9 + 0.3*damper0) * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 40;
    };
    class RHS_OTR21_Tires_Water_Slow_INT_SoundShader: Base_Tires_Water_Slow_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Water_Slow_INT", 1}};
        frequency = 1;
        volume = "0.6 * 0.35 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5]) * 0.2*water";
        range = 40;
    };
    class RHS_OTR21_Tires_Turn_Hard_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires_turns\Tires_Turn_Hard_01_INT", 1}};
        frequency = 0.7;
        volume = "(asphalt max rock) * (abs(latSlip) factor [0.1,0.2]) * 0.6 * 0.5";
        range = 50;
    };
    class RHS_OTR21_Tires_Turn_Soft_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires_turns\Tires_Turn_Soft_01_INT", 1}};
        frequency = 1;
        volume = "(1-asphalt)*(1-rock)*(1-water)*(1-sand) * (abs(latSlip) factor [0.07,0.2]) * 0.6 * 0.1";
        range = 50;
    };
    class RHS_OTR21_Tires_Brake_Hard_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires_brakes\Tires_Brake_Hard_01_INT", 1}};
        frequency = 0.7;
        volume = "(asphalt max rock) * (0.5*(abs(longSlip) factor [0.1,0.3])) * 0.6 * 0.5";
        range = 50;
    };
    class RHS_OTR21_Tires_Brake_Soft_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires_brakes\Tires_Brake_Soft_01_INT", 1}};
        frequency = 1;
        volume = "(1-asphalt)*(1-rock)*(1-water)*(1-sand) * ((abs(longSlip) factor [0.07,0.3])) * 0.6 * 0.1";
        range = 50;
    };
    class RHS_OTR21_Tires_Rock_Fast_EXT_SoundShader: Base_Tires_Rock_Fast_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Rock_Fast_EXT", 1}};
        frequency = 1;
        volume = "0.8 * 1.5 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [4, 10]) * 0.6*rock * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 30;
    };
    class RHS_OTR21_Tires_Grass_Fast_EXT_SoundShader: Base_Tires_Grass_Fast_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Grass_Fast_EXT", 1}};
        frequency = 1;
        volume = "0.8 * 1.5 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [4, 10]) * 0.65*grass*(0.9 + 0.3*damper0) * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 50;
    };
    class RHS_OTR21_Tires_Sand_Fast_EXT_SoundShader: Base_Tires_Sand_Fast_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Sand_Fast_EXT", 1}};
        frequency = 1;
        volume = "0.8 * 1.5 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [4, 10]) * 0.2*sand * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 30;
    };
    class RHS_OTR21_Tires_Gravel_Fast_EXT_SoundShader: Base_Tires_Gravel_Fast_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Gravel_Fast_EXT", 1}};
        frequency = 1;
        volume = "0.8 * 1.5 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [4, 10]) * 0.6*gravel*(0.9 + 0.3*damper0) * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 50;
    };
    class RHS_OTR21_Tires_Mud_Fast_EXT_SoundShader: Base_Tires_Mud_Fast_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Mud_Fast_EXT", 1}};
        frequency = 1;
        volume = "0.8 * 1.5 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [4, 10]) * 0.65*mud*(0.9 + 0.3*damper0) * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 50;
    };
    class RHS_OTR21_Tires_Asphalt_Fast_EXT_SoundShader: Base_Tires_Asphalt_Fast_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Asphalt_Fast_EXT", 1}};
        frequency = 1;
        volume = "0.8 * 1.5 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [4, 10]) * 0.3*asphalt*(1+0.7*((abs(speed)) factor[5,15]))*(0.9 + 0.3*damper0) * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 40;
    };
    class RHS_OTR21_Tires_Water_Fast_EXT_SoundShader: Base_Tires_Water_Fast_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Water_Fast_EXT", 1}};
        frequency = 1;
        volume = "0.8 * 1.5 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [4, 10]) * 0.2*water";
        range = 40;
    };
    class RHS_OTR21_Tires_Rock_Slow_EXT_SoundShader: Base_Tires_Rock_Slow_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Rock_Slow_EXT", 1}};
        frequency = 1;
        volume = "0.8 * 1.5 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5]) * 0.6*rock * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 30;
    };
    class RHS_OTR21_Tires_Grass_Slow_EXT_SoundShader: Base_Tires_Grass_Slow_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Grass_Slow_EXT", 1}};
        frequency = 1;
        volume = "0.8 * 1.5 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5]) * 0.65*grass*(0.9 + 0.3*damper0) * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 50;
    };
    class RHS_OTR21_Tires_Sand_Slow_EXT_SoundShader: Base_Tires_Sand_Slow_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Sand_Slow_EXT", 1}};
        frequency = 1;
        volume = "0.8 * 1.5 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5]) * 0.2*sand * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 30;
    };
    class RHS_OTR21_Tires_Gravel_Slow_EXT_SoundShader: Base_Tires_Gravel_Slow_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Gravel_Slow_EXT", 1}};
        frequency = 1;
        volume = "0.8 * 1.5 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5]) * 0.6*gravel*(0.9 + 0.3*damper0) * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 50;
    };
    class RHS_OTR21_Tires_Mud_Slow_EXT_SoundShader: Base_Tires_Mud_Slow_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Mud_Slow_EXT", 1}};
        frequency = 1;
        volume = "0.8 * 1.5 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5]) * 0.65*mud*(0.9 + 0.3*damper0) * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 50;
    };
    class RHS_OTR21_Tires_Asphalt_Slow_EXT_SoundShader: Base_Tires_Asphalt_Slow_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Asphalt_Slow_EXT", 1}};
        frequency = 1;
        volume = "0.8 * 1.5 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5]) * 0.3*asphalt*(1+0.7*((abs(speed)) factor[5,15]))*(0.9 + 0.3*damper0) * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 40;
    };
    class RHS_OTR21_Tires_Water_Slow_EXT_SoundShader: Base_Tires_Water_Slow_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Water_Slow_EXT", 1}};
        frequency = 1;
        volume = "0.8 * 1.5 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5]) * 0.2*water";
        range = 40;
    };
    class RHS_OTR21_Tires_Turn_Hard_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires_turns\Tires_Turn_Hard_01_EXT", 1}};
        frequency = 0.7;
        volume = "(asphalt max rock) * (abs(latSlip) factor [0.1,0.2]) * 0.8 * 1.9";
        range = 50;
    };
    class RHS_OTR21_Tires_Turn_Soft_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires_turns\Tires_Turn_Soft_01_EXT", 1}};
        frequency = 1;
        volume = "(1-asphalt)*(1-rock)*(1-water)*(1-sand) * (abs(latSlip) factor [0.07,0.2]) * 0.8 * 1.5";
        range = 50;
    };
    class RHS_OTR21_Tires_Brake_Hard_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires_brakes\Tires_Brake_Hard_01_EXT", 1}};
        frequency = 0.7;
        volume = "(asphalt max rock) * (0.5*(abs(longSlip) factor [0.1,0.3])) * 0.8 * 1.9";
        range = 50;
    };
    class RHS_OTR21_Tires_Brake_Soft_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires_brakes\Tires_Brake_Soft_01_EXT", 1}};
        frequency = 1;
        volume = "(1-asphalt)*(1-rock)*(1-water)*(1-sand) * ((abs(longSlip) factor [0.07,0.3])) * 0.8 * 1.5";
        range = 50;
    };
    class RHS_OTR21_Rattling_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\add_layers\Rattling_03_INT", 1}};
        frequency = 1;
        volume = "0.6 * 0.5 * (1 + 2*(damper0 factor [0.3, 0.8])) * (speed factor[5, 15]) * (1 - 0.8*(rock max asphalt)) * (1 - 0.4*(gravel))";
        range = 60;
    };
    class RHS_OTR21_Stress_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\add_layers\Stress_01_INT", 1}};
        frequency = 1.3;
        volume = "0.6 * 0.8 * ((damper0 factor [0.9,1]) * (speed factor [5, 15]))";
        range = 60;
    };
    class RHS_OTR21_Rain_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\add_layers\Rain_01_INT", 1}};
        frequency = 1;
        volume = "0.6 * 1 * rain";
        range = 60;
    };
    class RHS_OTR21_Rattling_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\add_layers\Rattling_03_EXT", 1}};
        frequency = 1;
        volume = "0.8 * 2 * (1 + 2*(damper0 factor [0.3, 0.8])) * (speed factor[5, 15]) * (1 - 0.8*(rock max asphalt)) * (1 - 0.4*(gravel))";
        range = 60;
    };
    class RHS_OTR21_Stress_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\add_layers\Stress_01_EXT", 1}};
        frequency = 1.3;
        volume = "0.8 * 1 * ((damper0 factor [0.9,1]) * (speed factor [5, 15]))";
        range = 60;
    };
    class RHS_OTR21_Rain_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\add_layers\Rain_01_EXT", 1}};
        frequency = 1;
        volume = "0.8 * 1 * rain";
        range = 50;
    };
    class RHS_gaz66_Engine_RPM0_EXT_SoundShader: Engine_Base_RPM0_EXT_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\gaz66\gaz66_Engine_EXT_RPM0", 1}};
        frequency = "0.8 * (1 + 0.9 * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [500,	3200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [500,	3200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [500,	3200])) - 0))";
        volume = "engineOn * 0.8 * 1.5 * (rpm factor [0.05 *600, (0.05 *600 + 0.5 *(600-0.05 *600))]) * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [500,	3200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [500,	3200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [500,	3200])) factor [(1000 - 600)/(2400 - 600) - (((1000 - 600)/(2400 - 600) - 0) - (1.4 * ((1000 - 600)/(2400 - 600) - 0)))/2, 0])";
        range = "3.5*210";
    };
    class RHS_gaz66_Engine_RPM1_EXT_SoundShader: Engine_Base_RPM1_EXT_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\gaz66\gaz66_Engine_EXT_RPM1", 1}};
        frequency = "0.8 * (1 + 0.9 * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [500,	3200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [500,	3200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [500,	3200])) - (1000 - 600)/(2400 - 600)))";
        volume = "engineOn * 0.8 * 1.5 * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [500,	3200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [500,	3200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [500,	3200])) factor[0, (1000 - 600)/(2400 - 600) - (((1000 - 600)/(2400 - 600) - 0) - (1.4 * ((1000 - 600)/(2400 - 600) - 0)))/2]) * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [500,	3200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [500,	3200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [500,	3200])) factor [(1900 - 600)/(2400 - 600) - (((1900 - 600)/(2400 - 600) - (1000 - 600)/(2400 - 600)) - (1.3 * ((1900 - 600)/(2400 - 600) - (1000 - 600)/(2400 - 600))))/2, (1000 - 600)/(2400 - 600) + (((1900 - 600)/(2400 - 600) - (1000 - 600)/(2400 - 600)) - (1.3 * ((1900 - 600)/(2400 - 600) - (1000 - 600)/(2400 - 600))))/2])";
        range = "3.5*215";
    };
    class RHS_gaz66_Engine_RPM2_EXT_SoundShader: Engine_Base_RPM2_EXT_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\gaz66\gaz66_Engine_EXT_RPM2", 1}};
        frequency = "0.8 * (1 + 0.9 * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [500,	3200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [500,	3200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [500,	3200])) - (1900 - 600)/(2400 - 600)))";
        volume = "engineOn * 0.8 * 1.5 * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [500,	3200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [500,	3200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [500,	3200])) factor[(1000 - 600)/(2400 - 600) + (((1900 - 600)/(2400 - 600) - (1000 - 600)/(2400 - 600)) - (1.3 * ((1900 - 600)/(2400 - 600) - (1000 - 600)/(2400 - 600))))/2, (1900 - 600)/(2400 - 600) - (((1900 - 600)/(2400 - 600) - (1000 - 600)/(2400 - 600)) - (1.3 * ((1900 - 600)/(2400 - 600) - (1000 - 600)/(2400 - 600))))/2]) * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [500,	3200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [500,	3200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [500,	3200])) factor [(2400 - 600)/(2400 - 600) - (((2400 - 600)/(2400 - 600) - (1900 - 600)/(2400 - 600)) - (1.2 * ((2400 - 600)/(2400 - 600) - (1900 - 600)/(2400 - 600))))/2, (1900 - 600)/(2400 - 600) + (((2400 - 600)/(2400 - 600) - (1900 - 600)/(2400 - 600)) - (1.2 * ((2400 - 600)/(2400 - 600) - (1900 - 600)/(2400 - 600))))/2])";
        range = "3.5*220";
    };
    class RHS_gaz66_Engine_RPM3_EXT_SoundShader: Engine_Base_RPM3_EXT_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\gaz66\gaz66_Engine_EXT_RPM3", 1}};
        frequency = "0.8 * (1 + 0.9 * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [500,	3200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [500,	3200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [500,	3200])) - (2400 - 600)/(2400 - 600)))";
        volume = "engineOn * 0.8 * 1.5 * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [500,	3200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [500,	3200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [500,	3200])) factor[(1900 - 600)/(2400 - 600) + (((2400 - 600)/(2400 - 600) - (1900 - 600)/(2400 - 600)) - (1.2 * ((2400 - 600)/(2400 - 600) - (1900 - 600)/(2400 - 600))))/2, (2400 - 600)/(2400 - 600) - (((2400 - 600)/(2400 - 600) - (1900 - 600)/(2400 - 600)) - (1.2 * ((2400 - 600)/(2400 - 600) - (1900 - 600)/(2400 - 600))))/2])";
        range = "3.5*225";
    };
    class RHS_gaz66_Engine_RPM0_INT_SoundShader: Engine_Base_RPM0_INT_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\gaz66\gaz66_Engine_INT_RPM0", 1}};
        frequency = "0.8 * (1 + 0.9 * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [500,	3200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [500,	3200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [500,	3200])) - 0))";
        volume = "engineOn * 0.6 * 1.6 * (rpm factor [0.05 *600, (0.05 *600 + 0.5 *(600-0.05 *600))]) * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [500,	3200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [500,	3200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [500,	3200])) factor [(1000 - 600)/(2400 - 600) - (((1000 - 600)/(2400 - 600) - 0) - (1.4 * ((1000 - 600)/(2400 - 600) - 0)))/2, 0])";
        range = "3.5*210";
    };
    class RHS_gaz66_Engine_RPM1_INT_SoundShader: Engine_Base_RPM1_INT_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\gaz66\gaz66_Engine_INT_RPM1", 1}};
        frequency = "0.8 * (1 + 0.9 * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [500,	3200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [500,	3200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [500,	3200])) - (1000 - 600)/(2400 - 600)))";
        volume = "engineOn * 0.6 * 1.6 * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [500,	3200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [500,	3200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [500,	3200])) factor[0, (1000 - 600)/(2400 - 600) - (((1000 - 600)/(2400 - 600) - 0) - (1.4 * ((1000 - 600)/(2400 - 600) - 0)))/2]) * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [500,	3200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [500,	3200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [500,	3200])) factor [(1900 - 600)/(2400 - 600) - (((1900 - 600)/(2400 - 600) - (1000 - 600)/(2400 - 600)) - (1.3 * ((1900 - 600)/(2400 - 600) - (1000 - 600)/(2400 - 600))))/2, (1000 - 600)/(2400 - 600) + (((1900 - 600)/(2400 - 600) - (1000 - 600)/(2400 - 600)) - (1.3 * ((1900 - 600)/(2400 - 600) - (1000 - 600)/(2400 - 600))))/2])";
        range = "3.5*215";
    };
    class RHS_gaz66_Engine_RPM2_INT_SoundShader: Engine_Base_RPM2_INT_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\gaz66\gaz66_Engine_INT_RPM2", 1}};
        frequency = "0.8 * (1 + 0.9 * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [500,	3200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [500,	3200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [500,	3200])) - (1900 - 600)/(2400 - 600)))";
        volume = "engineOn * 0.6 * 1.6 * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [500,	3200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [500,	3200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [500,	3200])) factor[(1000 - 600)/(2400 - 600) + (((1900 - 600)/(2400 - 600) - (1000 - 600)/(2400 - 600)) - (1.3 * ((1900 - 600)/(2400 - 600) - (1000 - 600)/(2400 - 600))))/2, (1900 - 600)/(2400 - 600) - (((1900 - 600)/(2400 - 600) - (1000 - 600)/(2400 - 600)) - (1.3 * ((1900 - 600)/(2400 - 600) - (1000 - 600)/(2400 - 600))))/2]) * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [500,	3200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [500,	3200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [500,	3200])) factor [(2400 - 600)/(2400 - 600) - (((2400 - 600)/(2400 - 600) - (1900 - 600)/(2400 - 600)) - (1.2 * ((2400 - 600)/(2400 - 600) - (1900 - 600)/(2400 - 600))))/2, (1900 - 600)/(2400 - 600) + (((2400 - 600)/(2400 - 600) - (1900 - 600)/(2400 - 600)) - (1.2 * ((2400 - 600)/(2400 - 600) - (1900 - 600)/(2400 - 600))))/2])";
        range = "3.5*220";
    };
    class RHS_gaz66_Engine_RPM3_INT_SoundShader: Engine_Base_RPM3_INT_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\gaz66\gaz66_Engine_INT_RPM3", 1}};
        frequency = "0.8 * (1 + 0.9 * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [500,	3200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [500,	3200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [500,	3200])) - (2400 - 600)/(2400 - 600)))";
        volume = "engineOn * 0.6 * 1.6 * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [500,	3200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [500,	3200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [500,	3200])) factor[(1900 - 600)/(2400 - 600) + (((2400 - 600)/(2400 - 600) - (1900 - 600)/(2400 - 600)) - (1.2 * ((2400 - 600)/(2400 - 600) - (1900 - 600)/(2400 - 600))))/2, (2400 - 600)/(2400 - 600) - (((2400 - 600)/(2400 - 600) - (1900 - 600)/(2400 - 600)) - (1.2 * ((2400 - 600)/(2400 - 600) - (1900 - 600)/(2400 - 600))))/2])";
        range = "3.5*225";
    };
    class RHS_gaz66_Tires_Rock_Fast_INT_SoundShader: Base_Tires_Rock_Fast_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Rock_Fast_INT", 1}};
        frequency = 1;
        volume = "0.6 * 0.35 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [4, 10]) * 0.6*rock * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 30;
    };
    class RHS_gaz66_Tires_Grass_Fast_INT_SoundShader: Base_Tires_Grass_Fast_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Grass_Fast_INT", 1}};
        frequency = 1;
        volume = "0.6 * 0.35 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [4, 10]) * 0.65*grass*(0.9 + 0.3*damper0) * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 50;
    };
    class RHS_gaz66_Tires_Sand_Fast_INT_SoundShader: Base_Tires_Sand_Fast_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Sand_Fast_INT", 1}};
        frequency = 1;
        volume = "0.6 * 0.35 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [4, 10]) * 0.2*sand * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 30;
    };
    class RHS_gaz66_Tires_Gravel_Fast_INT_SoundShader: Base_Tires_Gravel_Fast_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Gravel_Fast_INT", 1}};
        frequency = 1;
        volume = "0.6 * 0.35 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [4, 10]) * 0.6*gravel*(0.9 + 0.3*damper0) * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 50;
    };
    class RHS_gaz66_Tires_Mud_Fast_INT_SoundShader: Base_Tires_Mud_Fast_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Mud_Fast_INT", 1}};
        frequency = 1;
        volume = "0.6 * 0.35 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [4, 10]) * 0.65*mud*(0.9 + 0.3*damper0) * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 50;
    };
    class RHS_gaz66_Tires_Asphalt_Fast_INT_SoundShader: Base_Tires_Asphalt_Fast_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Asphalt_Fast_INT", 1}};
        frequency = 1;
        volume = "0.6 * 0.35 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [4, 10]) * 0.3*asphalt*(1+0.7*((abs(speed)) factor[5,15]))*(0.9 + 0.3*damper0) * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 40;
    };
    class RHS_gaz66_Tires_Water_Fast_INT_SoundShader: Base_Tires_Water_Fast_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Water_Fast_INT", 1}};
        frequency = 1;
        volume = "0.6 * 0.35 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [4, 10]) * 0.2*water";
        range = 40;
    };
    class RHS_gaz66_Tires_Rock_Slow_INT_SoundShader: Base_Tires_Rock_Slow_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Rock_Slow_INT", 1}};
        frequency = 1;
        volume = "0.6 * 0.35 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5]) * 0.6*rock * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 30;
    };
    class RHS_gaz66_Tires_Grass_Slow_INT_SoundShader: Base_Tires_Grass_Slow_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Grass_Slow_INT", 1}};
        frequency = 1;
        volume = "0.6 * 0.35 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5]) * 0.65*grass*(0.9 + 0.3*damper0) * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 50;
    };
    class RHS_gaz66_Tires_Sand_Slow_INT_SoundShader: Base_Tires_Sand_Slow_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Sand_Slow_INT", 1}};
        frequency = 1;
        volume = "0.6 * 0.35 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5]) * 0.2*sand * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 30;
    };
    class RHS_gaz66_Tires_Gravel_Slow_INT_SoundShader: Base_Tires_Gravel_Slow_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Gravel_Slow_INT", 1}};
        frequency = 1;
        volume = "0.6 * 0.35 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5]) * 0.6*gravel*(0.9 + 0.3*damper0) * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 50;
    };
    class RHS_gaz66_Tires_Mud_Slow_INT_SoundShader: Base_Tires_Mud_Slow_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Mud_Slow_INT", 1}};
        frequency = 1;
        volume = "0.6 * 0.35 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5]) * 0.65*mud*(0.9 + 0.3*damper0) * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 50;
    };
    class RHS_gaz66_Tires_Asphalt_Slow_INT_SoundShader: Base_Tires_Asphalt_Slow_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Asphalt_Slow_INT", 1}};
        frequency = 1;
        volume = "0.6 * 0.35 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5]) * 0.3*asphalt*(1+0.7*((abs(speed)) factor[5,15]))*(0.9 + 0.3*damper0) * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 40;
    };
    class RHS_gaz66_Tires_Water_Slow_INT_SoundShader: Base_Tires_Water_Slow_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Water_Slow_INT", 1}};
        frequency = 1;
        volume = "0.6 * 0.35 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5]) * 0.2*water";
        range = 40;
    };
    class RHS_gaz66_Tires_Turn_Hard_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires_turns\Tires_Turn_Hard_01_INT", 1}};
        frequency = 0.7;
        volume = "(asphalt max rock) * (abs(latSlip) factor [0.1,0.2]) * 0.6 * 0.5";
        range = 50;
    };
    class RHS_gaz66_Tires_Turn_Soft_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires_turns\Tires_Turn_Soft_01_INT", 1}};
        frequency = 1;
        volume = "(1-asphalt)*(1-rock)*(1-water)*(1-sand) * (abs(latSlip) factor [0.07,0.2]) * 0.6 * 0.1";
        range = 50;
    };
    class RHS_gaz66_Tires_Brake_Hard_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires_brakes\Tires_Brake_Hard_01_INT", 1}};
        frequency = 0.7;
        volume = "(asphalt max rock) * (0.5*(abs(longSlip) factor [0.1,0.3])) * 0.6 * 0.5";
        range = 50;
    };
    class RHS_gaz66_Tires_Brake_Soft_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires_brakes\Tires_Brake_Soft_01_INT", 1}};
        frequency = 1;
        volume = "(1-asphalt)*(1-rock)*(1-water)*(1-sand) * ((abs(longSlip) factor [0.07,0.3])) * 0.6 * 0.1";
        range = 50;
    };
    class RHS_gaz66_Tires_Rock_Fast_EXT_SoundShader: Base_Tires_Rock_Fast_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Rock_Fast_EXT", 1}};
        frequency = 1;
        volume = "0.8 * 1.5 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [4, 10]) * 0.6*rock * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 30;
    };
    class RHS_gaz66_Tires_Grass_Fast_EXT_SoundShader: Base_Tires_Grass_Fast_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Grass_Fast_EXT", 1}};
        frequency = 1;
        volume = "0.8 * 1.5 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [4, 10]) * 0.65*grass*(0.9 + 0.3*damper0) * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 50;
    };
    class RHS_gaz66_Tires_Sand_Fast_EXT_SoundShader: Base_Tires_Sand_Fast_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Sand_Fast_EXT", 1}};
        frequency = 1;
        volume = "0.8 * 1.5 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [4, 10]) * 0.2*sand * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 30;
    };
    class RHS_gaz66_Tires_Gravel_Fast_EXT_SoundShader: Base_Tires_Gravel_Fast_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Gravel_Fast_EXT", 1}};
        frequency = 1;
        volume = "0.8 * 1.5 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [4, 10]) * 0.6*gravel*(0.9 + 0.3*damper0) * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 50;
    };
    class RHS_gaz66_Tires_Mud_Fast_EXT_SoundShader: Base_Tires_Mud_Fast_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Mud_Fast_EXT", 1}};
        frequency = 1;
        volume = "0.8 * 1.5 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [4, 10]) * 0.65*mud*(0.9 + 0.3*damper0) * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 50;
    };
    class RHS_gaz66_Tires_Asphalt_Fast_EXT_SoundShader: Base_Tires_Asphalt_Fast_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Asphalt_Fast_EXT", 1}};
        frequency = 1;
        volume = "0.8 * 1.5 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [4, 10]) * 0.3*asphalt*(1+0.7*((abs(speed)) factor[5,15]))*(0.9 + 0.3*damper0) * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 40;
    };
    class RHS_gaz66_Tires_Water_Fast_EXT_SoundShader: Base_Tires_Water_Fast_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Water_Fast_EXT", 1}};
        frequency = 1;
        volume = "0.8 * 1.5 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [4, 10]) * 0.2*water";
        range = 40;
    };
    class RHS_gaz66_Tires_Rock_Slow_EXT_SoundShader: Base_Tires_Rock_Slow_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Rock_Slow_EXT", 1}};
        frequency = 1;
        volume = "0.8 * 1.5 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5]) * 0.6*rock * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 30;
    };
    class RHS_gaz66_Tires_Grass_Slow_EXT_SoundShader: Base_Tires_Grass_Slow_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Grass_Slow_EXT", 1}};
        frequency = 1;
        volume = "0.8 * 1.5 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5]) * 0.65*grass*(0.9 + 0.3*damper0) * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 50;
    };
    class RHS_gaz66_Tires_Sand_Slow_EXT_SoundShader: Base_Tires_Sand_Slow_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Sand_Slow_EXT", 1}};
        frequency = 1;
        volume = "0.8 * 1.5 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5]) * 0.2*sand * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 30;
    };
    class RHS_gaz66_Tires_Gravel_Slow_EXT_SoundShader: Base_Tires_Gravel_Slow_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Gravel_Slow_EXT", 1}};
        frequency = 1;
        volume = "0.8 * 1.5 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5]) * 0.6*gravel*(0.9 + 0.3*damper0) * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 50;
    };
    class RHS_gaz66_Tires_Mud_Slow_EXT_SoundShader: Base_Tires_Mud_Slow_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Mud_Slow_EXT", 1}};
        frequency = 1;
        volume = "0.8 * 1.5 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5]) * 0.65*mud*(0.9 + 0.3*damper0) * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 50;
    };
    class RHS_gaz66_Tires_Asphalt_Slow_EXT_SoundShader: Base_Tires_Asphalt_Slow_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Asphalt_Slow_EXT", 1}};
        frequency = 1;
        volume = "0.8 * 1.5 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5]) * 0.3*asphalt*(1+0.7*((abs(speed)) factor[5,15]))*(0.9 + 0.3*damper0) * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 40;
    };
    class RHS_gaz66_Tires_Water_Slow_EXT_SoundShader: Base_Tires_Water_Slow_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Water_Slow_EXT", 1}};
        frequency = 1;
        volume = "0.8 * 1.5 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5]) * 0.2*water";
        range = 40;
    };
    class RHS_gaz66_Tires_Turn_Hard_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires_turns\Tires_Turn_Hard_01_EXT", 1}};
        frequency = 0.7;
        volume = "(asphalt max rock) * (abs(latSlip) factor [0.1,0.2]) * 0.8 * 1.9";
        range = 50;
    };
    class RHS_gaz66_Tires_Turn_Soft_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires_turns\Tires_Turn_Soft_01_EXT", 1}};
        frequency = 1;
        volume = "(1-asphalt)*(1-rock)*(1-water)*(1-sand) * (abs(latSlip) factor [0.07,0.2]) * 0.8 * 1.5";
        range = 50;
    };
    class RHS_gaz66_Tires_Brake_Hard_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires_brakes\Tires_Brake_Hard_01_EXT", 1}};
        frequency = 0.7;
        volume = "(asphalt max rock) * (0.5*(abs(longSlip) factor [0.1,0.3])) * 0.8 * 1.9";
        range = 50;
    };
    class RHS_gaz66_Tires_Brake_Soft_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires_brakes\Tires_Brake_Soft_01_EXT", 1}};
        frequency = 1;
        volume = "(1-asphalt)*(1-rock)*(1-water)*(1-sand) * ((abs(longSlip) factor [0.07,0.3])) * 0.8 * 1.5";
        range = 50;
    };
    class RHS_gaz66_Rattling_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\add_layers\Rattling_03_INT", 1}};
        frequency = 1;
        volume = "0.6 * 0.5 * (1 + 2*(damper0 factor [0.3, 0.8])) * (speed factor[5, 15]) * (1 - 0.8*(rock max asphalt)) * (1 - 0.4*(gravel))";
        range = 60;
    };
    class RHS_gaz66_Stress_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\add_layers\Stress_01_INT", 1}};
        frequency = 1.3;
        volume = "0.6 * 0.8 * ((damper0 factor [0.9,1]) * (speed factor [5, 15]))";
        range = 60;
    };
    class RHS_gaz66_Rain_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\add_layers\Rain_01_INT", 1}};
        frequency = 1;
        volume = "0.6 * 1 * rain";
        range = 60;
    };
    class RHS_gaz66_Rattling_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\add_layers\Rattling_03_EXT", 1}};
        frequency = 1;
        volume = "0.8 * 2 * (1 + 2*(damper0 factor [0.3, 0.8])) * (speed factor[5, 15]) * (1 - 0.8*(rock max asphalt)) * (1 - 0.4*(gravel))";
        range = 60;
    };
    class RHS_gaz66_Stress_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\add_layers\Stress_01_EXT", 1}};
        frequency = 1.3;
        volume = "0.8 * 1 * ((damper0 factor [0.9,1]) * (speed factor [5, 15]))";
        range = 60;
    };
    class RHS_gaz66_Rain_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\add_layers\Rain_01_EXT", 1}};
        frequency = 1;
        volume = "0.8 * 1 * rain";
        range = 50;
    };
    class RHS_zil131_Engine_RPM0_EXT_SoundShader: Engine_Base_RPM0_EXT_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\zil131\zil131_Engine_EXT_RPM0", 1}};
        frequency = "0.9 * (1 + 0.7 * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [800,	3200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [800,	3200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800,	3200])) - 0))";
        volume = "engineOn * 0.8 * 1.5 * (rpm factor [0.05 *800, (0.05 *800 + 0.5 *(800-0.05 *800))]) * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [800,	3200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [800,	3200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800,	3200])) factor [(1200 - 800)/(2400 - 800) - (((1200 - 800)/(2400 - 800) - 0) - (1.4 * ((1200 - 800)/(2400 - 800) - 0)))/2, 0])";
        range = "3.5*210";
    };
    class RHS_zil131_Engine_RPM1_EXT_SoundShader: Engine_Base_RPM1_EXT_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\zil131\zil131_Engine_EXT_RPM1", 1}};
        frequency = "0.9 * (1 + 0.7 * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [800,	3200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [800,	3200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800,	3200])) - (1200 - 800)/(2400 - 800)))";
        volume = "engineOn * 0.8 * 1.5 * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [800,	3200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [800,	3200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800,	3200])) factor[0, (1200 - 800)/(2400 - 800) - (((1200 - 800)/(2400 - 800) - 0) - (1.4 * ((1200 - 800)/(2400 - 800) - 0)))/2]) * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [800,	3200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [800,	3200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800,	3200])) factor [(1700 - 800)/(2400 - 800) - (((1700 - 800)/(2400 - 800) - (1200 - 800)/(2400 - 800)) - (1.3 * ((1700 - 800)/(2400 - 800) - (1200 - 800)/(2400 - 800))))/2, (1200 - 800)/(2400 - 800) + (((1700 - 800)/(2400 - 800) - (1200 - 800)/(2400 - 800)) - (1.3 * ((1700 - 800)/(2400 - 800) - (1200 - 800)/(2400 - 800))))/2])";
        range = "3.5*215";
    };
    class RHS_zil131_Engine_RPM2_EXT_SoundShader: Engine_Base_RPM2_EXT_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\zil131\zil131_Engine_EXT_RPM2", 1}};
        frequency = "0.9 * (1 + 0.7 * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [800,	3200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [800,	3200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800,	3200])) - (1700 - 800)/(2400 - 800)))";
        volume = "engineOn * 0.8 * 1.5 * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [800,	3200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [800,	3200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800,	3200])) factor[(1200 - 800)/(2400 - 800) + (((1700 - 800)/(2400 - 800) - (1200 - 800)/(2400 - 800)) - (1.3 * ((1700 - 800)/(2400 - 800) - (1200 - 800)/(2400 - 800))))/2, (1700 - 800)/(2400 - 800) - (((1700 - 800)/(2400 - 800) - (1200 - 800)/(2400 - 800)) - (1.3 * ((1700 - 800)/(2400 - 800) - (1200 - 800)/(2400 - 800))))/2]) * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [800,	3200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [800,	3200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800,	3200])) factor [(2400 - 800)/(2400 - 800) - (((2400 - 800)/(2400 - 800) - (1700 - 800)/(2400 - 800)) - (1.2 * ((2400 - 800)/(2400 - 800) - (1700 - 800)/(2400 - 800))))/2, (1700 - 800)/(2400 - 800) + (((2400 - 800)/(2400 - 800) - (1700 - 800)/(2400 - 800)) - (1.2 * ((2400 - 800)/(2400 - 800) - (1700 - 800)/(2400 - 800))))/2])";
        range = "3.5*220";
    };
    class RHS_zil131_Engine_RPM3_EXT_SoundShader: Engine_Base_RPM3_EXT_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\zil131\zil131_Engine_EXT_RPM3", 1}};
        frequency = "0.9 * (1 + 0.7 * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [800,	3200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [800,	3200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800,	3200])) - (2400 - 800)/(2400 - 800)))";
        volume = "engineOn * 0.8 * 1.5 * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [800,	3200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [800,	3200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800,	3200])) factor[(1700 - 800)/(2400 - 800) + (((2400 - 800)/(2400 - 800) - (1700 - 800)/(2400 - 800)) - (1.2 * ((2400 - 800)/(2400 - 800) - (1700 - 800)/(2400 - 800))))/2, (2400 - 800)/(2400 - 800) - (((2400 - 800)/(2400 - 800) - (1700 - 800)/(2400 - 800)) - (1.2 * ((2400 - 800)/(2400 - 800) - (1700 - 800)/(2400 - 800))))/2])";
        range = "3.5*225";
    };
    class RHS_zil131_Engine_RPM0_INT_SoundShader: Engine_Base_RPM0_INT_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\zil131\zil131_Engine_INT_RPM0", 1}};
        frequency = "0.9 * (1 + 0.7 * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [800,	3200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [800,	3200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800,	3200])) - 0))";
        volume = "engineOn * 0.6 * 1.6 * (rpm factor [0.05 *800, (0.05 *800 + 0.5 *(800-0.05 *800))]) * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [800,	3200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [800,	3200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800,	3200])) factor [(1200 - 800)/(2400 - 800) - (((1200 - 800)/(2400 - 800) - 0) - (1.4 * ((1200 - 800)/(2400 - 800) - 0)))/2, 0])";
        range = "3.5*210";
    };
    class RHS_zil131_Engine_RPM1_INT_SoundShader: Engine_Base_RPM1_INT_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\zil131\zil131_Engine_INT_RPM1", 1}};
        frequency = "0.9 * (1 + 0.7 * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [800,	3200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [800,	3200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800,	3200])) - (1200 - 800)/(2400 - 800)))";
        volume = "engineOn * 0.6 * 1.6 * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [800,	3200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [800,	3200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800,	3200])) factor[0, (1200 - 800)/(2400 - 800) - (((1200 - 800)/(2400 - 800) - 0) - (1.4 * ((1200 - 800)/(2400 - 800) - 0)))/2]) * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [800,	3200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [800,	3200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800,	3200])) factor [(1700 - 800)/(2400 - 800) - (((1700 - 800)/(2400 - 800) - (1200 - 800)/(2400 - 800)) - (1.3 * ((1700 - 800)/(2400 - 800) - (1200 - 800)/(2400 - 800))))/2, (1200 - 800)/(2400 - 800) + (((1700 - 800)/(2400 - 800) - (1200 - 800)/(2400 - 800)) - (1.3 * ((1700 - 800)/(2400 - 800) - (1200 - 800)/(2400 - 800))))/2])";
        range = "3.5*215";
    };
    class RHS_zil131_Engine_RPM2_INT_SoundShader: Engine_Base_RPM2_INT_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\zil131\zil131_Engine_INT_RPM2", 1}};
        frequency = "0.9 * (1 + 0.7 * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [800,	3200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [800,	3200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800,	3200])) - (1700 - 800)/(2400 - 800)))";
        volume = "engineOn * 0.6 * 1.6 * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [800,	3200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [800,	3200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800,	3200])) factor[(1200 - 800)/(2400 - 800) + (((1700 - 800)/(2400 - 800) - (1200 - 800)/(2400 - 800)) - (1.3 * ((1700 - 800)/(2400 - 800) - (1200 - 800)/(2400 - 800))))/2, (1700 - 800)/(2400 - 800) - (((1700 - 800)/(2400 - 800) - (1200 - 800)/(2400 - 800)) - (1.3 * ((1700 - 800)/(2400 - 800) - (1200 - 800)/(2400 - 800))))/2]) * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [800,	3200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [800,	3200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800,	3200])) factor [(2400 - 800)/(2400 - 800) - (((2400 - 800)/(2400 - 800) - (1700 - 800)/(2400 - 800)) - (1.2 * ((2400 - 800)/(2400 - 800) - (1700 - 800)/(2400 - 800))))/2, (1700 - 800)/(2400 - 800) + (((2400 - 800)/(2400 - 800) - (1700 - 800)/(2400 - 800)) - (1.2 * ((2400 - 800)/(2400 - 800) - (1700 - 800)/(2400 - 800))))/2])";
        range = "3.5*220";
    };
    class RHS_zil131_Engine_RPM3_INT_SoundShader: Engine_Base_RPM3_INT_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\zil131\zil131_Engine_INT_RPM3", 1}};
        frequency = "0.9 * (1 + 0.7 * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [800,	3200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [800,	3200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800,	3200])) - (2400 - 800)/(2400 - 800)))";
        volume = "engineOn * 0.6 * 1.6 * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [800,	3200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [800,	3200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800,	3200])) factor[(1700 - 800)/(2400 - 800) + (((2400 - 800)/(2400 - 800) - (1700 - 800)/(2400 - 800)) - (1.2 * ((2400 - 800)/(2400 - 800) - (1700 - 800)/(2400 - 800))))/2, (2400 - 800)/(2400 - 800) - (((2400 - 800)/(2400 - 800) - (1700 - 800)/(2400 - 800)) - (1.2 * ((2400 - 800)/(2400 - 800) - (1700 - 800)/(2400 - 800))))/2])";
        range = "3.5*225";
    };
    class RHS_zil131_Engine_EXT_Burst_SoundShader {
        samples[] = {
            {"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\zil131\zil131_Engine_EXT_Burst01", 1},
            {"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\zil131\zil131_Engine_EXT_Burst02", 1},
            {"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\zil131\zil131_Engine_EXT_Burst03", 1},
            {"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\zil131\zil131_Engine_EXT_Burst04", 1}
        };
        frequency = 0.9;
        range = "1*150";
        volume = "engineOn * 0.8 * 1.5 * (rpm factor[0,10])";
    };
    class RHS_zil131_Engine_INT_Burst_SoundShader {
        samples[] = {
            {"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\zil131\zil131_Engine_INT_Burst01", 1},
            {"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\zil131\zil131_Engine_INT_Burst02", 1},
            {"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\zil131\zil131_Engine_INT_Burst03", 1},
            {"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\zil131\zil131_Engine_INT_Burst04", 1}
        };
        frequency = 0.9;
        range = "1*150";
        volume = "engineOn * 0.6 * 1.5 * (rpm factor[0,10])";
    };
    class RHS_zil131_Tires_Rock_Fast_INT_SoundShader: Base_Tires_Rock_Fast_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Rock_Fast_INT", 1}};
        frequency = 1;
        volume = "0.6 * 0.35 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [4, 10]) * 0.6*rock * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 30;
    };
    class RHS_zil131_Tires_Grass_Fast_INT_SoundShader: Base_Tires_Grass_Fast_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Grass_Fast_INT", 1}};
        frequency = 1;
        volume = "0.6 * 0.35 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [4, 10]) * 0.65*grass*(0.9 + 0.3*damper0) * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 50;
    };
    class RHS_zil131_Tires_Sand_Fast_INT_SoundShader: Base_Tires_Sand_Fast_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Sand_Fast_INT", 1}};
        frequency = 1;
        volume = "0.6 * 0.35 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [4, 10]) * 0.2*sand * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 30;
    };
    class RHS_zil131_Tires_Gravel_Fast_INT_SoundShader: Base_Tires_Gravel_Fast_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Gravel_Fast_INT", 1}};
        frequency = 1;
        volume = "0.6 * 0.35 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [4, 10]) * 0.6*gravel*(0.9 + 0.3*damper0) * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 50;
    };
    class RHS_zil131_Tires_Mud_Fast_INT_SoundShader: Base_Tires_Mud_Fast_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Mud_Fast_INT", 1}};
        frequency = 1;
        volume = "0.6 * 0.35 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [4, 10]) * 0.65*mud*(0.9 + 0.3*damper0) * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 50;
    };
    class RHS_zil131_Tires_Asphalt_Fast_INT_SoundShader: Base_Tires_Asphalt_Fast_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Asphalt_Fast_INT", 1}};
        frequency = 1;
        volume = "0.6 * 0.35 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [4, 10]) * 0.3*asphalt*(1+0.7*((abs(speed)) factor[5,15]))*(0.9 + 0.3*damper0) * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 40;
    };
    class RHS_zil131_Tires_Water_Fast_INT_SoundShader: Base_Tires_Water_Fast_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Water_Fast_INT", 1}};
        frequency = 1;
        volume = "0.6 * 0.35 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [4, 10]) * 0.2*water";
        range = 40;
    };
    class RHS_zil131_Tires_Rock_Slow_INT_SoundShader: Base_Tires_Rock_Slow_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Rock_Slow_INT", 1}};
        frequency = 1;
        volume = "0.6 * 0.35 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5]) * 0.6*rock * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 30;
    };
    class RHS_zil131_Tires_Grass_Slow_INT_SoundShader: Base_Tires_Grass_Slow_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Grass_Slow_INT", 1}};
        frequency = 1;
        volume = "0.6 * 0.35 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5]) * 0.65*grass*(0.9 + 0.3*damper0) * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 50;
    };
    class RHS_zil131_Tires_Sand_Slow_INT_SoundShader: Base_Tires_Sand_Slow_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Sand_Slow_INT", 1}};
        frequency = 1;
        volume = "0.6 * 0.35 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5]) * 0.2*sand * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 30;
    };
    class RHS_zil131_Tires_Gravel_Slow_INT_SoundShader: Base_Tires_Gravel_Slow_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Gravel_Slow_INT", 1}};
        frequency = 1;
        volume = "0.6 * 0.35 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5]) * 0.6*gravel*(0.9 + 0.3*damper0) * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 50;
    };
    class RHS_zil131_Tires_Mud_Slow_INT_SoundShader: Base_Tires_Mud_Slow_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Mud_Slow_INT", 1}};
        frequency = 1;
        volume = "0.6 * 0.35 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5]) * 0.65*mud*(0.9 + 0.3*damper0) * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 50;
    };
    class RHS_zil131_Tires_Asphalt_Slow_INT_SoundShader: Base_Tires_Asphalt_Slow_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Asphalt_Slow_INT", 1}};
        frequency = 1;
        volume = "0.6 * 0.35 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5]) * 0.3*asphalt*(1+0.7*((abs(speed)) factor[5,15]))*(0.9 + 0.3*damper0) * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 40;
    };
    class RHS_zil131_Tires_Water_Slow_INT_SoundShader: Base_Tires_Water_Slow_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Water_Slow_INT", 1}};
        frequency = 1;
        volume = "0.6 * 0.35 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5]) * 0.2*water";
        range = 40;
    };
    class RHS_zil131_Tires_Turn_Hard_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires_turns\Tires_Turn_Hard_01_INT", 1}};
        frequency = 0.7;
        volume = "(asphalt max rock) * (abs(latSlip) factor [0.1,0.2]) * 0.6 * 0.5";
        range = 50;
    };
    class RHS_zil131_Tires_Turn_Soft_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires_turns\Tires_Turn_Soft_01_INT", 1}};
        frequency = 1;
        volume = "(1-asphalt)*(1-rock)*(1-water)*(1-sand) * (abs(latSlip) factor [0.07,0.2]) * 0.6 * 0.1";
        range = 50;
    };
    class RHS_zil131_Tires_Brake_Hard_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires_brakes\Tires_Brake_Hard_01_INT", 1}};
        frequency = 0.7;
        volume = "(asphalt max rock) * (0.5*(abs(longSlip) factor [0.1,0.3])) * 0.6 * 0.5";
        range = 50;
    };
    class RHS_zil131_Tires_Brake_Soft_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires_brakes\Tires_Brake_Soft_01_INT", 1}};
        frequency = 1;
        volume = "(1-asphalt)*(1-rock)*(1-water)*(1-sand) * ((abs(longSlip) factor [0.07,0.3])) * 0.6 * 0.1";
        range = 50;
    };
    class RHS_zil131_Tires_Rock_Fast_EXT_SoundShader: Base_Tires_Rock_Fast_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Rock_Fast_EXT", 1}};
        frequency = 1;
        volume = "0.8 * 1.5 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [4, 10]) * 0.6*rock * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 30;
    };
    class RHS_zil131_Tires_Grass_Fast_EXT_SoundShader: Base_Tires_Grass_Fast_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Grass_Fast_EXT", 1}};
        frequency = 1;
        volume = "0.8 * 1.5 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [4, 10]) * 0.65*grass*(0.9 + 0.3*damper0) * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 50;
    };
    class RHS_zil131_Tires_Sand_Fast_EXT_SoundShader: Base_Tires_Sand_Fast_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Sand_Fast_EXT", 1}};
        frequency = 1;
        volume = "0.8 * 1.5 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [4, 10]) * 0.2*sand * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 30;
    };
    class RHS_zil131_Tires_Gravel_Fast_EXT_SoundShader: Base_Tires_Gravel_Fast_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Gravel_Fast_EXT", 1}};
        frequency = 1;
        volume = "0.8 * 1.5 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [4, 10]) * 0.6*gravel*(0.9 + 0.3*damper0) * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 50;
    };
    class RHS_zil131_Tires_Mud_Fast_EXT_SoundShader: Base_Tires_Mud_Fast_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Mud_Fast_EXT", 1}};
        frequency = 1;
        volume = "0.8 * 1.5 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [4, 10]) * 0.65*mud*(0.9 + 0.3*damper0) * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 50;
    };
    class RHS_zil131_Tires_Asphalt_Fast_EXT_SoundShader: Base_Tires_Asphalt_Fast_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Asphalt_Fast_EXT", 1}};
        frequency = 1;
        volume = "0.8 * 1.5 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [4, 10]) * 0.3*asphalt*(1+0.7*((abs(speed)) factor[5,15]))*(0.9 + 0.3*damper0) * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 40;
    };
    class RHS_zil131_Tires_Water_Fast_EXT_SoundShader: Base_Tires_Water_Fast_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Water_Fast_EXT", 1}};
        frequency = 1;
        volume = "0.8 * 1.5 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [4, 10]) * 0.2*water";
        range = 40;
    };
    class RHS_zil131_Tires_Rock_Slow_EXT_SoundShader: Base_Tires_Rock_Slow_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Rock_Slow_EXT", 1}};
        frequency = 1;
        volume = "0.8 * 1.5 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5]) * 0.6*rock * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 30;
    };
    class RHS_zil131_Tires_Grass_Slow_EXT_SoundShader: Base_Tires_Grass_Slow_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Grass_Slow_EXT", 1}};
        frequency = 1;
        volume = "0.8 * 1.5 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5]) * 0.65*grass*(0.9 + 0.3*damper0) * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 50;
    };
    class RHS_zil131_Tires_Sand_Slow_EXT_SoundShader: Base_Tires_Sand_Slow_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Sand_Slow_EXT", 1}};
        frequency = 1;
        volume = "0.8 * 1.5 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5]) * 0.2*sand * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 30;
    };
    class RHS_zil131_Tires_Gravel_Slow_EXT_SoundShader: Base_Tires_Gravel_Slow_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Gravel_Slow_EXT", 1}};
        frequency = 1;
        volume = "0.8 * 1.5 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5]) * 0.6*gravel*(0.9 + 0.3*damper0) * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 50;
    };
    class RHS_zil131_Tires_Mud_Slow_EXT_SoundShader: Base_Tires_Mud_Slow_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Mud_Slow_EXT", 1}};
        frequency = 1;
        volume = "0.8 * 1.5 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5]) * 0.65*mud*(0.9 + 0.3*damper0) * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 50;
    };
    class RHS_zil131_Tires_Asphalt_Slow_EXT_SoundShader: Base_Tires_Asphalt_Slow_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Asphalt_Slow_EXT", 1}};
        frequency = 1;
        volume = "0.8 * 1.5 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5]) * 0.3*asphalt*(1+0.7*((abs(speed)) factor[5,15]))*(0.9 + 0.3*damper0) * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 40;
    };
    class RHS_zil131_Tires_Water_Slow_EXT_SoundShader: Base_Tires_Water_Slow_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Water_Slow_EXT", 1}};
        frequency = 1;
        volume = "0.8 * 1.5 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5]) * 0.2*water";
        range = 40;
    };
    class RHS_zil131_Tires_Turn_Hard_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires_turns\Tires_Turn_Hard_01_EXT", 1}};
        frequency = 0.7;
        volume = "(asphalt max rock) * (abs(latSlip) factor [0.1,0.2]) * 0.8 * 1.9";
        range = 50;
    };
    class RHS_zil131_Tires_Turn_Soft_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires_turns\Tires_Turn_Soft_01_EXT", 1}};
        frequency = 1;
        volume = "(1-asphalt)*(1-rock)*(1-water)*(1-sand) * (abs(latSlip) factor [0.07,0.2]) * 0.8 * 1.5";
        range = 50;
    };
    class RHS_zil131_Tires_Brake_Hard_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires_brakes\Tires_Brake_Hard_01_EXT", 1}};
        frequency = 0.7;
        volume = "(asphalt max rock) * (0.5*(abs(longSlip) factor [0.1,0.3])) * 0.8 * 1.9";
        range = 50;
    };
    class RHS_zil131_Tires_Brake_Soft_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires_brakes\Tires_Brake_Soft_01_EXT", 1}};
        frequency = 1;
        volume = "(1-asphalt)*(1-rock)*(1-water)*(1-sand) * ((abs(longSlip) factor [0.07,0.3])) * 0.8 * 1.5";
        range = 50;
    };
    class RHS_zil131_Rattling_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\add_layers\Rattling_03_INT", 1}};
        frequency = 1;
        volume = "0.6 * 0.5 * (1 + 2*(damper0 factor [0.3, 0.8])) * (speed factor[5, 15]) * (1 - 0.8*(rock max asphalt)) * (1 - 0.4*(gravel))";
        range = 60;
    };
    class RHS_zil131_Stress_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\add_layers\Stress_01_INT", 1}};
        frequency = 1.3;
        volume = "0.6 * 0.8 * ((damper0 factor [0.9,1]) * (speed factor [5, 15]))";
        range = 60;
    };
    class RHS_zil131_Rain_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\add_layers\Rain_01_INT", 1}};
        frequency = 1;
        volume = "0.6 * 1 * rain";
        range = 60;
    };
    class RHS_zil131_Rattling_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\add_layers\Rattling_03_EXT", 1}};
        frequency = 1;
        volume = "0.8 * 2 * (1 + 2*(damper0 factor [0.3, 0.8])) * (speed factor[5, 15]) * (1 - 0.8*(rock max asphalt)) * (1 - 0.4*(gravel))";
        range = 60;
    };
    class RHS_zil131_Stress_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\add_layers\Stress_01_EXT", 1}};
        frequency = 1.3;
        volume = "0.8 * 1 * ((damper0 factor [0.9,1]) * (speed factor [5, 15]))";
        range = 60;
    };
    class RHS_zil131_Rain_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\add_layers\Rain_01_EXT", 1}};
        frequency = 1;
        volume = "0.8 * 1 * rain";
        range = 50;
    };
    class RHS_ural4320_Engine_RPM0_EXT_SoundShader: Engine_Base_RPM0_EXT_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\ural4320\ural4320_Engine_EXT_RPM0", 1}};
        frequency = "0.9 * (1 + 0.7 * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [650,	2100])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [650,	2100])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [650,	2100])) - 0))";
        volume = "engineOn * 0.8 * 1.5 * (rpm factor [0.05 *600, (0.05 *600 + 1.0 *(600-0.05 *600))]) * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [650,	2100])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [650,	2100])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [650,	2100])) factor [(800 - 600)/(1400 - 600) - (((800 - 600)/(1400 - 600) - 0) - (1.4 * ((800 - 600)/(1400 - 600) - 0)))/2, 0])";
        range = "3.5*210";
    };
    class RHS_ural4320_Engine_RPM1_EXT_SoundShader: Engine_Base_RPM1_EXT_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\ural4320\ural4320_Engine_EXT_RPM1", 1}};
        frequency = "0.9 * (1 + 0.7 * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [650,	2100])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [650,	2100])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [650,	2100])) - (800 - 600)/(1400 - 600)))";
        volume = "engineOn * 0.8 * 1.5 * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [650,	2100])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [650,	2100])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [650,	2100])) factor[0, (800 - 600)/(1400 - 600) - (((800 - 600)/(1400 - 600) - 0) - (1.4 * ((800 - 600)/(1400 - 600) - 0)))/2]) * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [650,	2100])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [650,	2100])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [650,	2100])) factor [(1400 - 600)/(1400 - 600) - (((1400 - 600)/(1400 - 600) - (800 - 600)/(1400 - 600)) - (1.3 * ((1400 - 600)/(1400 - 600) - (800 - 600)/(1400 - 600))))/2, (800 - 600)/(1400 - 600) + (((1400 - 600)/(1400 - 600) - (800 - 600)/(1400 - 600)) - (1.3 * ((1400 - 600)/(1400 - 600) - (800 - 600)/(1400 - 600))))/2])";
        range = "3.5*215";
    };
    class RHS_ural4320_Engine_RPM2_EXT_SoundShader: Engine_Base_RPM2_EXT_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\ural4320\ural4320_Engine_EXT_RPM2", 1}};
        frequency = "0.9 * (1 + 0.7 * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [650,	2100])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [650,	2100])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [650,	2100])) - (1400 - 600)/(1400 - 600)))";
        volume = "engineOn * 0.8 * 1.5 * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [650,	2100])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [650,	2100])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [650,	2100])) factor[(800 - 600)/(1400 - 600) + (((1400 - 600)/(1400 - 600) - (800 - 600)/(1400 - 600)) - (1.3 * ((1400 - 600)/(1400 - 600) - (800 - 600)/(1400 - 600))))/2, (1400 - 600)/(1400 - 600) - (((1400 - 600)/(1400 - 600) - (800 - 600)/(1400 - 600)) - (1.3 * ((1400 - 600)/(1400 - 600) - (800 - 600)/(1400 - 600))))/2])";
        range = "3.5*220";
    };
    class RHS_ural4320_Engine_RPM0_INT_SoundShader: Engine_Base_RPM0_INT_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\ural4320\ural4320_Engine_INT_RPM0", 1}};
        frequency = "0.9 * (1 + 0.7 * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [650,	2100])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [650,	2100])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [650,	2100])) - 0))";
        volume = "engineOn * 0.6 * 1.6 * (rpm factor [0.05 *600, (0.05 *600 + 1.0 *(600-0.05 *600))]) * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [650,	2100])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [650,	2100])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [650,	2100])) factor [(800 - 600)/(1400 - 600) - (((800 - 600)/(1400 - 600) - 0) - (1.4 * ((800 - 600)/(1400 - 600) - 0)))/2, 0])";
        range = "3.5*210";
    };
    class RHS_ural4320_Engine_RPM1_INT_SoundShader: Engine_Base_RPM1_INT_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\ural4320\ural4320_Engine_INT_RPM1", 1}};
        frequency = "0.9 * (1 + 0.7 * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [650,	2100])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [650,	2100])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [650,	2100])) - (800 - 600)/(1400 - 600)))";
        volume = "engineOn * 0.6 * 1.6 * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [650,	2100])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [650,	2100])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [650,	2100])) factor[0, (800 - 600)/(1400 - 600) - (((800 - 600)/(1400 - 600) - 0) - (1.4 * ((800 - 600)/(1400 - 600) - 0)))/2]) * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [650,	2100])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [650,	2100])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [650,	2100])) factor [(1400 - 600)/(1400 - 600) - (((1400 - 600)/(1400 - 600) - (800 - 600)/(1400 - 600)) - (1.3 * ((1400 - 600)/(1400 - 600) - (800 - 600)/(1400 - 600))))/2, (800 - 600)/(1400 - 600) + (((1400 - 600)/(1400 - 600) - (800 - 600)/(1400 - 600)) - (1.3 * ((1400 - 600)/(1400 - 600) - (800 - 600)/(1400 - 600))))/2])";
        range = "3.5*215";
    };
    class RHS_ural4320_Engine_RPM2_INT_SoundShader: Engine_Base_RPM2_INT_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\ural4320\ural4320_Engine_INT_RPM2", 1}};
        frequency = "0.9 * (1 + 0.7 * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [650,	2100])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [650,	2100])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [650,	2100])) - (1400 - 600)/(1400 - 600)))";
        volume = "engineOn * 0.6 * 1.6 * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [650,	2100])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 20]) + 0.9  * (rpm factor [650,	2100])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [650,	2100])) factor[(800 - 600)/(1400 - 600) + (((1400 - 600)/(1400 - 600) - (800 - 600)/(1400 - 600)) - (1.3 * ((1400 - 600)/(1400 - 600) - (800 - 600)/(1400 - 600))))/2, (1400 - 600)/(1400 - 600) - (((1400 - 600)/(1400 - 600) - (800 - 600)/(1400 - 600)) - (1.3 * ((1400 - 600)/(1400 - 600) - (800 - 600)/(1400 - 600))))/2])";
        range = "3.5*220";
    };
    class RHS_ural4320_Engine_EXT_Burst_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\ural4320\ural4320_Engine_EXT_Burst01", 1}, {"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\ural4320\ural4320_Engine_EXT_Burst02", 1}, {"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\ural4320\ural4320_Engine_EXT_Burst03", 1}};
        frequency = 0.9;
        range = "1*150";
        volume = "engineOn * 0.8 * 1.5 * (rpm factor[0,10])";
    };
    class RHS_ural4320_Engine_INT_Burst_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\ural4320\ural4320_Engine_INT_Burst01", 1}, {"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\ural4320\ural4320_Engine_INT_Burst02", 1}, {"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\ural4320\ural4320_Engine_INT_Burst03", 1}};
        frequency = 0.9;
        range = "1*150";
        volume = "engineOn * 0.6 * 1.5 * (rpm factor[0,10])";
    };
    class RHS_ural4320_Tires_Rock_Fast_INT_SoundShader: Base_Tires_Rock_Fast_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Rock_Fast_INT", 1}};
        frequency = 1;
        volume = "0.6 * 0.35 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [4, 10]) * 0.6*rock * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 30;
    };
    class RHS_ural4320_Tires_Grass_Fast_INT_SoundShader: Base_Tires_Grass_Fast_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Grass_Fast_INT", 1}};
        frequency = 1;
        volume = "0.6 * 0.35 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [4, 10]) * 0.65*grass*(0.9 + 0.3*damper0) * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 50;
    };
    class RHS_ural4320_Tires_Sand_Fast_INT_SoundShader: Base_Tires_Sand_Fast_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Sand_Fast_INT", 1}};
        frequency = 1;
        volume = "0.6 * 0.35 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [4, 10]) * 0.2*sand * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 30;
    };
    class RHS_ural4320_Tires_Gravel_Fast_INT_SoundShader: Base_Tires_Gravel_Fast_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Gravel_Fast_INT", 1}};
        frequency = 1;
        volume = "0.6 * 0.35 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [4, 10]) * 0.6*gravel*(0.9 + 0.3*damper0) * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 50;
    };
    class RHS_ural4320_Tires_Mud_Fast_INT_SoundShader: Base_Tires_Mud_Fast_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Mud_Fast_INT", 1}};
        frequency = 1;
        volume = "0.6 * 0.35 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [4, 10]) * 0.65*mud*(0.9 + 0.3*damper0) * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 50;
    };
    class RHS_ural4320_Tires_Asphalt_Fast_INT_SoundShader: Base_Tires_Asphalt_Fast_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Asphalt_Fast_INT", 1}};
        frequency = 1;
        volume = "0.6 * 0.35 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [4, 10]) * 0.3*asphalt*(1+0.7*((abs(speed)) factor[5,15]))*(0.9 + 0.3*damper0) * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 40;
    };
    class RHS_ural4320_Tires_Water_Fast_INT_SoundShader: Base_Tires_Water_Fast_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Water_Fast_INT", 1}};
        frequency = 1;
        volume = "0.6 * 0.35 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [4, 10]) * 0.2*water";
        range = 40;
    };
    class RHS_ural4320_Tires_Rock_Slow_INT_SoundShader: Base_Tires_Rock_Slow_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Rock_Slow_INT", 1}};
        frequency = 1;
        volume = "0.6 * 0.35 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5]) * 0.6*rock * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 30;
    };
    class RHS_ural4320_Tires_Grass_Slow_INT_SoundShader: Base_Tires_Grass_Slow_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Grass_Slow_INT", 1}};
        frequency = 1;
        volume = "0.6 * 0.35 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5]) * 0.65*grass*(0.9 + 0.3*damper0) * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 50;
    };
    class RHS_ural4320_Tires_Sand_Slow_INT_SoundShader: Base_Tires_Sand_Slow_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Sand_Slow_INT", 1}};
        frequency = 1;
        volume = "0.6 * 0.35 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5]) * 0.2*sand * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 30;
    };
    class RHS_ural4320_Tires_Gravel_Slow_INT_SoundShader: Base_Tires_Gravel_Slow_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Gravel_Slow_INT", 1}};
        frequency = 1;
        volume = "0.6 * 0.35 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5]) * 0.6*gravel*(0.9 + 0.3*damper0) * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 50;
    };
    class RHS_ural4320_Tires_Mud_Slow_INT_SoundShader: Base_Tires_Mud_Slow_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Mud_Slow_INT", 1}};
        frequency = 1;
        volume = "0.6 * 0.35 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5]) * 0.65*mud*(0.9 + 0.3*damper0) * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 50;
    };
    class RHS_ural4320_Tires_Asphalt_Slow_INT_SoundShader: Base_Tires_Asphalt_Slow_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Asphalt_Slow_INT", 1}};
        frequency = 1;
        volume = "0.6 * 0.35 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5]) * 0.3*asphalt*(1+0.7*((abs(speed)) factor[5,15]))*(0.9 + 0.3*damper0) * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 40;
    };
    class RHS_ural4320_Tires_Water_Slow_INT_SoundShader: Base_Tires_Water_Slow_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Water_Slow_INT", 1}};
        frequency = 1;
        volume = "0.6 * 0.35 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5]) * 0.2*water";
        range = 40;
    };
    class RHS_ural4320_Tires_Turn_Hard_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires_turns\Tires_Turn_Hard_01_INT", 1}};
        frequency = 0.7;
        volume = "(asphalt max rock) * (abs(latSlip) factor [0.1,0.2]) * 0.6 * 0.5";
        range = 50;
    };
    class RHS_ural4320_Tires_Turn_Soft_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires_turns\Tires_Turn_Soft_01_INT", 1}};
        frequency = 1;
        volume = "(1-asphalt)*(1-rock)*(1-water)*(1-sand) * (abs(latSlip) factor [0.07,0.2]) * 0.6 * 0.1";
        range = 50;
    };
    class RHS_ural4320_Tires_Brake_Hard_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires_brakes\Tires_Brake_Hard_01_INT", 1}};
        frequency = 0.7;
        volume = "(asphalt max rock) * (0.5*(abs(longSlip) factor [0.1,0.3])) * 0.6 * 0.5";
        range = 50;
    };
    class RHS_ural4320_Tires_Brake_Soft_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires_brakes\Tires_Brake_Soft_01_INT", 1}};
        frequency = 1;
        volume = "(1-asphalt)*(1-rock)*(1-water)*(1-sand) * ((abs(longSlip) factor [0.07,0.3])) * 0.6 * 0.1";
        range = 50;
    };
    class RHS_ural4320_Tires_Rock_Fast_EXT_SoundShader: Base_Tires_Rock_Fast_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Rock_Fast_EXT", 1}};
        frequency = 1;
        volume = "0.8 * 1.5 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [4, 10]) * 0.6*rock * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 30;
    };
    class RHS_ural4320_Tires_Grass_Fast_EXT_SoundShader: Base_Tires_Grass_Fast_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Grass_Fast_EXT", 1}};
        frequency = 1;
        volume = "0.8 * 1.5 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [4, 10]) * 0.65*grass*(0.9 + 0.3*damper0) * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 50;
    };
    class RHS_ural4320_Tires_Sand_Fast_EXT_SoundShader: Base_Tires_Sand_Fast_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Sand_Fast_EXT", 1}};
        frequency = 1;
        volume = "0.8 * 1.5 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [4, 10]) * 0.2*sand * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 30;
    };
    class RHS_ural4320_Tires_Gravel_Fast_EXT_SoundShader: Base_Tires_Gravel_Fast_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Gravel_Fast_EXT", 1}};
        frequency = 1;
        volume = "0.8 * 1.5 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [4, 10]) * 0.6*gravel*(0.9 + 0.3*damper0) * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 50;
    };
    class RHS_ural4320_Tires_Mud_Fast_EXT_SoundShader: Base_Tires_Mud_Fast_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Mud_Fast_EXT", 1}};
        frequency = 1;
        volume = "0.8 * 1.5 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [4, 10]) * 0.65*mud*(0.9 + 0.3*damper0) * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 50;
    };
    class RHS_ural4320_Tires_Asphalt_Fast_EXT_SoundShader: Base_Tires_Asphalt_Fast_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Asphalt_Fast_EXT", 1}};
        frequency = 1;
        volume = "0.8 * 1.5 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [4, 10]) * 0.3*asphalt*(1+0.7*((abs(speed)) factor[5,15]))*(0.9 + 0.3*damper0) * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 40;
    };
    class RHS_ural4320_Tires_Water_Fast_EXT_SoundShader: Base_Tires_Water_Fast_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Water_Fast_EXT", 1}};
        frequency = 1;
        volume = "0.8 * 1.5 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [4, 10]) * 0.2*water";
        range = 40;
    };
    class RHS_ural4320_Tires_Rock_Slow_EXT_SoundShader: Base_Tires_Rock_Slow_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Rock_Slow_EXT", 1}};
        frequency = 1;
        volume = "0.8 * 1.5 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5]) * 0.6*rock * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 30;
    };
    class RHS_ural4320_Tires_Grass_Slow_EXT_SoundShader: Base_Tires_Grass_Slow_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Grass_Slow_EXT", 1}};
        frequency = 1;
        volume = "0.8 * 1.5 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5]) * 0.65*grass*(0.9 + 0.3*damper0) * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 50;
    };
    class RHS_ural4320_Tires_Sand_Slow_EXT_SoundShader: Base_Tires_Sand_Slow_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Sand_Slow_EXT", 1}};
        frequency = 1;
        volume = "0.8 * 1.5 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5]) * 0.2*sand * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 30;
    };
    class RHS_ural4320_Tires_Gravel_Slow_EXT_SoundShader: Base_Tires_Gravel_Slow_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Gravel_Slow_EXT", 1}};
        frequency = 1;
        volume = "0.8 * 1.5 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5]) * 0.6*gravel*(0.9 + 0.3*damper0) * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 50;
    };
    class RHS_ural4320_Tires_Mud_Slow_EXT_SoundShader: Base_Tires_Mud_Slow_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Mud_Slow_EXT", 1}};
        frequency = 1;
        volume = "0.8 * 1.5 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5]) * 0.65*mud*(0.9 + 0.3*damper0) * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 50;
    };
    class RHS_ural4320_Tires_Asphalt_Slow_EXT_SoundShader: Base_Tires_Asphalt_Slow_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Asphalt_Slow_EXT", 1}};
        frequency = 1;
        volume = "0.8 * 1.5 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5]) * 0.3*asphalt*(1+0.7*((abs(speed)) factor[5,15]))*(0.9 + 0.3*damper0) * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 40;
    };
    class RHS_ural4320_Tires_Water_Slow_EXT_SoundShader: Base_Tires_Water_Slow_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Water_Slow_EXT", 1}};
        frequency = 1;
        volume = "0.8 * 1.5 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5]) * 0.2*water";
        range = 40;
    };
    class RHS_ural4320_Tires_Turn_Hard_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires_turns\Tires_Turn_Hard_01_EXT", 1}};
        frequency = 0.7;
        volume = "(asphalt max rock) * (abs(latSlip) factor [0.1,0.2]) * 0.8 * 1.9";
        range = 50;
    };
    class RHS_ural4320_Tires_Turn_Soft_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires_turns\Tires_Turn_Soft_01_EXT", 1}};
        frequency = 1;
        volume = "(1-asphalt)*(1-rock)*(1-water)*(1-sand) * (abs(latSlip) factor [0.07,0.2]) * 0.8 * 1.5";
        range = 50;
    };
    class RHS_ural4320_Tires_Brake_Hard_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires_brakes\Tires_Brake_Hard_01_EXT", 1}};
        frequency = 0.7;
        volume = "(asphalt max rock) * (0.5*(abs(longSlip) factor [0.1,0.3])) * 0.8 * 1.9";
        range = 50;
    };
    class RHS_ural4320_Tires_Brake_Soft_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires_brakes\Tires_Brake_Soft_01_EXT", 1}};
        frequency = 1;
        volume = "(1-asphalt)*(1-rock)*(1-water)*(1-sand) * ((abs(longSlip) factor [0.07,0.3])) * 0.8 * 1.5";
        range = 50;
    };
    class RHS_ural4320_Rattling_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\add_layers\Rattling_03_INT", 1}};
        frequency = 1;
        volume = "0.6 * 0.5 * (1 + 2*(damper0 factor [0.3, 0.8])) * (speed factor[5, 15]) * (1 - 0.8*(rock max asphalt)) * (1 - 0.4*(gravel))";
        range = 60;
    };
    class RHS_ural4320_Stress_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\add_layers\Stress_01_INT", 1}};
        frequency = 1.3;
        volume = "0.6 * 0.8 * ((damper0 factor [0.9,1]) * (speed factor [5, 15]))";
        range = 60;
    };
    class RHS_ural4320_Rain_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\add_layers\Rain_01_INT", 1}};
        frequency = 1;
        volume = "0.6 * 1 * rain";
        range = 60;
    };
    class RHS_ural4320_Rattling_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\add_layers\Rattling_03_EXT", 1}};
        frequency = 1;
        volume = "0.8 * 2 * (1 + 2*(damper0 factor [0.3, 0.8])) * (speed factor[5, 15]) * (1 - 0.8*(rock max asphalt)) * (1 - 0.4*(gravel))";
        range = 60;
    };
    class RHS_ural4320_Stress_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\add_layers\Stress_01_EXT", 1}};
        frequency = 1.3;
        volume = "0.8 * 1 * ((damper0 factor [0.9,1]) * (speed factor [5, 15]))";
        range = 60;
    };
    class RHS_ural4320_Rain_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\add_layers\Rain_01_EXT", 1}};
        frequency = 1;
        volume = "0.8 * 1 * rain";
        range = 50;
    };
    class RHS_kamaz_Engine_RPM0_EXT_SoundShader: Engine_Base_RPM0_EXT_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\kamaz\kamaz_Engine_EXT_RPM0", 1}};
        frequency = "0.9 * (1 + 0.7 * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 22]) + 0.9  * (rpm factor [800,	2200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 22]) + 0.9  * (rpm factor [800,	2200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800,	2200])) - 0))";
        volume = "engineOn * 1.2 * 1.5 * (rpm factor [0.05 *600, (0.05 *600 + 0.5 *(600-0.05 *600))]) * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 22]) + 0.9  * (rpm factor [800,	2200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 22]) + 0.9  * (rpm factor [800,	2200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800,	2200])) factor [(1200 - 600)/(1600 - 600) - (((1200 - 600)/(1600 - 600) - 0) - (1.4 * ((1200 - 600)/(1600 - 600) - 0)))/2, 0])";
        range = "3.5*210";
    };
    class RHS_kamaz_Engine_RPM1_EXT_SoundShader: Engine_Base_RPM1_EXT_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\kamaz\kamaz_Engine_EXT_RPM1", 1}};
        frequency = "0.9 * (1 + 0.7 * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 22]) + 0.9  * (rpm factor [800,	2200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 22]) + 0.9  * (rpm factor [800,	2200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800,	2200])) - (1200 - 600)/(1600 - 600)))";
        volume = "engineOn * 1.2 * 1.5 * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 22]) + 0.9  * (rpm factor [800,	2200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 22]) + 0.9  * (rpm factor [800,	2200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800,	2200])) factor[0, (1200 - 600)/(1600 - 600) - (((1200 - 600)/(1600 - 600) - 0) - (1.4 * ((1200 - 600)/(1600 - 600) - 0)))/2]) * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 22]) + 0.9  * (rpm factor [800,	2200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 22]) + 0.9  * (rpm factor [800,	2200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800,	2200])) factor [(1600 - 600)/(1600 - 600) - (((1600 - 600)/(1600 - 600) - (1200 - 600)/(1600 - 600)) - (1.3 * ((1600 - 600)/(1600 - 600) - (1200 - 600)/(1600 - 600))))/2, (1200 - 600)/(1600 - 600) + (((1600 - 600)/(1600 - 600) - (1200 - 600)/(1600 - 600)) - (1.3 * ((1600 - 600)/(1600 - 600) - (1200 - 600)/(1600 - 600))))/2])";
        range = "3.5*215";
    };
    class RHS_kamaz_Engine_RPM2_EXT_SoundShader: Engine_Base_RPM2_EXT_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\kamaz\kamaz_Engine_EXT_RPM2", 1}};
        frequency = "0.9 * (1 + 0.7 * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 22]) + 0.9  * (rpm factor [800,	2200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 22]) + 0.9  * (rpm factor [800,	2200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800,	2200])) - (1600 - 600)/(1600 - 600)))";
        volume = "engineOn * 1.2 * 1.5 * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 22]) + 0.9  * (rpm factor [800,	2200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 22]) + 0.9  * (rpm factor [800,	2200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800,	2200])) factor[(1200 - 600)/(1600 - 600) + (((1600 - 600)/(1600 - 600) - (1200 - 600)/(1600 - 600)) - (1.3 * ((1600 - 600)/(1600 - 600) - (1200 - 600)/(1600 - 600))))/2, (1600 - 600)/(1600 - 600) - (((1600 - 600)/(1600 - 600) - (1200 - 600)/(1600 - 600)) - (1.3 * ((1600 - 600)/(1600 - 600) - (1200 - 600)/(1600 - 600))))/2])";
        range = "3.5*220";
    };
    class RHS_kamaz_Engine_RPM0_INT_SoundShader: Engine_Base_RPM0_INT_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\kamaz\kamaz_Engine_INT_RPM0", 1}};
        frequency = "0.9 * (1 + 0.7 * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 22]) + 0.9  * (rpm factor [800,	2200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 22]) + 0.9  * (rpm factor [800,	2200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800,	2200])) - 0))";
        volume = "engineOn * 1.6 * 1.6 * (rpm factor [0.05 *600, (0.05 *600 + 0.5 *(600-0.05 *600))]) * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 22]) + 0.9  * (rpm factor [800,	2200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 22]) + 0.9  * (rpm factor [800,	2200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800,	2200])) factor [(1200 - 600)/(1600 - 600) - (((1200 - 600)/(1600 - 600) - 0) - (1.4 * ((1200 - 600)/(1600 - 600) - 0)))/2, 0])";
        range = "3.5*210";
    };
    class RHS_kamaz_Engine_RPM1_INT_SoundShader: Engine_Base_RPM1_INT_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\kamaz\kamaz_Engine_INT_RPM1", 1}};
        frequency = "0.9 * (1 + 0.7 * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 22]) + 0.9  * (rpm factor [800,	2200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 22]) + 0.9  * (rpm factor [800,	2200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800,	2200])) - (1200 - 600)/(1600 - 600)))";
        volume = "engineOn * 1.6 * 1.6 * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 22]) + 0.9  * (rpm factor [800,	2200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 22]) + 0.9  * (rpm factor [800,	2200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800,	2200])) factor[0, (1200 - 600)/(1600 - 600) - (((1200 - 600)/(1600 - 600) - 0) - (1.4 * ((1200 - 600)/(1600 - 600) - 0)))/2]) * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 22]) + 0.9  * (rpm factor [800,	2200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 22]) + 0.9  * (rpm factor [800,	2200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800,	2200])) factor [(1600 - 600)/(1600 - 600) - (((1600 - 600)/(1600 - 600) - (1200 - 600)/(1600 - 600)) - (1.3 * ((1600 - 600)/(1600 - 600) - (1200 - 600)/(1600 - 600))))/2, (1200 - 600)/(1600 - 600) + (((1600 - 600)/(1600 - 600) - (1200 - 600)/(1600 - 600)) - (1.3 * ((1600 - 600)/(1600 - 600) - (1200 - 600)/(1600 - 600))))/2])";
        range = "3.5*215";
    };
    class RHS_kamaz_Engine_RPM2_INT_SoundShader: Engine_Base_RPM2_INT_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\kamaz\kamaz_Engine_INT_RPM2", 1}};
        frequency = "0.9 * (1 + 0.7 * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 22]) + 0.9  * (rpm factor [800,	2200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 22]) + 0.9  * (rpm factor [800,	2200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800,	2200])) - (1600 - 600)/(1600 - 600)))";
        volume = "engineOn * 1.6 * 1.6 * (((1+0.1*1 *thrust) * ((1-0.9 ) * (speed factor [0, 22]) + 0.9  * (rpm factor [800,	2200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9 ) * (speed factor [0, 22]) + 0.9  * (rpm factor [800,	2200])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800,	2200])) factor[(1200 - 600)/(1600 - 600) + (((1600 - 600)/(1600 - 600) - (1200 - 600)/(1600 - 600)) - (1.3 * ((1600 - 600)/(1600 - 600) - (1200 - 600)/(1600 - 600))))/2, (1600 - 600)/(1600 - 600) - (((1600 - 600)/(1600 - 600) - (1200 - 600)/(1600 - 600)) - (1.3 * ((1600 - 600)/(1600 - 600) - (1200 - 600)/(1600 - 600))))/2])";
        range = "3.5*220";
    };
    class RHS_kamaz_Engine_EXT_Burst_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\kamaz\kamaz_Engine_EXT_Burst01", 1}, {"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\kamaz\kamaz_Engine_EXT_Burst02", 1}};
        frequency = 0.9;
        range = "1*150";
        volume = "engineOn * 1.2 * 1.5 * (rpm factor[0,10])";
    };
    class RHS_kamaz_Engine_INT_Burst_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\kamaz\kamaz_Engine_INT_Burst01", 1}, {"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\kamaz\kamaz_Engine_INT_Burst02", 1}};
        frequency = 0.9;
        range = "1*150";
        volume = "engineOn * 1.6 * 1.5 * (rpm factor[0,10])";
    };
    class RHS_kamaz_Brakes_EXT_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\kamaz\kamaz_Brakes_EXT_1", 1}, {"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\kamaz\kamaz_Brakes_EXT_2", 1}};
        frequency = 1;
        range = "1*50";
        volume = "engineOn * 1.2 * 2.5 * (rpm factor[0,10])";
    };
    class RHS_kamaz_Brakes_INT_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\kamaz\kamaz_Brakes_INT_1", 1}, {"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\kamaz\kamaz_Brakes_INT_2", 1}};
        frequency = 1;
        range = "1*50";
        volume = "engineOn * 1.6 * 2.5 * (rpm factor[0,10])";
    };
    class RHS_kamaz_Tires_Rock_Fast_INT_SoundShader: Base_Tires_Rock_Fast_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Rock_Fast_INT", 1}};
        frequency = 1;
        volume = "1.6 * 0.35 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [4, 10]) * 0.6*rock * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 30;
    };
    class RHS_kamaz_Tires_Grass_Fast_INT_SoundShader: Base_Tires_Grass_Fast_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Grass_Fast_INT", 1}};
        frequency = 1;
        volume = "1.6 * 0.35 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [4, 10]) * 0.65*grass*(0.9 + 0.3*damper0) * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 50;
    };
    class RHS_kamaz_Tires_Sand_Fast_INT_SoundShader: Base_Tires_Sand_Fast_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Sand_Fast_INT", 1}};
        frequency = 1;
        volume = "1.6 * 0.35 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [4, 10]) * 0.2*sand * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 30;
    };
    class RHS_kamaz_Tires_Gravel_Fast_INT_SoundShader: Base_Tires_Gravel_Fast_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Gravel_Fast_INT", 1}};
        frequency = 1;
        volume = "1.6 * 0.35 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [4, 10]) * 0.6*gravel*(0.9 + 0.3*damper0) * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 50;
    };
    class RHS_kamaz_Tires_Mud_Fast_INT_SoundShader: Base_Tires_Mud_Fast_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Mud_Fast_INT", 1}};
        frequency = 1;
        volume = "1.6 * 0.35 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [4, 10]) * 0.65*mud*(0.9 + 0.3*damper0) * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 50;
    };
    class RHS_kamaz_Tires_Asphalt_Fast_INT_SoundShader: Base_Tires_Asphalt_Fast_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Asphalt_Fast_INT", 1}};
        frequency = 1;
        volume = "1.6 * 0.35 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [4, 10]) * 0.3*asphalt*(1+0.7*((abs(speed)) factor[5,15]))*(0.9 + 0.3*damper0) * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 40;
    };
    class RHS_kamaz_Tires_Water_Fast_INT_SoundShader: Base_Tires_Water_Fast_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Water_Fast_INT", 1}};
        frequency = 1;
        volume = "1.6 * 0.35 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [4, 10]) * 0.2*water";
        range = 40;
    };
    class RHS_kamaz_Tires_Rock_Slow_INT_SoundShader: Base_Tires_Rock_Slow_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Rock_Slow_INT", 1}};
        frequency = 1;
        volume = "1.6 * 0.35 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5]) * 0.6*rock * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 30;
    };
    class RHS_kamaz_Tires_Grass_Slow_INT_SoundShader: Base_Tires_Grass_Slow_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Grass_Slow_INT", 1}};
        frequency = 1;
        volume = "1.6 * 0.35 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5]) * 0.65*grass*(0.9 + 0.3*damper0) * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 50;
    };
    class RHS_kamaz_Tires_Sand_Slow_INT_SoundShader: Base_Tires_Sand_Slow_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Sand_Slow_INT", 1}};
        frequency = 1;
        volume = "1.6 * 0.35 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5]) * 0.2*sand * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 30;
    };
    class RHS_kamaz_Tires_Gravel_Slow_INT_SoundShader: Base_Tires_Gravel_Slow_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Gravel_Slow_INT", 1}};
        frequency = 1;
        volume = "1.6 * 0.35 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5]) * 0.6*gravel*(0.9 + 0.3*damper0) * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 50;
    };
    class RHS_kamaz_Tires_Mud_Slow_INT_SoundShader: Base_Tires_Mud_Slow_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Mud_Slow_INT", 1}};
        frequency = 1;
        volume = "1.6 * 0.35 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5]) * 0.65*mud*(0.9 + 0.3*damper0) * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 50;
    };
    class RHS_kamaz_Tires_Asphalt_Slow_INT_SoundShader: Base_Tires_Asphalt_Slow_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Asphalt_Slow_INT", 1}};
        frequency = 1;
        volume = "1.6 * 0.35 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5]) * 0.3*asphalt*(1+0.7*((abs(speed)) factor[5,15]))*(0.9 + 0.3*damper0) * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 40;
    };
    class RHS_kamaz_Tires_Water_Slow_INT_SoundShader: Base_Tires_Water_Slow_Int_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Water_Slow_INT", 1}};
        frequency = 1;
        volume = "1.6 * 0.35 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5]) * 0.2*water";
        range = 40;
    };
    class RHS_kamaz_Tires_Turn_Hard_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires_turns\Tires_Turn_Hard_01_INT", 1}};
        frequency = 0.7;
        volume = "(asphalt max rock) * (abs(latSlip) factor [0.1,0.2]) * 1.6 * 0.5";
        range = 50;
    };
    class RHS_kamaz_Tires_Turn_Soft_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires_turns\Tires_Turn_Soft_01_INT", 1}};
        frequency = 1;
        volume = "(1-asphalt)*(1-rock)*(1-water)*(1-sand) * (abs(latSlip) factor [0.07,0.2]) * 1.6 * 0.1";
        range = 50;
    };
    class RHS_kamaz_Tires_Brake_Hard_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires_brakes\Tires_Brake_Hard_01_INT", 1}};
        frequency = 0.7;
        volume = "(asphalt max rock) * (0.5*(abs(longSlip) factor [0.1,0.3])) * 1.6 * 0.5";
        range = 50;
    };
    class RHS_kamaz_Tires_Brake_Soft_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires_brakes\Tires_Brake_Soft_01_INT", 1}};
        frequency = 1;
        volume = "(1-asphalt)*(1-rock)*(1-water)*(1-sand) * ((abs(longSlip) factor [0.07,0.3])) * 1.6 * 0.1";
        range = 50;
    };
    class RHS_kamaz_Tires_Rock_Fast_EXT_SoundShader: Base_Tires_Rock_Fast_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Rock_Fast_EXT", 1}};
        frequency = 1;
        volume = "1.2 * 1.5 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [4, 10]) * 0.6*rock * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 30;
    };
    class RHS_kamaz_Tires_Grass_Fast_EXT_SoundShader: Base_Tires_Grass_Fast_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Grass_Fast_EXT", 1}};
        frequency = 1;
        volume = "1.2 * 1.5 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [4, 10]) * 0.65*grass*(0.9 + 0.3*damper0) * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 50;
    };
    class RHS_kamaz_Tires_Sand_Fast_EXT_SoundShader: Base_Tires_Sand_Fast_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Sand_Fast_EXT", 1}};
        frequency = 1;
        volume = "1.2 * 1.5 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [4, 10]) * 0.2*sand * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 30;
    };
    class RHS_kamaz_Tires_Gravel_Fast_EXT_SoundShader: Base_Tires_Gravel_Fast_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Gravel_Fast_EXT", 1}};
        frequency = 1;
        volume = "1.2 * 1.5 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [4, 10]) * 0.6*gravel*(0.9 + 0.3*damper0) * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 50;
    };
    class RHS_kamaz_Tires_Mud_Fast_EXT_SoundShader: Base_Tires_Mud_Fast_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Mud_Fast_EXT", 1}};
        frequency = 1;
        volume = "1.2 * 1.5 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [4, 10]) * 0.65*mud*(0.9 + 0.3*damper0) * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 50;
    };
    class RHS_kamaz_Tires_Asphalt_Fast_EXT_SoundShader: Base_Tires_Asphalt_Fast_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Asphalt_Fast_EXT", 1}};
        frequency = 1;
        volume = "1.2 * 1.5 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [4, 10]) * 0.3*asphalt*(1+0.7*((abs(speed)) factor[5,15]))*(0.9 + 0.3*damper0) * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 40;
    };
    class RHS_kamaz_Tires_Water_Fast_EXT_SoundShader: Base_Tires_Water_Fast_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Water_Fast_EXT", 1}};
        frequency = 1;
        volume = "1.2 * 1.5 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [4, 10]) * 0.2*water";
        range = 40;
    };
    class RHS_kamaz_Tires_Rock_Slow_EXT_SoundShader: Base_Tires_Rock_Slow_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Rock_Slow_EXT", 1}};
        frequency = 1;
        volume = "1.2 * 1.5 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5]) * 0.6*rock * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 30;
    };
    class RHS_kamaz_Tires_Grass_Slow_EXT_SoundShader: Base_Tires_Grass_Slow_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Grass_Slow_EXT", 1}};
        frequency = 1;
        volume = "1.2 * 1.5 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5]) * 0.65*grass*(0.9 + 0.3*damper0) * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 50;
    };
    class RHS_kamaz_Tires_Sand_Slow_EXT_SoundShader: Base_Tires_Sand_Slow_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Sand_Slow_EXT", 1}};
        frequency = 1;
        volume = "1.2 * 1.5 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5]) * 0.2*sand * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 30;
    };
    class RHS_kamaz_Tires_Gravel_Slow_EXT_SoundShader: Base_Tires_Gravel_Slow_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Gravel_Slow_EXT", 1}};
        frequency = 1;
        volume = "1.2 * 1.5 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5]) * 0.6*gravel*(0.9 + 0.3*damper0) * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 50;
    };
    class RHS_kamaz_Tires_Mud_Slow_EXT_SoundShader: Base_Tires_Mud_Slow_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Mud_Slow_EXT", 1}};
        frequency = 1;
        volume = "1.2 * 1.5 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5]) * 0.65*mud*(0.9 + 0.3*damper0) * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 50;
    };
    class RHS_kamaz_Tires_Asphalt_Slow_EXT_SoundShader: Base_Tires_Asphalt_Slow_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Asphalt_Slow_EXT", 1}};
        frequency = 1;
        volume = "1.2 * 1.5 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5]) * 0.3*asphalt*(1+0.7*((abs(speed)) factor[5,15]))*(0.9 + 0.3*damper0) * (1 + 0.1*(damper0 factor [0.6,1]))";
        range = 40;
    };
    class RHS_kamaz_Tires_Water_Slow_EXT_SoundShader: Base_Tires_Water_Slow_Ext_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires04\Tires_Water_Slow_EXT", 1}};
        frequency = 1;
        volume = "1.2 * 1.5 * (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip))) * (abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5]) * 0.2*water";
        range = 40;
    };
    class RHS_kamaz_Tires_Turn_Hard_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires_turns\Tires_Turn_Hard_01_EXT", 1}};
        frequency = 0.7;
        volume = "(asphalt max rock) * (abs(latSlip) factor [0.1,0.2]) * 1.2 * 1.9";
        range = 50;
    };
    class RHS_kamaz_Tires_Turn_Soft_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires_turns\Tires_Turn_Soft_01_EXT", 1}};
        frequency = 1;
        volume = "(1-asphalt)*(1-rock)*(1-water)*(1-sand) * (abs(latSlip) factor [0.07,0.2]) * 1.2 * 1.5";
        range = 50;
    };
    class RHS_kamaz_Tires_Brake_Hard_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires_brakes\Tires_Brake_Hard_01_EXT", 1}};
        frequency = 0.7;
        volume = "(asphalt max rock) * (0.5*(abs(longSlip) factor [0.1,0.3])) * 1.2 * 1.9";
        range = 50;
    };
    class RHS_kamaz_Tires_Brake_Soft_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\tires_brakes\Tires_Brake_Soft_01_EXT", 1}};
        frequency = 1;
        volume = "(1-asphalt)*(1-rock)*(1-water)*(1-sand) * ((abs(longSlip) factor [0.07,0.3])) * 1.2 * 1.5";
        range = 50;
    };
    class RHS_kamaz_Rattling_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\add_layers\Rattling_03_INT", 1}};
        frequency = 1;
        volume = "1.6 * 0.5 * (1 + 2*(damper0 factor [0.3, 0.8])) * (speed factor[5, 15]) * (1 - 0.8*(rock max asphalt)) * (1 - 0.4*(gravel))";
        range = 60;
    };
    class RHS_kamaz_Stress_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\add_layers\Stress_01_INT", 1}};
        frequency = 1.3;
        volume = "1.6 * 0.8 * ((damper0 factor [0.9,1]) * (speed factor [5, 15]))";
        range = 60;
    };
    class RHS_kamaz_Rain_INT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\add_layers\Rain_01_INT", 1}};
        frequency = 1;
        volume = "1.6 * 1 * rain";
        range = 60;
    };
    class RHS_kamaz_Rattling_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\add_layers\Rattling_03_EXT", 1}};
        frequency = 1;
        volume = "1.2 * 2 * (1 + 2*(damper0 factor [0.3, 0.8])) * (speed factor[5, 15]) * (1 - 0.8*(rock max asphalt)) * (1 - 0.4*(gravel))";
        range = 60;
    };
    class RHS_kamaz_Stress_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\add_layers\Stress_01_EXT", 1}};
        frequency = 1.3;
        volume = "1.2 * 1 * ((damper0 factor [0.9,1]) * (speed factor [5, 15]))";
        range = 60;
    };
    class RHS_kamaz_Rain_EXT_SoundShader {
        samples[] = {{"A3\Sounds_F\vehicles2\soft\shared\add_layers\Rain_01_EXT", 1}};
        frequency = 1;
        volume = "1.2 * 1 * rain";
        range = 50;
    };
    class rhs_tank_t72_int_autoloader_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_c_heavyweapons\sounds\autoloader", 1}};
        volume = 1;
        range = 25;
    };
    class rhs_tank_t72_ext_autoloader_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_c_heavyweapons\sounds\autoloader", 1}};
        volume = 1;
        range = 25;
    };
    class rhs_spo15_beep_single_SoundShader {
        samples[] = {{"rhsafrf\addons\rhs_optics\sounds\single_beep.wav", 1}};
        volume = 1;
        range = 25;
    };
};
