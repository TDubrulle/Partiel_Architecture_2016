#pragma once
#include "Mouvement.h"
#include "Combat.h"
#include "Monde.h"
/**Un élément du jeu*/
class Element
{
protected:
	Element(int x, int y, Combat *combat, Mouvement *mouvement, int vision, int vie);
public:

	Element();
	/*Elements mis en public pour gagner du temps.
	TODO: protéger les variables et écrire les getters/setters.*/
	int x;
	int y;
	int vision;
	int vie;
	Mouvement *mouvement;
	Combat *combat;
	
	~Element();

	/**Met à jour l'entité dans le monde correspondant.*/
	virtual void update(Monde m);
};