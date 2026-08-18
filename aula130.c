#include <stdio.h>
#include <stdlib.h>

/*
           Aula 130 - Lendo uma string com a função gets
*/

int main()
{
    char palavras[20] = {"Oi. Vamos aprender a programar em linguagem C?"};

    printf("Digite seu nome: ");
    // scanf("%20[^\n]", palavras);
    gets(palavras); // gets - pega a string (palavras), porém não é recomendada o uso da função.

    printf("%s\n\n", palavras);
    return 0;
}