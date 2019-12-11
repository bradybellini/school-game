#pragma once
#ifndef BLASTER_H

#include "Weapons.h"
#include "BlasterName.h"

class Blaster : public Weapons {
private:
	BlasterName name;
	int accuracy;
	bool hit = true;
	bool getHit();



public:
	Blaster();
	int getAccuracy();
	std::string getName();
	void setAccuracy(int a), assignPrice(), setName(std::string n);
	int giveDamage(), getNewPrice();
	

};


#endif // !BLASTER_H

