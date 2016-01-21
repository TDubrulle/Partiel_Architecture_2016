#pragma once
#include "Element.h"
class ElementFactory
{
public:
	ElementFactory();
	~ElementFactory();

	virtual Element createElement(int x, int y) = 0;
};

