#include <stdio.h>

#define VALUE_WITH_DISCOUNT 1.95
#define VALUE_WITHOUT_DISCOUNT 2.3

int main() {
    int apple_quantity = 0;
    float value = 0.0;

    printf("Enter a apple quantity: ");
    scanf("%d", &apple_quantity);

    value = apple_quantity >= 12 ? VALUE_WITH_DISCOUNT * apple_quantity : VALUE_WITHOUT_DISCOUNT * apple_quantity;

    printf("The result is R$ %f", value);
}