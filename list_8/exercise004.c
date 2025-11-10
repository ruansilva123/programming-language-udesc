#include <stdio.h>

int main() {
    int number = 0, count = 0, primo = 0;

    scanf("%d", &number);

    for (int i=1; i <= number; i++) {
        if (number % i == 0 ) {
            count++;
        }
    }

    if (count == 2) {
        printf("is odd");
        return 0;
    }

    printf("is pair");
    return 0;
}