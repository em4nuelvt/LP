# Implementação das funções `strcmp` e `strcat` da linguagem C em diferentes linguagens.
Trabalho de Linguagens de Programação.

As funções `strcat` e `strcmp` são funções da biblioteca de manipulação de strings da linguagem C.

A função `strcmp()` compara duas strings caractere por caractere. Se as strings forem iguais, a função retorna 0.
Retorna:
- 0 se as strings forem iguais
- 1 se o primeiro caractere não correspondente em `str1` for maior (em ASCII) do que o de `str2`
- -1 se o primeiro caractere não correspondente em `str1` for menor (em ASCII) do que o de `str2`

A função `strcat()` em C anexa a string apontada por `src` ao final da string apontada por `dest`. Ela irá anexar uma cópia da string de origem na string de destino, além de um caractere Nulo de terminação. O caractere inicial da string `src` sobrescreve o caractere Nulo presente no final da string `dest`.

## Implementação em C:
Como a linguagem já apresenta as funções, o desafio foi implementar as funções utilizando as estruturas básicas da linguagem e alocação de memória.
O código foi executado utilizando o compilador gcc na versão 11.3.0.

## Implementação em Rust, Python e JavaScript:
A implementação segue os mesmos nomes e variáveis da implementação principal em C, mas utilizando a sintaxe e estruturas pré-estabelecidas da respectiva linguagem.

- Em Python o código foi executado na plataforma do [colab notebooks](https://colab.research.google.com/drive/1wOm5G2fJC-w6dnSNS2_lp6AmJH5MZjAy?usp=sharing).
- Em JavaScript o código foi executado com o nodejs.
- Em Rust o código foi executado na ide online [replit](https://replit.com/@em4nuelvt/strcmp-e-strcat-em-rust).

