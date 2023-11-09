#include "handler_print.hpp"
#include "handler.hpp"

#include <iostream>
#include <ostream>
#include <stack>

HandlerPrint::HandlerPrint(std::stack<int> &stack)
  : HandlerPrint(stack, std::cout) {}

HandlerPrint::HandlerPrint(std::stack<int> &stack, std::ostream &os)
  : Handler(stack), _os(os) {}

void HandlerPrint::handle(Instruction const &inst) {
  // Não sei lidar com a instrução!
  if (inst.msg != "print") {
    // E sou o último handler :(
    if (_next == nullptr) {
      std::cout << "Erro: comando desconhecido" << std::endl;
      exit(1); // Aborta o programa com código de erro
    }

    // Tem um handler depois de mim, vou passar para ele:
    _next->handle(inst);
    return;
  }
  
  _os << _stack.top() << std::endl;
}
