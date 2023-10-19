#ifndef IMOVEL_H
#define IMOVEL_H
#include <string>
using namespace std;

class Imovel{
public:
  Imovel(string, float=0);

  void setEndereco(string);
  void setPreco(float);

  string getEndereco() const;
  float getPreco() const;

protected:
  string endereco;
  float preco;
};

#endif 