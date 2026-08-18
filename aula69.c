#include<stdio.h>

int main () {
    int i = 0;

    printf("\nGerado com for");

    for(i = 0; i <=10; i++)
        printf("%d", &i);
    
    i = 0;

    printf("\n\nGerado com while");
    
    while(i<=10){
        printf("%d", i);
        i++;
    }
}