#include <iostream>

#include "Quadrado.h"
#include "Circulo.h"
#include "Triangulo.h"

int main() {
  //FormaBidimensional fd(2); // ERRO!!!!

  FormaBidimensional *formas[] = {new Quadrado(3), new Circulo(4), new Triangulo(3, 4)};

  for (int i = 0 ; i < 3 ; i++)
  {
    formas[i]->desenhar();
    cout << "Área: " << formas[i]->calcularArea() << endl;
    cout << "Perímetro: " << formas[i]->calcularPerimetro() << endl;
    delete formas[i];
  }

  return 0;
}