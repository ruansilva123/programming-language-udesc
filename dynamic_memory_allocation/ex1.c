#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


void set_vector_size(int *vector, int *size, bool *first_access);
void fill_vector(int *vector, int size);
void list_vector(int *vector, int size);
void end_program(int *vector, int *size, bool *first_access);


int main() {
    int size = 0, *vector, option = 0;
    bool first_access = false;

    do {
        printf("Selecione uma opção do menu:\n \
[1] Inserir tamanho do vetor \n \
[2] Preencher vetor \n \
[3] Listar vetor \n \
[4] Sair\n");
        scanf("%d", &option);

        switch (option) {
            case 1: set_vector_size(vector, &size, &first_access); break;
            case 2: fill_vector(vector, size); break;
            case 3: list_vector(vector, size); break;
            case 4: end_program(vector, &size, &first_access); break;
            default: printf("Opção inválida! \n"); break;
        }
    } while(option != 4);

    return 0;
}


void set_vector_size(int *vector, int *size, bool *first_access){
    printf("Digite o tamanho do vetor: ");
    scanf("%d", size);

    if (*size <= 0) {
        printf("Entrada inválida! Apenas números inteiros maiores que 0. \n");
    } else {
        if (!*first_access) {
            vector = malloc(*size * sizeof(int));
            *first_access = true;
        } else {
            vector = realloc(vector, *size);
        }
        printf("Tamanho definido com sucesso!\n");
    }
}


void fill_vector(int *vector, int size) {
    if (size <= 0) {
        printf("Defina o tamanho do vetor primeiro! \n");
    } else {
        for (int i = 0; i < size; i++) {
            printf("Digite o valor para a posição %d: ", i + 1);
            scanf("%d", &vector[i]);
        }
    }
}


void list_vector(int *vector, int size) {
    if (size <= 0) {
        printf("Defina o tamanho do vetor primeiro! \n");
    } else {
        for (int i = 0; i < size; i++) {
            printf("Valor na posição %d: %d\n", i + 1, vector[i]);
        }
    }
}


void end_program(int *vector, int *size, bool *first_access) {
    printf("Saindo..");
    vector = NULL;
    *size = 0;
    *first_access = false;
    printf(". \n");
}