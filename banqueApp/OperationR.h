#pragma once
#include "Operations.h"
namespace Banque
{
	class OperationR : public Operation
	{
	public:
		OperationR(Devise* d, Compte* c);
	void voir_operation();
	private:
		static string libelle;							
	};
};

