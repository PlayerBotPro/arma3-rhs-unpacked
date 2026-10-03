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
 TRANSFORM_TRANSLATION(bolt_handle,107,0.00649,0.06489,0,0)
 TRANSFORM_TRANSLATION(bolt_handle,108,0.01711,0.17108,0,0)
 TRANSFORM_TRANSLATION(bolt_handle,109,0.02419,0.24187,0,0)
 TRANSFORM_TRANSLATION(bolt_handle,110,0.02773,0.27726,0,0)
 TRANSFORM_TRANSLATION(bolt_handle,111,0.02773,0.27726,0,0)
 TRANSFORM_TRANSLATION(bolt_handle,112,0.02419,0.24187,0,0)
 TRANSFORM_TRANSLATION(bolt_handle,113,0.01711,0.17108,0,0)
 TRANSFORM_TRANSLATION(bolt_handle,114,0.00649,0.06489,0,0)
 TRANSFORM_TRANSLATION(bolt_handle,121,0.0236,-0.23597,0,0)
 TRANSFORM_TRANSLATION(bolt_handle,122,0.05191,-0.51913,0,0)
 TRANSFORM_TRANSLATION(bolt_handle,123,0.05191,-0.51913,0,0)
 TRANSFORM_TRANSLATION(bolt_handle,124,0.0236,-0.23597,0,0)