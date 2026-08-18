#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// AULA 104 - Como gerar números aleatótios dentro de um intervalo?

int main()
{
    int i;
    int num2[10];

    srand(time(NULL)); // valor da semente que vai gerar os numeros aleatórios.

    for (i = 0; i < 10; i++)
        num2[i] = rand() % 50; // Gera números aleatórios dentro de um determinado limite.

    printf("\n\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", num2[i]);
    }
    return 0;
}
