/*
    AULA 150 - Ordenacao: bubble sort e insertion sort

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

void imprimeVetor(int vet[], int tam)
{
    for (int i = 0; i < tam; i++)
        printf("%3d ", vet[i]);
    printf("\n");
}

void bubbleSort(int vet[], int tam)
{
    int i, j, aux;
    for (i = 0; i < tam - 1; i++)
    {
        for (j = 0; j < tam - 1 - i; j++) // A cada passada, o maior valor "borbulha" para o fim.
        {
            if (vet[j] > vet[j + 1])
            {
                aux = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = aux;
            }
        }
    }
}

void insertionSort(int vet[], int tam)
{
    int i, j, chave;
    for (i = 1; i < tam; i++)
    {
        chave = vet[i]; // Elemento que será "inserido" na parte já ordenada.
        j = i - 1;

        while (j >= 0 && vet[j] > chave) // Empurra os elementos maiores uma posição para a direita.
        {
            vet[j + 1] = vet[j];
            j--;
        }
        vet[j + 1] = chave; // Insere a chave na posição correta.
    }
}

int main()
{
    int vet1[TAM], vet2[TAM];

    srand(time(NULL));
    for (int i = 0; i < TAM; i++)
    {
        vet1[i] = rand() % 100; // Números aleatórios entre 0 e 99.
        vet2[i] = vet1[i];      // Copia o mesmo vetor para comparar os dois algoritmos.
    }

    printf("Vetor original:\n");
    imprimeVetor(vet1, TAM);

    bubbleSort(vet1, TAM);
    printf("\nOrdenado com Bubble Sort:\n");
    imprimeVetor(vet1, TAM);

    insertionSort(vet2, TAM);
    printf("\nOrdenado com Insertion Sort:\n");
    imprimeVetor(vet2, TAM);

    return 0;
}
