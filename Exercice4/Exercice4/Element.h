#pragma once
#include "Mouvement.h"
#include "Combat.h"
#include "Monde.h"
class Element
{

public:
	/*Element mis en public pour gagner du temps.
	TODO: prot�ger les variables et �crire les getters/setters.*/
	int x;
	int y;
	int vision;
	Mouvement *mouvement;
	Combat *combat;
	Element(int x, int y);
	~Element();

	virtual void update(Monde m);
};