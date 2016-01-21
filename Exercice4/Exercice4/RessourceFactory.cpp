#include "stdafx.h"
#include "RessourceFactory.h"


RessourceFactory::RessourceFactory()
{
}


RessourceFactory::~RessourceFactory()
{
}

Element RessourceFactory::createElement(int x, int y)
{
	if (ressourceCombat == nullptr) {
		ressourceCombat = new Aggressif(1);
	}
	if (ressourceMouvement == nullptr) {
		ressourceMouvement = new Mobile(2);
	}
	return RessourceElement(x,y, ressourceCombat, ressourceMouvement, 1, 3, 5);
}
