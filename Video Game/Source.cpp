#include <iostream>

#include "Planet.h"
#include "System.h"
#include "Forrest.h"
#include "Mod.h"
#include <string>

using namespace std;

int main() {
	Forrest f;
	System s;
	s.addPlanets(&Forrest());
	//s.selectPlanet(0)->setPlanetName("cool");
		cout << s.selectPlanet(0)->getPlanetName() << endl;
	//cout << f.getPlanetType() << endl;
	//cout << f.getPlanetName() << endl;


	return 0;
}