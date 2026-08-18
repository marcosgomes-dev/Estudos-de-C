/*
    AULA 147 - Structs dinamicas: alocando uma struct com malloc

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Produto
{
    char nome[30];
    float preco;
    int quantidade;
};

int main()
{
    // malloc devolve um ponteiro genérico (void*), por isso o cast para (struct Produto *).
    struct Produto *p = (struct Produto *)malloc(sizeof(struct Produto));

    if (p == NULL)
    {
        printf("Erro ao alocar memoria!\n");
        return 1;
    }

    printf("Digite o nome do produto: ");
    scanf("%29[^\n]", p->nome); // O operador '->' acessa campos de uma struct através de um ponteiro.
    getchar();

    printf("Digite o preco: ");
    scanf("%f", &p->preco);

    printf("Digite a quantidade em estoque: ");
    scanf("%d", &p->quantidade);

    // (*p).preco  é equivalente a  p->preco , mas '->' é mais legível e o mais usado.
    float total = p->preco * p->quantidade;

    printf("\n----- FICHA DO PRODUTO -----\n");
    printf("Nome: %s\n", p->nome);
    printf("Preco unitario: R$ %.2f\n", p->preco);
    printf("Quantidade: %d\n", p->quantidade);
    printf("Valor total em estoque: R$ %.2f\n", total);

    free(p); // Libera a memória alocada para a struct.
    p = NULL;

    return 0;
}
