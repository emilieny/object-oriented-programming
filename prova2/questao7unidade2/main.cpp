#include <iostream>
using std::cout, std::endl;

#include "Complex.h"

int main() {
  Complex x(5, 10), y(2, 6), z;
    cout << "x: ";
    x.print();
    cout << endl;
    cout << "y: ";
    y.print();
    cout << endl;
    z = x + y;
    cout << "z = x + y: ";
    z.print();
    cout << endl;
    z = x - y;
    cout << "z = x - y: ";
    z.print();
    cout << endl;
    z += x;
    cout << "z += x: ";
    z.print();
    cout << endl;
    z -= y;
    cout << "z -= y: ";
    z.print();
    cout << endl;
    cout << "++z: ";
    ++z;
    z.print();
    cout << endl;
    cout << "--z: ";
    --z;
    z.print();
    cout << endl;

  return 0;
}