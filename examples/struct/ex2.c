#include <stdio.h>
#include <string.h>

typedef struct
{
    char nome[20];
    float media_final;
    int idade;
} Aluno;

int main () {
    Aluno alunos[10];

    alunos[0].idade = 19;
    alunos[0].media_final = 9.75;
    strcpy(alunos[0].nome, "Fulano");

    return 0;
}