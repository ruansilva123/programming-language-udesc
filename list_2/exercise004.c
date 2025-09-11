#include <stdio.h>

int main() {
    int value_1, value_2;

    printf("Enter the value for A and value for B: ");
    scanf("%d %d", &value_1, &value_2);

    if (value_1 == value_2){
        printf("The values are equals.\n");
    } else if (value_1 > value_2) {
        printf("The value A is biggest than B.\n");
    } else {
        printf("The value for B is biggest than A.\n");
    }
}