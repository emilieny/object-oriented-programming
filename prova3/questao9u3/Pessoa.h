#ifndef PESSOA_H
#define PESSOA_H
#include <string>
using std::string;

#include <iostream>
using std::ostream;

class Pessoa{
  friend ostream& operator<<(ostream&, const Pessoa&);
public:
  Pessoa(string);
  void setNome(string);
  string getNome() const;

protected:
  string nome;
};


#endif