#pragma once
#ifndef BLASTER_H

#include "Weapons.h"

class Blaster : public Weapons {
private:
	int accuracy;
	bool hit = true;
	bool getHit();


public:
	Blaster();
	double getAccuracy();
	void setAccuracy(int a);
	int giveDamage();
};


#endif // !BLASTER_H

