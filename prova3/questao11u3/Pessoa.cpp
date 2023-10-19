#include "Pessoa.h"
using namespace std;

ostream& operator<<(ostream& out, const Pessoa& pessoa) {
  cout << "Nome: " << pessoa.getNome() << endl;
    return out;
}

Pessoa::Pessoa(string nome){
  setNome(nome);
}

string Pessoa::getNome()const{
  return nome;
}

void Pessoa::setNome(string nome){
  this-> nome = nome;
}