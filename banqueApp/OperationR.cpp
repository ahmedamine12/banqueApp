#include "OperationR.h"
#include"Operations.h"

Banque::OperationR::OperationR(Devise* d, Compte* c)
	:Operation(d, c)
{


}

void Banque::OperationR::voir_operation()
{
	cout << "Operation de Retrait - ";
	this->Operation::voir_operation();
	 
}
