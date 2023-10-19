#include <iostream>
using namespace std;

void valores_pi(int num){
  int pi = 0;
  int n = 3;
  
  for(int i=1; i<=num; i++){
    pi = 4 - (4/n);
    n += 2;
    cout << "repeticão " << i << ", resultado = " << pi << endl;
  }
}

int main(){
  valores_pi(10);
}