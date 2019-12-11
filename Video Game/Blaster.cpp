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
	accuracy = 20;
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

void Blaster::assignPrice()
{
	setPrice(getDamage() + getAccuracy());
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

int Blaster::getNewPrice()
{
	assignPrice();
	return getPrice();
}
