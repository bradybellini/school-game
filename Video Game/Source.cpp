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

	cout << p.getPlanetName() << " " << pp.getPlanetName() << " " << ppp.getPlanetName();
	return 0;
}