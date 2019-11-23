#pragma once
#ifndef PLANETNAME_H

#include <string>

class PlanetName {
private:
	std::string name;
	std::string generateName();

public:
	PlanetName();
	std::string getName();
	void setName(std::string nname);
};

#endif // !PLANETNAME_H
