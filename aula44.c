//AULA 44 - Operador IF/ELSE alinhado.


#include<stdio.h>

int main() {
    int a ;
    printf("\nDigite um valor qualquer: ");
    scanf("%d", &a);
    
    printf("Operador ternário: \n");
    a < 0 ? printf("\n\tValor negativo!\n") : printf("\n\tValor positivo ou igual a zero!\n"); //Se a for menor que 0, imprime valor negativo, senão, imprime valor positivo ou igual a zero.

    printf("\n\nIf/else:\n");

    if (a < 0)
        printf("\n\tValor negativo");
    else {
        if (a > 0)
            printf("\n\tValor positivo");
        else
            printf("\n\tValor igual a zero");
    }    


}