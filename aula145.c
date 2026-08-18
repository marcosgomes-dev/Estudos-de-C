/*
    AULA 145 - Structs: criando um registro de Aluno

*/

#include <stdio.h>
#include <string.h>

struct Aluno
{
    char nome[50];
    int matricula;
    float nota;
};

int main()
{
    struct Aluno aluno1; // Declarando uma variável do tipo struct Aluno.

    printf("Digite o nome do aluno: ");
    scanf("%49[^\n]", aluno1.nome);
    getchar(); // Limpa o '\n' deixado pelo scanf no buffer.

    printf("Digite a matricula: ");
    scanf("%d", &aluno1.matricula);

    printf("Digite a nota final: ");
    scanf("%f", &aluno1.nota);

    // O operador '.' é usado para acessar os campos de uma struct comum (não ponteiro).
    printf("\n----- BOLETIM -----\n");
    printf("Nome: %s\n", aluno1.nome);
    printf("Matricula: %d\n", aluno1.matricula);
    printf("Nota final: %.1f\n", aluno1.nota);
    printf("Situacao: %s\n", aluno1.nota >= 7 ? "Aprovado" : "Reprovado");

    return 0;
}
