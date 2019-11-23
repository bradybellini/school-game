#pragma once
#ifndef SYSTEM_H

#include "Planet.h"
#include <string>
#include <vector>

class System {
private:
	std::vector<Planet*> planets;

public:

	void addPlanets(Planet planets);
};

#endif // !SYSTEM_H
