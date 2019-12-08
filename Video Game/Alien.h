#pragma once
#ifndef ALIEN_H

#include "Character.h"
#include <vector>
#include <string>

class Alien : public Character {
private:
	std::vector<std::string> taunts;

	

public:
	Alien();
	std::string taunt(), getTaunt(int t);
	void addTaunt(std::string t);


};


#endif // !ALIEN_H
