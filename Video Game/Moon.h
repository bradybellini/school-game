#pragma once
#ifndef MOON_H

#include "Planet.h"

class Moon : public Planet {
private:
	int cold;
public:
	Moon();
	void setCold(int c);
	int getCold();
};

#endif // !MOON_H
