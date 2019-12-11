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
	bool clear = false;

public:
	System();
	void addPlanets(Planet* planet), setDifficulty(int d);
	Planet* selectPlanet(int i);
	int getSystemSize(), getDifficulty();
	bool isClear(System* s);
	virtual ~System();
};

#endif // !SYSTEM_H
