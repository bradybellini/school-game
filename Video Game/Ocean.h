#pragma once
#ifndef OCEAN_H

#include "Planet.h"
#include "Mod.h"
#include <vector>

class Ocean : public Planet {
private:
	Mod wet, no_land;


public:
	Ocean();
};


#endif // !OCEAN_H
