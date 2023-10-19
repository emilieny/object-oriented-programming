#ifndef IMOVEL_VELHO_H
#define IMOVEL_VELHO_H
#include "Imovel.h"

class ImovelVelho : public Imovel{
public:
  ImovelVelho(string, float=0, float=800);

  void setDesconto(float);
  float getDesconto()const;
  float getPreco()const;

private:
  float desconto;
};

#endif