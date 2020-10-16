#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {
	
    public:
        double pagamentoMes(double horasTrabalhadas);
        std::string getName();
        double getSalario();
        void setNome(std::string nome);
        void setSalarioHora(float salario);
    private:
        double salarioHora;  
        std::string nome;
};

#endif