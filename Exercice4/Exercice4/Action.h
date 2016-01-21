#pragma once
#include "Element.h"
class Action
{
protected:
	int timeLeft;
	int curTimeLeft;

	virtual void faireAction(Element *e) = 0;
public:
	
	
	Action(int TimeLeft);
	~Action();


	virtual bool isDoable(Element *e) = 0;
	void update(Element *e);
	void start();
};

