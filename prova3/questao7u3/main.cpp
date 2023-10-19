#include "Imovel.h"
#include "ImovelNovo.h"
#include "ImovelVelho.h"

#include <iostream>
using namespace std;


int main(){
  Imovel i("Rua Jacob Alves", 860000);
  ImovelNovo iNovo("Rua São Sebastião", 920000, 650);
  ImovelVelho iVelho("Rua 7 de setembro", 320000, 900);

  cout << "IMÓVEL" << endl;
  cout << "Endereço: " << i.getEndereco() << endl;
  cout << "Preço final: " << i.getPreco() << endl;
  cout << endl;

  cout << "IMÓVEL NOVO" << endl;
  cout << "Endereço: " << iNovo.getEndereco() << endl;
  cout << "Preço final (Com taxa adicional): " << iNovo.getPreco() << endl;
  cout << "Valor da taxa adicional: " << iNovo.getAdicional() << endl;
  cout << endl;

  cout << "IMÓVEL VELHO" << endl;
  cout << "Endereço: " << iVelho.getEndereco() << endl;
  cout << "Preço final (Com desconto aplicado): " << iVelho.getPreco() << endl;
  cout << "Valor do desconto: " << iVelho.getDesconto() << endl;
  cout << endl;

  return 0;
}