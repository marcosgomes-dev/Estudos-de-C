/*
    AULA 148 - Recursao: fatorial, fibonacci e MDC

*/

#include <stdio.h>

// Toda função recursiva precisa de um CASO BASE (para parar) e de uma
// chamada que aproxima o problema desse caso base.

long fatorial(int n)
{
    if (n <= 1) // Caso base: 0! e 1! valem 1.
        return 1;
    return n * fatorial(n - 1); // Caso recursivo.
}

int fibonacci(int n)
{
    if (n == 0)
        return 0;
    if (n == 1) // Os dois primeiros casos base da sequência de Fibonacci.
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int mdc(int a, int b)
{
    if (b == 0) // Caso base do algoritmo de Euclides.
        return a;
    return mdc(b, a % b); // A cada chamada, o problema fica "menor".
}

int main()
{
    int n, a, b;

    printf("Digite um numero para calcular o fatorial: ");
    scanf("%d", &n);
    printf("Fatorial de %d = %ld\n\n", n, fatorial(n));

    printf("Digite a posicao da sequencia de Fibonacci: ");
    scanf("%d", &n);
    printf("Fibonacci(%d) = %d\n\n", n, fibonacci(n));

    printf("Digite dois numeros para calcular o MDC: ");
    scanf("%d %d", &a, &b);
    printf("MDC(%d, %d) = %d\n", a, b, mdc(a, b));

    return 0;
}
