#include "PessoaJuridica.h"

PessoaJuridica::PessoaJuridica(string nome, unsigned long long cnpj, string razaosocial) :
Pessoa(nome){
  setCnpj(cnpj);
  setRazaoSocial(razaosocial);
}

void PessoaJuridica::setCnpj(unsigned long long cnpj){
  this->cnpj = cnpj;
}

unsigned long long PessoaJuridica::getCnpj() const {
  return cnpj;
}

void PessoaJuridica::setRazaoSocial(string razaosocial){
  this->Razaosocial = razaosocial;
}

string PessoaJuridica::getRazaoSocial() const {
  return Razaosocial;
}