#pragma once
#ifndef DESERT_H

#include "Planet.h"
#include "Mod.h"
#include <vector>

class Desert : public Planet {
private:
	Mod ex_heat, no_water;


public:
	Desert();
};


#endif // !DESERT_H

