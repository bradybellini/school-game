#include "Alien.h"
#include <time.h>
#include <random>

Alien::Alien()
{
	taunts.push_back("hahahaha");
	taunts.push_back("This is my Planet!");
	taunts.push_back("Don't kill my family!");
	taunts.push_back("Don't take my planet from me!");
	taunts.push_back("Go back to earth!");
	taunts.push_back("Don't take my planet, fix the one you already have!");
	taunts.push_back("Let's work this out another way!");
	taunts.push_back("noooooooo");
	taunts.push_back("ahhhhh");
	taunts.push_back("Leave me and my planet alone!");
	taunts.push_back("Leave me alone, Please?");



}

std::string Alien::taunt()
{
	int r;
	srand(time(NULL));
	r = rand() % taunts.size();
	return taunts[r];
}

std::string Alien::getTaunt(int t)
{
	return taunts[t];
}

void Alien::addTaunt(std::string t)
{
	taunts.push_back(t);
}
