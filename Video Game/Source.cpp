//Brady Bellini
//I certify this is my own work

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
#include <fstream>

using namespace std;

void game_easy(bool l);
void intro();
Player p;

int main() {

	//all variables needed for main
	bool quit = false;
	bool bg = false;
	bool save = false;
	bool setname = false;
	bool diff = false;
	bool intro = false;
	string name;
	bool load = false;
	int difficulty = 0;


	int x;
	//load or save game loop
	while (!save) {
		cout << "Welcome Human!" << endl;
		cout << "1. Load Game" << endl << "2. New Game" << endl;;
		cin >> x;
		switch (x) {
		case 1: cout << "You have chosen to load a game." << endl;
			difficulty = 1;
			load = false;
			diff = true;
			setname = true;
			intro = true;
			save = true;
			break;
		case 2: cout << "You have chosen to start a new game." << endl;
			save = true;
			break;
		default: cout << "Please pick from the options above" << endl;
		}
	}

	cout << endl;
	//set your character name
	while (!setname) {
		cout << "Please enter a name for your character:" << endl;
		cin >> name;
		p.setName(name);
		cout << "Hi " << name << ". Let's get started." << endl;
		cout << endl;
		difficulty = 1;
		setname = true;
	}

	cout << endl;
	//taken out due to time

	//while (!diff) {
	//	cout << "Let's choose a difficulty. Make sure to choose carefully, you can't change this unless you start a new game!" << endl;
	//	Sleep(200);
	//	cout << "1. Easy:" << endl << "   You just want to chill and experience the game." << endl;
	//	Sleep(200);
	//	cout << "2. Medium:" << endl << "   You have played the game before." << endl;
	//	Sleep(200);
	//	cout << "3. Hard:" << endl << "   You are on an Esports team for this game." << endl;
	//	cin >> x;
	//	switch (x) {
	//	case 1: cout << "You have chosen Easy, have fun!" << endl;
	//		
	//		diff = true;
	//		break;
	//	case 2: cout << "You have chosen Medium, good luck!" << endl;
	//		difficulty = 2;
	//		diff = true;
	//		break;
	//	case 3: cout << "You have chosen Hard, I hope you survive the first planet..." << endl;
	//		difficulty = 3;
	//		diff = true;
	//		break;
	//	default: cout << "Please pick from one of the options above" << endl;
	//		break;
	//	}
	//}

	cout << endl;
	//intro dialogue
	while (!intro) {
		cout << "The Earth has hit its capacity on greenhouse gases and soon, humans will not be able to live here on earth." << endl;
		Sleep(3000);
		cout << "You have been tasked with finding a planet that humanity can move to and continue to live." << endl;
		Sleep(3000);
		cout << "Once you find a planet that humans can live on, you must then kill all enemies on that planet." << endl;
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
			load = true;
			intro = true;
			break;
		case 2:
			cout << endl << "The year is 2085..." << endl;
			Sleep(4500);
			cout << "That last human on earth died 5 years ago..." << endl;
			Sleep(4500);
			cout << "After human extinction the only species to survive and thrive were..." << endl;
			Sleep(6000);
			cout << "Koala's?" << endl;
			Sleep(4000);
			cout << "The Koala's grow strong over time, killing any other animal and living thing in its way." << endl;
			Sleep(4000);
			cout << "Thousands of years pass and the Koala's have evolved to be smart and think for themselves, creating colonies and structured government." << endl;
			Sleep(4000);
			cout << "One day when on an expedition to try and uncover what species thrived on this planet before the Koala's..." << endl;
			Sleep(4000);
			cout << "They uncover this 'human' looking thing." << endl;
			Sleep(4000);
			cout << "With their curiosity now sparked, the Koala's think they can bring this 'human' back to life." << endl;
			Sleep(4000);
			cout << "After many years of research, they think they managed to create a mixture to bring the 'human' back to life." << endl;
			Sleep(4000);
			cout << "They inject it in the human...and..." << endl;
			Sleep(4000);
			cout << "The 'human' wakes up..." << endl;
			Sleep(6000);
			main();
		default: cout << "Please pick from one of the options above" << endl;
			break;
		}
	}

	//was used for difficulty, now it just starts the general game loop
	if (!load) {
		//I added this line in because I have a sleep in the planet class that is needed to change the seed of random which uses time
		//makes it seem like something is happening, which it is
		cout << "Loading Game..." << endl;
		game_easy(load);
	}
	else {
		cout << "Generating Star System..." << endl;

		game_easy(load);
	}

	return 0;
}

