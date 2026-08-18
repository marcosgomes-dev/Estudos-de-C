#include <stdio.h>

int main()
{
    int i;
    int num2[10];

    for (i = 0; i < 10; i++)
    {
        printf("Digite o valor da posição %d: ", i);
        scanf("%d", &num2[i]);
        num2[i] *= 3; // multiplicando os numero digitados por 3.
    }

    printf("\n\n");

    for (i = 0; i < 10; i++)
    {
        printf("%d ", num2[i]);
    }
    return 0;
}
