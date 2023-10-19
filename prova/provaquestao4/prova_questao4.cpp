#include <iostream>
using namespace std;

void somar(int a, int b) {
  int soma;
  soma = a + b;
  cout << "A soma dos números é " << soma << endl;
}

void subtrair(int a, int b) {
  int subtracao;
  subtracao = a - b;
  cout << "A subtração dos números é " << subtracao << endl;
}

void multiplicar(int a, int b) {
  int multiplicacao = 0;

  for (int i = 0; i < b; i++) {
    multiplicacao += a;
  }
  cout << "O resultado da multiplicação é " << multiplicacao << endl;
}

void exponenciacao(int a, int b) {
  int exponenciacao = 0;

  for (int i = 0; i <= b; i++) {
    exponenciacao += a;
  }
  cout << "O resultado da exponenciacao é " << exponenciacao << endl;
}

int main() {
  somar(1, 2);
  subtrair(2, 1);
  multiplicar(2, 3);
  exponenciacao(2, 3);
}