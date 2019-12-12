#include "Medkit.h"

Medkit::Medkit()
{
	setType("Medkit");
	setName("Medkit");
	setPrice(10);
	heal = 5;
	stack = 1;
}

int Medkit::getHeal()
{
	return heal;
}

int Medkit::getStack()
{
	return stack;
}

void Medkit::setHeal(int h)
{
	heal = h;
}

void Medkit::setStack(int s)
{
	stack = s;
}