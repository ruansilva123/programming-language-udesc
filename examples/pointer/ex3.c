#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 50;
    int *pa = &a;
    int **ppa = &pa;

    printf("Valor de A: %d \n", a);
    printf("Endereço de A: %p \n", &a);
    printf("Valor de PA: %p \n", pa);
    printf("Endereço de PA: %p \n", &pa);
    printf("Valor de PPA: %p \n", ppa);
    printf("Endereço de PPA: %p \n", &ppa);

    printf("Valor de A pelo PA: %d \n", *pa);
    printf("Valor de A pelo PPA: %d \n", **ppa);

    return 0;
}