#include "Inventory.h"

Item* Inventory::getItem(int i)
{
	return items[i];
}

void Inventory::addItem(Item* i)
{
	items.push_back(i);
}

void Inventory::removeItem(int i)
{
	items.erase(items.begin() + i);
}

int Inventory::getSize()
{
	return items.size();
}

