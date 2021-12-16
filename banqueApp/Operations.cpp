#include "Operations.h"
#include"Devise.h"
#include<iostream>
using namespace std;
using namespace Banque;
int Operation::cpt = 0;
Banque::Operation::Operation(Devise* m, Compte* c):num(++cpt)
{
	this->montant = m;
	this->c = c;
	this->d = "05/01/2001";
}

void Banque::Operation::voir_operation()
{
	cout << this->num << "\t";
	this->montant->afficher();
	cout << "\t" << this->d << "\n";
	
}
