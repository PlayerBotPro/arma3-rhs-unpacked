ambient[]={1,1,1,1};
diffuse[]={1,1,1,1};
forcedDiffuse[]={0,0,0,0};
emmisive[]={0,0,0,0};
specular[]={0.1,0.1,0.1,1};
specularPower=130;
PixelShaderID="Super";
VertexShaderID="Super";

class Stage6
{
	texture="#(ai,64,64,1)fresnel(4.5,1.1)";
	uvSource="none";
};
/*
class Stage7
{
	texture="a3\data_f\env_land_co.paa";
	uvSource="none";
};
*/