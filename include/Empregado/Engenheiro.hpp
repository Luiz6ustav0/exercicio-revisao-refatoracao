#ifndef ENGENHEIRO_H
#define ENGENHEIRO_H
#include "Empregado.hpp"
#include <string>

class Engenheiro : public Empregado {
    public:
        int getProjetos();
        void setProjetos(int num);
    private:
        int projetos;
};

#endif