#ifndef GAME
#define GAME
#include "dice.h"

class game:public dice{

public:
	void go(int,int);
	int getbase();
	int getbet();
	int getchoice();
private:
	int base,bet,choice;

};

#endif