#include <iostream>
#include <string>
using namespace std;

#include "CarrinhoDeCompras.h"

CarrinhoDeCompras::CarrinhoDeCompras(){
  numProdutos = 0;
}

void CarrinhoDeCompras::inserircompra(string n, string c, float v){
  Produto p(n, c, v);
  inserircompra(p);
}

void CarrinhoDeCompras::inserircompra(const Produto &p){
  if (numProdutos < 10)
    {
        produtos[numProdutos] = p;
        numProdutos++;
    }
    else
    {
        cout << "Carrinho cheio!" << endl;
    }
}

void CarrinhoDeCompras::removercompra(string n){
  
    int pos = buscaproduto(n);
    if (pos != -1)
    {
        for (int i = pos; i < numProdutos - 1; i++)
        {
            produtos[i] = produtos[i + 1];
        }
        numProdutos--;
    }
}
int CarrinhoDeCompras::buscaproduto(string n)const{
  for (int i = 0; i < numProdutos; i++)
    {
        if (produtos[i].getNome() == n)
        {
            return i;
        }
    }
    return -1;
}

void CarrinhoDeCompras::listadecompras(){
  for (int i = 0; i < numProdutos; i++)
    {
        produtos[i].mostraprodutos();
    }
}