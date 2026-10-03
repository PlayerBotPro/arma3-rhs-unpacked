
attenuationEffectType = "TankAttenuation";

soundGetIn[]={"A3\Sounds_F_EPB\Tracked\noises\get_in_out",db-5,1};
soundGetOut[]={"A3\Sounds_F_EPB\Tracked\noises\get_in_out",db-5,1, 20};

soundTurnIn[]={"A3\Sounds_F\vehicles\noises\Turn_in_out",db5,1, 20};
soundTurnOut[]={"A3\Sounds_F\vehicles\noises\Turn_in_out",db5,1, 20};

soundTurnInInternal[]={"A3\Sounds_F\vehicles\noises\Turn_in_out",db5,1, 20};
soundTurnOutInternal[]={"A3\Sounds_F\vehicles\noises\Turn_in_out",db5,1, 20};

soundDammage[]={"", db-5, 1};

soundEngineOnInt[] = {"A3\Sounds_F\vehicles2\armor\APC_Wheeled_01\APC_Wheeled_01_Engine_Int_Start", db-2, 1.0};
soundEngineOffInt[] = {"A3\Sounds_F\vehicles2\armor\APC_Wheeled_01\APC_Wheeled_01_Engine_Int_Stop", db-2, 1.0};

soundEngineOnExt[] = {"A3\Sounds_F\vehicles2\armor\APC_Wheeled_01\APC_Wheeled_01_Engine_Ext_Start", db0, 1.0, 100};
soundEngineOffExt[] = {"A3\Sounds_F\vehicles2\armor\APC_Wheeled_01\APC_Wheeled_01_Engine_Ext_Stop", db0, 1.0, 100};

// Collisions
BushCrash1[]={"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_Collision_Light_Bush_01", db-4, 1,100};
BushCrash2[]={"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_Collision_Light_Bush_02", db-4, 1,100};
BushCrash3[]={"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_Collision_Light_Bush_03", db-4, 1,100};
soundBushCrash[] = {BushCrash1,0.33, BushCrash2,0.33, BushCrash3,0.33};

buildCrash0[]={"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_01", db10, 1,200};
buildCrash1[]={"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_02", db10, 1,200};
buildCrash2[]={"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_03", db10, 1,200};
buildCrash3[]={"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_04", db10, 1,200};
buildCrash4[]={"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_05", db10, 1,200};
buildCrash5[]={"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_06", db10, 1,200};
soundBuildingCrash[]={buildCrash0, 0.166, buildCrash1, 0.166, buildCrash2, 0.166, buildCrash3, 0.166, buildCrash4, 0.166, buildCrash5, 0.166};

woodCrash0[]={"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_01", db10, 1,200};
woodCrash1[]={"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_02", db10, 1,200};
woodCrash2[]={"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_03", db10, 1,200};
woodCrash3[]={"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_04", db10, 1,200};
woodCrash4[]={"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_05", db10, 1,200};
woodCrash5[]={"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_06", db10, 1,200};
soundWoodCrash[]={woodCrash0, 0.166, woodCrash1, 0.166, woodCrash2, 0.166, woodCrash3, 0.166,woodCrash4, 0.166,woodCrash5, 0.166};

ArmorCrash0[]={"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_01", db10, 1,200};
ArmorCrash1[]={"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_02", db10, 1,200};
ArmorCrash2[]={"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_03", db10, 1,200};
ArmorCrash3[]={"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_04", db10, 1,200};
ArmorCrash4[]={"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_05", db10, 1,200};
ArmorCrash5[]={"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_06", db10, 1,200};
soundArmorCrash[]={ArmorCrash0, 0.166, ArmorCrash1, 0.166, ArmorCrash2, 0.166, ArmorCrash3, 0.166, ArmorCrash4, 0.166, ArmorCrash5, 0.166};

