//AULA 50 - Estruturas de seleção switch case


#include <stdio.h>

int main () {

    int opcao;
    printf("\n\n1 - Cadastrar Produto\n2 - Vender Produto\n3 - Buscar Produto\n4 - Imprimir\n5 - Sair\n\n");
    scanf("%d", &opcao);

    switch (opcao){
        case 1:
            printf("\nCadastrando novo produto.\n");
            break;
        case 2:
            printf("\nVendendo um novo produto.\n");
            break;
        case 3:
            printf("\nBuscando novo produto.\n");
            break;
        case 4:
            printf("\nImprimindo relatório.\n");   
            break;
        case 5:
            printf("\nSaindo...\n"); 
            break;
        default: //caso nenhuma das opções anteriores seja válida
            printf("\nOpção inválida!\n");    
    }

return 0;
}