#pragma once
#include "Element.h"

/**Une action est quelque chose que peut réaliser une entité.*/
class Action
{
protected:
	/**La durée de l'action.*/
	int timeLeft;
	/**La durée restante de l'action.*/
	int curTimeLeft;

	/**Les classes implémentant cette fonction doivent y insérer l'action.*/
	virtual void faireAction(Element *e) = 0;
public:
	
	/**Crée une nouvelle action avec une durée d'exécution*/
	Action(int TimeLeft);
	~Action();

	/**Les classes implémentant cette fonction doivent indiquer si l'action est réalisable ou non.*/
	virtual bool isDoable(Element *e) = 0;
	/**Réalise l'action et la met à jour.*/
	void update(Element *e);
	/**Réinitialise l'action.*/
	void start();
};

