/*
    AULA 156 - Arvore Binaria de Busca (BST): insercao, busca e percursos

*/

#include <stdio.h>
#include <stdlib.h>

struct NoArvore
{
    int valor;
    struct NoArvore *esquerda;
    struct NoArvore *direita;
};

struct NoArvore *criarNo(int valor)
{
    struct NoArvore *novo = (struct NoArvore *)malloc(sizeof(struct NoArvore));
    novo->valor = valor;
    novo->esquerda = NULL;
    novo->direita = NULL;
    return novo;
}

// Inserção recursiva: a cada chamada, decide se desce para a esquerda
// ou para a direita, até encontrar um espaço vazio (NULL).
struct NoArvore *inserir(struct NoArvore *raiz, int valor)
{
    if (raiz == NULL) // Achou o lugar certo: cria o novo nó aqui.
        return criarNo(valor);

    if (valor < raiz->valor)
        raiz->esquerda = inserir(raiz->esquerda, valor);
    else if (valor > raiz->valor)
        raiz->direita = inserir(raiz->direita, valor);
    // Se for igual, não insere duplicado.

    return raiz;
}

int buscar(struct NoArvore *raiz, int valor)
{
    if (raiz == NULL)
        return 0; // Chegou a uma folha sem encontrar: não existe na árvore.
    if (valor == raiz->valor)
        return 1;

    if (valor < raiz->valor)
        return buscar(raiz->esquerda, valor); // Só precisa olhar metade da árvore de cada vez.
    else
        return buscar(raiz->direita, valor);
}

// Em-ordem: esquerda, raiz, direita -> imprime os valores EM ORDEM CRESCENTE.
void emOrdem(struct NoArvore *raiz)
{
    if (raiz == NULL)
        return;
    emOrdem(raiz->esquerda);
    printf("%d ", raiz->valor);
    emOrdem(raiz->direita);
}

// Pré-ordem: raiz, esquerda, direita -> útil para copiar a estrutura da árvore.
void preOrdem(struct NoArvore *raiz)
{
    if (raiz == NULL)
        return;
    printf("%d ", raiz->valor);
    preOrdem(raiz->esquerda);
    preOrdem(raiz->direita);
}

// Pós-ordem: esquerda, direita, raiz -> útil para apagar a árvore com segurança.
void posOrdem(struct NoArvore *raiz)
{
    if (raiz == NULL)
        return;
    posOrdem(raiz->esquerda);
    posOrdem(raiz->direita);
    printf("%d ", raiz->valor);
}

void liberarArvore(struct NoArvore *raiz)
{
    if (raiz == NULL)
        return;
    liberarArvore(raiz->esquerda);
    liberarArvore(raiz->direita);
    free(raiz); // Libera de baixo para cima (pós-ordem), evitando perder referências.
}

int main()
{
    struct NoArvore *raiz = NULL;
    int valores[] = {50, 30, 70, 20, 40, 60, 80};
    int n = sizeof(valores) / sizeof(valores[0]);

    for (int i = 0; i < n; i++)
        raiz = inserir(raiz, valores[i]);

    printf("Em-ordem (crescente): ");
    emOrdem(raiz);
    printf("\n");

    printf("Pre-ordem: ");
    preOrdem(raiz);
    printf("\n");

    printf("Pos-ordem: ");
    posOrdem(raiz);
    printf("\n\n");

    printf("Buscar 40: %s\n", buscar(raiz, 40) ? "encontrado" : "nao encontrado");
    printf("Buscar 99: %s\n", buscar(raiz, 99) ? "encontrado" : "nao encontrado");

    liberarArvore(raiz); // Libera toda a memória alocada para a árvore.

    return 0;
}
