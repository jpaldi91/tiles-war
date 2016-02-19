#ifndef GAME_H
#define GAME_H

#include "map.h"
#include "unit.h"

typedef struct player_t {
	Unit *units;
	int nUnits;
} Player;

typedef struct game_t {
	Map Map;
	int Turn;
	Player players[2];
} Game;

#endif /* GAME_H */

