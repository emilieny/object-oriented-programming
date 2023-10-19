#include <iostream>
#include <math.h>
using namespace std;

void calculaRaizes(int a, int b, int c){
  int delta;
  int r1;
  int r2;
  
  delta = (b*b) - 4*(a)*(c);
  r1 = -(b) + (sqrt(delta)/2*a);
  r2 = -(b) - (sqrt(delta)/2*a);
  cout << "x1 = " << r1 << endl;
  cout << "x2 = " << r2;
}

int main(){
  calculaRaizes(-1, 4, -4);
return 0;
}