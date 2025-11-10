#include <stdio.h>
#include <string.h>

typedef struct
{
    char nome[20];
    float media_final;
    int idade;
} Aluno;

struct Professor
{
    char nome[20];
    int idade;
};

int main () {
    Aluno fulano;
    struct Professor ciclano;

    fulano.idade = 20;
    fulano.media_final = 9.5;
    strcpy(fulano.nome, "Fulano");

    ciclano.idade = 50;
    strcpy(ciclano.nome, "Ciclano");

    return 0;
}