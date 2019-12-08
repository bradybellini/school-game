#pragma once
#ifndef ITEM_H

#include <string>

class Item {
private:
	std::string name;

public:
	Item();
	std::string getName();
	void setName(std::string n);
	virtual ~Item();
};

#endif // !ITEM_H
