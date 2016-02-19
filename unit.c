#include "unit.h"

UnitDescriptor Melee = {
	1, 1, //int rangeMin, rangeMax;
	10,	  //int hpMax;
	3,	  //int atk;
	3	  //int move;
};

UnitDescriptor ShortRange = {
	1,2,  //int rangeMin, rangeMax;
	10,	  //int hpMax;
	2,	  //int atk;
	2	  //int move;
};

UnitDescriptor LongRange = {
	2,3,  //int rangeMin, rangeMax;
	10,	  //int hpMax;
	3,	  //int atk;
	1	  //int move;
};

void Unit_moveTo(Unit *me, int destX, int destY) {
	me->x = destX;
	me->y = destY;
}

int Unit_takeHit(Unit *me, Unit *atkr) {
	return me->hp -= atkr->type->atk;
}
