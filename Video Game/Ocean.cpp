#include "Ocean.h"

Ocean::Ocean()
{
	wet.setMod(-2);
	wet.setName("Wet");
	setPlanetName("Ocean");
	mods.push_back(&wet);

}

void Ocean::addMod(Mod* m)
{
	mods.push_back(m);
}

Mod* Ocean::getMod(int i)
{
	return mods[i];
}
