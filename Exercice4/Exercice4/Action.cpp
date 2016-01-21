#include "stdafx.h"
#include "Action.h"

Action::Action(int TimeLeft)
{
	this->timeLeft = TimeLeft;
	this->curTimeLeft = 0;
}

Action::~Action()
{
}

void Action::update(Element *e) {
	faireAction(e);
	if (curTimeLeft > 0){
		curTimeLeft--;
	}
	else {
		e->actionCourante = nullptr;
	}
}

void Action::start() {
	this->curTimeLeft = timeLeft;
}
