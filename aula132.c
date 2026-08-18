#include <stdio.h>
#include <stdlib.h>

/*
           Aula 132 - Como identificar o fim de uma string
*/

int main()
{
    int i = 0;
    char palavras[55] = {"Oi. Vamos aprender a programar com a linguagem C?"};

    // printf("Digite seu nome: ");
    // scanf("%20[^\n]", palavras);
    // gets(palavras); // gets - pega a string (palavras), porém não é recomendada o uso da função.
    // fgets(palavras, 20, stdin); // Função segura, pega a string do arquivo(f - File).  (string, quantidade - 1, entrada padrão)

    while (palavras[i] != '\0') // O caracter '\0'representa o Null, ou seja, quando o conteúdo da string acaba. Fazendo com que ele print enquando existir conteúdo nessa string.
    {
        printf("Posição %d = %c\n", i, palavras[i]);
        i++;
    }
    printf("\n");

    return 0;
}