#ifndef PRODUTO_H
#define PRODUTO_H
#include <string>
using namespace std;

class Produto{
public:
  Produto();
  Produto(string, string, float);
  void setNome(string);
  void setCategoria(string);
  void setValidade(float);
  string getNome()const {return this->nome;}
  string getCategoria()const {return this->categoria;}
  float getValidade()const {return this->validade;}
  void mostraprodutos();

private:
  string nome, categoria;
  float validade;
};


#endif