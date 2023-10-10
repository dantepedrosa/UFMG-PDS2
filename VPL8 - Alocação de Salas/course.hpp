#pragma once

#include <string>

class Course {
public:
  std::string id;
  std::string name;

  bool operator==(Course const &other) const;
};