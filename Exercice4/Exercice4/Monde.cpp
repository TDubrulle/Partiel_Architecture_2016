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

void Monde::update()
{
	for (int x = 0; x < zone.size(); ++x) {
		for (int y = 0; y < zone.size(); ++y) {
			zone[x][y]->update();
		}
	}
}

