# VPL5 - Fila de Controle

## Descrição

Neste VPL, vocês implementarão um TAD (Tipo Abstrato de Dado) que representa uma fila de prioridades, ou seja, uma fila onde cada elemento tem uma prioridade de atendimento. Esta prioridade é representada por um número. Quanto maior este número, maior a prioridade. A fila armazenará elementos do tipo inteiro.

### Exercício 1

O contrato do TAD `IntPriorityQueue` está descrito no arquivo `priority_queue.hpp`. A implementação deste TAD deverá ser feita no arquivo `priority_queue.cpp`. Você não pode, em hipótese alguma, alterar a interface pública do TAD no arquivo `priority_queue.hpp`, pois seu código deve respeitar o contrato estabelecido (mas você pode, e deve, alterar a parte privada).

Internamente, a fila de prioridades será representada por um `std::vector`.

Note que o método **peek**, que retorna o elemento de maior prioridade, terá comportamento indefinido caso a fila esteja vazia. Manteremos desta forma por enquanto. Mais para frente, veremos como lidar com situações como esta.

O objetivo deste VPL (e dos próximos), além da prática relacionada a TADs, é se familiarizar com a metodologia de desenvolvimento TDD (*Test Driven Development* - Desenvolvimento Orientado por Testes). Para tanto, você terá a disposição um arquivo `test.cpp`, onde deverá implementar os casos de teste que julgar adequados.

Você deve tentar seguir o ciclo do TDD:

1. Criar um caso de teste que irá falhar
2. Implementar o código que passe no caso de teste, da forma mais simples possível
3. Refatorar o código escrito na etapa 2 (seja para melhorar desempenho, seja para tornar o código mais legível, remover redundâncias, etc)

Você vai notar que, para este exercício, a noção de "unidade" como função não será a mais adequada. Isto, porque estamos implementando uma classe com operações que não produzem nenhum resultado, apenas alteram o estado do objeto. Neste caso, você pode considerar como unidade o objeto como um todo (a fila de prioridades), e desenvolver testes baseados nos efeitos das operações sob o estado da fila. Por exemplo, o teste a seguir verifica o efeito de uma inserção em relação ao tamanho da fila (`REQUIRE` é uma macro mais forte que `CHECK`, pois aborta a execução ao falhar; usamos para pré-condições que devem ser atendidas para que o teste seja realizado):

~~~cpp
TEST_CASE("PriorityQueue tamanho aumenta após enqueue") {
    IntPriorityQueue pq;
    REQUIRE_EQ(pq.size(), 0);
    pq.enqueue(1, 2);
    CHECK_EQ(pq.size(), 1);
}
~~~

Note que, ao avaliar o exercício, um conjunto de testes pré-definidos será executado. Você pode utilizar o resultado da avaliação para incrementar os seus testes. Mas, você **deve** tentar desenvolver os seus próprios testes inicialmente.

### Exercício 2 (Extra, após aulas sobre os TADs da biblioteca de C++)

Uma outra forma de implementar uma fila de prioridade é através de uma lista encadeada (em C++ `std::list`, mas você pode implementar para praticar) ordenada. Basta garantir que, no momento da inserção, a lista permaneça ordenada. Assim, a inserção será relativamente custosa (percorrer toda a lista até encontrar a posição correta), mas recuperar o primeiro elemento da fila será extremamente eficiente!

Altere a sua implementação para utilizar uma lista encadeada. Lembre-se que você não deve alterar a interface pública da fila de prioridade! Após alterar, teste seu código novamente. Este exercício servirá para compreender que o importante, para o usuário (aqui, usuário = programador que utilizará a fila de prioridades), são as operações que compõem o tipo. Isto é, alterar a implementação não afetará em nada em termos de usabilidade para o usuário.

## Referências

- https://cplusplus.com/doc/tutorial/classes/
- https://cplusplus.com/reference/vector/vector/
- https://cplusplus.com/reference/list/list/