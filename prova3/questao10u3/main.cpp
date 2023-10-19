#include "Cliente.h"
#include <iostream>
using namespace std;

int main(){
  Cliente client("Emilieny de Souza", 11122233344, "Rua Jacob Alves", 40028922);

  cout << client << endl;

  Cliente client2("João Oliveira", 12345678912, "Rua Pedro Carneiro", 34750210);

  cout << client2 << endl;

  return 0;
}