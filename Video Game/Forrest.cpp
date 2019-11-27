#include "Forrest.h"

Forrest::Forrest()
{
	thick_atmo.setMod(2);
	thick_atmo.setName("Thick Atmosphere");
	o2_rich.setMod(2);
	o2_rich.setName("Oxygen Rich");
	setPlanetType("Forrest");
}

void Forrest::addMod(Mod* m)
{
	mods.push_back(m);
}

Mod* Forrest::getMod(int i)
{
	return mods[i];
}


