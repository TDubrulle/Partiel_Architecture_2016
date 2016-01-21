#pragma once
class Monde
{
private:
	static Monde instance;
	Monde();
public:
	static Monde getInstance();
};

