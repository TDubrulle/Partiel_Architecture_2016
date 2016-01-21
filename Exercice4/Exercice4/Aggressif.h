#pragma once
#include "Combat.h"
class Aggressif :
	public Combat
{
protected:
	int force;
public:
	Aggressif(int forceFrappe);
	~Aggressif();

	bool peutAttaquer() override;
	int attaqueForce() override;
};

