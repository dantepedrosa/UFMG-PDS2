#pragma once

#include <string>
#include <map>

class Allocation {
public:

  std::string day;
  std::string hour;
  std::string room;

  /// @brief Contrutor da classe Alocação
  /// @param day dia da alocação
  /// @param hour hora da alocação
  /// @param room sala da alocação
  Allocation(std::string day, std::string hour, std::string room);

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

private:
  std::vector<std::string> _dayPriotiry{
    "Seg-Qua", 
    "Ter-Qui", 
    "Sex"
  };
  std::vector<std::string> _hourPriority{
    "07:30-09:10",
    "09:25-11:05",
    "11:10-12:50",
    "13:00-14:40",
    "14:55-16:35",
    "17:00-18:40"
  };
};