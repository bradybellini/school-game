#include "Inventory.h"

Item* Inventory::getItem(int i)
{
	return items[i];
}

void Inventory::addItem(Item* i)
{
	items.push_back(i);
}

int Inventory::getSize()
{
	return items.size();
}
