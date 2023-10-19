#include "Funcionario.h"
#include <iostream>
using namespace std;

ostream& operator<<(ostream& out, const Funcionario& funcionario){
  cout << "Nome: " << funcionario.getNome() << endl;
  cout << "CPF: " << funcionario.getCpf() << endl;
  cout << "Matrícula: " << funcionario.getMatricula() << endl;
  cout << "Salario: " << funcionario.getSalarioBase() << endl;
  cout << endl;
  return out;
}

Funcionario::Funcionario(string nome, unsigned long long cpf, unsigned int matricula, double salariobase)
 : PessoaFisica(nome, cpf){
   this->matricula = matricula; 
   this->salariobase = salariobase;
}


void Funcionario::setMatricula(unsigned int matricula){
  this->matricula = matricula < 0 ? 0 : matricula;
}

unsigned int Funcionario::getMatricula() const {
  return matricula;
}


void Funcionario::setSalarioBase(double salariobase) {
  this->salariobase = salariobase < 0 ? 1100 : salariobase;
}

double Funcionario::getSalarioBase() const {
  return salariobase;
}