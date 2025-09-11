#include <stdio.h>

int main() {
    int quantity = 0;
    float exchange = 0;

    printf("Please indicate how many dollars you wish to purchase: ");
    scanf("%d", &quantity);

    printf("Enter the current exchange rate: ");
    scanf("%f", &exchange);

    printf("The price is R$ %.2f. \n", (quantity * exchange));
}