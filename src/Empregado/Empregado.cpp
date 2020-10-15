#include <string>
#include "Empregado.hpp"


std::string Empregado::getName() { return this->nome; }
double Empregado::getSalario() { return this->salarioHora; }
double Empregado::getQuotaMensal() { return this->quotaMensalVendas; }
void Empregado::setNome(std::string name) { this->nome = name; };
void Empregado::setSalarioHora(float salary) { this->salarioHora = salary; }
void Empregado::setQuotaMensalVendas(int vendas) { this->quotaMensalVendas = vendas; }