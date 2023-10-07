#include "fixed_set.hpp"

#include <climits>
#include <cmath>
#include <iostream>

// ==============================================================
// ATENÇÃO:
// - A implementação das operações referentes ao exercício 1,
//   em que o conjunto será representado por um arranjo de
//   booleanos, deve ser feita na região ENTRE AS MACROS
//   #if defined(BIT_SET) e #else
//
// - A implementação das operações referentes ao exercício 2,
//   em que o conjunto será representado por um arranjo de chars,
//   deve ser feita na região ENTRE AS MACROS #else e #endif
// ==============================================================

#if !defined(BIT_SET)

Set::Set(unsigned capacity) {
  unsigned size = capacity;
  _data = new bool[size];

  for (unsigned i = 0; i < size; i++) {
    _data[i] = false;
  }

  std::cout << "Tamanho em bits: "
	    << (CHAR_BIT * size * sizeof(_data[0]))
	    << std::endl;
}

void Set::insert(unsigned x){
  this->_data[x] = true;
  return;
}

void Set::remove(unsigned x){
  this->_data[x] = false;
  return;
}

bool Set::contains(unsigned x){
  return this->_data[x];
}

#else

Set::Set(unsigned capacity) {
  unsigned size = std::ceil((float) capacity / (float) CHAR_BIT);
  _data = new char[size];

  for (unsigned i = 0; i < size; i++) {
    _data[i] = 0;
  }

  std::cout << "Tamanho em bits: "
	    << (CHAR_BIT * size * sizeof(_data[0]))
	    << std::endl;
}

void Set::insert(unsigned x){

  unsigned data_set = x / CHAR_BIT;
  unsigned data_point = x % CHAR_BIT;
  char pos = 0b10000000;
  if(data_point > 1){
    pos = pos >> data_point;
  }
  this->_data[data_set] = (this->_data[data_set] |  pos);
  return;
}

void Set::remove(unsigned x){
  unsigned data_set = x / CHAR_BIT;
  unsigned data_point = x % CHAR_BIT;
  char pos = 0b10000000;
  if(data_point > 1){
    pos = pos >> data_point;
  }
  this->_data[data_set] = (this->_data[data_set] &  ~pos);
  return;
}

bool Set::contains(unsigned x){

  unsigned data_set = x / CHAR_BIT;
  unsigned data_point = x % CHAR_BIT;
  char pos = 0b10000000;
  if(data_point > 1){
    pos = pos >> data_point;
  }
  if (this->_data[data_set] &  pos)
    return true;
  else
    return false;
}

#endif

