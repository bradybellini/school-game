#include "Item.h"

Item::Item()
{
	
}

std::string Item::getName()
{
	return name;
}

std::string Item::getType()
{
	return type;
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

void Item::setType(std::string t)
{
	type = t;
}

Item::~Item()
{
}
