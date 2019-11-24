#pragma once
#ifndef MOON_H

#include <string>

class Moon {
private:
	int damageMod;
public:
	Moon();
	void setDamageMod(int d);
	int getDamageMod();
};

#endif // !MOON_H
