#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {
	
    public:
        double pagamentoMes(double horasTrabalhadas);
        std::string getName();
        double getSalario();
        double getQuotaMensal();
        void setNome(std::string nome);
        void setSalarioHora(float salario);
        void setQuotaMensalVendas(int vendas);
    private:
        double salarioHora;  
        double quotaMensalVendas;  
        std::string nome;
};

#endif