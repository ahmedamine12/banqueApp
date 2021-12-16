#include "Compte.h"
#include<iostream>
#include "OperationR.h"
#include "OperationV.h"
#include "Operations.h"
using namespace std;
using namespace Banque;

Devise* Banque::Compte::plafond = new Banque::Devise(2000);
int Banque::Compte::count = 0;

Banque::Compte::Compte(Client* titu, Devise* sol):numcompte(++count)
{
	this->ref = new GC(1);
	this->titulaire = titu;
	this->solde = sol;
	this->historique = vector<Operation*>();
}

void Banque::Compte::crediter(Devise*M)
{
	*(this->solde) = *(this->solde)+*M;
	Operation* p = new OperationV(M,this);
	this->historique.push_back(p);
}

bool Banque::Compte::debiter(Devise*M)
{
	if (*(this->solde) >= *M && *M <= *(Compte::plafond))
	{
		*(this->solde) = *(this->solde) - *M;
		Operation* p = new OperationR(M,this);
		this->historique.push_back(p);
	return true;
	}
	return false;
}

Banque::Compte::Compte(const Compte& c):numcompte(c.numcompte)
{
	this->ref = c.ref ;
	this->ref->incre() ;
	this->titulaire = c.titulaire ;

}

Compte Banque::Compte::operator=(const Compte&c)
{
	//v=v
	if (this != &c)
	{
		if (this->titulaire && this->ref && this->ref->decr() ==0)
		{
			delete this->ref;
			this->ref = 0;
		}
		this->solde = c.solde;
		this->ref = c.ref;
		this->titulaire = c.titulaire;
		this->ref->incre();
	}
	return *this;
}

bool Banque::Compte::verser(Devise* M, Compte& C)
{
	this->solde->afficher();
	if (this->debiter(M)==true) {
		this->solde->afficher();
		C.crediter(M);
		C.solde->afficher();
		return true;
	}
	return false;
}


void Banque::Compte::consulter() const
{
	cout << "num compte=" << this->numcompte << endl;
	this->solde->afficher();
	cout << "titulaire " << endl;
	this->titulaire->Afficher();
}

void Banque::Compte::show_operations() const
{
	for (int i = 0; i < this->historique.size(); i++)
	{
		this->historique[i]->voir_operation();

	}
}

Compte::~Compte() {

	if (this->titulaire!=nullptr && this->ref->decr() ==0 ) 
	{
		delete this->titulaire; 
		this->titulaire = nullptr;
	}

}

Devise& Banque::Compte::pourcentage(double a) const
{
	Devise* res = new Devise(a);
     
	return *(this->solde)*(*res);
}

bool Banque::Compte::checkSup(Devise* s) const
{
	
	return (*(this->solde) >= *s);
}
