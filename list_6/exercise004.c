#include <stdio.h>
#define VECTOR_POSITIONS 10

int main()
{
    int numbers[VECTOR_POSITIONS] = {}, sum = 0;

    for (int i=0; i < VECTOR_POSITIONS; i++)
    {
        printf("Enter the %d° number: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    printf("Ascending order: ");
    for (int i=0; i < VECTOR_POSITIONS; i++)
    {
        printf("%d ", numbers[i]);
    }

    printf("\n Descending order: ");
    for (int i = VECTOR_POSITIONS - 1; i >= 0; i--)
    {
        printf("%d ", numbers[i]);
    }
}