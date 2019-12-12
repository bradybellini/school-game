#include "Magma.h"

Magma::Magma()
{
	setPlanetType("Magma");
	ex_heat.setMod(-2);
	ex_heat.setName("Extreme Heat");
	ex_heat.setLivable(false);
	addMod(&ex_heat);
	radiation.setMod(-5);
	radiation.setName("Radiation");
	radiation.setLivable(false);
	addMod(&radiation);
}

bool Magma::livable()
{
	return false;
}
