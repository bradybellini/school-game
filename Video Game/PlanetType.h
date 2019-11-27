#pragma once
#ifndef Modifiers _H

#include <string>

class Modifiers {
private:
	int modifier;
	std::string name;
public:
	Modifiers(int m, std::string name);
	void setModifier(int m);
	int getModifier();
	void setName(std::string n);
	std::string getName();

};


#endif // !Modifiers _H
