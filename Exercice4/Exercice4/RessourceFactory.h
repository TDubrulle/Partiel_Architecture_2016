#pragma once
#include "ElementFactory.h"
#include "RessourceElement.h"
#include "Combat.h"
#include "Aggressif.h"
#include "Mobile.h"
class RessourceFactory :
	public ElementFactory
{
protected:
	static Combat *ressourceCombat;
	static Mouvement *ressourceMouvement;
public:
	RessourceFactory();
	~RessourceFactory();

	Element createElement(int x, int y);
};

