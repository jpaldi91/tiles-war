class unitDescriptor {
public:
	int rangeMin, rangeMax;
	int hpMax;
	int atk;
	int move;
};

class unit {
	int x, y;
	int hp;
	unitDescriptor* type;

	void moveTo (int destX, int destY);
	int takeHit (unit* atkr);
};