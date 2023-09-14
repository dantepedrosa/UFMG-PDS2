#pragma once

#include <string>

class Expression {
public:
  /// @brief Inicializa a expressão no formato pósfixo.
  Expression(std::string postfix);

  /// @return O resultado da expressão.
  float eval();
  
private:
  
};
