/*
    AULA 155 - Fila (Queue) circular com vetor
*/

#include <stdio.h>

#define TAM_MAX 5

struct Fila
{
    int dados[TAM_MAX];
    int inicio;
    int fim;
    int quantidade; // Guarda quantos elementos existem, para diferenciar fila vazia de fila cheia.
};

void inicializar(struct Fila *f)
{
    f->inicio = 0;
    f->fim = 0;
    f->quantidade = 0;
}

int estaVazia(struct Fila *f)
{
    return f->quantidade == 0;
}

int estaCheia(struct Fila *f)
{
    return f->quantidade == TAM_MAX;
}

void enfileirar(struct Fila *f, int valor)
{
    if (estaCheia(f))
    {
        printf("Erro: fila cheia! Nao foi possivel enfileirar a senha %d.\n", valor);
        return;
    }

    f->dados[f->fim] = valor;
    f->fim = (f->fim + 1) % TAM_MAX; // O '%' faz o índice "voltar ao início" do vetor: por isso é circular.
    f->quantidade++;
}

int desenfileirar(struct Fila *f)
{
    if (estaVazia(f))
    {
        printf("Erro: fila vazia!\n");
        return -1;
    }

    int valor = f->dados[f->inicio];
    f->inicio = (f->inicio + 1) % TAM_MAX; // Avança o início circularmente.
    f->quantidade--;
    return valor;
}

int main()
{
    struct Fila filaSenhas;
    inicializar(&filaSenhas);

    printf("Chegando clientes, gerando senhas...\n");
    for (int senha = 1; senha <= 5; senha++)
    {
        enfileirar(&filaSenhas, senha);
        printf("Senha %d entrou na fila.\n", senha);
    }

    enfileirar(&filaSenhas, 6); // Deve falhar: a fila só suporta TAM_MAX senhas.

    printf("\nChamando atendimentos (ordem FIFO - o primeiro a entrar e o primeiro a sair):\n");
    for (int i = 0; i < 3; i++)
        printf("Atendendo senha: %d\n", desenfileirar(&filaSenhas));

    printf("\nMais clientes chegam e usam as vagas liberadas:\n");
    enfileirar(&filaSenhas, 7);
    enfileirar(&filaSenhas, 8);

    printf("\nAtendendo o restante da fila:\n");
    while (!estaVazia(&filaSenhas))
        printf("Atendendo senha: %d\n", desenfileirar(&filaSenhas));

    return 0;
}
