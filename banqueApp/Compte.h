#pragma once
#include"Client.h"
#include "Devise.h"
#include "GC.h"

namespace Banque {
	class Operation;
	class Compte
	{
		//attributs
	private:
		const int numcompte;
		static int count;
		Client* titulaire; //agregation
		Devise* solde;
		static Devise* plafond;
		GC* ref;
		vector<Operation*> historique;
		// Methodes
	public : 

		Compte(Client*, Devise*); // avec parametres
		Compte(const Compte&);
		Compte operator=(const Compte&);
		
		virtual bool debiter(Devise*M); 
		virtual void crediter(Devise* M);
		bool verser(Devise* M, Compte& C);
		void consulter()const;
		void show_operations()const;
		~Compte();
	protected: Devise& pourcentage(double a) const;
	protected: bool checkSup(Devise *s) const;


	};

};