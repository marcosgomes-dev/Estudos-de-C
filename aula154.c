/*
    AULA 154 - Pilha com lista encadeada: parenteses balanceados

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct NoPilha
{
    char valor;
    struct NoPilha *proximo;
};

void empilhar(struct NoPilha **topo, char valor)
{
    struct NoPilha *novo = (struct NoPilha *)malloc(sizeof(struct NoPilha));
    novo->valor = valor;
    novo->proximo = *topo; // O novo elemento sempre vira o topo, empurrando o antigo para baixo.
    *topo = novo;
}

char desempilhar(struct NoPilha **topo)
{
    if (*topo == NULL)
        return '\0'; // Pilha vazia.

    struct NoPilha *removido = *topo;
    char valor = removido->valor;
    *topo = removido->proximo; // O novo topo passa a ser o segundo elemento.
    free(removido);
    return valor;
}

int estaVazia(struct NoPilha *topo)
{
    return topo == NULL;
}

// Verifica se o caractere de fechamento corresponde ao de abertura.
int correspondem(char abre, char fecha)
{
    if (abre == '(' && fecha == ')')
        return 1;
    if (abre == '[' && fecha == ']')
        return 1;
    if (abre == '{' && fecha == '}')
        return 1;
    return 0;
}

int estaBalanceada(char expressao[])
{
    struct NoPilha *pilha = NULL;
    int tamanho = strlen(expressao);

    for (int i = 0; i < tamanho; i++)
    {
        char c = expressao[i];

        if (c == '(' || c == '[' || c == '{')
        {
            empilhar(&pilha, c); // Todo símbolo de abertura vai para a pilha.
        }
        else if (c == ')' || c == ']' || c == '}')
        {
            if (estaVazia(pilha)) // Fechou algo que nunca foi aberto.
                return 0;

            char topo = desempilhar(&pilha);
            if (!correspondem(topo, c)) // O par não é do mesmo tipo (ex: abriu '(' e fechou ']').
                return 0;
        }
    }

    return estaVazia(pilha); // Se sobrou algo aberto na pilha, não está balanceada.
}

int main()
{
    char expressoes[4][50] = {"{[()]}", "{[(])}", "((a+b)*[c-d])", "(( )"};

    for (int i = 0; i < 4; i++)
    {
        printf("\"%s\" -> %s\n", expressoes[i],
               estaBalanceada(expressoes[i]) ? "BALANCEADA" : "NAO BALANCEADA");
    }

    return 0;
}
