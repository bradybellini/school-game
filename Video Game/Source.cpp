#include <iostream>

#include "Planet.h"
#include "System.h"
#include <string>

using namespace std;

int main() {
	Planet p;
	Planet pp;
	Planet ppp;
	System s;
	System ss;
	cout << s.selectPlanet(2)->getPlanetName() << endl;
	cout << p.getPlanetName() << " " << pp.getPlanetName() << " " << ppp.getPlanetName();
	return 0;
}