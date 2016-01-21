#pragma once
#include <vector>
#include "Element.h"

class Monde
{
private:
	static Monde instance;
	Monde();

public:
	std::vector<std::vector<Element*>> zone;
	static Monde getInstance();

	void update();
};

