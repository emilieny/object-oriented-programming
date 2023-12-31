#include <iostream>
using namespace std;
#include "Pilha.h"
#include <stdexcept>
using std::out_of_range;

int main() {

  Pilha<int> pi;
  int popEli;
  try {
    pi.pop(popEli);
  }catch(out_of_range& e){
    cerr << e.what() << endl;
  }

  for(int i = 0; i < 12; i++){
    try{
      pi.push(i);
    }catch(out_of_range& e){
      cerr << e.what() << endl;
    }
  }

  return 0;
}