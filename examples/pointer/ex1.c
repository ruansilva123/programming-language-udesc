#include <stdio.h>

int main() {
    float a = 1;
    float b = 2;
    float *ptr = NULL;

    // Atribuindo pointeiro de a para ptr
    ptr = &a;

    printf("Endereço de memória de A: %p \n", &a);
    printf("Endereçõ de A salvo em Ponteiro: %p\n", ptr);

    // Atribuir valor na variável que ptr aponta
    ptr = &b;
    *ptr = 10.0;
    
    printf("Valor de B: %f \n", b);

    // valor e endereço de pointeiro
    printf("Ponteiro de ptr: %p \n", ptr);
    printf("Valor de ptr: %f \n", *ptr);

    return 0;
}