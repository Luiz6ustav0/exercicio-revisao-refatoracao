#include <string>
#include "Empregado.hpp"


std::string Empregado::getName() { return this->nome; }
double Empregado::getSalario() { return this->salarioHora; }
double Empregado::getQuotaMensal() { return this->quotaMensalVendas; }
void Empregado::setNome(std::string name) { this->nome = name; };
void Empregado::setSalarioHora(float salary) { this->salarioHora = salary; }
void Empregado::setQuotaMensalVendas(int vendas) { this->quotaMensalVendas = vendas; }
double Empregado::pagamentoMes(double horasTrabalhadas) {
    double t = horasTrabalhadas;
    
    //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
    if (horasTrabalhadas > 8) {
        double x = horasTrabalhadas - 8;
        t += x / 2;
    }
    return t * salarioHora;
}