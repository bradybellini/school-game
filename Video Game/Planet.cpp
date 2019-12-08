#include "Planet.h"

void Planet::addEnemies(int d)
{

}

Planet::Planet()
{

	enemies.push_back(&a);
	enemies.push_back(&b);
	enemies.push_back(&c);
	enemies.push_back(&boss);
}

void Planet::setPlanetName(std::string n)
{
	name.setName(n);
}

std::string Planet::getPlanetName()
{
	return name.getName();
}

void Planet::setPlanetType(std::string t)
{
	planetType = t;
}

std::string Planet::getPlanetType()
{
	return planetType;
}

int Planet::getDifficulty()
{
	return 0;
}

Alien* Planet::getEnemy(int e)
{
	return enemies[e];
}

void Planet::addEnemy(Alien* a)
{
	enemies.push_back(a);
}

void Planet::setDifficulty(int d)
{
}

Planet::~Planet()
{
}