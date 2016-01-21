#include "stdafx.h"
#include "CreationAction.h"


void CreationAction::faireAction(Element * e)
{
}

CreationAction::CreationAction() : Action(1)
{
}


CreationAction::~CreationAction()
{
}

bool CreationAction::isDoable(Element * e)
{
	return false;
}
