#include "ComptePayant.h"
using namespace Banque;
Devise* taux = new Devise(0.5);

Banque::ComptePayant::ComptePayant(double a, Client *c1, Devise *b,Devise*c) :CompteCourant(c1,b,c)
{
	
}

bool Banque::ComptePayant::debiter(Devise* M)
{
	if (this->CompteCourant::debiter(M))
		this->CompteCourant::debiter(taux);
	return false;
}

void Banque::ComptePayant::crediter(Devise* M)
{
	this->CompteCourant::crediter(M);
	this->debiter(taux);
}
