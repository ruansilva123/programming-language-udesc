#include <stdio.h>

int main() {
    float num1 = 0, num2 = 0;

    printf("Write the first number: ");
    scanf("%f", &num1);

    printf("Write the second number: ");
    scanf("%f", &num2);

    printf("The result of %.2f + %.2f is: %2.f \n", num1, num2, (num1 + num2));
}