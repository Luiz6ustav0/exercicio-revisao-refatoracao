#ifndef ENGENHEIRO_H
#define ENGENHEIRO_H
#include "Empregado.hpp"
#include <string>

class Engenheiro : public Empregado {

  public:
    std::string nome;  
	int projetos;
};

#endif