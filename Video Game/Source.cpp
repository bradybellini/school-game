#include <iostream>

#include "Planet.h"
#include "System.h"
#include "Forrest.h"
#include "Mod.h"
#include <string>

using namespace std;

int main() {
	Planet p;
	Forrest f;
	System s;
	s.addPlanets(&Planet());
	cout << s.selectPlanet(0)->getPlanetName() << endl;
	//cout << f.getPlanetType() << endl;
	//cout << f.getPlanetName() << endl;


	return 0;
}