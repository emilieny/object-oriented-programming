#include "Cliente.h"
#include "Funcionario.h"
#include "Empresa.h"

#include <iostream>
using namespace std;

int main(){
  Empresa com("VTEX",1233123312312, "VTEX BRASIL TECNOLOGIA PARA E-COMMERCE LTDA");
  
  Cliente c1("Nattan", 32415675654, "Rua Pedro Gondim", 988360000);
  Cliente c2("Tarcisio", 12312312312, "Rua João Pessoa", 988361111);

  Funcionario f1("Vinicius Medeiros", 12312312312, 23023, 220, 200, 6000);
  Funcionario f2("João Victor", 45678945632, 12322, 220, 194, 5500);
  Funcionario f3("Thales Luiz", 78945612323, 87774, 220, 215, 5000);

  com.addFuncionario(f1);
  com.addFuncionario(f2);
  com.addFuncionario(f3);

  com.addCliente(c1);
  com.addCliente(c2);

  com.mostraFuncionarios();
  com.mostraClientes();

  cout << "Folha de Pagamentos: " << com.calcularFolhaDePagamento() << endl;

  return 0;
}