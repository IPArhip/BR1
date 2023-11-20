
#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
	#include <AsDefault.h>
#endif

void _INIT ProgramInit(void)
{
	fb_motor1.Tm = 0.1;
	fb_motor1.ke = 0.24;
	fb_motor1.u = 0.1;
	
	fb_motor2.Tm = 0.1;
	fb_motor2.ke = 0.24;
	fb_motor2.u = 0.1;
	
	fb_motor3.Tm = 0.0232;
	fb_motor3.ke = 0.581;
	fb_motor3.u = 0.1;
	
	fb_motor4.Tm = 0.0232;
	fb_motor4.ke = 0.581;
	fb_motor4.u = 0.1;
	
	regulator.k_i = 0.015;
	regulator.k_p = 0.045;
	regulator.max_abs_value = 24.0;
	
	speed = 0;
	counter = 0;
}
