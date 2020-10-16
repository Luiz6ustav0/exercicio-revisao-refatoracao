#ifndef VENDEDOR_H
#define VENDEDOR_H
#include "Empregado.hpp"
#include <string>

class Vendedor : public Empregado {
    public:
        Vendedor(std::string name, float salary, int quota);
    	double quotaTotalAnual();
        double getQuotaMensal();
        void setQuotaMensalVendas(int vendas);	
    
    private:
        double quotaMensalVendas;  
};

#endif