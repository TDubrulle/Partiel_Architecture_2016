#pragma once
/**Le mouvement indique la capacité à se mouvoir.*/
class Mouvement
{
public:

	virtual bool peutBouger() = 0;
	virtual int distanceMouvement() = 0;
};

