#include "stdafx.h"
#include "DeplacementAction.h"


void DeplacementAction::faireAction(Element * e)
{
	//On fait ici le déplacement.
}

DeplacementAction::DeplacementAction() : Action(1)
{
}


DeplacementAction::~DeplacementAction()
{
}

bool DeplacementAction::isDoable(Element * e)
{
	for (unsigned int x = e->x; x < e->x + 2; ++x) {
		for (unsigned int y = e->y; y < e->y + 2; ++y) {
			//On vérifie si il y a une case de libre.
		}
	}
	return false;
}
