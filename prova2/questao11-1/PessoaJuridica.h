#ifndef PESSOA_JURIDICA_H
#define PESSOA_JURIDICA_H

#include "Pessoa.h"

#include <string>
using std::string;

class PessoaJuridica: public Pessoa {
public:
  PessoaJuridica(string="", string="", string="", 
    unsigned int=999999999, string="", string="", string="");
    
  virtual void exibirPessoa() const;  

  virtual string getNome() const;
  virtual string getCpfOuCnpj() const;

private:
  string cnpj, inscricaoEstadual, razaoSocial;
};

#endif