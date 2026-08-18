//AULA 67 - Estrutura de repetição While

#include<stdio.h>
#include<stdlib.h>

int main() {

    int valor;

    printf("Digite um valor maior que zero: ");
    scanf("%d", &valor);

    while(valor <= 0){
        printf("Valor inválido!! Digite um valor maior que zero: ");
        scanf("%d", &valor);
    }

    printf("Valor lido: %d\n\n", valor);

}
