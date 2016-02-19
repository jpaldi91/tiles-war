#ifndef UNIT_H
#define UNIT_H

typedef struct unit_descriptor_t {
	int rangeMin, rangeMax;
	int hpMax;
	int atk;
	int move;
} UnitDescriptor;

typedef struct unit_t {
	int x, y;
	int hp;
	UnitDescriptor *type;

} Unit;

//void moveTo (int destX, int destY);
//int takeHit (Unit *atkr);

#endif /* UNIT_H */

