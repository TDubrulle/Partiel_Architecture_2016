#include "stdafx.h"
#include "Mobile.h"



Mobile::Mobile(int distanceMouvement)
{
	this->distMouvement = distanceMouvement;
}

Mobile::~Mobile()
{
}

bool Mobile::peutBouger()
{
	return true;
}

int Mobile::distanceMouvement()
{
	return distMouvement;
}
