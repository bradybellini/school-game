#include "Item.h"

Item::Item()
{
	name = "No Name";
}

std::string Item::getName()
{
	return name;
}

void Item::setName(std::string n)
{
	name = n;
}

Item::~Item()
{
}
