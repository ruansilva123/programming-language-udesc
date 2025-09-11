#include <stdio.h>

int main() {
    int number = 0;

    printf("Enter an integer: ");
    scanf("%d", &number);

    printf("The predecessor of the number %d is %d \n", number, (number - 1));
    printf("The successor of the number %d is %d \n", number, (number + 1));
}