#include "Ocean.h"

Ocean::Ocean()
{
	setPlanetType("Ocean");
	wet.setMod(-1);
	wet.setName("Wet");
	wet.setLivable(true);
	addMod(&wet);
	no_land.setMod(-2);
	no_land.setName("No Land");
	no_land.setLivable(false);
	addMod(&no_land);
}

