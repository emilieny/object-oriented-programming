#include "Cliente.h"

#include <iostream>
using std::cout;
using std::ostream;
using std::endl;

ostream& operator<<(ostream& out, const Cliente& cliente){
  cout << "Nome: " << cliente.getNome() << endl;
  cout << "CPF: " << cliente.getCpf() << endl;
  cout << "Endereco: " << cliente.getEndereco() << endl;
  cout << "Telefone: " << cliente.getTelefone() << endl;
  cout << endl;
  
  return out;
}

Cliente::Cliente(string nome, unsigned long long cpf, string endereco, unsigned int telefone)
 : PessoaFisica(nome, cpf){
   setEndereco(endereco);
   setCpf(cpf);
}

void Cliente::setEndereco(string endereco){
  this->endereco = endereco;
}

string Cliente::getEndereco() const {
  return endereco;
}

void Cliente::setTelefone(unsigned int telefone){
  this->telefone = telefone;
}

unsigned int Cliente::getTelefone() const {
  return telefone;
}