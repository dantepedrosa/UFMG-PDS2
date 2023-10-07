#pragma once

#include <string>

class Allocation {
public:
  std::string day;
  std::string hour;
  std::string room;

  bool operator==(Allocation const &other) const;
  bool operator<(Allocation const &other) const;
};