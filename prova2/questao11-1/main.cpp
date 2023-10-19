#include "Pessoa.h"
#include "PessoaFisica.h"
#include "PessoaJuridica.h"
#include "Agenda.h"

#include <iostream>
using namespace std;

int main(){
  Agenda agendaDeContatos(3);
  
  Pessoa *pFisica1 = new PessoaFisica("Emilieny", "Rua Jacob Alves", "emilieny@gmail.com", 40028922,
                                       "11777716432", "15/05/2001", "Solteira");

  agendaDeContatos.adicionarContato(pFisica1);

  Pessoa *pJuridica1 = new PessoaJuridica("Coca Cola", "Avenida Monte Alto", "org@coca.com", 30303232,
                                       "5854561", "321231", "Coca Cola Industrias Ltda");

  agendaDeContatos.adicionarContato(pJuridica1);

  cout << "Listando todos os contatos " << endl;
  agendaDeContatos.listarContatos();

  cout << endl;
  cout << "Buscando Emilieny pelo nome " << endl;

  agendaDeContatos.buscarContato("Emilieny");

  cout << endl;
  cout << "Buscando Emilieny pelo CPF" << endl;

  agendaDeContatos.buscarContato("11777716432");

  cout << endl;
  cout << "Buscando Coca Cola pelo nome" << endl;

  agendaDeContatos.buscarContato("Coca Cola");

  cout << endl;
  cout << "Buscando Coca Cola pelo CNPJ" << endl;

  agendaDeContatos.buscarContato("5854561");

  cout << endl;
  cout << "Removendo Coca Cola pelo nome" << endl;
  agendaDeContatos.removerContato("Coca Cola");

  cout << "Removendo Emilieny pelo CPF" << endl;
  agendaDeContatos.removerContato("11777716432");

  cout << endl;
  cout << "Listando todos os contatos" << endl;
  agendaDeContatos.listarContatos();

  return 0;
}