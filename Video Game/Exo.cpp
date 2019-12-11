#include "Exo.h"

Exo::Exo()
{
	setPlanetType("Exo");
	addMod(&o2_rich);
	o2_rich.setName("Oxygen Rich");
	o2_rich.setMod(2);
	o2_rich.setLivable(true);
	addMod(&thick_atmo);
	thick_atmo.setName("Thick Atmosphere");
	thick_atmo.setMod(2);
	thick_atmo.setLivable(true);
	food_surplus.setName("Food Surplus");
	food_surplus.setMod(2);
	food_surplus.setLivable(true);

}
