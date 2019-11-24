#pragma once
#ifndef PLANETTYPE_H

#include <string>

class PlanetType {
private:
	int resistanceModifier;
	std::string environmentType;
public:
	PlanetType();
	void setResistanceModifier(int d);
	int getResistanceModifier();
	void setEnvironmentType(std::string e);
	std::string getEnvironmentType();
};
};

#endif // !PLANETTYPE_H
