//AULA 45 - Operador ternario alinhado.

#include<stdio.h>

int main() {
    int a ;
    printf("\nDigite um valor qualquer: ");
    scanf("%d", &a);
    
    printf("Operador ternário: \n");
    a < 0 ? printf("\n\tValor negativo!\n") : 
        a > 0 ? printf("\n\tValor Positivo!") :
            printf("\n\tValor igual a zero!"); //Se a for menor que 0, imprime valor negativo, senão, imprime valor positivo ou igual a zero.
}