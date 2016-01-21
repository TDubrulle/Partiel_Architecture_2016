#pragma once
class Peuple
{
private:
	static Peuple instance;
	Peuple();
public:
	int ressources;
	int nombrePersonnes;
	static Peuple getInstance();
};

