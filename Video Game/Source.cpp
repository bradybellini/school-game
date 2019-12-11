#include <iostream>

#include "Planet.h"
#include "System.h"
#include "Forrest.h"
#include "Mod.h"
#include "Ocean.h"
#include "Alien.h"
#include "Blaster.h"
#include "Player.h"
#include "Windows.h"
#include <string>
#include <vector>

using namespace std;


void game_easy();
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
	System s1, s2, s3;
	Forrest f1, f2;
	Ocean o1;
	s1.addPlanets(&o1);
	s1.addPlanets(&f1);

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
		default: cout << "Please pick from the options above" << endl;
		}
	}

	cout << endl;

	while(!setname) {
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
		Sleep(500);
		cout << "1. Easy:" << endl << "   You just want to chill and experience the game." << endl;
		Sleep(500);
		cout << "2. Medium:" << endl << "   You have played the game before." << endl;
		Sleep(500);
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
		Sleep(1000);
		cout << "You have been tasked with finding a planet that humanity can move to and continue to live." << endl;
		Sleep(1000);
		cout << "Once you find a planet that is livable, you must then kill all enemies on the planet" << endl;
		Sleep(1000);
		cout << "If you die you lose..." << endl;
		Sleep(1000);
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
			Sleep(1500);
			cout << "That last human on earth died 5 years ago..." << endl;
			Sleep(1500);
			cout << "After human extinction the only species to thrive were..." << endl;
			Sleep(2000);
			cout << "Koala's?" << endl;
			Sleep(500);
			cout << "The Koala's grow strong over time, killing any other animal or living thing in its way" << endl;
			Sleep(500);
			cout << "Thousands of years pass and the Koala's have evolved to be smart and think for themselves" << endl;
			Sleep(500);
			cout << "One day when on an expedition to try and uncover what species thrived on this planet before the Koala's.." << endl;
			Sleep(500);
			cout << "They uncover this 'human' looking thing." << endl;
			Sleep(500);
			cout << "With their curiosity now sparked, the Koala's think they can bring this 'human' back to life" << endl;
			Sleep(500);
			cout << "After many years of research, they think they managed to create a mixture to bring the human back to life" << endl;
			Sleep(500);
			cout << "They inject it in the human...and it wakes up..." << endl;
			main();
		default: cout << "Please pick from one of the options above" << endl;
			break;
		}
	}

	difficulty = 1;
	if (difficulty == 1) {
	game_easy();
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
	int x;
	bool easy = false;
	while (!easy) {
		cout << "This is a test" << endl;
		cout << "1. true to break" << " 2. False" << endl;
		cin >> x;
		switch (x) {
		case 1: cout << "You have chosen Easy, have fun!" << endl;

		case 2: cout << "You have chosen Medium, good luck!" << endl;
			easy = true;
			break;
		case 3: cout << "You have chosen Hard, I hope you survive the first planet..." << endl;
			easy = true;
			break;
		default: cout << "Please pick from one of the options above" << endl;
		}
	}

}