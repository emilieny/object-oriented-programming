#include "Funcionario.h"
#include <iostream>
using std::cout;
using std::endl;

ostream& operator<<(ostream& out, const Funcionario& employee){
  cout << "Nome: " << employee.getNome() << endl;
  cout << "CPF: " << employee.getCpf() << endl;
  cout << "Matrícula: " << employee.getMatricula() << endl;
  cout << "Salario Base: " << employee.getSalarioBase() << endl;
  cout << "Salario Bruto: " << employee.calculaSalarioBruto() << endl;
  cout << "Carga horaria mensal: " << employee.getCargaTrabalhoMensal() << endl;
  cout << "Quantidade de horas trabalhadas no mes: " << employee.getCargaHorasTrabalhadas() << endl;
  cout << endl;
  return out;
}

Funcionario::Funcionario(string nome, unsigned long long cpf, unsigned int matricula, 
unsigned int cargatrabalhomensal, unsigned int cargahorastrabalhadas, double salariobase)
 : PessoaFisica(nome, cpf){
   this->matricula = matricula; 
   this->cargatrabalhomensal = cargatrabalhomensal;
   this->cargahorastrabalhadas = cargahorastrabalhadas;
   this->salariobase = salariobase;
}

double Funcionario::calculaSalarioBruto() const {
  double SalarioBruto = getSalarioBase() * 
    static_cast<double>(cargahorastrabalhadas)/cargatrabalhomensal;

  return SalarioBruto;
}

void Funcionario::setMatricula(unsigned int matricula){
  this->matricula = matricula < 0 ? 0 : matricula;
}

unsigned int Funcionario::getMatricula() const {
  return matricula;
}

void Funcionario::setCargaTrabalhoMensal(unsigned int cargatrabalhomensal){
  this->cargatrabalhomensal = cargatrabalhomensal < 0 ? 220 : cargatrabalhomensal;
}

unsigned int Funcionario::getCargaTrabalhoMensal() const {
  return cargatrabalhomensal;
}

void Funcionario::setCargaHorasTrabalhadas(unsigned int cargahorastrabalhadas){
  this->cargahorastrabalhadas = (cargahorastrabalhadas > 0 && 
  cargahorastrabalhadas <= getCargaTrabalhoMensal()) ? cargahorastrabalhadas : 0;
}

unsigned int Funcionario::getCargaHorasTrabalhadas() const {
  return cargahorastrabalhadas;
}

void Funcionario::setSalarioBase(double salariobase) {
  this->salariobase = salariobase < 0 ? 1100 : salariobase;
}

double Funcionario::getSalarioBase() const {
  return salariobase;
}