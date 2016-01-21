#include "stdafx.h"
#include "CollecteAction.h"


void CollecteAction::faireAction(Element * e)
{
}

CollecteAction::CollecteAction() : Action(1)
{
}


CollecteAction::~CollecteAction()
{
}

bool CollecteAction::isDoable(Element * e)
{
	for (unsigned int x = e->x; x < e->x + 2; ++x) {
		for (unsigned int y = e->y; y < e->y + 2; ++y) {
			//On vérifie si il y a une case contenant une ressource

		}
	}
	return false;
}
