#pragma once
#ifndef MAGMA_h

#include "Planet.h"
#include "Mod.h"
#include <string>
#include <vector>

class Magma :public Planet {
private:
	Mod ex_heat, radiation;
public:
	Magma();
	bool livable();
};


#endif // !MAGMA_h

