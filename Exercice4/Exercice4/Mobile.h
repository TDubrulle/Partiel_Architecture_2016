#pragma once
#include "Mouvement.h"
class Mobile :
	public Mouvement
{
private:
	int distMouvement;
public:
	Mobile(int distanceMouvement);
	~Mobile();

	bool peutBouger() override;
	int distanceMouvement() override;
};

