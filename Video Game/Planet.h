#pragma once
#ifndef PLANET_H

#include "PlanetName.h"
#include <iostream>
#include <string>

class Planet {
private:
	std::string planetType, planetEnvironment, planetName;
	int planetSize, planetDifficulty;
	PlanetName name;

public:
	Planet();
	void setPlanetType(std::string t);
	std::string getPlanetType();
	int getPlanetSize();
	void setPlanetSize(int s);
	void setPlanetEnvironment(std::string e);
	std::string getPlanetEnvironment();
	void setPlanetName(std::string n);
	std::string getPlanetName();
	void generatePlanet();
};

#endif // !PLANET_H
