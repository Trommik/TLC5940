// TLC5940.h

#ifndef _TLC5940_h
#define _TLC5940_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

class TLC5940Class
{
 protected:


 public:
	void init();
};

extern TLC5940Class TLC5940;

#endif