class Sounds
{
	soundSetsExt[] = {"APC_Wheeled_01_Engine_RPM0_EXT_SoundSet","APC_Wheeled_01_Engine_RPM1_EXT_SoundSet","APC_Wheeled_01_Engine_RPM2_EXT_SoundSet","APC_Wheeled_01_Engine_RPM3_EXT_SoundSet","APC_Wheeled_01_Engine_RPM4_EXT_SoundSet","APC_Wheeled_01_Engine_RPM5_EXT_SoundSet","APC_Wheeled_01_Rattling_EXT_SoundSet","APC_Wheeled_01_Stress_EXT_SoundSet","APC_Wheeled_01_Rain_EXT_SoundSet","APC_Wheeled_01_Tires_Rock_Fast_EXT_SoundSet","APC_Wheeled_01_Tires_Grass_Fast_EXT_SoundSet","APC_Wheeled_01_Tires_Sand_Fast_EXT_SoundSet","APC_Wheeled_01_Tires_Gravel_Fast_EXT_SoundSet","APC_Wheeled_01_Tires_Mud_Fast_EXT_SoundSet","APC_Wheeled_01_Tires_Asphalt_Fast_EXT_SoundSet","APC_Wheeled_01_Tires_Water_Fast_EXT_SoundSet","APC_Wheeled_01_Tires_Rock_Slow_EXT_SoundSet","APC_Wheeled_01_Tires_Grass_Slow_EXT_SoundSet","APC_Wheeled_01_Tires_Sand_Slow_EXT_SoundSet","APC_Wheeled_01_Tires_Gravel_Slow_EXT_SoundSet","APC_Wheeled_01_Tires_Mud_Slow_EXT_SoundSet","APC_Wheeled_01_Tires_Asphalt_Slow_EXT_SoundSet","APC_Wheeled_01_Tires_Water_Slow_EXT_SoundSet","APC_Wheeled_01_Tires_Turn_Hard_EXT_SoundSet","APC_Wheeled_01_Tires_Turn_Soft_EXT_SoundSet","APC_Wheeled_01_Tires_Brake_Hard_EXT_SoundSet","APC_Wheeled_01_Tires_Brake_Soft_EXT_SoundSet"};
	soundSetsInt[] = {"APC_Wheeled_01_Engine_RPM0_INT_SoundSet","APC_Wheeled_01_Engine_RPM1_INT_SoundSet","APC_Wheeled_01_Engine_RPM2_INT_SoundSet","APC_Wheeled_01_Engine_RPM3_INT_SoundSet","APC_Wheeled_01_Engine_RPM4_INT_SoundSet","APC_Wheeled_01_Engine_RPM5_INT_SoundSet","APC_Wheeled_01_Interior_Tone_Engine_Off_SoundSet","APC_Wheeled_01_Interior_Tone_Engine_On_SoundSet","APC_Wheeled_01_Rattling_INT_SoundSet","APC_Wheeled_01_Stress_INT_SoundSet","APC_Wheeled_01_Rain_INT_SoundSet","APC_Wheeled_01_Tires_Rock_Fast_INT_SoundSet","APC_Wheeled_01_Tires_Grass_Fast_INT_SoundSet","APC_Wheeled_01_Tires_Sand_Fast_INT_SoundSet","APC_Wheeled_01_Tires_Gravel_Fast_INT_SoundSet","APC_Wheeled_01_Tires_Mud_Fast_INT_SoundSet","APC_Wheeled_01_Tires_Asphalt_Fast_INT_SoundSet","APC_Wheeled_01_Tires_Water_Fast_INT_SoundSet","APC_Wheeled_01_Tires_Rock_Slow_INT_SoundSet","APC_Wheeled_01_Tires_Grass_Slow_INT_SoundSet","APC_Wheeled_01_Tires_Sand_Slow_INT_SoundSet","APC_Wheeled_01_Tires_Gravel_Slow_INT_SoundSet","APC_Wheeled_01_Tires_Mud_Slow_INT_SoundSet","APC_Wheeled_01_Tires_Asphalt_Slow_INT_SoundSet","APC_Wheeled_01_Tires_Water_Slow_INT_SoundSet","APC_Wheeled_01_Tires_Turn_Hard_INT_SoundSet","APC_Wheeled_01_Tires_Turn_Soft_INT_SoundSet","APC_Wheeled_01_Tires_Brake_Hard_INT_SoundSet","APC_Wheeled_01_Tires_Brake_Soft_INT_SoundSet"};
};