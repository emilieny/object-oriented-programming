#ifndef FILA_CHEIA_ERROR
#define FILA_CHEIA_ERROR

#include <stdexcept>
using std::out_of_range;

class fila_cheia_error: public out_of_range {
public:
  fila_cheia_error(const char*e ="A fila está cheia!"):out_of_range(e){}
};


#endif 