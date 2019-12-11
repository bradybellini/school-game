#pragma once
#ifndef BLASTERNAME_H

#include <string>

class BlasterName {
private:
	std::string name;
	std::string generateName();

public:
	BlasterName();
	std::string getName();
	void setName(std::string nname);
};

#endif // !BLASTERNAME_H

