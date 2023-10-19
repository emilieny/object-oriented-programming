#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;

#include "Pessoa.h"

Pessoa::Pessoa(string n, int i, float a){
  setNome(n);
  setIdade(i);
  setAltura(a);
}

Pessoa::Pessoa(){
  this->nome = "";
  this->idade = 0;
  this->altura = 0;
}


void Pessoa::setNome(string n){
  this->nome = n ;
}

void Pessoa::setIdade(int i){
  if (i < 0){
    cout << "idade inválida" << endl;
    this->idade = 0;
  }else {
    this->idade = i;
  }
}

void Pessoa::setAltura(float a){
  if (a < 0){
    cout << "altura inválida" << endl;
    this->altura = 0;
  } else {
    this->altura = a;
  }
}

void Pessoa::printDados()const{
  cout <<  "nome: " << this->nome << endl;
  cout <<  "idade: " << this->idade << endl;
  cout <<  "altura: " << this->altura << endl;
  cout << endl;
}