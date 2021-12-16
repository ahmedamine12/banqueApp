#include "Devise.h"
#include "dolar.h"
#include "euro.h"
#include"MAD.h"
#include<iostream>
using namespace std;
using namespace Banque;



Banque::MAD::MAD(float a):Devise(a)
{
	this->t[0] = 1;
	this->t[1] = 1.2;
	this->t[2] = 0.2;

}

void Banque::MAD::afficher() const
{
	this->Devise::afficher(); // demasquage
		cout << "MAD"; 
}


