#include "stdafx.h"
#include "Peuple.h"


Peuple::Peuple()
{
	ressources = 0;
	nombrePersonnes = 0;
}

Peuple Peuple::getInstance()
{
	static Peuple instance;
	return instance;
}

