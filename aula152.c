/*
    AULA 152 - Lista encadeada simples: remocao e busca de elemento

*/

#include <stdio.h>
#include <stdlib.h>

struct No
{
    int valor;
    struct No *proximo;
};

void inserirFim(struct No **cabeca, int valor)
{
    struct No *novo = (struct No *)malloc(sizeof(struct No));
    novo->valor = valor;
    novo->proximo = NULL;

    if (*cabeca == NULL)
    {
        *cabeca = novo;
        return;
    }

    struct No *atual = *cabeca;
    while (atual->proximo != NULL)
        atual = atual->proximo;
    atual->proximo = novo;
}

int buscar(struct No *cabeca, int valor)
{
    struct No *atual = cabeca;
    while (atual != NULL)
    {
        if (atual->valor == valor)
            return 1; // Encontrou.
        atual = atual->proximo;
    }
    return 0; // Percorreu tudo e não achou.
}

void remover(struct No **cabeca, int valor)
{
    struct No *atual = *cabeca;
    struct No *anterior = NULL;

    while (atual != NULL && atual->valor != valor)
    {
        anterior = atual;
        atual = atual->proximo;
    }

    if (atual == NULL) // Percorreu a lista toda e não encontrou o valor.
    {
        printf("Valor %d nao encontrado na lista.\n", valor);
        return;
    }

    if (anterior == NULL) // O nó a remover é a própria cabeça.
        *cabeca = atual->proximo;
    else
        anterior->proximo = atual->proximo; // "Pula" o nó removido, ligando anterior ao próximo.

    free(atual); // Libera a memória do nó removido.
}

void imprimirLista(struct No *cabeca)
{
    struct No *atual = cabeca;
    printf("Lista: ");
    while (atual != NULL)
    {
        printf("%d -> ", atual->valor);
        atual = atual->proximo;
    }
    printf("NULL\n");
}

int main()
{
    struct No *lista = NULL;

    inserirFim(&lista, 10);
    inserirFim(&lista, 20);
    inserirFim(&lista, 30);
    inserirFim(&lista, 40);
    imprimirLista(lista);

    printf("\nBuscar 30: %s\n", buscar(lista, 30) ? "encontrado" : "nao encontrado");
    printf("Buscar 99: %s\n\n", buscar(lista, 99) ? "encontrado" : "nao encontrado");

    remover(&lista, 20); // Remove um nó do meio.
    imprimirLista(lista);

    remover(&lista, 10); // Remove a cabeça.
    imprimirLista(lista);

    remover(&lista, 99); // Tenta remover algo que não existe.

    return 0;
}
