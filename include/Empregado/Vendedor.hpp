#include "Empregado.hpp"
#include <string>

class Vendedor : public Empregado {

  public:
    std::string nome;  	  
	
	double quotaTotalAnual();	
};