#pragma once
#ifndef FORREST_H

#include "Planet.h"
#include "Mod.h"
#include <string>
#include <vector>


class Forrest : public Planet {
private:
	Mod thick_atmo, o2_rich;



public:
	Forrest();
	bool livable();
};


#endif // !FORREST_H

