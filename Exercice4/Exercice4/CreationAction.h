#pragma once
#include "Action.h"
class CreationAction :
	public Action
{
protected: 
	void faireAction(Element *e) override;
public:
	CreationAction();
	~CreationAction();


	bool isDoable(Element *e) override;
};

