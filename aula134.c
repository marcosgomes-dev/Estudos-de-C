#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
           Aula 134 - Como descobrir o tamanho de uma string com a função strlen()
*/

int main()
{
    char palavras[55] = {"Oi. Vamos aprender a programar com a linguagem C?"};

    // printf("Digite algo: ");
    // scanf("%20[^\n]", palavras);
    // gets(palavras); // gets - pega a string (palavras), porém não é recomendada o uso da função.
    // fgets(palavras, 20, stdin); // Função segura, pega a string do arquivo(f - File).  (string, quantidade - 1, entrada padrão)

    printf("Tamanho: %d\n", strlen(palavras));

    return 0;
}