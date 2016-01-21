#pragma once
#include "Action.h"
class ProcreationAction :
	public Action
{
protected:
	void faireAction(Element *e) override;
public:
	ProcreationAction();
	~ProcreationAction();


	bool isDoable(Element *e) override;
};

