#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

template<class T>
bool comparar(const T& a, const T&b){
  
  return a == b;
}

int main(){

  cout << "1 == 2: " << (comparar(1, 2) ? "verdadeiro" : "falso") << endl;
  cout << "5 == 5: " << (comparar(5, 5) ? "verdadeira" : "falso") << endl;

  cout << endl;

  cout << "\"computador\" == \"computador\": " << 
    (comparar("computador", "computador") ? "verdadeiro" : "falso") << endl;
  cout << "\"computador\" == \"celular\": " << 
    (comparar(string("computador"), string("celular")) ? "verdadeiro" : "falso") << endl;

  cout << endl;

  cout << "10.2 == 25.3: " << (comparar(10.2, 25.3) ? "verdadeiro" : "falso") << endl;
  cout << "12.3 == 12.3: " << (comparar(12.3, 12.3) ? "verdadeiro" : "falso") << endl;

  return 0;
}