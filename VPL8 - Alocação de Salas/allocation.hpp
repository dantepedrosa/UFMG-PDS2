#pragma once

#include <string>

class Allocation {
public:
  std::string day;
  std::string hour;
  std::string room;

  /// @brief Overload de operator == para a classe. 
  /// Compara se o dia, hora e sala são iguais. 
  /// @param other classe a ser comparada com a atual
  /// @return true se o dia, horário e sala são todos iguais
  bool operator==(Allocation const &other) const;

  /// @brief Overload de operator == para a classe.
  /// Compara se o dia, horário e sala são menores que other.
  /// @param other classe a ser comparada a atual
  /// @return true se tanto o dia, horário e sala são menores
  bool operator<(Allocation const &other) const;
};