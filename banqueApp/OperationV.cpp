#include "OperationV.h"

Banque::OperationV::OperationV(Devise* d, Compte* c)
	:Operation(d, c)
{
	
}

void Banque::OperationV::voir_operation()
{

	cout << "Operation de Virement + ";
	this->Operation::voir_operation();
}
