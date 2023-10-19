#ifndef FILA_H
#define FILA_H

#include <iostream>
using namespace std;
using std::ostream;

#include "fila_vazia_error.h"
#include "fila_cheia_error.h"

template<class T = int, int SIZE = 10>
class Fila {
  friend ostream &operator<<(ostream &out, const Fila<T, SIZE> &q){
    out << "[";
    for(int i = 0, aux = q.begin; i < q.currentSize; i++, aux = (aux + 1)%SIZE){
      out << "  " << q.arr[aux];
    }
    out << " ]" << endl;
    return out;
  }

public:
  Fila();  
  ~Fila();          

  void front(T&);

  void push_back(const T&);
  void pop_front(T&);
  
  int size();
  bool isEmpty();
  bool isFull();


private:
  T* arr;
  int currentSize, begin, end;
};

template<class T, int SIZE>
Fila<T, SIZE>::Fila(){
  begin = 0;
  end = 0;
  this->currentSize = 0;
  
  arr = new T[SIZE];
}


template<class T, int SIZE>
void Fila<T, SIZE>::front(T& data){
  if(this->isEmpty()){
    throw fila_vazia_error();
  }

  data = this->arr[this->begin];
}


template<class T, int SIZE>
void Fila<T, SIZE>::push_back(const T& data){
  if(this->isFull()){
    throw fila_cheia_error();
  }

  this->arr[this->end] = data;
  this->end = (this->end + 1) % SIZE;
  this->currentSize++;
}


template<class T, int SIZE>
void Fila<T, SIZE>::pop_front(T& data){
  if(this->isEmpty()){
    throw fila_vazia_error();
  }

  data = this->arr[this->begin];
  this->begin = (this->begin + 1) % SIZE;
  this->currentSize--;
}


template<class T, int SIZE>
int Fila<T, SIZE>::size(){
  return currentSize;
}


template<class T, int SIZE>
bool Fila<T, SIZE>::isEmpty(){
  return currentSize == 0;
}

template<class T, int SIZE>
bool Fila<T, SIZE>::isFull(){
  return currentSize == SIZE;
}


template<class T, int SIZE>
Fila<T, SIZE>::~Fila(){
  delete [] arr;
}

#endif 