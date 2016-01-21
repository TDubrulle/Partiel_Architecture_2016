#pragma once
#include "Mouvement.h"
class Immobile :
	public Mouvement
{
public:
	Immobile();
	~Immobile();

	bool peutBouger() override;
	int distanceMouvement() override;
};

