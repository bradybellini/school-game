#include <iostream>

#include "Planet.h"
#include "System.h"
#include <string>

using namespace std;

int main() {
	Planet p;

	cout << p.getPlanetName() << " " << p.getPlanetType();
	return 0;
}