#include <stdio.h>

int main() {
    float investiment;

    printf("Enter the initial investment amount: ");
    scanf("%f", &investiment);

    printf("The result of the investments is: R$ %.2f.",
        investiment * (investiment * 0.05 * 3));
}