#include "Devise.h"
#include "dolar.h"
#include "euro.h"
#include "MAD.h"


#include  <iostream>
using namespace std;
using namespace Banque;
Devise::Devise(double val)
{
	this->valeur = val;
}

Devise& Devise::operator+(const Devise& M) const
{
	Devise* res = new Devise (this->valeur + M.valeur); 
	return *res;
}

Devise& Devise::operator-(const Devise& M) const
{
	Devise* res = new Devise(this->valeur - M.valeur);
	return *res;
}

Devise& Banque::Devise::operator*(const Devise& M) const
{
	Devise* res = new Devise(M.valeur * this->valeur);
	return *res;
}

bool Devise::operator<=(const Devise& M) const
{
	return this->valeur <= M.valeur;
}

bool Devise::operator>=(const Devise& M) const
{
	return this->valeur >= M.valeur;
}

dolar *Banque::Devise::ConvertirToDollar()
{
	return new dolar (this->valeur * this->t[1]);
}

euro *Banque::Devise::ConvertirToEuro()
{
	euro* res = new euro(this->valeur * this->t[2]); 
	return res;
	
}

MAD*Banque::Devise::ConvertirToMAD()
{
	return  new  MAD (this->valeur * this->t[0]);

}

void Devise::afficher() const
{
	cout << "le solde est : " << this->valeur << endl;
}

