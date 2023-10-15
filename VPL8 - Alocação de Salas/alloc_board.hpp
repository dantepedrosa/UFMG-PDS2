#pragma once

#include "allocation.hpp"
#include "course.hpp"

#include <string>
#include <vector>
#include <map>

class AllocBoard {
public:

  /// @brief Cria uma nova alocação para uma determinada disciplina
  /// @param course curso a ser alocado
  /// @param alloc alocação de horário
  /// @return true se alocação foi um sucesso, false se não
  bool allocate(Course course, Allocation alloc);

  /// @brief Remove uma alocação de uma disciplina em uma determinada sala, dia e horário
  /// @param course_id Código do curso
  /// @param alloc Alocação do horário
  /// @return true se alocação foi um sucesso, false se não
  bool deallocate(std::string course_id, Allocation alloc);


  /// @brief Retona todas as alocações de uma determinada disciplina, ordenadas por dia, horário e sala.
  /// @param course_id Identificação da disciplina
  /// @return Todas as alocações de uma determinada disciplina 
  std::vector<Allocation> find_allocations(std::string course_id);

private:

  std::map<Allocation, Course> allocList; 
};