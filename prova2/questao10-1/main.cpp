#include "Conta.h"
#include "ContaCorrente.h"
#include "ContaCorrenteLimite.h"
#include "ContaPoupanca.h"

#include <iostream>
using namespace std;
int main(){
  Conta *contas [] = {new ContaCorrente("Emilieny de Souza", "0023012"), 
  new ContaCorrenteLimite("João", "1123015", 300), 
  new ContaPoupanca("Stephany", "2253021", 26)};


  contas[0]->imprimirExtrato();
  cout << (contas[0]->deposito(4000) ? "Sucesso" : "Erro") << endl;
  cout << (contas[0]->retirada(800) ? "Sucesso" : "Erro") << endl;
  contas[0]->imprimirExtrato();

  cout << endl;

  cout << (contas[1]->deposito(400) ? "Sucesso" : "Erro") << endl;
  cout << (contas[1]->retirada(500) ? "Sucesso" : "Erro") << endl;
  if(!contas[1]->retirada(300)){
    cout << "Não foi possivel realizar essa operação, saldo insuficiente!" << endl;
    cout << endl;
  }

  contas[1]->imprimirExtrato();

  cout << (contas[2]->deposito(5000) ? "Sucesso" : "Erro") << endl;
  cout << (contas[2]->retirada(1000) ? "Sucesso" : "Erro") << endl;
  if(!contas[2]->retirada(100)){
    cout << "Não foi possivel realizar essa operação, saldo insuficiente!" << endl;
    cout << endl;
  }
  contas[2]->imprimirExtrato();

  for(int i = 0; i < 3; i++){
    delete contas[i];
  }

  return 0;
}