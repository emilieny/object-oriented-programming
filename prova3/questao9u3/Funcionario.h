#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include "PessoaFisica.h"
#include <iostream>
using std::ostream;

class Funcionario : public PessoaFisica {
  friend ostream& operator<<(ostream&, const Funcionario&);
public:
  Funcionario(string, unsigned long long = 0, unsigned int = 0, 
  unsigned int = 220, unsigned int = 1100, double = 0);

  double calculaSalarioBruto() const;

  void setMatricula(unsigned int matricula);
  unsigned int getMatricula() const;

  void setCargaTrabalhoMensal(unsigned int CargaTrabalhoMensal);
  unsigned int getCargaTrabalhoMensal() const;

  void setCargaHorasTrabalhadas(unsigned int CargaHorasTrabalhadas);
  unsigned int getCargaHorasTrabalhadas() const;

  void setSalarioBase(double SalarioBase);
  double getSalarioBase() const;

private:
  unsigned int matricula, cargatrabalhomensal, cargahorastrabalhadas;
  double salariobase;
};

#endif