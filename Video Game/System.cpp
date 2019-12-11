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

System::~System()
{
}