#include "Planet.h"

void Planet::addEnemies(int d)
{
}

Planet::Planet()
{
	enemies.push_back(&a1);
	enemies.push_back(&b1);
	enemies.push_back(&c1);
	enemies.push_back(&boss1);
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
	return difficulty;
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
	difficulty = d;
}

void Planet::addMod(Mod* m)
{
	mods.push_back(m);
}

void Planet::setlivable(bool liv)
{
	islivable = liv;
}

Mod* Planet::getMod(int i)
{
	return mods[i];
}

bool Planet::aliens_dead()
{
	if (enemies[3]->getHealth() == 0) {
		return true;
	}
	else {
		return false;
	}
}

bool Planet::livable()
{
	return islivable;
}

Planet::~Planet()
{
}