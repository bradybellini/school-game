#include "Arctic.h"

Arctic::Arctic()
{
	setPlanetType("Arctic");
	ex_cold.setMod(-2);
	ex_cold.setName("Extreme Cold");
	ex_cold.setLivable(false);
	addMod(&ex_cold);
	no_food.setMod(-2);
	no_food.setName("No Food");
	no_food.setLivable(false);
	addMod(&no_food);
}

bool Arctic::livable()
{
	return false;
}
