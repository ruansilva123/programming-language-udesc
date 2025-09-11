#include <stdio.h>

int main() {
    float purchaseAmount = 0;

    printf("Enter the purchase amount: ");
    scanf("%f", &purchaseAmount);

    printf("Result:\nValue of Representative: %.2f \nValues of Taxes: %.2f \nFinal Result: %f.2 \n",
        purchaseAmount * 0.2, purchaseAmount * 0.3, purchaseAmount + (purchaseAmount * 0.2) + (purchaseAmount * 0.3));
}