#include <iostream>

#include "Planet.h"
#include "System.h"
#include "Forrest.h"
#include "Mod.h"
#include "Ocean.h"
#include "Arctic.h"
#include "Exo.h"
#include "Magma.h"
#include "Desert.h"
#include "Alien.h"
#include "Blaster.h"
#include "Player.h"
#include "Windows.h"
#include "Medkit.h"
#include <string>
#include <vector>

using namespace std;

void game_easy();
void game_med();
void game_hard();
void load_game();
void intro();
int game_over(System* s);
Player p;

int main() {
	//all variables needed for main
	///////////////////////////////////
	bool quit = false;
	bool bg = false;
	bool save = false;
	bool setname = false;
	bool diff = false;
	bool intro = false;
	string name;
	int difficulty;
	///////////////////////////////////

	//all objects needed for main
	///////////////////////////////////

	///////////////////////////////////

	int x;

	while (!save) {
		cout << "1. Load Game" << endl << "2. New Game" << endl;;
		cin >> x;
		switch (x) {
		case 1: cout << "You have chosen to load a game" << endl;
			save = true;
			diff = true;
			setname = true;
			intro = true;
			break;
		case 2: cout << "You have chosen to start a new game" << endl;
			save = true;
			break;
		case 3:
			difficulty = 1;
			save = true;
			diff = true;
			setname = true;
			intro = true;
			break;
		default: cout << "Please pick from the options above" << endl;
		}
	}

	cout << endl;

	while (!setname) {
		cout << "Please enter a name for your character" << endl;
		cin >> name;
		p.setName(name);
		cout << "Hi " << name << ". Let's get started." << endl;
		cout << endl;
		setname = true;
	}

	cout << endl;

	while (!diff) {
		cout << "Let's choose a difficulty. Make sure to choose carefully, you can't change this unless you start a new game!" << endl;
		Sleep(200);
		cout << "1. Easy:" << endl << "   You just want to chill and experience the game." << endl;
		Sleep(200);
		cout << "2. Medium:" << endl << "   You have played the game before." << endl;
		Sleep(200);
		cout << "3. Hard:" << endl << "   You are on an Esports team for this game." << endl;
		cin >> x;
		switch (x) {
		case 1: cout << "You have chosen Easy, have fun!" << endl;
			difficulty = 1;
			diff = true;
			break;
		case 2: cout << "You have chosen Medium, good luck!" << endl;
			difficulty = 2;
			diff = true;
			break;
		case 3: cout << "You have chosen Hard, I hope you survive the first planet..." << endl;
			difficulty = 3;
			diff = true;
			break;
		default: cout << "Please pick from one of the options above" << endl;
			break;
		}
	}

	cout << endl;

	while (!intro) {
		cout << "The Earth has hit it's capcity on green house gases and it will be unlivable in the forseeable future" << endl;
		Sleep(3000);
		cout << "You have been tasked with finding a planet that humanity can move to and continue to live." << endl;
		Sleep(3000);
		cout << "Once you find a planet that is livable, you must then kill all enemies on the planet" << endl;
		Sleep(3000);
		cout << "If you die you lose..." << endl;
		Sleep(3000);
		cout << "Are you ready to start your journey? The fate of humanity depends on you..." << endl;
		cout << "1. Yes, I am ready to save humanity." << endl;
		cout << "2. I am not ready, I can't handle this pressure!" << endl;
		int x;
		cin >> x;
		switch (x) {
		case 1:
			intro = true;
			break;
		case 2:
			cout << endl << "The year is 2085..." << endl;
			Sleep(4500);
			cout << "That last human on earth died 5 years ago..." << endl;
			Sleep(4500);
			cout << "After human extinction the only species to thrive were..." << endl;
			Sleep(5000);
			cout << "Koala's?" << endl;
			Sleep(3000);
			cout << "The Koala's grow strong over time, killing any other animal or living thing in its way" << endl;
			Sleep(3000);
			cout << "Thousands of years pass and the Koala's have evolved to be smart and think for themselves" << endl;
			Sleep(3000);
			cout << "One day when on an expedition to try and uncover what species thrived on this planet before the Koala's.." << endl;
			Sleep(3000);
			cout << "They uncover this 'human' looking thing." << endl;
			Sleep(3000);
			cout << "With their curiosity now sparked, the Koala's think they can bring this 'human' back to life" << endl;
			Sleep(3000);
			cout << "After many years of research, they think they managed to create a mixture to bring the human back to life" << endl;
			Sleep(3000);
			cout << "They inject it in the human...and it wakes up..." << endl;
			main();
		default: cout << "Please pick from one of the options above" << endl;
			break;
		}
	}

	difficulty = 1;
	if (difficulty == 1) {
		cout << "Generating the Star System..." << endl;
		game_easy();
	}
	else if (difficulty == 2) {
		game_med();
	}
	else {
		game_hard();
	}
	//cout << b.getNewPrice();
	//for (int i = 0; i < p.getInvSize(); i++) {
	//	if (Blaster * b_temp = dynamic_cast<Blaster*>(p.getItem(i))) {
	//		cout << b_temp->getName() << endl;
	//	}
	//	else {
	//		cout << "did not work" << endl;
	//	}
	//}
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

void game_easy() {
	//objects needed
	System s_easy;
	Forrest f1;
	Exo exo1;
	Magma m1;
	Desert d1, d2;
	Arctic a1;
	Ocean o1, o2;
	Blaster b1;
	Medkit med1;
	med1.setStack(3);
	p.addItem(&b1);
	p.addItem(&med1);
	


	//adding planets to system
	s_easy.addPlanets(&o2);
	s_easy.addPlanets(&d1);
	s_easy.addPlanets(&f1);
	s_easy.addPlanets(&m1);
	s_easy.addPlanets(&d2);
	s_easy.addPlanets(&o1);
	s_easy.addPlanets(&exo1);
	s_easy.addPlanets(&a1);

	bool easy_intro = false;
	bool pick_planet = false;
	bool fight = false;
	bool win = false;
	bool game_loop = false;
	bool on_planet = false;
	bool attacking = false;
	bool shopping = false;
	bool checking_inv = false;
	bool viewing_info = false;

	int planet;
	while (!easy_intro) {
		/*intro();*/
		cout << "Generating Planets..." << endl;
		cout << endl;
		easy_intro = true;
	}
	while (!game_loop) {
		while (!pick_planet) {
			Sleep(2000);
			cout << "Please select the Planet you would like to visit." << endl;
			for (int i = 0; i < s_easy.getSystemSize(); i++) {
				cout << i + 1 << ". " << s_easy.selectPlanet(i)->getPlanetName() << endl;
			}
			int y;
			cin >> y;
			switch (y)
			{
			case 1:cout << "You have selected " << s_easy.selectPlanet(0)->getPlanetName() << endl;
				if (s_easy.selectPlanet(0)->aliens_dead()) {
					cout << "You have already cleared this Planet! Please select another..." << endl;
					break;
				}
				else {
					planet = 0;
					pick_planet = true;
					break;
				}

			default: cout << "Please pick from one of the Planets above" << endl;
				break;
			}
		}
		while (!on_planet) {
			cout << "You encounter an Alien, what would you like to do?" << endl;
			cout << "1. Attack" << endl;
			cout << "2. View Inventory" << endl;
			cout << "3. Visit Planet Store" << endl;
			cout << "4. View Player Info" << endl;
			cout << "5. Go back to Planet Selection" << endl;
			cout << "6. Save the Game" << endl;
			int y;
			cin >> y;
			switch (y)
			{
			case 1:

			case 5:
				pick_planet = false;
				on_planet = true;
				break;
			default:
				break;
			}
			while (!attacking) {
				int attacking_enemy = 0;
				for (int i = 0; i < 4; i++) {
					if (s_easy.selectPlanet(planet)->getEnemy(i)->getHealth() == 0) {
						attacking_enemy += 1;
						p.addCredits(10);
					}
				}
				cout << "What item would you like to use?" << endl;
				for (int i = 0; i < p.getInvSize(); i++) {
					cout << i + 1 << ". " << p.getItem(i)->getType() << ": " << p.getItem(i)->getName() << endl;
				}
				int y;
				int temp_health;
				cin >> y;
				switch (y) {
				case 1:
					if (Blaster* b_temp = dynamic_cast<Blaster*>(p.getItem(0))) {
						temp_health = s_easy.selectPlanet(planet)->getEnemy(attacking_enemy)->getHealth();
						s_easy.selectPlanet(planet)->getEnemy(attacking_enemy)->takeDamage(b_temp->giveDamage());
						if (temp_health - s_easy.selectPlanet(planet)->getEnemy(attacking_enemy)->getHealth() == 0) {
							cout << "You missed!" << endl;
						}
						else {
							cout << "You did " << temp_health - s_easy.selectPlanet(planet)->getEnemy(attacking_enemy)->getHealth() << " damage!" << endl;
							cout << "Alien: " << s_easy.selectPlanet(planet)->getEnemy(attacking_enemy)->taunt() << endl;
						}
					}
					else {
						if (Medkit* m_temp = dynamic_cast<Medkit*>(p.getItem(0))) {
							p.addHealth(m_temp->getHeal());
							m_temp->setStack(m_temp->getStack() - 1);
							if (m_temp->getStack() == 0) {
								p.removeItem(0);
							}
						}
					}
				default:
					break;
				}
			}
			while (!shopping) {
			}
			while (!checking_inv) {
			}

			while (!viewing_info) {
			}
		}
	}
}

void game_med() {
}

void game_hard() {
}

void intro() {
	cout << "As stated before, in order to win you need to find a planet that is suitable for humanity and kill all aliens on the planet. " << endl;
	Sleep(4000);
	cout << "You can use your best judgement, or you can kill some aliens to buy items that will help you find a suitable planet faster. " << endl;
	Sleep(6000);
	cout << "Each planet has some attributes to it that define whether humans can live on it or not. For example, Oxygen Rich would probably be pretty good, but Extreme Cold probably won’t be suitable." << endl;
	Sleep(6000);
	cout << "You won’t know what attributes planets have until you visit them, but again you can get items that can help you with that. " << endl;
	Sleep(5000);
	cout << "Now, let’s choose your first planet to visit." << endl;
}

//int game_over(System* s)
//{
//	if (s->selectPlanet)
//	if (p.getHealth() == 0) {
//		return 1;
//	}
//	else if{}
//
//}