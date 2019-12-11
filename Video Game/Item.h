#pragma once
#ifndef ITEM_H

#include <string>

class Item {
private:
	std::string name, type;
	int price;

public:
	Item();
	std::string getName(), getType();
	int getPrice();
	void setName(std::string n), setPrice(int p), setType(std::string t);
	virtual ~Item();
};

#endif // !ITEM_H
