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
	unique_ptr<Planet> p1;
	unique_ptr<Forrest> f1;
	p1 = move(f1);
	cout << f.getPlanetName()<< endl;
	s.addPlanets(&f);
	/*s.selectPlanet(0)->setPlanetName("cool");*/
		cout << s.selectPlanet(0)->getPlanetName()<< endl;
	for (int i =0; i<s.pla)

	
	return 0;
}