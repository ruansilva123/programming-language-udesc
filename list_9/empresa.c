#include <stdio.h>
#include "empresa.h"

void registrar(EMPRESA empresa[], int n){
    for (int i = 0; i < n; i++){
        printf("Digite o nome da %d° empresa \n", i + 1);
        scanf("%s", empresa[i].name);
        printf("Digite a quantidade de funcionários da %d° empresa \n", i + 1);
        scanf("%d", &empresa[i].quantidade_func);
        printf("Digite o valor da empresa da %d° empresa \n", i + 1);
        scanf("%f", &empresa[i].valor_empresa);
        printf("Digite o tipo de ação da %d° empresa \n", i + 1);
        scanf("%s", empresa[i].acao.type);
        printf("Digite o valor da ação da %d° empresa \n", i + 1);
        scanf("%f", &empresa[i].acao.valor_acao);
    }

};

void listar(EMPRESA empresa[], int n){
    for (int i = 0; i < n; i++){
        printf("nome da %d° empresa: %s \n", i + 1, empresa[i].name);
        printf("quantidade de funcionários da %d° empresa: %d \n", i + 1, empresa[i].quantidade_func);
        printf("valor da empresa da %d° empresa: %f \n", i + 1, empresa[i].valor_empresa);
        printf("tipo de ação da %d° empresa: %s \n", i + 1, empresa[i].acao.type);
        printf("valor da ação da %d° empresa: %f \n", i + 1, empresa[i].acao.valor_acao);
    }
};