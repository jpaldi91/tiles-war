#include "unit.h"

unitDescriptor Melee = {
	1, 1, //int rangeMin, rangeMax;
	10,	  //int hpMax;
	3,	  //int atk;
	3	  //int move;
};

unitDescriptor ShortRange = {
	1,2,  //int rangeMin, rangeMax;
	10,	  //int hpMax;
	2,	  //int atk;
	2	  //int move;
};

unitDescriptor LongRange = {
	2,3,  //int rangeMin, rangeMax;
	10,	  //int hpMax;
	3,	  //int atk;
	1	  //int move;
};

void unit::moveTo(int destX, int destY) {
	x = destX;
	y = destY;
}

int unit::takeHit(unit* atkr) {
	return hp -= atkr->type->atk;
}