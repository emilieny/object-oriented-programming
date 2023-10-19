#ifndef FILA_VAZIA_ERROR_H
#define FILA_VAZIA_ERROR_H

#include <stdexcept>
using std::out_of_range;

class fila_vazia_error: public out_of_range {
public:
  fila_vazia_error(const char*e ="A fila está vazia!"):out_of_range(e){}
};


#endif 