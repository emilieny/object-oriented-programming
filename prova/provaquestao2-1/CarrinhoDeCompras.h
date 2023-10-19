#ifndef CARRINHO_DE_COMPRAS_H
#define CARRINHO_DE_COMPRAS_H
#include "Produto.h"
#include <string>
using namespace std;

class CarrinhoDeCompras{
public:
  CarrinhoDeCompras();
  void inserircompra(string, string, float);
  void inserircompra(const Produto &p);
  void removercompra(string);
  int buscaproduto(string)const; /* Não foi pedida na questão, mas vai ajudar na função de remover o produto */
  void listadecompras();

private:
  Produto produtos[30];
  int numProdutos;  
};

#endif