void game_easy(bool l) {
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
	med1.setPrice(10);
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



	//booleans needed for traversing the "While loop tree"
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
	bool save_game = false;

	//load game
	while (!l) {

		ifstream fin("save_data.dat");

		if (!fin) {
			cout << endl;
			cerr << "Save File not found!" << endl;
			cout << endl;
			l = true;
			main();
		}

		string pname, i_type, p_name;
		int credits, health;
		bool a_dead;
		
		fin >> pname;
		p.setName(pname);
		fin >> credits;
		p.addCredits(credits - 40);
		fin >> health;
		p.setHealth(health);

		for (int i = 0; i < 8; i++) {
			fin >> p_name;
			s_easy.selectPlanet(i)->setPlanetName(p_name);
			fin >> a_dead;
			if (a_dead) {
				s_easy.selectPlanet(i)->getEnemy(3)->setHealth(0);
			}
			
		}
		while (fin >> i_type) {
			if (i_type == "Blaster") {
				p.getItem(0)->setType("Blaster");
			}
			else {
				med1.setStack(1);
				p.addItem(&med1);
			}
		}




		fin.close();
		easy_intro = true;
		l = true;
	}

	int planet;
	//intro after you make a character
	while (!easy_intro) {
		Sleep(1000);
		cout << "Generating Planets..." << endl;
		Sleep(2000);
		intro();
		cout << endl;
		easy_intro = true;
	}
	//The general game loop
	while (!game_loop) {
		//loop to pick a planet to go to first
		while (!pick_planet) {
			Sleep(2000);
			cout << endl;
			//for pikcing the planet, it assigns the position of the planet chosen in the system vector to the planet variable so it can be
			//referenced later on and used in other places
			cout << "Please select the Planet you would like to visit." << endl;
			for (int i = 0; i < s_easy.getSystemSize(); i++) {
				cout << i + 1 << ". " << s_easy.selectPlanet(i)->getPlanetName() << endl;
			}
			int y;
			//this also checks to see if you have killed all of the aliens on the planet, and if it is not livable and all aliens have
			//been killed, it wont let you go back because there is nothing to do there.
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
					attacking = false;
					on_planet = false;
					pick_planet = true;
					break;
				}
			case 2:cout << "You have selected " << s_easy.selectPlanet(1)->getPlanetName() << endl;
				if (s_easy.selectPlanet(1)->aliens_dead()) {
					cout << "You have already cleared this Planet! Please select another..." << endl;
					break;
				}
				else {
					planet = 1;
					attacking = false;
					on_planet = false;
					pick_planet = true;
					break;
				}
			case 3:cout << "You have selected " << s_easy.selectPlanet(2)->getPlanetName() << endl;
				if (s_easy.selectPlanet(2)->aliens_dead()) {
					cout << "You have already cleared this Planet! Please select another..." << endl;
					break;
				}
				else {
					planet = 2;
					attacking = false;
					on_planet = false;
					pick_planet = true;
					break;
				}
			case 4:cout << "You have selected " << s_easy.selectPlanet(3)->getPlanetName() << endl;
				if (s_easy.selectPlanet(3)->aliens_dead()) {
					cout << "You have already cleared this Planet! Please select another..." << endl;
					break;
				}
				else {
					planet = 3;
					attacking = false;
					on_planet = false;
					pick_planet = true;
					break;
				}
			case 5:cout << "You have selected " << s_easy.selectPlanet(4)->getPlanetName() << endl;
				if (s_easy.selectPlanet(4)->aliens_dead()) {
					cout << "You have already cleared this Planet! Please select another..." << endl;
					break;
				}
				else {
					planet = 4;
					attacking = false;
					on_planet = false;
					pick_planet = true;
					break;
				}
			case 6:cout << "You have selected " << s_easy.selectPlanet(5)->getPlanetName() << endl;
				if (s_easy.selectPlanet(5)->aliens_dead()) {
					cout << "You have already cleared this Planet! Please select another..." << endl;
					break;
				}
				else {
					planet = 5;
					attacking = false;
					on_planet = false;
					pick_planet = true;
					break;
				}
			case 7:cout << "You have selected " << s_easy.selectPlanet(6)->getPlanetName() << endl;
				if (s_easy.selectPlanet(6)->aliens_dead()) {
					cout << "You have already cleared this Planet! Please select another..." << endl;
					break;
				}
				else {
					planet = 6;
					attacking = false;
					on_planet = false;
					pick_planet = true;
					break;
				}
			case 8:cout << "You have selected " << s_easy.selectPlanet(7)->getPlanetName() << endl;
				if (s_easy.selectPlanet(7)->aliens_dead()) {
					cout << "You have already cleared this Planet! Please select another..." << endl;
					break;
				}
				else {
					planet = 7;
					attacking = false;
					on_planet = false;
					pick_planet = true;
					break;
				}

			default: cout << "Please pick from one of the Planets above" << endl;
				break;
			}
		}
		//options to pick when you are on the planet
		//this is like the "player" menu. I have been using like a tree of while loops that can be turned "on" or "off" to
		//traverse thru the different menus. I wasnt quite sure of how I could have done this a different way, but things were kinda
		//unnecessarily complex with the whole planet system, but I wanted to try and go thru with it anyway as it seemed like a more fun challenge
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
				attacking = false;
				pick_planet = true;
				on_planet = true;
				break;
			case 2:
				attacking = true;
				checking_inv = false;
				pick_planet = true;
				on_planet = true;
				break;
			case 3:
				attacking = true;
				checking_inv = true;
				shopping = false;
				pick_planet = true;
				on_planet = true;
				break;
			case 4:
				attacking = true;
				checking_inv = true;
				shopping = true;
				viewing_info = false;
				pick_planet = true;
				on_planet = true;
				break;
			case 5:
				attacking = true;
				checking_inv = true;
				shopping = true;
				viewing_info = true;
				pick_planet = false;
				on_planet = true;
				break;
			case 6:
				attacking = true;
				checking_inv = true;
				shopping = true;
				viewing_info = true;
				save_game = false;
				pick_planet = true;
				on_planet = true;
				break;
			default:
				cout << "Please select an option from above" << endl;
				break;
			}
		}
		//loop for when you are attacking an enemy 
		//this is where the bulk of the logic and everything happens. A lot of checks need to take place in order to make sure everything
		//functions how it is intended to. I'm sure this could be simplified quite a bit, but it works and I am going to roll with it
		while (!attacking) {
			int attacking_enemy = 0;
			//add money everytime you kill an enemy and counts how many enemies you have killed. When attacking_enemy equals 4, you
			//have killed all the aliens on the planet.
			for (int i = 0; i < 4; i++) {
				if (s_easy.selectPlanet(planet)->getEnemy(i)->getHealth() == 0) {
					attacking_enemy += 1;
					
				}
			}
			cout << "What item would you like to use?" << endl;
			for (int i = 0; i < p.getInvSize(); i++) {
				cout << i + 1 << ". " << p.getItem(i)->getType() << ": " << p.getItem(i)->getName() << endl;
			}
			int y;
			int temp_health = 0;
			cin >> y;
			switch (y) {
			case 1:
				//some of this could have probably been moved into the classes cpp file, but I feel like I moved as much as I can into it for now
				//This checks for a miss, how much damage you do, how much health you and the alien have, and logic for using the medkit.
				if (Blaster* b_temp = dynamic_cast<Blaster*>(p.getItem(0))) {
					temp_health = b_temp->giveDamage();
					cout << endl;
					if (temp_health == 0) {
						cout << "You missed!" << endl;
						p.takeDamage(s_easy.selectPlanet(planet)->getEnemy(attacking_enemy)->getAttack());
						cout << "The Alien does " << s_easy.selectPlanet(planet)->getEnemy(attacking_enemy)->getAttack() << " damage to you!" << endl;
						cout << "You now have " << p.getHealth() << " health." << endl;
					}
					else {
						s_easy.selectPlanet(planet)->getEnemy(attacking_enemy)->takeDamage(temp_health);
						cout << "You did " << temp_health << " damage!" << endl;
						cout << "Alien: " << s_easy.selectPlanet(planet)->getEnemy(attacking_enemy)->taunt() << endl;
						cout << endl;
						p.takeDamage(s_easy.selectPlanet(planet)->getEnemy(attacking_enemy)->getAttack());
						cout << "The Alien does " << s_easy.selectPlanet(planet)->getEnemy(attacking_enemy)->getAttack() << " damage to you!" << endl;
						cout << "You now have " << p.getHealth() << " health." << endl;
						if (s_easy.selectPlanet(planet)->getEnemy(attacking_enemy)->getHealth() == 0) {
							cout << "You killed the Alien!" << endl;
							on_planet = false;
							shopping = true;
							checking_inv = true;
							viewing_info = true;
							attacking = true;
						}
					}
				}
				else {
					if (Medkit* m_temp = dynamic_cast<Medkit*>(p.getItem(0))) {
						p.addHealth(m_temp->getHeal());
						cout << "You have been healed " << m_temp->getHeal() << " and now have " << p.getHealth() << " health." << endl;
						m_temp->setStack(m_temp->getStack() - 1);
						p.takeDamage(s_easy.selectPlanet(planet)->getEnemy(attacking_enemy)->getAttack());
						cout << "The Alien does " << s_easy.selectPlanet(planet)->getEnemy(attacking_enemy)->getAttack() << " damage to you!" << endl;
						cout << "You now have " << p.getHealth() << " health." << endl;
						if (m_temp->getStack() == 0) {
							p.removeItem(0);
						}
					}
				}

				break;
			case 2:
				if (Blaster* b_temp = dynamic_cast<Blaster*>(p.getItem(1))) {
					temp_health = b_temp->giveDamage();
					cout << endl;
					if (temp_health == 0) {
						cout << "You missed!" << endl;
						p.takeDamage(s_easy.selectPlanet(planet)->getEnemy(attacking_enemy)->getAttack());
						cout << "The Alien does " << s_easy.selectPlanet(planet)->getEnemy(attacking_enemy)->getAttack() << " damage to you!" << endl;
						cout << "You now have " << p.getHealth() << " health." << endl;
					}
					else {
						s_easy.selectPlanet(planet)->getEnemy(attacking_enemy)->takeDamage(temp_health);
						cout << "You did " << temp_health << " damage!" << endl;
						cout << "Alien: " << s_easy.selectPlanet(planet)->getEnemy(attacking_enemy)->taunt() << endl;
						cout << endl;
						p.takeDamage(s_easy.selectPlanet(planet)->getEnemy(attacking_enemy)->getAttack());
						cout << "The Alien does " << s_easy.selectPlanet(planet)->getEnemy(attacking_enemy)->getAttack() << " damage to you!" << endl;
						cout << "You now have " << p.getHealth() << " health." << endl;
						if (s_easy.selectPlanet(planet)->getEnemy(attacking_enemy)->getHealth() == 0) {
							cout << "You killed the Alien!" << endl;
							on_planet = false;
							shopping = true;
							checking_inv = true;
							viewing_info = true;
							attacking = true;
						}
					}
				}
				else {
					if (Medkit* m_temp = dynamic_cast<Medkit*>(p.getItem(1))) {
						p.addHealth(m_temp->getHeal());
						cout << "You have been healed " << m_temp->getHeal() << " and now have " << p.getHealth() << " health." << endl;
						m_temp->setStack(m_temp->getStack() - 1);
						p.takeDamage(s_easy.selectPlanet(planet)->getEnemy(attacking_enemy)->getAttack());
						cout << "The Alien does " << s_easy.selectPlanet(planet)->getEnemy(attacking_enemy)->getAttack() << " damage to you!" << endl;
						cout << "You now have " << p.getHealth() << " health." << endl;
						if (m_temp->getStack() == 0) {
							p.removeItem(1);
						}
					}
				}

				break;
			case 3:
				if (Blaster* b_temp = dynamic_cast<Blaster*>(p.getItem(2))) {
					temp_health = b_temp->giveDamage();
					cout << endl;
					if (temp_health == 0) {
						cout << "You missed!" << endl;
						p.takeDamage(s_easy.selectPlanet(planet)->getEnemy(attacking_enemy)->getAttack());
						cout << "The Alien does " << s_easy.selectPlanet(planet)->getEnemy(attacking_enemy)->getAttack() << " damage to you!" << endl;
						cout << "You now have " << p.getHealth() << " health." << endl;
					}
					else {
						s_easy.selectPlanet(planet)->getEnemy(attacking_enemy)->takeDamage(temp_health);
						cout << "You did " << temp_health << " damage!" << endl;
						cout << "Alien: " << s_easy.selectPlanet(planet)->getEnemy(attacking_enemy)->taunt() << endl;
						cout << endl;
						p.takeDamage(s_easy.selectPlanet(planet)->getEnemy(attacking_enemy)->getAttack());
						cout << "The Alien does " << s_easy.selectPlanet(planet)->getEnemy(attacking_enemy)->getAttack() << " damage to you!" << endl;
						cout << "You now have " << p.getHealth() << " health." << endl;
						if (s_easy.selectPlanet(planet)->getEnemy(attacking_enemy)->getHealth() == 0) {
							cout << "You killed the Alien!" << endl;
							on_planet = false;
							shopping = true;
							checking_inv = true;
							viewing_info = true;
							attacking = true;
						}
					}
				}
				else {
					if (Medkit* m_temp = dynamic_cast<Medkit*>(p.getItem(2))) {
						p.addHealth(m_temp->getHeal());
						cout << "You have been healed " << m_temp->getHeal() << " and now have " << p.getHealth() << " health." << endl;
						m_temp->setStack(m_temp->getStack() - 1);
						p.takeDamage(s_easy.selectPlanet(planet)->getEnemy(attacking_enemy)->getAttack());
						cout << "The Alien does " << s_easy.selectPlanet(planet)->getEnemy(attacking_enemy)->getAttack() << " damage to you!" << endl;
						cout << "You now have " << p.getHealth() << " health." << endl;
						if (m_temp->getStack() == 0) {
							p.removeItem(2);
						}
					}
				}

				break;
			default: cout << "Please choose from one of the options above" << endl;
				break;
			}
			//this is the logic for winning, losing, and killing all aliens on a planet that is not livable
			//aliens_dead check if a planet has any living aliens on it( aliens with health that doesnt equal 0)
			if (p.getHealth() == 0) {
				cout << "You have died!" << endl << "Make sure to keep an eye on your health next time!" << endl;
				exit(0);
			}
			else if (s_easy.selectPlanet(planet)->aliens_dead() && s_easy.selectPlanet(planet)->livable()) {
				cout << "You have killed all the aliens on this planet and humans can live on this planet!" << endl;
				cout << "You have won!" << endl;
				exit(0);
			}
			else if (s_easy.selectPlanet(planet)->aliens_dead() && !s_easy.selectPlanet(planet)->livable()) {
				cout << "You have killed all the Aliens but it is not livable!" << endl;
				cout << "You will need to choose a different planet!" << endl;
				pick_planet = false;
				on_planet = true;
				shopping = true;
				checking_inv = true;
				viewing_info = true;
				attacking = true;
			}
			else {
				p.addCredits(10);
				cout << endl;
				cout << "You still have enemies to kill on this planet!" << endl;
				cout << endl;
			}
		}
		//loop to check your inventory outside of combat
		while (!checking_inv) {
			//just list everything that the player has in their inventory
			for (int i = 0; i < p.getInvSize(); i++) {
				cout << p.getItem(i)->getType() << endl;
			}
			cout << endl;
			cout << "1. Go back to menu" << endl;
			int y;
			cin >> y;
			switch (y) {
			case 1:
				on_planet = false;
				shopping = true;
				viewing_info = true;
				pick_planet = true;
				save_game = true;
				checking_inv = true;
				break;
			default:
				cout << "Please press '1' to go back." << endl;
				break;
			}
		}
		//loop to visit the shop
		while (!shopping) {
			//When first making the shop, I had some problems when instantiating and object here and then adding it to the players inventory
			//The item created was added, but it wouldnt work when trying to use it. Im not quite sure what caused it, but when I created the
			//object at the beggining of this function when I create the others, it seems to work. It is a lot simplier that I planned, but it works
			cout << endl;
			cout << "Your Credits: " << p.getCredits() << endl;
			cout << endl;
			cout << "Items to purchase: " << endl;
			cout << "1. 3 Medkits: Heals for 5 health | 50 credits" << endl;
			cout << endl;
			cout << "2. Go back to menu" << endl;
			int y;
			cin >> y;

			switch (y) {
			case 1:
				if (p.getCredits() >= med1.getPrice()) {
					for (int i = 0; i < p.getInvSize(); i++) {
						if (p.getItem(i)->getType() == "Medkit") {
							if (Medkit * m_temp = dynamic_cast<Medkit*>(p.getItem(i))) {
								m_temp->setStack(m_temp->getStack() + med1.getStack());

							}
						}
						else {
							p.addItem(&med1);
						}
					}
					p.addCredits(-10);
					cout << "You have bought 3 Medkits!" << endl;
					cout << "You now have " << p.getCredits() << " Credits." << endl;
					cout << endl;
				}
				else {
					cout << "You don't have enough credits!" << endl;
					cout << "Your Credits: " << p.getCredits() << endl;
				}
				break;

			case 2:
				on_planet = false;
				shopping = true;
				viewing_info = true;
				pick_planet = true;
				save_game = true;
				shopping = true;
				break;
			default:
				cout << "Please press '2' to go back." << endl;
				break;
			}
		}
		//loop to view basic character info
		while (!viewing_info) {
			//just lists all things that are related to the player and some other general info.
			cout << "About " << p.getName() << endl;
			cout << "Health: " << p.getHealth() << endl;
			cout << "Credits: " << p.getCredits() << endl;
			cout << "Current Planet: " << s_easy.selectPlanet(planet)->getPlanetName() << endl;
			cout << endl;
			cout << "1. Go back to menu" << endl;
			int y;
			cin >> y;
			switch (y) {
			case 1:
				on_planet = false;
				shopping = true;
				viewing_info = true;
				pick_planet = true;
				save_game = true;
				viewing_info = true;
				break;
			default:
				cout << "Please press '1' to go back." << endl;
				break;
			}
		}
		//save the game
		while (!save_game) {
			ofstream out("save_data.dat");
			out << p.getName() << endl;
			out << p.getCredits() << endl;
			out << p.getHealth() << endl;
			for (int i = 0; i < s_easy.getSystemSize(); i++) {
				out << s_easy.selectPlanet(i)->getPlanetName() << endl;
				out << s_easy.selectPlanet(i)->aliens_dead() << endl;
			}

			for (int i = 0; i < p.getInvSize(); i++) {
				out << p.getItem(i)->getType() << endl;
				out << p.getItem(i)->getName() << endl;
			}

			out.close();
			cout << endl;
			cout << "Your game has been saved." << endl;
			cout << endl;
			on_planet = false;
			shopping = true;
			viewing_info = true;
			pick_planet = true;
			viewing_info = true;
			save_game = true;
			break;
		}
	}
}


void intro() {
	cout << endl;
	cout << "As stated before, in order to win, you need to find a planet that is suitable for humanity and kill all aliens on that planet. " << endl;
	Sleep(5000);
	cout << endl;
	cout << "Now, let’s choose your first planet to visit." << endl;
}
