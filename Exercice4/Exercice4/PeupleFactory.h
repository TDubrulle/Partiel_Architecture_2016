#pragma once
#include "ElementFactory.h"
class PeupleFactory :
	public ElementFactory
{
public:
	PeupleFactory();
	~PeupleFactory();
	Element createElement(int x, int y);
};

