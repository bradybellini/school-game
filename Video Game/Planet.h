#pragma once
#ifndef PLANET_H

#include "PlanetName.h"
#include <iostream>
#include <string>

class Planet {
private:
	PlanetName name;
	std::string planetType;
	int difficulty;


public:
	Planet();
	void setPlanetName(std::string n);
	std::string getPlanetName();
	void setPlanetType(std::string t);
	std::string getPlanetType();
	virtual ~Planet();
};

#endif // !PLANET_H
