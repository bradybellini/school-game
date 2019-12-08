#include <iostream>

#include "Planet.h"
#include "System.h"
#include "Forrest.h"
#include "Mod.h"
#include "Ocean.h"
#include "Alien.h"
#include "Blaster.h"
#include "Player.h"
#include <string>
#include <vector>

using namespace std;

int main() {
	Blaster b;
	Alien a;
	System s;
	Forrest f;
	Ocean o;
	Player p;
	p.addItem(&b);
	for (int i = 0; i < p.getInvSize(); i++) {
		if (Blaster * b_temp = dynamic_cast<Blaster*>(p.getItem(i))) {
			cout << b_temp->getName() << endl;
		}
		else {
			cout << "did not work" << endl;
		}
	}
	//cout << a.getHealth() << endl;
	//a.takeDamage(b.giveDamage());
	//cout << a.getHealth() << endl;

	////cout << f.getMod(0)->getName()<< endl;
	//s.addPlanets(&f);
	//s.addPlanets(&o);
	//s.selectPlanet(0)->getEnemy(3)->takeDamage(b.giveDamage());
	//cout << s.selectPlanet(0)->getEnemy(3)->getHealth() << endl;

	///*s.selectPlanet(0)->setPlanetName("cool");*/
	//cout << s.selectPlanet(0)->getPlanetName() << endl;
	//for (int i = 0; i < s.getSystemSize(); i++) {
	//	if (Forrest* f_temp = dynamic_cast<Forrest*>(s.selectPlanet(i))) {
	//		cout << f_temp->getMod(0)->getEn<< endl;
	//	}
	//	else if (Ocean* o_temp = dynamic_cast<Ocean*>(s.selectPlanet(i))) {
	//		cout << o_temp->getMod(0)->getMod() << endl;
	//	}
	//	else {
	//		cout << "did not work" << endl;
	//	}

		
	//}

	return 0;
}