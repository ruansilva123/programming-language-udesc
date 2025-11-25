#include <stdio.h>

void swap(int *x, int *y){
    *y += *x;
    *x = *y - *x;
    *y -= *x;
}

int main() {
    int a = 2;
    int b = 3;

    swap(&a, &b);

    printf("Valor de A: %d \n", a);
    printf("Valor de B: %d \n", b);
}