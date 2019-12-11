#pragma once
#ifndef MEDKIT_H

#include "Item.h"

class Medkit : public Item {
private:
	int heal, stack;

public:
	Medkit();
	int getHeal(), getStack();
	void setHeal(int h), setStack(int s);


};


#endif // !MEDKIT_H
