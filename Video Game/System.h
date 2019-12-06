#pragma once
#ifndef SYSTEM_H

#include "Planet.h"
#include "Forrest.h"
#include <string>
#include <vector>

class System {
private:
	std::vector<Planet*> planets;
	int z;

public:

	void addPlanets(Planet* planet);
	Planet* selectPlanet(int i);
	int getSystemSize();
	virtual ~System();
};

#endif // !SYSTEM_H
