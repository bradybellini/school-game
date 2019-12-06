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

};


#endif // !ALIEN_H
