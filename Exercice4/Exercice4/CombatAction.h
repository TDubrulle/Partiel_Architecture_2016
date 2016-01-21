#pragma once
#include "Action.h"
class CombatAction :
	public Action
{
protected:
	void faireAction(Element *e) override;
public:
	CombatAction();
	~CombatAction();

	bool isDoable(Element *e) override;
};

