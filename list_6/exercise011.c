#include <stdio.h>
#define VECTOR_POSITIONS 15

int main()
{
    int numbers[VECTOR_POSITIONS] = {}, sum = 0;

    for (int i=0; i < VECTOR_POSITIONS; i++)
    {
        printf("Enter the %d° number: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    for (int i=1; i < VECTOR_POSITIONS; i += 2)
    {
        sum += numbers[i - 1];
    }

    printf("The sum of the odd numbers is %d.\n", sum);
}