#pragma once
#ifndef CHARACTER_H
class Character {
private:
	int health, attack, resistance;


public:
	Character();
	void setHealth(int h), setAttack(int a), setResistance(int r), 
		takeDamage(int t), addHealth(int ah);
	int getHealth(), getAttack(), getResistance();
	virtual ~Character();

};


#endif // !CHARACTER_H

