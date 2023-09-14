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


#endif
