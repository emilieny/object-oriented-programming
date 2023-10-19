#ifndef IMOVEL_NOVO_H
#define IMOVEL_NOVO_H

#include "Imovel.h"

class ImovelNovo : public Imovel {
public:
  ImovelNovo(string, float=0, float=500);

  void setAdicional(float);
  float getAdicional() const;

  float getPreco() const;

private:
  float adicional;
};

#endif