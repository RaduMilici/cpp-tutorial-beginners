#ifndef PRACTICE_FIGHT_BRAWL_H_
#define PRACTICE_FIGHT_BRAWL_H_

#include "Fighter.h"

class Brawl {
public:
	Brawl(Fighter& a, Fighter& b);
	void start();
private:
	Fighter* fighters[2];
	void keepFighting();
	void swapPlaces();
	bool areBothAlive();
};

#endif /* PRACTICE_FIGHT_BRAWL_H_ */
