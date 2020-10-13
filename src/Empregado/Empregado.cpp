#include <string>
#include "Empregado.hpp"

std::string Empregado::getName() {
	return this->nome;
}

double Empregado::getSalario() {
    return this->salarioHora;
}

double Empregado::getQuotaMensal() {
    return this->quotaMensalVendas;
}