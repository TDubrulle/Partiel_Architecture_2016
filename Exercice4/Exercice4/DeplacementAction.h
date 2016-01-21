#pragma once
#include "Action.h"
class DeplacementAction :
	public Action
{
protected:
	void faireAction(Element *e) override;
public:
	DeplacementAction();
	~DeplacementAction();

	bool isDoable(Element *e) override;
};

