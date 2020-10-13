#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {
	
    public:
        double pagamentoMes(double horasTrabalhadas) {
    
        double t = horasTrabalhadas;
        
        //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
        if (horasTrabalhadas > 8) {
            double x = horasTrabalhadas - 8;
            t += x / 2;
        }
        return t * salarioHora;
        }
        
        std::string getName();
        double getSalario();
        double getQuotaMensal();
    private:
        double salarioHora;  
        double quotaMensalVendas;  
        std::string nome;
};

#endif