#include <iostream>
using namespace std;

#include "Fila.h"

int main(){
  Fila<int, 5> q1;
  int aux;

  try{
    q1.front(aux);
  }catch(out_of_range &e){
    cerr << e.what() << endl;
  }

  try{
    q1.pop_front(aux);
  }catch(out_of_range &e){
    cerr << e.what() << endl;
  }
  
  for(int i = 11; i < 17; i++){
    try{
      q1.push_back(i);
    }catch(out_of_range &e){
      cerr << e.what() << endl;
    }
  }
  return 0;
}