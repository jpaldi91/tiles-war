#ifndef MAP_H
#define MAP_H
#include <stdio.h>
#include <stdlib.h>

typedef struct tile_t {
	int walk;
} Tile;

typedef struct map_t {
	Tile *tiles;
	int width, height;
} Map;

void loadMap (Map* me, FILE* in);

#endif /* MAP_H */

