#pragma once
#include "Element.h"
#include "Aggressif.h"
#include "Mobile.h"
#include "DeplacementAction.h"
#include "CombatAction.h"

/**Un prédateur est une créature aggressive capable de se mouvoir.*/
class Predateur :
	public Element
{
public:
	Predateur(int x, int y, int force, int vie, int deplacement, int vision);
	~Predateur();
};

