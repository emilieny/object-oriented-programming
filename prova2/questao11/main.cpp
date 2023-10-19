#include <iostream>
#include "ArrayList.h"
using namespace std;

int main() {
    ArrayList al(10);

    al.add(1).add(2).add(3).add(4).add(5);;
    cout << "buscar indice 2: " << al.busca(2) << endl;
    al.print();
    al.remove(1);
    
    cout << "Remove elemento do indice 1" << endl;
    
    al.print();
    al.removeEL(1);

    return 0;
}