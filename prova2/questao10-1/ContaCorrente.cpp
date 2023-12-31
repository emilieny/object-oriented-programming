#include "ContaCorrente.h"

#include "Transacao.h"

#include <iostream>
using std::cout;
using std::endl;
using std::ios_base;

ContaCorrente::ContaCorrente(string nome, string numeroDaConta): 
Conta(nome, numeroDaConta){

}
 
bool ContaCorrente::deposito(double valor){
  if(valor > 0){
    this->saldo += valor;

    Transacao transacaoAtual(valor, "DEPÓSITO");
    this->listaDeTransacoes.push_back(transacaoAtual);

    return true;
  }
  return false;
}

bool ContaCorrente::retirada(double valor){
  if(valor > 0 && valor <= saldo){
    valor *= -1;
    this->saldo += valor;

    Transacao transacaoAtual(valor, "RETIRADA");
    this->listaDeTransacoes.push_back(transacaoAtual);

    return true;
  }
  return false;
}

void ContaCorrente::imprimirExtrato() const {
  cout << "             EXTRATO          " << endl;
  cout << "Tipo da Conta       - Corrente" << endl;
  cout << "Nome do Correntista - " << nome << endl;
  cout << "Numero da Conta     - " << numeroDaConta << endl;
  cout << "-------------------------------------------" << endl;
  cout << "TRANSAÇÕES:" << endl;
  cout << "Data        |  Descrição  |  Valor (R$)" << endl;
  if(!listaDeTransacoes.empty()){
    for(Transacao t: listaDeTransacoes){
      cout << t.getData() << "  |  " << t.getDescricao() << "   |  " << (t.getDescricao() == "DEPOSITO" ? "+": "")  << t.getValorDaTransacao() << endl; 
    }
  }else{
    cout << "     Nenhuma transação foi realizada!      " << endl;
  }
  cout << endl;
  cout << "SALDO ATUAL:" << endl;
  cout.setf(ios_base::fixed);
  cout.precision(2);
  cout <<"R$ " << saldo << endl;
  cout << endl;
  cout << endl;
}