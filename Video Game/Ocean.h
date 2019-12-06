#pragma once
#ifndef OCEAN_H

#include "Planet.h"
#include "Mod.h"
#include <vector>

class Ocean : public Planet {
private:
	Mod wet;
	std::vector<Mod*> mods;

public:
	Ocean();
	void addMod(Mod* m);
	Mod* getMod(int i);


};


#endif // !OCEAN_H
