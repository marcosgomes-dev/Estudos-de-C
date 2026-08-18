/*
    AULA 144 - Alocação dinâmica de memória (malloc, realloc e free)

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;

    printf("Quantos numeros deseja cadastrar? ");
    scanf("%d", &n);

    int *vet = (int *)malloc(n * sizeof(int)); // Aloca memória suficiente para n inteiros.

    if (vet == NULL) // Sempre é preciso checar se a alocação deu certo.
    {
        printf("Erro ao alocar memoria!\n");
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        printf("Digite o valor da posicao %d: ", i);
        scanf("%d", &vet[i]);
    }

    printf("\nVetor original:\n");
    for (i = 0; i < n; i++)
        printf("%d ", vet[i]);
    printf("\n");

    int novoTamanho = n + 3;
    int *temp = (int *)realloc(vet, novoTamanho * sizeof(int)); // Redimensiona o bloco já alocado.

    if (temp == NULL)
    {
        printf("Erro ao realocar memoria!\n");
        free(vet);
        return 1;
    }
    vet = temp; // Se deu certo, vet passa a apontar para o novo bloco (o endereço pode mudar).

    for (i = n; i < novoTamanho; i++)
        vet[i] = 0; // Preenchendo as novas posições.

    printf("\nVetor apos o realloc (com 3 posicoes a mais):\n");
    for (i = 0; i < novoTamanho; i++)
        printf("%d ", vet[i]);
    printf("\n");

    free(vet);  // Devolve a memória alocada ao sistema operacional.
    vet = NULL; // Boa prática: evita "ponteiro solto" (dangling pointer).

    return 0;
}
