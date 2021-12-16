#pragma once

#include<iostream> 
using namespace std;
namespace Banque
{
	class  Devise;
	class  Compte;
	class Operation
	{
	public: 
		Operation(Devise*, Compte* c);
		virtual void voir_operation();

	private:
		const int num;
		static int cpt;
		Devise* montant;
		string d;
		Compte* c;


	};
};
