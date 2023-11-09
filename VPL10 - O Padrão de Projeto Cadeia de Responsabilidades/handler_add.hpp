#pragma once

#include "handler.hpp"
#include <stack>

class HandlerAdd : public Handler {
public:
  HandlerAdd(std::stack<int> &stack);
  void handle(Instruction const &inst) override;
};
