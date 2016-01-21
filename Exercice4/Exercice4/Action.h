#pragma once
#include "Element.h"

/**Une action est quelque chose que peut r�aliser une entit�.*/
class Action
{
protected:
	/**La dur�e de l'action.*/
	int timeLeft;
	/**La dur�e restante de l'action.*/
	int curTimeLeft;

	/**Les classes impl�mentant cette fonction doivent y ins�rer l'action.*/
	virtual void faireAction(Element *e) = 0;
public:
	
	/**Cr�e une nouvelle action avec une dur�e d'ex�cution*/
	Action(int TimeLeft);
	~Action();

	/**Les classes impl�mentant cette fonction doivent indiquer si l'action est r�alisable ou non.*/
	virtual bool isDoable(Element *e) = 0;
	/**R�alise l'action et la met � jour.*/
	void update(Element *e);
	/**R�initialise l'action.*/
	void start();
};

