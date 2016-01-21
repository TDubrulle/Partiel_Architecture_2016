#pragma once
#include "Element.h"
#include "Ressource.h"

/**Une ressource est un élément récoltable.*/
class RessourceElement :
	public Element
{
public:
	Ressource *ressource;
	RessourceElement(int x, int y, Combat *combat, Mouvement *mouvement, int vision, int vie, int quantite);
	~RessourceElement();
};

