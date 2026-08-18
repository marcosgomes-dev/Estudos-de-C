#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
           Aula 135 - Concatenando duas strings com a função strcat ()
*/

int main()
{
    char palavras[50] = {"Oi."};
    strcat(palavras, " Bom dia!"); // Adiciona ao final do conteúdo da string palavras a uma nova string com o conteúdo "Bom dia!".

    printf("\n\t%s\n", palavras);

    return 0;
}