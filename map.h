#ifndef MAP_H
#define MAP_H

#include <stdbool.h>
typedef struct tile_t {
	bool walk;
} Tile;

typedef struct map_t {
	Tile *tiles;
	int width, height;
} Map;

#endif /* MAP_H */

