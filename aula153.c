/*
    AULA 153 - Pilha (Stack) com vetor: verificacao de palindromo
*/

#include <stdio.h>
#include <string.h>

#define TAM_MAX 50

struct Pilha
{
    char dados[TAM_MAX];
    int topo; // Índice do elemento no topo da pilha. -1 significa pilha vazia.
};

void inicializar(struct Pilha *p)
{
    p->topo = -1;
}

int estaVazia(struct Pilha *p)
{
    return p->topo == -1;
}

int estaCheia(struct Pilha *p)
{
    return p->topo == TAM_MAX - 1;
}

void empilhar(struct Pilha *p, char valor)
{
    if (estaCheia(p))
    {
        printf("Erro: pilha cheia!\n");
        return;
    }
    p->topo++;
    p->dados[p->topo] = valor; // Insere sempre uma posição acima do topo atual.
}

char desempilhar(struct Pilha *p)
{
    if (estaVazia(p))
    {
        printf("Erro: pilha vazia!\n");
        return '\0';
    }
    char valor = p->dados[p->topo];
    p->topo--; // "Remove" apenas decrementando o topo (o dado continua na memória, mas é ignorado).
    return valor;
}

int ehPalindromo(char palavra[])
{
    struct Pilha pilha;
    inicializar(&pilha);

    int tamanho = strlen(palavra);

    for (int i = 0; i < tamanho; i++)
        empilhar(&pilha, palavra[i]); // Empilha cada caractere, na ordem normal.

    // Ao desempilhar, os caracteres saem na ordem INVERSA (LIFO), formando
    // a palavra de trás para frente automaticamente.
    for (int i = 0; i < tamanho; i++)
    {
        char invertido = desempilhar(&pilha);
        if (invertido != palavra[i])
            return 0; // Encontrou uma diferença: não é palíndromo.
    }
    return 1;
}

int main()
{
    char palavra[TAM_MAX];

    printf("Digite uma palavra: ");
    scanf("%49s", palavra);

    if (ehPalindromo(palavra))
        printf("\"%s\" e um palindromo!\n", palavra);
    else
        printf("\"%s\" NAO e um palindromo.\n", palavra);

    return 0;
}
