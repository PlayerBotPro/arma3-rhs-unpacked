
	class ammo_Penetrator_Base: ShellBase
	{
		// Spall handling
		submunitionConeType[]		= {"randomcenter", 30};
		submunitionAmmo				= rhs_ammo_spall;
		submunitionDirectionType	= SubmunitionModelDirection;
		submunitionInitialOffset[]	= {0,0,-0.4};
		submunitionParentSpeedCoef	= 0;
		submunitionInitSpeed		= 200;
		deleteParentWhenTriggered	= false;
		triggerTime					= 0.003;
	};