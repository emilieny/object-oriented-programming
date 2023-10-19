#include "Pessoa.h"
#include "PessoaFisica.h"
#include "PessoaJuridica.h"

#include <iostream>
using namespace std;

int main(){
  Pessoa p("Emilieny");
  PessoaFisica pFisica("Joao", 17272636423);
  PessoaJuridica pJuridica("Coca Cola", 23003034123400 ,"Coca Cola Industrias Ltda" );

  cout << p << endl;

  cout << pFisica;
  cout << "CPF: " << pFisica.getCpf() << endl;
  cout << endl;

  cout << pJuridica;
  cout << "CNPJ: " << pJuridica.getCnpj() << endl;
  cout << "Razão Social: " << pJuridica.getRazaoSocial() << endl;

  return 0;
}