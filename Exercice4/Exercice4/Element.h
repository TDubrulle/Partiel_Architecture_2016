#pragma once
#include "Mouvement.h"
#include "Combat.h"
#include "Monde.h"
#include <vector>

class Action;

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

	std::vector<Action> *actions;
	Action *actionCourante;
	
	~Element();

	/**Met à jour l'entité dans le monde correspondant.*/
	void update(Monde m);
};