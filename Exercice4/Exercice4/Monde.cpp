#include "stdafx.h"
#include "Monde.h"


Monde::Monde()
{
}

Monde Monde::getInstance()
{
	static Monde instance;
	return instance;
}

