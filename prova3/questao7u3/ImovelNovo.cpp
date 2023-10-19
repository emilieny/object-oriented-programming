#include "ImovelNovo.h"

ImovelNovo::ImovelNovo(string endereco, float preco, float adicional) : 
Imovel(endereco, preco){
  setAdicional(adicional < 0 ? 500 : adicional);
}

void ImovelNovo::setAdicional(float valor){
  adicional =  valor < 0 ? 500 : valor;
}

float ImovelNovo::getAdicional() const {
  return adicional;
}

float ImovelNovo::getPreco() const {
  return preco + getAdicional();
}