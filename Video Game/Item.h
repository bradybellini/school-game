#pragma once
#ifndef ITEM_H

#include <string>

class Item {
private:
	std::string name;
	int price;
public:
	Item();
	std::string getName();
	int getPrice();
	void setName(std::string n), setPrice(int p);
	virtual ~Item();
};

#endif // !ITEM_H
