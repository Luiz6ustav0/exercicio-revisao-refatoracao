#include <string>
#include "Vendedor.hpp"

#define MESES_DE_TRABALHO 12

Vendedor::Vendedor(std::string name, float salary, int quota) {
    this->setNome(name);
    this->setSalarioHora(salary);
    this->setQuotaMensalVendas(quota);
}

double Vendedor::quotaTotalAnual() {
	    return this->getQuotaMensal() * MESES_DE_TRABALHO;
}
