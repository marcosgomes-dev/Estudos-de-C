#include <stdio.h>
#include <stdlib.h>

/*
           Aula 131 - Lendo uma string com a função fgets()
*/

int main()
{
    char palavras[20] = {"Oi. Vamos aprender a programar em linguagem C?"};

    printf("Digite seu nome: ");
    // scanf("%20[^\n]", palavras);
    // gets(palavras); // gets - pega a string (palavras), porém não é recomendada o uso da função.
    fgets(palavras, 20, stdin); // Função segura, pega a string do arquivo(f - File).  (string, quantidade - 1, entrada padrão)

    printf("%s\n\n", palavras);
    return 0;
}