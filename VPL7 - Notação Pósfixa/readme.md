# VPL7 - Notação Pósfixa

## Descrição

No dia a dia, estamos acostumados a representar expressões seguindo a notação infixa. Porém, existem outras representações possíveis. Neste VPL, você irá implementar um avaliador de expressões no formato pósfixo.

Por exemplo, a expressão (3 * (2 + 5)) * 4 corresponde, na notação pósfixa, a expressão 3 2 5 + * 4 *.

A ideia é utilizar uma pilha para salvar os operandos durante o processamento da expressão. Toda vez que um operador for encontrado (+, -, *, /), desempilhamos dois operandos da pilha (qual será o operando da esquerda e qual será o da direita?), calculamos a subexpressão, e empilhamos o resultado.

Você tem a sua disposição o arquivo de testes test.cpp. Como de costume, você deve implementar os testes que julgar necessário, buscando seguir a metodologia TDD.