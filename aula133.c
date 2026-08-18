#include <stdio.h>
#include <stdlib.h>

/*
           Aula 133 - Como descobrir o tamanho de uma string
*/

int main()
{
    int i, tam = 0;
    char palavras[55] = {"Oi. Vamos aprender a programar com a linguagem C?"};

    printf("Digite algo: ");
    // scanf("%20[^\n]", palavras);
    // gets(palavras); // gets - pega a string (palavras), porém não é recomendada o uso da função.
    fgets(palavras, 20, stdin); // Função segura, pega a string do arquivo(f - File).  (string, quantidade - 1, entrada padrão)

    i = 0;
    while (palavras[i] != '\0')
    {
        if (palavras[i] == '\n')
            palavras[i] = '\0';
        i++;
    }

    i = 0;
    while (palavras[i] != '\0') // O caracter '\0'representa o Null, ou seja, quando o conteúdo da string acaba. Fazendo com que ele print enquando existir conteúdo nessa string.
    {
        // printf("Posição %d = %c\n", i, palavras[i]);
        tam++;
        i++;
    }
    printf("Tamanho: %d\n", tam);

    return 0;
}