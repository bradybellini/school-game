#include "Planet.h"
#include <random>
#include <time.h>

Planet::Planet()
{
	generatePlanet();
}

void Planet::setPlanetType(std::string t)
{
}

std::string Planet::getPlanetType()
{
	return planetType;
}

void Planet::setPlanetName(std::string n)
{
	name.setName(n);
}

std::string Planet::getPlanetName()
{
	return name.getName();
}

void Planet::generatePlanet()
{
	int r;

	std::string type[5] = { "Moon", "Arctic", "Desert", "Forest", "Magma" };

	srand(time(NULL));

	for (int i = 0; i < 1; i++) {
		r = rand() % 5;
		planetType = type[r];
	}
}