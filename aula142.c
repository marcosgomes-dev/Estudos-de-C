#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
           Aula 142 - Matriz de Strings na linguagem C
*/

int main()
{
    char nomes[5][25];
    int l;

    for (l = 0; l < 5; l++)
    {

        printf("\nDigite o nome da posição: %d. ", l);
        scanf("%25[^\n]", nomes[l]);
        getchar();
    }

    for (l = 0; l < 5; l++)
    {
        printf("\nNome na posição %d: %s", l, nomes[l]);
    }
    return 0;
}