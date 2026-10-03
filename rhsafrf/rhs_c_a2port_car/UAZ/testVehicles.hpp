
	class RHS_UAZ_AAF_Base: RHS_UAZ_Base
	{
		accuracy = 0.5;
		side = 2;
		faction="IND_F";
		crew = "I_crew_F";
		typicalCargo[] = {"I_crew_F"};
	};
	class RHS_UAZ_AAF_01: RHS_UAZ_AAF_Base
	{	
		scope=2;
		displayName="UAZ-469";
		hiddenSelectionsTextures[]=
		{
			"\rhsafrf\addons\rhs_a2port_car\UAZ\Data\uaz_main_co.paa"
		};
	};