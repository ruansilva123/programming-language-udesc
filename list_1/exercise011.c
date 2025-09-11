#include <stdio.h>

int main() {
    float fahrenheit = 0;

    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    printf("%f °F are equivalent to %f °C",
        fahrenheit,
        (5 * (fahrenheit - 32))/9);
}