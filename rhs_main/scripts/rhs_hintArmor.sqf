/*
Show hint if Extended Armor is turned on
*/
[] spawn {
	if(difficultyOption "reducedDamage" isEqualTo 1)then{
		sleep 2;
		"Warning" hintC parseText "It's recommended to turn off 'Reduced Damage' setting in difficult options while using RHS vehicles. Otherwise, expect unexpected and be prepared to face indestructable tanks. <br/><br/> <t color='#ff0000'>How to change it:</t><br/> <img size='25'  image='\rhsafrf\addons\rhs_main\data\extendedArmor.paa'/>";
	};
};