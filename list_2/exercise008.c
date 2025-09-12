#include <stdio.h>

int main() {
    int year = 0;

    printf("Enter a year: (Ex: 2025)\n");
    scanf("%d", &year);

    if (year < 1000 || year > 9999) {
        printf("Invalid year.\n");
        return 0;
    }

    if ((year % 4) == 0 || (year % 100) == 0 && (year % 400) != 0 || (year % 400) == 0) {
        printf("Leap year.\n");
        return 0;
    }

    printf("Normal year.\n");
}