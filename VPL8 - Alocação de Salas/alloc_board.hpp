#pragma once

#include "allocation.hpp"
#include "course.hpp"

#include <string>
#include <vector>

class AllocBoard {
public:
  bool allocate(Course course, Allocation alloc);
  bool deallocate(std::string course_id, Allocation alloc);
  std::vector<Allocation> find_allocations(std::string course_id);

private:
};