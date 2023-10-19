#include <iostream>
using namespace std;

int array[5];
int posicao = 0;
int novo_elemento;
int deletar;

void create(int num){ // Função que o professor deu na aula
  array[posicao] = num;
  posicao = posicao + 1; 
  }

void read(int posicao){ // Printa o elemento indexado com o paramentro posição
  cout << "" << array[posicao];
}

void update(int posicao, int novo){ //percorre o array e muda o elemento da posição dada pelo usuário, para um elemento também dado pelo usuário
  for (int i = 0; i <= 5; i++){
    if(i == posicao){
      array[posicao] = novo;
    }
  }
}

void Delete(int num){ // percorre o array até encontrar o elemento a ser deletado
  for(int i=0; i < 5; i++){
    if(array[i] == num){
      array[i] = 0;
    }
  }
}


int main(){
  create(1);
  create(2);
  create(3);
  create(4);
  cout << "Deseja printar o elemento de qual posição?" << endl;
  cin >> posicao; 
  read(posicao);
  cout << endl;
  
  cout << "Digite a posição do elemento que quer mudar, e o novo elemento" << endl;
  cin >> posicao;
  cin >> novo_elemento;
  update(posicao, novo_elemento);

  cout << "Digite o elemento que deseja deletar" << endl;
  cin >> deletar;
  Delete(deletar); 
  return 0;
}
 