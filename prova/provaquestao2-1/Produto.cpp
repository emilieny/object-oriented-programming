#include <iostream>
#include <string>
using namespace std;

#include "Produto.h"

Produto::Produto(string n, string c, float v){
  setNome(n);
  setCategoria(c);
  setValidade(v);
}

Produto::Produto(){
  this->nome = "";
  this->categoria = "";
  this->validade = 0.0;
}

void Produto::setNome(string n){
  this->nome = n;
}

void Produto::setCategoria(string c){
  this->categoria = c;
}

void Produto::setValidade(float v){
  this->validade = v;
}

void Produto::mostraprodutos(){
  cout << "Produto: " << this->nome << endl;
  cout << "Categoria: " << this->categoria << endl;
  cout << "Validade: " << this->validade << endl;
}