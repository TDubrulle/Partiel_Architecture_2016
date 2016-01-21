#include "stdafx.h"
#include "Predateur.h"


Predateur::Predateur(int x, int y,int force, int vie, int deplacement, int vision) 
	: Element(x, y, new Aggressif(force), new Mobile(deplacement), vision, vie)
{
}

Predateur::~Predateur()
{
}
