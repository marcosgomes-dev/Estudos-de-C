#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// AULA 110 - Como gerar números aleatóriosara preenche uma matriz?

int main()
{
    int i, j, mat1[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    srand(time(NULL));
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            mat1[i][j] = rand() % 1000;
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%5d ", mat1[i][j]); // O '5' ao lado do 'd' diz para o computador imprimir cada número como se eles tivessem 2 casas decimais.
        printf("\n");
    }

    return 0;
}