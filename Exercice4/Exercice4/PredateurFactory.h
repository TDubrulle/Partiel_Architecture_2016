#pragma once
#include "ElementFactory.h"
class PredateurFactory :
	public ElementFactory
{
public:
	PredateurFactory();
	~PredateurFactory();
	Element createElement(int x, int y);
};

