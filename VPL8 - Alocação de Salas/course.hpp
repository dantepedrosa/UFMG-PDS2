#pragma once

#include <string>

class Course {
public:
  std::string id;
  std::string name;

  /// @brief Contrutor da classe Course
  /// @param id Identificação do curso (única)
  /// @param name Nome completo do curso
  Course(std::string id, std::string name);

  /// @brief Overload de operator == para a classe
  /// Compara se o id do curso é igual
  /// @param other objeto a ser comparado com o objeto sendo chamado
  /// @return true se códigos são iguais
  bool operator==(Course const &other) const;
};