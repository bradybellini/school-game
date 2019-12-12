#include "Forrest.h"

Forrest::Forrest()
{
	setPlanetType("Forrest");
	addMod(&o2_rich);
	o2_rich.setName("Oxygen Rich");
	o2_rich.setMod(2);
	o2_rich.setLivable(true);
	addMod(&thick_atmo);
	thick_atmo.setName("Thick Atmosphere");
	thick_atmo.setMod(2);
	thick_atmo.setLivable(true);
	setlivable(true);
}