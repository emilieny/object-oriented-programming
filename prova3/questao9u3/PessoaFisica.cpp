#include "PessoaFisica.h"

PessoaFisica::PessoaFisica(string nome, unsigned long long cpf) : Pessoa(nome){
  setCpf(cpf);
}

void PessoaFisica::setCpf(unsigned long long cpf){
  this->cpf = cpf;
}

unsigned long long PessoaFisica::getCpf()const{
  return cpf;
}