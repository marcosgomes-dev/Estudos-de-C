//AULA 68 - Estrutura de repetição Do While

#include<stdio.h>
#include<stdlib.h>

int main() {

    int valor, valor2;

    printf("Digite um valor maior que zero: ");
    scanf("%d", &valor);

    while(valor <= 0){ //Verifica a condição antes de executar o bloco de código
        printf("Valor inválido!! Digite um valor maior que zero: ");
        scanf("%d", &valor);
    }

    printf("Valor lido: %d\n\n", valor);

    do{ //Executa o bloco de código antes de verificar a condição
         //Garante que o bloco de código seja executado pelo menos uma vez
        printf("Digite um valor maior que zero: ");
        scanf("%d", &valor2);
    } while(valor2 <=0);

}
