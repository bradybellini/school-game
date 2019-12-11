#include "Item.h"

Item::Item()
{
	name = "No Name";
}

std::string Item::getName()
{
	return name;
}

int Item::getPrice()
{
	return price;
}

void Item::setName(std::string n)
{
	name = n;
}

void Item::setPrice(int p)
{
	price = p;
}

Item::~Item()
{
}
