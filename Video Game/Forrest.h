#pragma once
#ifndef FORREST_H

#include "Planet.h"
#include "Mod.h"
#include <string>
#include <vector>


class Forrest : public Planet {
private:
	Mod thick_atmo, o2_rich;
	std::vector<Mod*> mods;


public:
	Forrest();
	void addMod(Mod* m);
	Mod* getMod(int i);


};


#endif // !FORREST_H

