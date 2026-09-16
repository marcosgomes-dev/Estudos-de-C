# Estudos de C

Exercícios de C feitos durante as aulas, organizados por arquivo. Os temas seguem uma progressão gradual, começando pela base da linguagem e chegando até ordenação e strings.

## Conteúdo por faixa de aulas

**Aulas 44–51 — Fundamentos**
Operador ternário, if/else aninhado, operadores lógicos, estruturas condicionais e entrada de dados com `scanf`.

**Aulas 65–69 — Laços de repetição**
Estrutura `for` com contadores, iteração de sequências e contagem regressiva.

**Aulas 98–110 — Vetores**
Declaras e acessar vetores de inteiros, chars e floats. Impressão de conteúdo com laços e operações sobre arrays.

**Aulas 128–136 — Strings**
O que é uma string em C, como armazenar, ler com `scanf` e manipular com `string.h`.

**Aulas 142–157 — Matrizes e ordenação**
Matrizes de strings (arrays bidimensionais), leitura com `scanf`, além dos algoritmos Bubble Sort e Insertion Sort com vetores gerados aleatoriamente.

## Como compilar

```bash
gcc -o aula44 aula44.c
./aula44
```

Alguns arquivos usam `math.h` e precisam do flag `-lm`:

```bash
gcc -o aula100 aula100.c -lm
```

Para compilar tudo de uma vez:

```bash
for f in *.c; do gcc -o "${f%.c}" "$f" 2>/dev/null || true; done
```

Para compilar com warnings (recomendado para estudar):

```bash
gcc -Wall -Wextra -g -o aula44 aula44.c
```

## Tecnologias

- Linguagem C (C99)
- GCC
