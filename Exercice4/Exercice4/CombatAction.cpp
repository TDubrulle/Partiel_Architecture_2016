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
	//On v�rifie ici si une cible est � port�e.
	return false;
}

void CombatAction::faireAction(Element *e) {
	//On attaque une cible choisie au pr�alable.

}