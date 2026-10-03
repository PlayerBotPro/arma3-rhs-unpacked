#define TOTAL_FRAMES 122
#define FRAME(fr) (fr/TOTAL_FRAMES)
#define TRANSFORM_TRANSLATION(obj_name,frame_no,length,aPosX,aPosY,aPosZ,aDirX,aDirY,aDirZ) \
class ##obj_name##_trans_##frame_no## \
{\
	type		= direct;\
	source		= reloadMagazine.0;\
	selection	= obj_name##_base;\
	axisPos[]	= {aPosX,aPosY,aPosZ};\
	axisDir[]	= {-aDirX,-aDirY,aDirZ};\
	angle		= 0;\
	axisOffset	= -length;\
	minValue	= (frame_no-1)/TOTAL_FRAMES;\
	maxValue	= (frame_no)/TOTAL_FRAMES;\
};
#define TRANSFORM_ROTATION(obj_name,frame_no,rotAng,aPosX,aPosY,aPosZ,aDirX,aDirY,aDirZ) \
class ##obj_name##_rot_##frame_no## \
{\
	type		= direct;\
	source		= reloadMagazine.0;\
	selection	= obj_name;\
	axisPos[]	= {aPosX,aPosY,aPosZ};\
	axisDir[]	= {-aDirX,-aDirY,aDirZ};\
	angle		= rotAng;\
	axisOffset	= 0;\
	minValue	= (frame_no-1)/TOTAL_FRAMES;\
	maxValue	= (frame_no)/TOTAL_FRAMES;\
};
 TRANSFORM_TRANSLATION(bolt,93,0.02802,-0.01858,0.08769,0,0.28022,0,0)
 TRANSFORM_TRANSLATION(bolt,94,0.01793,-0.00065,0.08769,0,0.17929,0,0)
 TRANSFORM_TRANSLATION(bolt,96,0.00367,0.00302,0.08769,0,0.03672,0,0)
 TRANSFORM_TRANSLATION(bolt,99,0.00389,0.00864,0.08769,0,0.03888,0,0)
 TRANSFORM_TRANSLATION(bolt,100,0.00864,0.01728,0.08769,0,0.08641,0,0)
 TRANSFORM_TRANSLATION(bolt,101,0.01071,0.028,0.08769,0,0.10714,0,0)