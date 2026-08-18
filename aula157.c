/*
    AULA 157 - Manipulacao de arquivos: salvar e ler structs em arquivo binario
*/

#include <stdio.h>
#include <string.h>

struct Aluno
{
    char nome[50];
    int matricula;
    float nota;
};

void salvarAlunos(struct Aluno turma[], int n, const char *nomeArquivo)
{
    // "wb" = write binary (escrita binária). Cria o arquivo se não existir,
    // ou sobrescreve se já existir.
    FILE *arquivo = fopen(nomeArquivo, "wb");

    if (arquivo == NULL)
    {
        printf("Erro ao criar o arquivo!\n");
        return;
    }

    // fwrite grava n structs inteiras de uma vez, byte a byte, no arquivo.
    fwrite(turma, sizeof(struct Aluno), n, arquivo);

    fclose(arquivo); // Sempre feche o arquivo depois de usar.
    printf("%d aluno(s) salvo(s) em '%s'.\n", n, nomeArquivo);
}

int lerAlunos(struct Aluno turma[], int max, const char *nomeArquivo)
{
    // "rb" = read binary (leitura binária).
    FILE *arquivo = fopen(nomeArquivo, "rb");

    if (arquivo == NULL)
    {
        printf("Erro: arquivo '%s' nao encontrado!\n", nomeArquivo);
        return 0;
    }

    // fread devolve quantos elementos ele conseguiu realmente ler.
    int lidos = fread(turma, sizeof(struct Aluno), max, arquivo);

    fclose(arquivo);
    return lidos;
}

int main()
{
    struct Aluno turma[3] = {
        {"Ana Souza", 2021001, 8.5},
        {"Bruno Lima", 2021002, 6.2},
        {"Carla Melo", 2021003, 9.1}};

    salvarAlunos(turma, 3, "alunos.dat");

    printf("\nSimulando reinicio do programa e leitura do arquivo do disco...\n\n");

    struct Aluno lidos[10];
    int quantidadeLida = lerAlunos(lidos, 10, "alunos.dat");

    printf("----- ALUNOS RECUPERADOS DO ARQUIVO -----\n");
    for (int i = 0; i < quantidadeLida; i++)
    {
        printf("Nome: %-15s Matricula: %d  Nota: %.1f\n",
               lidos[i].nome, lidos[i].matricula, lidos[i].nota);
    }

    return 0;
}
