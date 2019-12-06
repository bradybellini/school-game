#pragma once
#ifndef MAGMA_h

#include "Planet.h"
#include "Mod.h"
#include <string>
#include <vector>

class Magma :public Planet {
private:
	Mod extreme_heat, radiation;
	std::vector<Mod*> mods;
};


#endif // !MAGMA_h

