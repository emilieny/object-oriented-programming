#include <iostream>
using namespace std;

int main(){
  for(int i=11; i>-10; i--){
    if((i%3) == 0){
      cout << i << " é divisor de 3" << endl;
    }else{
      cout << i << endl;
    }
  }
  return 0;
}