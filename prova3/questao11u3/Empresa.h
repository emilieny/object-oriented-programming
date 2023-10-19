#ifndef EMPRESA_H
#define EMPRESA_H

#include "PessoaJuridica.h"
#include "Funcionario.h"
#include "Cliente.h"

class Empresa : public PessoaJuridica {
public:
  Empresa(string="", unsigned long long=0, string="");

  void addCliente(const Cliente&);
  void addFuncionario(const Funcionario&);

  void mostraClientes() const;
  void mostraFuncionarios() const;

  double calcularFolhaDePagamento() const;
private:
  Cliente clientes[10];
  unsigned int quantidadeclientes;
  Funcionario funcionarios[10];
  unsigned int quantidadefuncionarios;
};

#endif