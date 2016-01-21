#pragma once
#include "Action.h"
class CollecteAction :
	public Action
{
protected:
	void faireAction(Element *e) override;
public:
	CollecteAction();
	~CollecteAction();

	bool isDoable(Element *e) override;
};

