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
	setName(name.getName());
	setDamage(10);
	setType("Blaster");

}

int Blaster::getAccuracy()
{
	return accuracy;
}

std::string Blaster::getName()
{
	return name.getName();
}

void Blaster::setAccuracy(int a)
{
	accuracy = a;
}

void Blaster::assignPrice()
{
	setPrice(getDamage() + getAccuracy());
}

void Blaster::setName(std::string n)
{
	name.setName(n);
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
