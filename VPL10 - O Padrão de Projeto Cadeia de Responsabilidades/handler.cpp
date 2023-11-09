#include "handler.hpp"
#include <iostream>

Instruction::Instruction(std::string const &m)
  : Instruction(m, 0) {}

Instruction::Instruction(std::string const &m, int v)
  : msg(m), value(v) {}

Handler::Handler(std::stack<int> &stack)
  : _stack(stack), _next(nullptr) {}

Handler::~Handler() {
  if (_next) delete _next;
}

Handler *Handler::chain_with(Handler *next) {
  next->_next = this;
  return next;
}
