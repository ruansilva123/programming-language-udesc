#ifndef EMPRESA_H
#define EMPRESA_H

typedef struct {
    char type[5];
    float valor_acao;
} ACAO;

typedef struct {
    char name[100];
    int quantidade_func;
    float valor_empresa;
    ACAO acao;
} EMPRESA;

void registrar(EMPRESA empresa[], int n);
void listar(EMPRESA empresa[], int n);

#endif