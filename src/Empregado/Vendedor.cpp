#include <string>
#include "Vendedor.hpp"

double Vendedor::quotaTotalAnual() {
	    return this->getQuotaMensal() * 12;
}
