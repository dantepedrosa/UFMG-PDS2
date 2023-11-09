#pragma once

#include <stack>
#include <string>

class Instruction {
public:
  Instruction(std::string const &m);
  Instruction(std::string const &m, int v);
  
  std::string const msg;
  int const value; // Utilizado apenas na inst push
};

class Handler {
public:
  // @param stack A pilha da máquina virtual.
  Handler(std::stack<int> &stack);
  virtual ~Handler();
  
  Handler *chain_with(Handler *next);

  // @brief Lida com a inst se possível ou delega ao prox handler.
  virtual void handle(Instruction const &inst) = 0;
  
protected:
  std::stack<int> &_stack;
  Handler *_next;
};
