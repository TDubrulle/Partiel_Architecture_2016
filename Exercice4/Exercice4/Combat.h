#pragma once
/**Le combat indique la capacit� � combattre.*/
class Combat
{
public:

	virtual bool peutAttaquer() = 0;
	virtual int attaqueForce() = 0;
};

