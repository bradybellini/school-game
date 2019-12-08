#pragma once
#ifndef PLAYER_H

#include "Character.h"
#include "Inventory.h"
#include <string>

class Player : public Character {
private:
	std::string name;
	Inventory inv;


public:
	Player();
	void setName(std::string n), addItem(Item* i);
	std::string getName();
	Item* getItem(int i);
	int getInvSize();
};

#endif // !PLAYER_H
