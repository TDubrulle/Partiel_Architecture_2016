#include "stdafx.h"
#include "Aggressif.h"


Aggressif::Aggressif(int force)
{
	this->force = force;
}


Aggressif::~Aggressif()
{
}

bool Aggressif::peutAttaquer()
{
	return false;
}

int Aggressif::attaqueForce()
{
	return 0;
}


