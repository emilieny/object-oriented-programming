#ifndef AGENDA_H
#define AGENDA_H

#include "Pessoa.h"
#include <string>

class Agenda{
public:
   Agenda();
   void armazenaPessoa(string nome, int idade, float altura);
   void armazenaPessoa(const Pessoa &p);
   void removePessoa(string nome);
   int buscaPessoa(string nome) const;
   void imprimePovo() const; 
   void imprimePessoa(int i) const; 
private:
   Pessoa pessoas[10];
   int numPessoas;
};

#endif
