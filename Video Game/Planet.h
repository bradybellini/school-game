#pragma once
#ifndef PLANET_H

#include "PlanetName.h"
#include "Alien.h"
#include <iostream>
#include <string>
#include <vector>

class Planet {
private:
	PlanetName name;
	Alien a1, b1, c1, boss1, a2, b2, c2, boss2;
	std::string planetType;
	int difficulty;
	std::vector<Alien*> enemies;
	void addEnemies(int d);



public:
	Planet();
	void setPlanetName(std::string n), setPlanetType(std::string t), setDifficulty(int d);
	std::string getPlanetName(), getPlanetType();
	int getDifficulty();
	Alien* getEnemy(int e);
	void addEnemy(Alien* a);
	virtual ~Planet();
};

#endif // !PLANET_H
