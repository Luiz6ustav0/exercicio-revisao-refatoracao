#include "Engenheiro.hpp"
#include "Vendedor.hpp"


void fer_assert(const bool expr, const char* msg) {
    if (!expr) {
      std::cout << msg << " failed." << std::endl;
      exit(0);
    } else std::cout << "Test successful: " << msg << std::endl;
}

void givenEngenheiroClass_whenInstatiatingEngineer_thenAllGettersShouldWork() {
    // given when
    Engenheiro eng1 = Engenheiro("Joao Snow", 35, 3); 

    // then
    fer_assert(eng1.getName() == "Joao Snow", "getName");
    fer_assert(eng1.getProjetos() == 3, "getProjetos");
    fer_assert(eng1.getSalario() == 35, "getSalario");
    std::cout << std::endl;
}

void givenVendedorClass_whenInstatiatingVendedor_thenAllGettersShouldOwrk() {
    // given when
    Vendedor vend1 = Vendedor("Tonho Lannister", 20, 5000);

    // then
    fer_assert(vend1.getName() == "Tonho Lannister", "getName");
    fer_assert(vend1.getQuotaMensal() == 5000, "getProjetos");
    fer_assert(vend1.getSalario() == 20, "getSalario");
    std::cout << std::endl;
}

void givenEmpregado_whenCalculatingPagamentoMes_thenShouldReturnCorrectValue() {
    // given
    Empregado eng3 = Engenheiro("Bruno Stark", 30, 2); 
    double expected = 240;

    // when 
    double actual = eng3.pagamentoMes(8);
    
    // then
    fer_assert(expected == actual, "pagamentosMes");
    std::cout << std::endl;
}


int main() {  
    givenEngenheiroClass_whenInstatiatingEngineer_thenAllGettersShouldWork();
    givenVendedorClass_whenInstatiatingVendedor_thenAllGettersShouldOwrk();
    givenEmpregado_whenCalculatingPagamentoMes_thenShouldReturnCorrectValue();
}