#pragma once
#include <stdint.h>
int16_t myFunction(int16_t in1, int16_t in2)
{
<<<<<<< HEAD
	if (in1 + in2 > 32000) {
		return 32000;
	}
	else if (in1 + in2 < -32000) {
		return -32000;
	}
	else {
		return in1 + in2;
	}
=======
	return (int16_t)(in1 + in2);
>>>>>>> 039091bcd96a17310d2901610dab381105cfcfb1
}
