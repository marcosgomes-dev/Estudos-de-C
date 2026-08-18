/*
    AULA 149 - Busca sequencial e busca binaria

*/

#include <stdio.h>

int buscaSequencial(int vet[], int tam, int chave, int *comparacoes)
{
    int i;
    for (i = 0; i < tam; i++)
    {
        (*comparacoes)++; // Conta uma comparação a cada posição visitada.
        if (vet[i] == chave)
            return i; // Retorna a posição em que encontrou.
    }
    return -1; // -1 indica "não encontrado".
}

int buscaBinaria(int vet[], int tam, int chave, int *comparacoes)
{
    int inicio = 0, fim = tam - 1, meio;

    while (inicio <= fim)
    {
        meio = (inicio + fim) / 2;
        (*comparacoes)++;

        if (vet[meio] == chave)
            return meio;
        else if (vet[meio] < chave)
            inicio = meio + 1; // O valor está na metade direita.
        else
            fim = meio - 1; // O valor está na metade esquerda.
    }
    return -1;
}

int main()
{
    int vetOrdenado[10] = {2, 5, 8, 12, 16, 23, 38, 45, 56, 72};
    int chave, comp1 = 0, comp2 = 0;

    printf("Vetor (ja ordenado): ");
    for (int i = 0; i < 10; i++)
        printf("%d ", vetOrdenado[i]);

    printf("\n\nDigite um valor para buscar: ");
    scanf("%d", &chave);

    int pos1 = buscaSequencial(vetOrdenado, 10, chave, &comp1);
    int pos2 = buscaBinaria(vetOrdenado, 10, chave, &comp2);

    printf("\nBusca sequencial: ");
    if (pos1 != -1)
        printf("encontrado na posicao %d, em %d comparacoes.\n", pos1, comp1);
    else
        printf("nao encontrado, em %d comparacoes.\n", comp1);

    printf("Busca binaria: ");
    if (pos2 != -1)
        printf("encontrado na posicao %d, em %d comparacoes.\n", pos2, comp2);
    else
        printf("nao encontrado, em %d comparacoes.\n", comp2);

    return 0;
}
