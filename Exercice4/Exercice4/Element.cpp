#include "stdafx.h"
#include "Element.h"

#include "Action.h"

Element::Element(int x, int y, Combat * combat, Mouvement * mouvement, int vision, int vie)
{
	this->x = x;
	this->y = y;
	this->combat = combat;
	this->mouvement = mouvement;
	this->vision = vision;
	this->vie = vie;
	this->actions = nullptr;
}

Element::Element()
{
	this->x = 0;
	this->y = 0;
	this->combat = nullptr;
	this->mouvement = nullptr;
	this->vision = 0;
	this->vie = 0;
	this->actions = nullptr;
}

Element::~Element()
{
}

void Element::update()
{
	//si on a une action courante en cours, on l'exécute.
	if (actionCourante != nullptr ) {
		//Fait l'action.
		actionCourante->update(this);
	}
	if(actionCourante == nullptr) {
		//Sinon, on en choisit une nouvelle
		for (unsigned int i = 0; i < actions->size(); i++) {
			if (/*TODO:actions.at(i).isDoable()*/false) {
				actionCourante = actions->at(i);
				actionCourante->start();
				actionCourante->update(this);
			}
		}
	}
}