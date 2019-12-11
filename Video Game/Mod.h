#pragma once
#ifndef MOD_H

#include <string>
#include <vector>


class Mod{
private:
	int mod;
	std::string name;
	bool livable = true;
public:
	Mod();
	Mod(int m, std::string n);
	void setMod(int m);
	int getMod();
	void setName(std::string n);
	std::string getName();
	bool getLivable();
	void setLivable(bool l);

};

#endif // !MOD_H

