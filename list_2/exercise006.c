#include <stdio.h>

int biggest(int number_1, int number_2) {
    return number_1 > number_2 ? number_1 : number_2;
}

int main() {
    int number_1, number_2, number_3;

    printf("Dgite os valores em sequência de A, B e C: ");
    scanf("%d %d %d", &number_1, &number_2, &number_3);

    if (number_3 > biggest(number_1, number_2)){
        printf("The biggest number is %d \n", number_3);
    } else {
        printf("The biggest number is %d \n", biggest(number_1, number_2));
    }
}