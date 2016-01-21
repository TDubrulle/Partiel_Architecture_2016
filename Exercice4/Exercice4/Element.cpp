#include "stdafx.h"
#include "Element.h"



Element::Element(int x, int y, Combat * combat, Mouvement * mouvement, int vision, int vie)
{
	this->x = x;
	this->y = y;
	this->combat = combat;
	this->mouvement = mouvement;
	this->vision = vision;
	this->vie = vie;
}

Element::Element()
{
	this->x = 0;
	this->y = 0;
	this->combat = nullptr;
	this->mouvement = nullptr;
	this->vision = 0;
	this->vie = 0;
}

Element::~Element()
{
}

void Element::update(Monde m)
{
}
