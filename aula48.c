// AULA 48 - Operador lógico OU (||)

#include <stdio.h>

int main () {

    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if(idade <= 5 || idade >= 60)
        printf("Tem direito a gratuidade!\n");
    else
        printf("Não tem direito a gratuidade!\n");
 
    return 0;
}