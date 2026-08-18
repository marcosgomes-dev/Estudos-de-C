#include <stdio.h>
#include <stdlib.h>

/*
           Aula 129 - Lendo uma string com a função scanf()
           scanf("80[ˆ\n]", str) ;
*/

int main()
{
    char palavras[20] = {"Oi. Vamos aprender a programar em linguagem C?"};

    printf("Digite seu nome: ");
    scanf("%20[^\n]", palavras); /* Para leitura de strings, o scanf não precisa de &palavras, por se tratar de um vetor*/

    printf("%s\n\n", palavras);
    return 0;
}