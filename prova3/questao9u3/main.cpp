#include <iostream>
#include "Funcionario.h"
using namespace std;

int main(){
  Funcionario f("Maria", 12312312312, 23023, 220, 184, 5200);

  cout << f << endl;

  Funcionario f2("Joao", 45645665445, 12342, 220, 150, 4900);

  cout << f2 << endl;
  return 0;
}