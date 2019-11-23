#include "PlanetName.h"
#include <random>
#include <time.h>
#include <iostream>
#include <Windows.h>
#include <chrono>

std::string PlanetName::generateName()
{
	char c;
	int r;
	int n;
	std::string greekletter;

	std::string greek[10] = { " ALPHA", " BETA", " GAMMA", " DELTA", " ZETA", " THETA", " KAPPA", " MU", " PHI", " OMEGA" };

	srand(time(NULL));

	for (int i = 0; i < 1; i++) {
		r = rand() % 99;
		n = r;
		Sleep(504);
	}

	for (int i = 0; i < 1; i++) {
		r = rand() % 10;
		greekletter = greek[r];
	}

	for (int i = 0; i < 1; i++) {
		r = rand() % 26;
		c = 'a' + r;
	}

	//std::transform(greekletter.begin(), greekletter.end(), greekletter.begin(), ::toupper);
	std::string cc(1, c);
	std::transform(cc.begin(), cc.end(), cc.begin(), ::toupper);

	auto name = cc + std::to_string(n) + greekletter;

	return name;
}

PlanetName::PlanetName()
{
	name = generateName();
}

std::string PlanetName::getName()
{
	return name;
}

void PlanetName::setName(std::string nname)
{
	name = nname;
}