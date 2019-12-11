#include "System.h"

System::System()
{

}

void System::addPlanets(Planet* planet)
{
	planets.push_back(planet);
}

void System::setDifficulty(int d)
{
	difficulty = d;
}

Planet* System::selectPlanet(int i)
{
	return planets[i];
}

int System::getSystemSize()
{
	return planets.size();
}

int System::getDifficulty()
{
	return 0;
}

bool System::isClear(System* s)
{
	int h = 0;
	for (int i = 0; i < s->getSystemSize(); i++) {
		h = s->selectPlanet(i)->aliens_dead();
		if (h) {
			h += 1;
		}
	}
	if (h == 4) {
		return true;
	}
	else {
		return false;
	}

}

System::~System()
{
}