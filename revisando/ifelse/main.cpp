#include <iostream>
using namespace std;

int main(){
  int num = 141;

  if((num%2) == 0){
    if (num < 100){
      cout << "é par e menor que 100";
    } else{
      cout << "é par e maior que 100";
    }  
  }else{
    if(num < 100){
      cout << "é impar e menor que 100";
    }else{
      cout << "é impar e maior que 100";
    }
  }
  return 0;
}