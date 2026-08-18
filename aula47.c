#include<stdio.h>

int main() {
    int idade;
    char sexo;
      
    printf("\nDigite seu sexo f ou m e sua idade: ");
    scanf("%c%d", &sexo,&idade);

    if(sexo == 'm' && idade == 18)
        printf("\n\tAlistamento obrigatório!\n");
    else
        printf("\nDispensado!\n");
    return 0;

}