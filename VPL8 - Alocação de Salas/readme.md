# VPL5 - Alocação de Salas

## Objetivo

O objetivo desse exercício é praticar o uso de diferentes estruturas da STL. 

## Descrição

Para ajudar a universidade a organizar as alocações de cada disciplina, você deverá desenvolver uma biblioteca que será responsável por manipular um quadro de alocação de salas. Para isto, você deverá implementar um TAD **AllocBoard**. Este TAD deverá a fazer a conexão entre valores dos tipos **Allocation** (`allocation.hpp`) e **Course** (`course.hpp`), se atentando as seguintes regras:

- Uma sala não pode estar alocada no mesmo horário para duas disciplinas diferentes
- Uma disciplina pode estar alocada em diversos horários/dias/salas (incluindo nenhum)

No arquivo de cabeçalho `alloc_board.cpp`, você encontrará a especificação da interface pública do TAD **AllocBoard** necessária para este exercício. Você deve implementar os métodos da seguinte forma:

`bool allocate(Course course, Allocation alloc)`: cria uma nova alocação para uma determinada disciplina, conforme os parâmetros informados. Todas as disciplinas possuem códigos diferentes, ou seja, únicos. O método deve retornar true se a alocação foi feita com sucesso ou false caso contrário.

`bool deallocate(std::string course_id, Allocation alloc)`: remove uma alocação de uma disciplina (códigos são únicos) em determinada sala, dia e horário. O método deve retornar true se a remoção foi feita com sucesso ou false caso contrário. Note que a remoção de uma determinada disciplina é feita com base apenas no identificador dela, o nome não é utilizado.

`std::vector<Allocation> find_allocations(std::string course_id)`: retorna todas as alocações de uma determinada disciplina, ordenadas por dia, horário, e sala.
Você irá precisar dos operadores de comparação (==) para Allocation e Course. As declarações dos operadores já estão nos arquivos `allocation.cpp` e `course.cpp`.

Você muito provavelmente também irá precisar implementar o operador de comparação (<) entre duas alocações. A declaração do operador já está no arquivo `allocation.hpp`. 

Você tem a sua disposição o arquivo de testes `test.cpp`. Como de costume, você deve implementar os testes que julgar necessário, buscando seguir a metodologia TDD.

## Observações

**Obs. 1:** Antes de partir para implementação, leve em consideração os requisitos descritos acima e pense: qual a(s) estrutura(s) mais adequadas para armazenas as alocações? 

**Obs. 2:** Muito provavelmente você irá precisar se informar dos métodos disponíveis para cada container (vector, set, list, map, etc). Você pode pesquisar nas seguintes páginas (apenas sugestão, qualquer pesqusia no Google também deve ser suficiente):

- https://cplusplus.com/
- https://en.cppreference.com/w/cpp

**Obs. 3:** não altere a a interface pública do quadro de alocações