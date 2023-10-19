#include "Animal.h"
#include "Cachorro.h"
#include "Gato.h"

#include <iostream>
using std::cout;
using std::endl;

int main(){
  Animal animal("Loui");
  Gato gato("Bolinha");
  Cachorro cachorro("Halls");

  cout << animal.caminha() << endl;
  cout << gato.caminha() << endl;
  cout << cachorro.caminha() << endl;
  
  cout << gato.mia() << endl;
  cout << cachorro.late() << endl;

  return 0;
}

