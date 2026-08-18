#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// AULA 103 - Como preencher um vetor com números aleatórios?

int main()
{
    int i;
    int num2[10];

    srand(time(NULL)); // valor da semente que vai gerar os numeros aleatórios.

    for (i = 0; i < 10; i++)
        num2[i] = rand();

    printf("\n\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", num2[i]);
    }
    return 0;
}
