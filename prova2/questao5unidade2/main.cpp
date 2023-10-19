#include <iostream>
using std::cout, std::endl;
using std::cin;

#include "Array.h"

int main() {
  Array a1(7);  //array de 7 elementos
  Array a2;     //array de 10 elemento

  cout << "Digite 7 elementos: ";
  cin >> a1;
  cout << a1;
  cout << "Digite 10 elementos: ";
  cin >> a2;

  if (a1 == a2)
    cout << "a1 e a2 são iguais";

  Array a3(a1);

  a3[5] = 100; //invoca int &operator[](int)
  //a3.operator[](5) = 100;

  cout << "a3[5] == " << a3[5] << endl;  //int operator[](int) const

  cout << "a2[5] == " << a2[5] << endl;

  Array a4 = a1 + a2;
  cout << "a4 == " << a4 << endl;

  a1 += a2;
  cout << "a1 == " << a1 << endl;

  return 0;
}