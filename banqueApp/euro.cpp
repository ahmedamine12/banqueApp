#include"Devise.h"
#include "euro.h"
#include"dolar.h"
#include"MAD.h"
#include<iostream>
using namespace std;
using namespace Banque;

Banque::euro::euro(float a ):Devise(a)
{
	this->t[0] = 10;
	this->t[1] = 0.2;
	this->t[2] = 1;
}

void Banque::euro::afficher() const
{
	this->Devise::afficher();
	cout << "euro \n";
}


