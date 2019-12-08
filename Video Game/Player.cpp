#include "Player.h"

Player::Player()
{
	name = "Player";

}

void Player::setName(std::string n)
{
	name = n;
}

void Player::addItem(Item* i)
{
	inv.addItem(i);
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
