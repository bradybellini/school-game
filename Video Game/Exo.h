#pragma once
#ifndef EXO_H

#include "Planet.h"
#include "Mod.h"
#include <vector>

class Exo : public Planet {
private:
	Mod o2_rich, thick_atmo, food_surplus;


public:
	Exo();
};



#endif // !EXO_H

