# VPL6 - Conjunto de Tamanho Fixo

## Descrição

Na aula 04, nós implementamos um TAD (Tipo Abstrato de Dados) correspondente a um conjunto de inteiros. Nós discutimos algumas implementações diferentes, e, em uma delas, consideramos a possibilidade de usar os próprios elementos como seus índices. Por exemplo, o elemento 0 seria mapeado para o índice 0, o elemento 1 para o índice 1, o 2 para o índice 2, e assim por diante. Um problema desta solução é o uso de memória, já que, caso fosse necessário inserir valores muito grandes, o vetor interno precisaria crescer para um tamanho muito grande. 

Vamos, agora, considerar uma situação em que sabemos a quantidade de elementos do conjunto previamente. Por exemplo, poderíamos estar lidando com um problema envolvendo o conjunto Alfabeto = { A, B, C, ..., Z }. Sabemos que o alfabeto tem 26 letras e, portanto, basta um vetor de 26 posições.

## Exercício 1

Para este exercício, você irá implementar um conjunto de tamanho fixo, com as operações de inserção, remoção, e verificação.  Você deverá representar o conjunto como um vetor de booleanos (vetor raiz de C, ou seja, um ponteiro, e não o tipo std::vector), onde cada índice do vetor corresponde a um elemento do conjunto.

A classe Set já está declarada no arquivo de cabeçalho. Você não deve alterar a região pública. Leia o arquivo com bastante atenção!

Você deverá implementar as três operações no arquivo fixed_set.cpp. Algumas coisas já estão implementadas neste arquivo, bem como instruções sobre como você deve prosseguir. Leia com atenção!

Você tem a sua disposição o arquivo de testes `test.cpp`. Como de costume, você deve implementar os testes que julgar necessário, buscando seguir a metodologia TDD.

## Exercício 2

Na implementação do exercício 1, cada posição do vetor corresponde a um único elemento do conjunto. Mais ainda, cada posição ocupa 1 byte (8 bits) na memória (o menor tamanho possível para um tipo). Podemos fazer melhor!

Note que para definir se um elemento está ou não no conjunto bastaria um bit 0 (nao está) ou 1 (está). Podemos, então, utilizar um vetor de chars. Cada char ocupa 1 byte, assim como o tipo bool, mas podemos fazer operações bit-a-bit, como and (&, note que é apenas & e não &&), or (|), deslocamento de bits para a esquerda (<<), etc. (Se você não viu ou não se lembra dos operadores bit-a-bit, pesquise! Se ainda não compreender, poste suas dúvidas no fórum).

Sendo assim, podemos usar cada um dos chars do array para representar 8 elementos de uma vez (cada elemento sendo 1 bit)!

Por exemplo, considere novamente o conjunto como sendo o Alfabeto = { A, B, C, D, ... }, cada letra representada pelos números 0, 1, 2, ..., 25. O subconjunto das vogais seria representado (após as devidas inserções) da seguinte forma (em cada posição do vetor está a representação binária):

```
[ 10001000 ] -> A, B, C, D, E, F, G, H
[ 10000010 ] -> I, J, K, L, M, N, O, P
[ 00001000 ] -> Q, R, S, T, U, V, W, X
[ 00000000 ] -> Y, Z (e as demais posições não são utilizadas)
```

Note que foi preciso apenas um vetor de tamanho 4, cada posição ocupando 1 byte (8 bits), totalizando 8 * 4 = 32 bits. Em contrapartida, a implementação do exercício 1 gastaria 26 posições, cada uma de 1 byte, totalizando 26 * 8 = 208 bits.

Para este segundo exercício, você deve implementar (no local adequado, leia as instruções nos arquivos!) o TAD Set da forma descrita acima (um vetor de chars, mapeando cada elemento para um bit).