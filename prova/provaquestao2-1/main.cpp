#include <iostream>
#include <string>
using namespace std;
#include "CarrinhoDeCompras.h"

int main() {
  CarrinhoDeCompras compra;

  compra.inserircompra("Arroz", "Comida", 12.12);
  compra.inserircompra("Feijão", "Comida", 14.01);
  compra.inserircompra("Sabão", "Limpeza", 03.10);
  compra.inserircompra("Sabonete", "Limpeza", 15.05);
  compra.inserircompra("Carne", "Comida", 10.10);
  compra.listadecompras();
  cout << endl;

  compra.removercompra("Arroz");
  cout << "LISTA DE PRODUTOS RESTANTES: " << endl;
  compra.listadecompras();
  return 0;
}