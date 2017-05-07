#ifndef DICE
#define DICE
#include "Time.h"

class dice:public Time{
public:
	void roll();
	int sum;
	int getface();
private:
	int face;
	
};

#endif