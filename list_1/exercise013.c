#include <stdio.h>

int main() {
    int var_a, var_b, temp_var;

    printf("Enter the value to var A and B: ");
    scanf("%d %d", &var_a, &var_b);

    temp_var = var_a;
    var_a = var_b;
    var_b = temp_var;

    printf("The value for A is %d and for B is %d \n", var_a, var_b);

    // Or 

    int var_c, var_d;

    printf("Enter the value to var C and D: ");
    scanf("%d %d", &var_c, &var_d);

    var_c = var_c + var_d;
    var_d = var_c - var_d;
    var_c = var_c - var_d;

    printf("The value for C is %d and for D is %d \n", var_c, var_d);
}