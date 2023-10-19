#include <iostream>
using namespace std;

int main(){
    string nome;
    int idade;

    std::cout << "olá, digite seu nome " << endl;
    cin >> nome;
    std::cout << nome << " Quantos anos vc tem?" << endl;
    cin >> idade;
    if(idade >= 18){
        std::cout << "Voce é maior de idade!" << endl;
    } else{   
        std::cout << "Voce é menor de idade!" << endl;
    }
    return 0;
}