# VPL3 - MDC e Coprimos

## Objetivo

O objetivo deste VPL é praticar a escrita de funções em C++. Serão feitas duas funções: uma que calcula o máximo divisor comum entre dois números e outra que exibe a quantidade de números primos entre si entre dois inteiros. A atividade consiste em completar o código destas duas funções dentro do arquivo main.cpp.

## Descrição

A função mdc recebe dois números naturais. O valor retornado deve ser o máximo divisor comum entre os números:

~~~cpp
mdc(6,3) = 3
mdc(5,2) = 1
mdc(12317, 113) = 113
~~~

A função count_coprimes recebe dois números naturais m e n e calcula a quantidade de números entre m e n que são coprimos de n. Dois números são coprimos (primos entre si) se o mdc é 1.

~~~cpp
count_coprimes(1, 1) = 1
count_coprimes(1, 5) = 4
count_coprimes(1, 9) = 6
count_coprimes(7, 9) = 2
~~~

**Obs.**: Não altere a função main!

