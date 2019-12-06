#include "System.h"

void System::addPlanets(Planet* planet)
{
	planets.push_back(planet);
}

Planet* System::selectPlanet(int i)
{
	return planets[i];
}

int System::getSystemSize()
{
	return planets.size();
}

System::~System()
{
}