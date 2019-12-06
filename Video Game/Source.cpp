#include <iostream>

#include "Planet.h"
#include "System.h"
#include "Forrest.h"
#include "Mod.h"
#include <string>
#include <vector>

using namespace std;

int main() {
	Forrest f;
	System s;

	cout << f.getPlanetName() << endl;
	s.addPlanets(&f);
	/*s.selectPlanet(0)->setPlanetName("cool");*/
	cout << s.selectPlanet(0)->getPlanetName() << endl;
	for (int i = 0; i < s.getSystemSize(); i++) {
		if (Forrest* f_temp = dynamic_cast<Forrest*>(s.selectPlanet(i))) {
			cout << f_temp->getMod(0)->getMod() << endl;
		}
		else {
			cout << "did not work" << endl;
		}
	}

	return 0;
}