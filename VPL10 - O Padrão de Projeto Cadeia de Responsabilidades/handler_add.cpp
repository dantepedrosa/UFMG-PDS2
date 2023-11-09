#include "handler_add.hpp"
#include "handler.hpp"

#include <iostream>
#include <stack>

HandlerAdd::HandlerAdd(std::stack<int> &stack)
  : Handler(stack) {}

void HandlerAdd::handle(Instruction const &inst) {
  // TODO
}
