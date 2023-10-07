#pragma once
#include <vector>

class Set {
public:
  // ==============================================================
  // VOCÊ NÃO DEVE ALTERAR A REGIÃO PÚBLICA
  // ==============================================================

  /// @brief Inicializa o conjunto com a capacidade especificada.
  Set(unsigned capacity);

  /// @brief Insere um elemento no conjunto.
  /// @param x Inteiro não-negativo representando o elemento
  ///          de um determinado conjunto finito.
  void insert(unsigned x);

  /// @brief Remove um elemento do conjunto.
  /// @param x Inteiro não-negativo representando o elemento
  ///          de um determinado conjunto finito.
  void remove(unsigned x);

  /// @brief Verifica se um elemento existe no conjunto
  /// @param x Inteiro a ser pesquisado.
  /// @param x Inteiro não-negativo representando o elemento
  ///          de um determinado conjunto finito.
  /// @return true se o elemento foi encontrado, false se não for
  bool contains(unsigned x);
  
private:
  // ==============================================================
  // A partir daqui, você pode alterar!
  //
  // ATENÇÃO:
  // - Os arranjos que irão representar o conjunto já estão
  //   declarados. Você pode adicionar outros campos e funções,
  //   se julgar necessário.
  //
  // - As eventuais declarações de campos e funções referentes
  //   ao exercício 1, em que o conjunto será representado por um
  //   arranjo de booleanos, deve ser feita na região ENTRE AS
  //   MACROS #if !defined(BIT_SET) e #else
  //
  // - As eventuais declarações de campos e funções referentes
  //   ao exercício 2, em que o conjunto será representado por um
  //   arranjo de chars, deve ser feita na região ENTRE AS
  //   MACROS #else e #endif
  // ==============================================================

  std::vector<bool> 

#if !defined(BIT_SET)
  bool *_data;
#else
  char *_data;
#endif