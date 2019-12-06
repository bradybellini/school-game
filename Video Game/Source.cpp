#include <iostream>

#include "Planet.h"
#include "System.h"
#include "Forrest.h"
#include "Mod.h"
#include "Ocean.h"
#include "Maker.h"
#include "ForrestMaker.h"
#include "Alien.h"
#include <string>
#include <vector>

using namespace std;

int main() {
	Forrest f;
	System s;
	Ocean o;
	Alien* a;

	cout << f.getMod(0)->getName()<< endl;
	s.addPlanets(&f);
	s.addPlanets(&o);
	/*s.selectPlanet(0)->setPlanetName("cool");*/
	cout << s.selectPlanet(0)->getPlanetName() << endl;
	for (int i = 0; i < s.getSystemSize(); i++) {
		if (Forrest* f_temp = dynamic_cast<Forrest*>(s.selectPlanet(i))) {
			cout << f_temp->getMod(0)->getlivable() << endl;
		}
		else if (Ocean* o_temp = dynamic_cast<Ocean*>(s.selectPlanet(i))) {
			cout << o_temp->getMod(0)->getMod() << endl;
		}
		else {
			cout << "did not work" << endl;
		}

		Maker* mak = m;
		ForrestMaker *fm = ;
		
	}

	return 0;
}