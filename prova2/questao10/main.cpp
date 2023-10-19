#include <iostream>
#include <string>
#include "Pessoa.h"
#include "Agenda.h"
using namespace std;

int main()
{
    
    Agenda a(10);
    a.armazenaPessoa("Emilieny", 21, 1.62);
    a.armazenaPessoa("Maria", 19, 1.70);
    a.armazenaPessoa("Jose", 25, 1.80);
    a.imprimePovo();

    int posicao = a.buscaPessoa("Emilieny");
    if (posicao > 0){
      a.imprimePessoa(posicao);
    }
    cout << endl;

    a.removePessoa("Jose");
    a.imprimePovo();
    cout << endl;
    return 0;
}