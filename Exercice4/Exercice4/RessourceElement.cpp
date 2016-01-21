#include "stdafx.h"
#include "RessourceElement.h"

RessourceElement::RessourceElement(int x, int y, Combat * combat, Mouvement * mouvement, int vision, int vie, int quantite)
	:	Element(x, y, combat, mouvement, vision, vie)
{
	this->ressource = new Ressource(quantite);
}

RessourceElement::~RessourceElement()
{
	delete ressource;
}
