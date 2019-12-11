#include "Player.h"

Player::Player()
{
	name = "Player";
	credits = 100;

}

void Player::setName(std::string n)
{
	name = n;
}

void Player::addItem(Item* i)
{
	inv.addItem(i);
}

void Player::removeItem(int i)
{
	inv.removeItem(i);
}

void Player::addCredits(int c)
{
	credits += c;
}

std::string Player::getName()
{
	return name;
}

Item* Player::getItem(int i)
{
	return inv.getItem(i);
}

int Player::getInvSize()
{
	return inv.getSize();
}

int Player::getCredits()
{
	return credits;
}
