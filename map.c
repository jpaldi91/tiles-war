#include "map.h"

void loadMap (Map* me, FILE* in) {
	int i, product;

	fscanf(in, "%d %d", &me->width, &me->height);
	product = me->width*me->height;
	me->tiles = (Tile*) malloc(product * sizeof(Tile));

	if (me->tiles == NULL) {
		printf("Impossible to allocate vector tiles\n");
		exit(2);
	}
	for (i=0; i<product; i++) {
		fscanf(in, "%d", &me->tiles[i].walk);
	}

	/* DEBUG */
	printf("Map reading complete!\n");
	for (i=0; i<product; i++) {
		printf("%d ", me->tiles[i].walk);
		if ((i+1) % me->width == 0)
			printf("\n");
	}
}