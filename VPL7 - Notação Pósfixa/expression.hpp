#pragma once

#include <string>
#include <vector>

class Expression {
public:
  /// @brief Inicializa a expressão no formato pósfixo.
  /// @param postfix expressão no formato pósfixo.
  Expression(std::string postfix);

  /// @return O resultado da expressão.
  float eval();
  
private:
  std::string postfixExpression;
  std::vector<float> queue;
};
