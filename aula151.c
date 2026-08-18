/*
    AULA 151 - Lista encadeada simples: insercao e impressao

*/

#include <stdio.h>
#include <stdlib.h>

// O "No" é o bloco básico da lista: um dado + o endereço do próximo No.
struct No
{
    int valor;
    struct No *proximo;
};

// Insere um novo nó no INÍCIO da lista. Recebe o ponteiro para a cabeça
// (por referência, pois a cabeça pode mudar) e o valor a inserir.
void inserirInicio(struct No **cabeca, int valor)
{
    struct No *novo = (struct No *)malloc(sizeof(struct No));
    novo->valor = valor;
    novo->proximo = *cabeca; // O novo nó aponta para quem era a antiga cabeça.
    *cabeca = novo;          // A cabeça passa a ser o novo nó.
}

// Insere um novo nó no FIM da lista.
void inserirFim(struct No **cabeca, int valor)
{
    struct No *novo = (struct No *)malloc(sizeof(struct No));
    novo->valor = valor;
    novo->proximo = NULL; // Por ser o último, aponta para NULL.

    if (*cabeca == NULL) // Lista vazia: o novo nó vira a cabeça.
    {
        *cabeca = novo;
        return;
    }

    struct No *atual = *cabeca;
    while (atual->proximo != NULL) // Percorre até encontrar o último nó.
        atual = atual->proximo;

    atual->proximo = novo; // O antigo último nó passa a apontar para o novo.
}

void imprimirLista(struct No *cabeca)
{
    struct No *atual = cabeca;

    printf("Lista: ");
    while (atual != NULL)
    {
        printf("%d -> ", atual->valor);
        atual = atual->proximo; // Avança para o próximo nó.
    }
    printf("NULL\n");
}

int main()
{
    struct No *lista = NULL; // Lista começa vazia (cabeça aponta para NULL).

    inserirFim(&lista, 10);
    inserirFim(&lista, 20);
    inserirFim(&lista, 30);
    imprimirLista(lista); // Esperado: 10 -> 20 -> 30 -> NULL

    inserirInicio(&lista, 5);
    imprimirLista(lista); // Esperado: 5 -> 10 -> 20 -> 30 -> NULL

    return 0;
}
