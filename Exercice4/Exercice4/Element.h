#pragma once
#include "Mouvement.h"
#include "Combat.h"
#include <vector>

class Action;

/**Un �l�ment du jeu. Chaque �l�ment int�ragit gr�ce � une liste d'actions et poss�de plusieurs caract�ristiques.*/
class Element
{
protected:
	Element(int x, int y, Combat *combat, Mouvement *mouvement, int vision, int vie);
public:

	Element();
	/*Elements mis en public pour gagner du temps.
	TODO: prot�ger les variables et �crire les getters/setters.*/
	int x;
	int y;
	int vision;
	int vie;
	Mouvement *mouvement;
	Combat *combat;

	std::vector<Action*> *actions;
	Action *actionCourante;
	
	~Element();

	/**Met � jour l'entit� dans le monde correspondant.*/
	void update();
};