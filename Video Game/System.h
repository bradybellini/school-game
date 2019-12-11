#pragma once
#ifndef SYSTEM_H

#include "Planet.h"
#include <string>
#include <vector>

class System {
private:
	std::vector<Planet*> planets;
	int z;
	int difficulty;

public:
	System();
	void addPlanets(Planet* planet), setDifficulty(int d);
	Planet* selectPlanet(int i);
	int getSystemSize(), getDifficulty();

	virtual ~System();
};

#endif // !SYSTEM_H
