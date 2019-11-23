#include <iostream>

#include "Planet.h"
#include "System.h"
#include <string>

using namespace std;

int main() {
	Planet p;
	p.setPlanetType();
	cout << p.getPlanetName() << " " << p.getPlanetType();
	return 0;
}