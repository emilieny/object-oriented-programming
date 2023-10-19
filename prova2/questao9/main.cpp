#include <iostream>
#include <string>
#include "Pessoa.h"
#include "Agenda.h"
using namespace std;

int main()
{
    char linha[] = "---------------------------------------------\n";
  	Agenda a;

    a.armazenaPessoa("Emilieny", 21, 1.62);
    a.armazenaPessoa("João", 19, 1.70);
    a.armazenaPessoa("Jonas", 25, 1.80);
    a.imprimePovo();
    cout << linha;

    int posicao = a.buscaPessoa("João");
	  if (posicao > 0){a.imprimePessoa(posicao);}
    cout << linha;
    a.removePessoa("Jonas");
    a.imprimePovo();
    cout << linha;
    return 0;
}