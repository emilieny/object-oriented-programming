#include "Empresa.h"
#include "Funcionario.h"
#include "Cliente.h"

#include <iostream>
using namespace std;

Empresa::Empresa(string nome, unsigned long long cnpj, string razaosocial) : PessoaJuridica(nome, cnpj, razaosocial){
  this->quantidadeclientes = 0;
  this->quantidadefuncionarios = 0;
}
