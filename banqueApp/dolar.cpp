#include "Devise.h"
#include "dolar.h"
#include "euro.h"
#include"MAD.h"
#include<iostream>
using namespace std;

using namespace Banque;
Banque::dolar::dolar(float a ):Devise(a)
{
	this->t[0] = 9;
	this->t[1] = 1;
	this->t[2] = 1.2;
}

void Banque::dolar::afficher() const
{
	this->Devise::afficher(); cout << "dolar";
}

