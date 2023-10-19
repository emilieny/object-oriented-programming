#ifndef CLIENTE_H
#define CLIENTE_H

#include "PessoaFisica.h"

#include <string>
using std::string;

#include <iostream>
using std::ostream;

class Cliente : public PessoaFisica {
  friend ostream& operator<<(ostream&, const Cliente&);
public:
  Cliente(string, unsigned long long=0, string="", unsigned int=0);

  void setEndereco(string endereco);
  string getEndereco() const;

  void setTelefone(unsigned int telefone);
  unsigned int getTelefone() const;

private:
  string endereco;
  unsigned int telefone;
};

#endif