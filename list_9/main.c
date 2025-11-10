#include <stdio.h>
#include "empresa.h"

int main() {
    EMPRESA empresas[2];
    int n = 2;

    registrar(empresas, n);
    listar(empresas, n);

    return 0;
}