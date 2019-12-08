#include "Blaster.h"
#include <random>
#include <time.h>

bool Blaster::getHit()
{
	int r;
	srand(time(NULL));
	r = rand() % 10;
	if (r >= accuracy) {
		hit = false;
	}
	return hit;
}

Blaster::Blaster()
{
	accuracy = 10;
	setName("Blaster");
	setDamage(10);
}

double Blaster::getAccuracy()
{
	return accuracy;
}

void Blaster::setAccuracy(int a)
{
	accuracy = a;
}

int Blaster::giveDamage()
{
	if (getHit()) {
		return getDamage();
	}
	else {
		return 0;
	}
}
