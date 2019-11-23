#include "Planet.h"
#include <random>
#include <time.h>
#include "Name.h"

Planet::Planet()
{
}

void Planet::setPlanetName(std::string n)
{
	name.setName(n);
}

std::string Planet::getPlanetName()
{
	return name.getName();
}