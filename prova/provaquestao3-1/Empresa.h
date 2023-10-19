#ifndef EMPRESA_H
#define EMPRESA_H

#include "PessoaJuridica.h"
#include "Funcionario.h"
#include "Cliente.h"

class Empresa : public PessoaJuridica {
public:
  Empresa(string="", unsigned long long=0.0, string="");

private:
  Cliente clientes[10];
  unsigned int quantidadeclientes;
  Funcionario funcionarios[10];
  unsigned int quantidadefuncionarios;
};

#endif