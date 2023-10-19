#ifndef PESSOA_H
#define PESSOA_H

#include <string>
using std::string;

class Pessoa{
public:
  Pessoa();
  Pessoa(string, int, float);

  void setNome( string );
  void setIdade( int );
  void setAltura( float );
  string getNome()const {return this->nome;}
  int getIdade()const {return this->idade;}
  int getAltura()const {return this->altura;}
  void printDados()const;

private:
  string nome;
  int idade;
  float altura;
  
};

#endif