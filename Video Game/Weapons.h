#pragma once
#ifndef WEAPONS_H

#include "Item.h"



class Weapons : public Item {
private:
	int damage, price;
	//int damageRange[2];
	std::string attackCall, name;
public:
	Weapons();
	int getDamage(), getPrice(), giveDamage();
	std::string getName();
	std::string getAttackCall();
	void setPrice(int p), setDamage(int d), setName(std::string n);
};

#endif // !WEAPONS_H
