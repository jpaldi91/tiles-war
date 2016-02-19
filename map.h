#ifndef MAP_H
#define MAP_H

typedef struct tile_t {
	int walk;
} Tile;

typedef struct map_t {
	Tile *tiles;
	int width, height;
} Map;

#endif /* MAP_H */

