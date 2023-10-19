#include "Empresa.h"
#include "Funcionario.h"
#include "Cliente.h"

#include <iostream>
using std::cout;
using std::endl;

Empresa::Empresa(string nome, unsigned long long cnpj, string razaosocial) : PessoaJuridica(nome, cnpj, razaosocial){
  this->quantidadeclientes = 0;
  this->quantidadefuncionarios = 0;
}

void Empresa::addCliente(const Cliente& cliente) {
  if(quantidadeclientes < 10){
    clientes[quantidadeclientes++] = cliente;
  }
}

void Empresa::addFuncionario(const Funcionario& funcionario){
  if(quantidadefuncionarios < 10){
    funcionarios[quantidadefuncionarios++] = funcionario;
  }
}

void Empresa::mostraClientes() const {
  cout << endl << "-----------------------TODOS CLIENTES----------------------" << endl;
  for(unsigned int i = 0; i < quantidadeclientes; i++){
    cout << clientes[i] << endl;
  }
  cout << "-----------------------------------------------------------" << endl << endl;
}

void Empresa::mostraFuncionarios() const {
  cout << endl << "-----------------------TODOS FUNCIONARIOS----------------------" << endl;
  for(unsigned int i = 0; i < quantidadefuncionarios; i++){
    cout << funcionarios[i] << endl;
  }
  cout << "---------------------------------------------------------------" << endl << endl;
}

double Empresa::calcularFolhaDePagamento() const {
  double somasalario = 0;
  for(unsigned int i = 0; i < quantidadefuncionarios; i++){
    somasalario += funcionarios[i].calculaSalarioBruto();
  }
  return somasalario;
}