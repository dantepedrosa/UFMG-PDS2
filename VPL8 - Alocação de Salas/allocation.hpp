#pragma once

#include <string>
#include <vector>
using namespace std;

class Allocation {
public:

  string day;
  string hour;
  string room;

  /// @brief Contrutor da classe Alocação
  /// @param day dia da alocação
  /// @param hour hora da alocação
  /// @param room sala da alocação
  Allocation(string day, string hour, string room);

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
  static vector<string> _dayPriotiry{
    "Seg-Qua", 
    "Ter-Qui", 
    "Sex"
  };
  static vector<string> _hourPriority{
    "07:30-09:10",
    "09:25-11:05",
    "11:10-12:50",
    "13:00-14:40",
    "14:55-16:35",
    "17:00-18:40"
  };

  static int getPriority(vector<string> priorityList, string s);
};