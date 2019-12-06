#include "Mod.h"

Mod::Mod()
{
	mod = 0;
	name = "None";
}

Mod::Mod(int m, std::string n)
{
	mod = m;
	name = n;
}

void Mod::setMod(int m)
{
	mod = m;
}

int Mod::getMod()
{
	return mod;
}

void Mod::setName(std::string n)
{
	name = n;
}

std::string Mod::getName()
{
	return name;
}

bool Mod::getlivable()
{
	return livable;
}

void Mod::setLivable(bool l)
{
	bool livable = l;
}

