// AULA 51 - Estrutura de seleção switch case com caracteres

#include <stdio.h>

int main() {
    
    char opcao;
    printf("\n\na - Cadastrar Produto\nb - Vender Produto\nc - Buscar Produto\nd - Imprimir\nz - Sair\n\n");
    scanf("%c", &opcao);

    switch (opcao){
        case 'a':
            printf("\nCadastrando novo produto.\n");
            break;
        case 'b':
            printf("\nVendendo um novo produto.\n");
            break;
        case 'c':
            printf("\nBuscando novo produto.\n");
            break;
        case 'd':
            printf("\nImprimindo relatório.\n");   
            break;
        case 'z':
            printf("\nSaindo...\n"); 
            break;
        default: //caso nenhuma das opções anteriores seja válida
            printf("\nOpção inválida!\n");    
    }

return 0;
}