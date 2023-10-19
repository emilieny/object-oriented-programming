#include "Imovel.h"

Imovel::Imovel(string endereco, float preco){
  setEndereco(endereco);
  setPreco(preco < 0 ? 0 : preco);
}

void Imovel::setEndereco(string endereco){
  this->endereco = endereco;
}

string Imovel::getEndereco()const{
  return endereco;
}

void Imovel::setPreco(float preco){
  this->preco = preco;
}

float Imovel::getPreco()const{
  return preco;
}