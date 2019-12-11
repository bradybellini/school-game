#include "Desert.h"

Desert::Desert()
{
	setPlanetType("Desert");
	ex_heat.setMod(-2);
	ex_heat.setName("Extreme Heat");
	ex_heat.setLivable(false);
	addMod(&ex_heat);
	no_water.setMod(-2);
	no_water.setName("No Water");
	no_water.setLivable(false);
	addMod(&no_water);
}
