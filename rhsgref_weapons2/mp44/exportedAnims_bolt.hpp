#define TOTAL_FRAMES 133
#define FRAME(fr) (fr/TOTAL_FRAMES)
#define TRANSFORM_TRANSLATION(obj_name,frame_no,length,aDirX,aDirY,aDirZ) \
class ##obj_name##_trans_##frame_no## \
{\
	type		= direct;\
	source		= reloadMagazine.0;\
	selection	= obj_name##_base;\
	axisPos[]	= {0,0,0};\
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
 TRANSFORM_TRANSLATION(bolt,108,0.01798,0.17977,0,0)
 TRANSFORM_TRANSLATION(bolt,109,0.03339,0.33385,0,0)
 TRANSFORM_TRANSLATION(bolt,110,0.01798,0.17977,0,0)
 TRANSFORM_TRANSLATION(bolt,121,0.01798,-0.17977,0,0)
 TRANSFORM_TRANSLATION(bolt,122,0.03339,-0.33385,0,0)
 TRANSFORM_TRANSLATION(bolt,123,0.01798,-0.17977,0,0)