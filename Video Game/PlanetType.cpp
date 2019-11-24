#include "PlanetType.h"

PlanetType::PlanetType()
{
	resistanceModifier = 0;
	environmentType = "NONE";
}

void PlanetType::setResistanceModifier(int d)
{
	resistanceModifier = d;
}

int PlanetType::getResistanceModifier()
{
	return resistanceModifier;
}

void PlanetType::setEnvironmentType(std::string e)
{
	environmentType = e;
}

std::string PlanetType::getEnvironmentType()
{
	return environmentType;
}