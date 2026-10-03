Ambient[]={1,1,1,1};
Diffuse[]={1,1,1,1};
ForcedDiffuse[]={0,0,0,0}; 
emmisive[]={0,0,0,0};
specular[]={0.05,0.05,0.05,1};
specularPower=40;
PixelShaderID="Super";
VertexShaderID="Super";

class Stage6
{
	texture="#(ai,64,64,1)fresnel(0.75,0.8)";
	uvSource="none";
};
/*
class Stage7
{
	texture="a3\data_f\env_land_co.paa";
	uvSource="none";
};
*/