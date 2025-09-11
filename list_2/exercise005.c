#include <stdio.h>

int main() {
    int age = 0;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age < 18){
        printf("Non-voter.\n");
    } else if (age > 65) {
        printf("Non mandatory voter.\n");
    } else {
        printf("Mandatory voter.\n");
    }
}