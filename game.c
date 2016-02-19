#include "game.h"

void loadLevel (Game* me, char* level) {
	FILE *in;

	in = fopen ("maps\\map01.txt", "r");
	if (in == NULL) {
		printf("Impossible to read map\n");
		exit(1);
	}

	loadMap(&me->map, in);

	fclose(in);
}