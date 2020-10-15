#include "Engenheiro.hpp"
#include "Vendedor.hpp"

int main() {

  Engenheiro eng1 = Engenheiro("Joao Snow", 35, 3); 
  std::cout << "Nome: " << eng1.getName() << std::endl;
  std::cout << "Salario Mes: " << eng1.pagamentoMes(9.5) << std::endl;
  std::cout << "Projetos: " << eng1.getProjetos() << std::endl;
  std::cout << std::endl;
  
  Engenheiro eng2 = Engenheiro("Daniela Targaryen", 30, 1); 
  std::cout << "Nome: " << eng2.getName() << std::endl;
  std::cout << "Salario Mes: " << eng2.pagamentoMes(8) << std::endl;
  std::cout << "Projetos: " << eng2.getProjetos() << std::endl;  
  std::cout << std::endl;
  
  Engenheiro eng3 = Engenheiro("Bruno Stark", 30, 2); 
  std::cout << "Nome: " << eng3.getName() << std::endl;
  std::cout << "Salario Mes: " << eng3.pagamentoMes(8) << std::endl;
  std::cout << "Projetos: " << eng3.getProjetos() << std::endl;  
  std::cout << std::endl;
  
  
  Vendedor vend1 = Vendedor("Tonho Lannister", 20, 5000);
  std::cout << "Nome: " << vend1.getName() << std::endl;
  std::cout << "Salario Mes: " << vend1.pagamentoMes(6) << std::endl;  
  std::cout << "Quota vendas: " << vend1.quotaTotalAnual() << std::endl;
  std::cout << std::endl;
  
  Vendedor vend2 = Vendedor("Jose Mormont", 25, 3000);
  std::cout << "Nome: " << vend2.getName() << std::endl;
  std::cout << "Salario Mes: " << vend2.pagamentoMes(8) << std::endl;  
  std::cout << "Quota vendas: " << vend2.quotaTotalAnual() << std::endl; 
  std::cout << std::endl;  
	
  Vendedor vend3 = Vendedor("Sonia Stark", 30, 4000);
  std::cout << "Nome: " << vend3.getName() << std::endl;
  std::cout << "Salario Mes: " << vend3.pagamentoMes(8) << std::endl;  
  std::cout << "Quota vendas: " << vend3.quotaTotalAnual() << std::endl;  
  
  return 0;	
}