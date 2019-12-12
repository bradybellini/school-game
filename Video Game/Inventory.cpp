#include "Inventory.h"
#include <iostream>
Item* Inventory::getItem(int i)
{
	return items[i];
}

void Inventory::addItem(Item* i)
{
	if (items.size() == 3) {
		std::cout << "Your inventory is full!" << std::endl;
	}
	else {
		items.push_back(i);
	}
	
}

void Inventory::removeItem(int i)
{
	items.erase(items.begin() + i);
}

int Inventory::getSize()
{
	return items.size();
}

