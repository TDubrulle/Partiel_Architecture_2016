#pragma once
#include "Combat.h"
class Pacifique :
	public Combat
{
public:
	Pacifique();
	~Pacifique();

	bool peutAttaquer() override;
	int attaqueForce() override;
};

