#ifndef GAME_H
#define GAME_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "map.h"
#include "unit.h"

typedef struct player_t {
	Unit *units;
	int nUnits;
} Player;

typedef struct game_t {
	Map map;
	int Turn;
	Player players[2];
} Game;

void loadLevel (Game* me, char* level);

#endif /* GAME_H */

