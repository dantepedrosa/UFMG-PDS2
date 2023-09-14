#include <iostream>
#include <vector>
using namespace std;

/// @brief: Adiciona 1 ao valor do parâmetro `x`
void by_value(int x) {
  x++;
  return;
}

/// @brief: Adiciona 1 ao valor do parâmetro `x`
void by_reference(int &x) {
  x++;
  return;
}

int main(){
  // 1) Declare uma variável do tipo inteiro e atribua o valor '10'
  int var = 10;
  // 2) Declare um ponteiro para inteiros e inicialize com valor nulo (aka 'nullptr')
  int *ptr = nullptr;
  // 3) Declare um vetor de inteiros e inicialize com valores de 9 a 0 (nessa ordem)
  int vetor[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0}; 
  // 4) Imprima o ENDEREÇO da variável declarada em (1)
  cout << &var << endl;
  // 5) Imprima o CONTEÚDO da variável declarada em (1)
  cout << var << endl;
  // 6) Imprima o ENDEREÇO da variável declarada em (2)
  cout << &ptr << endl;
  // 7) Imprima o CONTEÚDO da variável declarada em (2)
  cout << ptr << endl;
  // 8) Imprima o ENDEREÇO da variável declarada em (3)
  cout << vetor << endl;
  // 9) Imprima o ENDEREÇO da primeira posição da variável declarada em (3)
  cout << vetor << endl;
  // 10) Imprima o CONTEÚDO da primeira posição da variável declarada em (3)
  cout << vetor[0] << endl;
  // 11) Atribua o ENDEREÇO da variável declarada em (1) à variável declarada em (2)
  ptr = &var;
  // 12) Imprima o CONTEÚDO da variável declarada em (2)
  cout << ptr << endl;
  // 13) Imprima o CONTEÚDO da varíavel que é apontada por (2)
  cout << *ptr << endl;
  // 14) Imprima o resultado da comparação do ENDEREÇO de (1) e do CONTEÚDO de (2)
  cout << (&var == ptr) << endl;
  // 15) Coloque o VALOR '5' na varíavel que é apontada pela variável de (2)
  *ptr = 5;
  // 16) Imprima o CONTEÚDO da variável declarada em (1)
  cout << var << endl;
  // 17) Atribua o CONTEÚDO da variável de (3) à variável de (2)
  ptr = vetor;
  // 18) Imprima o CONTEÚDO da variável declarada em (2) 
  cout << ptr << endl;
  // 19) Imprima o CONTEÚDO da variável que é apontada pela variável de (2)
  cout << *ptr << endl;
  // 20) Atribua o ENDEREÇO da primeira posição de (3) à variável de (2)
  ptr = &vetor[0];
  // 21) Imprima o CONTEÚDO da variável declarada em (2) 
  cout << ptr << endl;
  // 22) Imprima o CONTEÚDO da variável que é apontada pela variável de (2) 
  cout << *ptr << endl;
  // 23) Imprima os elementos de (3) utilizando a notação [] (e.g. v[i])
  for(int num : vetor) {cout << num; if(num) cout << " "; else cout << endl;}
  // 24) Imprima os elementos de (3) utilizando a notação ponteiro/deslocamento (e.g. *(v + i))
  for(int i = 0; i<10; i++) {cout << *(vetor + i); if(*(vetor + i)) cout << " "; else cout << endl;}
  // 25) Implemente a função `by_value`
  // 26) Chame a função `by_value`, passando a variável declarada em (1) como argumento
  by_value(var);
  // 27) Imprima o CONTEÚDO da variável declarada em (1)
  cout << var << endl;
  // 28) Implementa a função `by_reference`
  // 29) Chame a função `by_reference`, passando a variável declarada em (1) como argumento
  by_reference(var);
  // 30) Imprima o CONTEÚDO da variável declarada em (1)
  cout << var << endl;
  return 0;
}
