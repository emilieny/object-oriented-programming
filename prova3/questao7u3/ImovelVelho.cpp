#include "ImovelVelho.h"

ImovelVelho::ImovelVelho(string endereco, float preco, float desconto) : Imovel(endereco,preco){
  setDesconto(desconto < 0 ? 800 : desconto);
}

void ImovelVelho::setDesconto(float valor){
  desconto = valor < 0 ? 500 : valor;
}

float ImovelVelho::getDesconto()const{
  return desconto;
}

float ImovelVelho::getPreco()const{
  return preco - getDesconto();
}