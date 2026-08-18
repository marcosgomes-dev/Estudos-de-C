/*
    AULA 143 - Ponteiros: conceitos básicos e aritmética de ponteiros

*/

#include <stdio.h>

int main()
{
    int a = 10;
    int *p = &a; // p guarda o ENDEREÇO da variável a.

    printf("Valor de a: %d\n", a);
    printf("Endereco de a: %p\n", (void *)&a);
    printf("Valor de p (endereco guardado): %p\n", (void *)p);
    printf("Valor apontado por p (*p): %d\n\n", *p); // *p acessa o conteúdo que está no endereço.

    *p = 20; // Alterando o valor de a através do ponteiro.
    printf("Depois de '*p = 20', a vale: %d\n\n", a);

    int vet[5] = {2, 4, 6, 8, 10};
    int *pv = vet; // Um vetor "decai" para um ponteiro para seu primeiro elemento.

    printf("Percorrendo o vetor com aritmetica de ponteiros:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Posicao %d = %d (endereco: %p)\n", i, *(pv + i), (void *)(pv + i));
        // pv + i "pula" i posições do tipo int (não i bytes), por isso funciona
        // igual a vet[i].
    }

    return 0;
}
