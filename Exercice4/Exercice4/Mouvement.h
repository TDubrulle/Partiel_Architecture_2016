#pragma once
/**Le mouvement indique la capacit� � se mouvoir.*/
class Mouvement
{
public:

	virtual bool peutBouger() = 0;
	virtual int distanceMouvement() = 0;
};

