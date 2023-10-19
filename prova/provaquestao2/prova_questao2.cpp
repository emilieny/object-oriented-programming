#include <iostream>
using namespace std;


void valores(int x, int y){
  int valor;
  if(x > y){
    cout << "---";
  }else{
    for(int i = x; i <= y; i++){
    valor = (i * i);
    cout << i << " " << valor << endl;
  }
  }
}

int main(){
  int valor1 = 15; // entradas que o professor deu
  int valor2 = 19; // entradas que o professor deu
  valores(valor1, valor2);

  // podendo testar com qualquer entrada
  int v1;
  int v2;
  cin >> v1;
  cin >> v2;
  valores(v1, v2);
  return 0;
}