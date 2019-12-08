#include "Character.h"

Character::Character()
{
	health = 10;
	attack = 1;
	resistance = 0;
}

void Character::setHealth(int h)
{
	health = h;
}

void Character::addHealth(int ah)
{
	health += ah;
}

void Character::takeDamage(int t)
{
	if (t > health) {
		health = 0;
	}
	else {
		health -= t;
	}
}

void Character::setAttack(int a)
{
	attack = a;
}

void Character::setResistance(int r)
{
	resistance = r;
}

int Character::getHealth()
{
	return health;
}

int Character::getAttack()
{
	return attack;
}

int Character::getResistance()
{
	return resistance;
}

Character::~Character()
{
}
