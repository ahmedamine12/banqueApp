#pragma once
#include "Operations.h"
namespace Banque {
	class OperationV : public Operation
	{
	public:
		OperationV(Devise* d, Compte* c);
		void voir_operation() override;
	private:
		static string libelle;
	};
};

