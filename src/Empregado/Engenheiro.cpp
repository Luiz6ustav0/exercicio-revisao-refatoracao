#include <string>
#include "Engenheiro.hpp"


Engenheiro::Engenheiro(std::string name, float salary, int projs) {
    this->setNome(name);
    this->setSalarioHora(salary);
    this->setProjetos(projs);
}

int Engenheiro::getProjetos() {
	    return this->projetos;
}

void Engenheiro::setProjetos(int num) {
	    this->projetos = num;
}
