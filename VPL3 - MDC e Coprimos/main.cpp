#include <iostream>
#include <string>

/// @brief Calcula o mdc entre dois numeros naturais
///
/// @param m O primeiro numero a ser considerado
/// @param n O segundo numero a ser considerado
/// @return  O valor do mdc entre @p m and @p n
unsigned mdc(unsigned m, unsigned n) {
  // Forçar m ser o menor
  if(m > n){
    // Troca de lugar
    unsigned temp = n;
    n = m;
    m = temp;
  }
  // Identificar MDC
  unsigned i = m;
  while(i>1){
    // Apenas se o módulo das duas divisões for zero
    if(!((m % i) || (n % i))){
      return i;
    }
    i--;
  }
  // Caso MDC seja 1
  return i;
}

/// @brief Conta a quantidade de coprimos em um intervalo
///
/// O intervalo eh fechado, ou seja, inclui os limites
/// inferior e superior. Por exemplo, a quantidade
/// de numeros coprimos de 9 no intervalo [6, 9] eh 2,
/// ja que mdc(7, 9) = 1, mdc(8, 9) = 1 e mdc(9, 9) = 9.
///
/// @param m O limite inferior do intervalo
/// @param n O limite superior do intervalo
/// @return  O numero de coprimos de @p n no intervalo
unsigned count_coprimes(unsigned m, unsigned n) {
  
  unsigned contPrimos = 0;
  while(m<=n){
    // Confere se são primos entre si
    if (mdc(m,n) == 1)
      contPrimos++;
    m++;
  }
  return contPrimos;
}

// NÃO ALTERE O CÓDIGO A SEGUIR!
enum class TestKind : char {
  mdc = 'm',
  coprimes = 'c',
};

int main() {
  char tkind;
  std::cin >> tkind;

  unsigned m, n;
  std::cin >> m >> n;
    
  switch (static_cast<TestKind>(tkind)) {
  case TestKind::mdc:
    std::cout << mdc(m, n) << std::endl;
    break;
  case TestKind::coprimes:
    std::cout << count_coprimes(m, n) << std::endl;
    break;
  }
  
  return 0;
}