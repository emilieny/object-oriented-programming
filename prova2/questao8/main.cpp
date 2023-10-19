#include <iostream>
#include <string>
#include "Pessoa.h"
using namespace std;

#include "Pessoa.h"

int main(){
  string nome;
  int idade;
  float altura;
  cout << "Digite o nome: ";
  getline(cin, nome);
  cout << "Digite a idade: ";
  cin >> idade;
  cout << "Digite a altura: ";
  cin >> altura;
  Pessoa p1(nome, idade, altura);
  p1.printDados();

  return 0;
}