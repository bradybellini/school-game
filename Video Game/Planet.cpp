#include "Planet.h"

void Planet::addEnemies(int d)
{

}

Planet::Planet()
{
	//difficulty = 1;
	//if (difficulty == 1) {
	//	enemies.push_back(&a1);
	//	enemies.push_back(&b1);
	//	enemies.push_back(&c1);
	//	enemies.push_back(&boss1);
	//}
	//else if (difficulty == 2) {
	//	enemies.push_back(&a1);
	//	enemies.push_back(&b1);
	//	enemies.push_back(&c1);
	//	enemies.push_back(&boss1);
	//	enemies.push_back(&a2);
	//	enemies.push_back(&b2);
	//	enemies.push_back(&c2);
	//	enemies.push_back(&boss2);
	//}
	enemies.push_back(&a1);
	enemies.push_back(&b1);
	enemies.push_back(&c1);
	enemies.push_back(&boss1);
	enemies.push_back(&a2);
	enemies.push_back(&b2);
	enemies.push_back(&c2);
	enemies.push_back(&boss2);

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

Planet::~Planet()
{
}