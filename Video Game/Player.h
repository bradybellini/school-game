#pragma once
#ifndef PLAYER_H

#include "Character.h"
#include "Inventory.h"
#include <string>

class Player : public Character {
private:
	std::string name;
	Inventory inv;
	int credits;


public:
	Player();
	void setName(std::string n), addItem(Item* i), removeItem(int i), addCredits(int c);
	std::string getName();
	Item* getItem(int i);
	int getInvSize(), getCredits();
};

#endif // !PLAYER_H
