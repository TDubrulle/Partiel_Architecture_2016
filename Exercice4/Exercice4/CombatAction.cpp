#include "stdafx.h"
#include "CombatAction.h"


CombatAction::CombatAction() : Action(3)
{
}


CombatAction::~CombatAction()
{
}

bool CombatAction::isDoable(Element * e)
{
	//On vérifie ici si une cible est à portée.
	return false;
}

void CombatAction::faireAction(Element *e) {
	//On attaque une cible choisie au préalable.

}