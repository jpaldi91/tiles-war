#include "map.h"
#include "unit.h"

class game {
	map Map;
	int Turn;
	class player {
		unit* VUnit;
		int Size;
	} players[2];
};