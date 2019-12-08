#include "Weapons.h"

Weapons::Weapons()
{
	name = "weapon";
	damage = 0;
	price = 1;
	attackCall = "you attacked";
}

int Weapons::getDamage()
{
	return damage;
}

int Weapons::getPrice()
{
	return price;
}

int Weapons::giveDamage()
{
	return damage;
}

std::string Weapons::getName()
{
	return name;
}

std::string Weapons::getAttackCall()
{
	return attackCall;
}

void Weapons::setPrice(int p)
{
	price = p;
}

void Weapons::setDamage(int d)
{
	damage = d;
}

void Weapons::setName(std::string n)
{
	name = n;
}
