#pragma once
#ifndef ARCTIC_H


#include "Planet.h"
#include "Mod.h"
#include <vector>

class Arctic : public Planet {
private:
	Mod ex_cold, no_food;


public:
	Arctic();
	bool livable();
};


#endif // !ARCTIC_H
