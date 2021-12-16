#pragma once
#include "CompteCourant.h"
namespace Banque {
	class ComptePayant : public CompteCourant
	{
	
	public:
		ComptePayant(double, Client*, Devise*, Devise*);
		bool debiter(Devise* M) override;
		void crediter(Devise* M)override;
	};
};
