#pragma once
#ifndef INVENTORY_H

#include "Item.h"
#include <vector>


class Inventory {
private:
	std::vector<Item*> items;

public:
	Item* getItem(int i);
	void addItem(Item* i);
	int getSize();
};

#endif // !INVENTORY_H

