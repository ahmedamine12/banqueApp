#include "CompteEpargne.h"
#include <assert.h>

Banque::CompteEpargne::CompteEpargne(Client* c, Devise* s, double t)
	:Compte(c,s)
{
	assert(t > 0 && t <= 100);
	this->tauxInteret = t;
}

void Banque::CompteEpargne::calculInteret()
{
	float a = this->tauxInteret / 100;
	this->crediter(&(this->pourcentage(a)));
}


