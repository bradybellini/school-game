#include "Planet.h"

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

void Planet::setPlanetType(std::string t)
{
	planetType = t;
}

std::string Planet::getPlanetType()
{
	return planetType;
}
