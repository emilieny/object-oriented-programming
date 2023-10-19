#include <iostream>
using namespace std;

void fibonacci(int num){
    if (num == 1){
        cout << 0 << endl;
        return; }

    int a = 0;
    int b = 1;
    int fib;

    cout << a << " " << b;

    for (int i = 3; i <= num; i++){  
        fib = a + b;
        cout << " " << fib;
        a = b;
        b = fib; }
}

int fibonacci_recursivo(int num) {
   if((num==1)||(num==0)) {
      return(num);
   }else {
      return(fibonacci_recursivo(num-1)+fibonacci_recursivo(num-2));
   }
}

int main(){
    int num1;
    cout << "Digite a quantidade de números(for): ";
    cin >> num1; 
    cout << ""; fibonacci(num1); //imprimindo fibonacci com for
  
    int num2, i = 0;
    cout << "\nDigite a quantidade de números(recursivo): ";
    cin >> num2;
  
    while(i < num2) {
      cout << " " << fibonacci_recursivo(i); //imprimindo fibonacci com recursividade
      i++;  }
    return 0;
}