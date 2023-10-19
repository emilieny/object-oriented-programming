#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include "PessoaFisica.h"
#include <iostream>
using std::ostream;

class Funcionario : public PessoaFisica {
  friend ostream& operator<<(ostream&, const Funcionario&);
public:
  Funcionario(string, unsigned long long = 0, unsigned int = 0, double = 0);
  void setMatricula(unsigned int matricula);
  unsigned int getMatricula() const;
  void setSalarioBase(double SalarioBase);
  double getSalarioBase() const;

private:
  unsigned int matricula;
  double salariobase;
};

#endif