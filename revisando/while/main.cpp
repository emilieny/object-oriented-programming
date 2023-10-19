#include <iostream>
using namespace std;

int main(){
  int num;
  int soma = 0;

  while(num != 0){
    cin >> num;
    soma += num;
  }
  cout << soma;
  return 0;
}