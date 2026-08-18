/*
    AULA 146 - Vetor de Structs: cadastro de alunos e media da turma

*/

#include <stdio.h>

#define MAX 50 // Constante que define o tamanho máximo da turma.

struct Aluno
{
    char nome[50];
    int matricula;
    float nota;
};

int main()
{
    struct Aluno turma[MAX]; // Vetor de structs: cada posição é um Aluno completo.
    int n, i, indiceMaior = 0;
    float soma = 0;

    printf("Quantos alunos deseja cadastrar (max %d)? ", MAX);
    scanf("%d", &n);
    getchar();

    for (i = 0; i < n; i++)
    {
        printf("\n--- Aluno %d ---\n", i + 1);

        printf("Nome: ");
        scanf("%49[^\n]", turma[i].nome);
        getchar();

        printf("Matricula: ");
        scanf("%d", &turma[i].matricula);

        printf("Nota: ");
        scanf("%f", &turma[i].nota);
    }

    for (i = 0; i < n; i++)
    {
        soma += turma[i].nota; // Acumulando as notas para a média.

        if (turma[i].nota > turma[indiceMaior].nota) // Guardando o índice do maior valor encontrado.
            indiceMaior = i;
    }

    printf("\n----- RESULTADO DA TURMA -----\n");
    printf("Media da turma: %.2f\n", soma / n);
    printf("Maior nota: %s (matricula %d) com nota %.1f\n",
           turma[indiceMaior].nome, turma[indiceMaior].matricula, turma[indiceMaior].nota);

    return 0;
}
