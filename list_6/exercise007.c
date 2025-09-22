#include <stdio.h>
#define VECTOR_POSITIONS 10

int main()
{
    int vector_a[VECTOR_POSITIONS] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}, vector_b[VECTOR_POSITIONS] = {};

    printf("Vector A: ");
    for (int i=0; i < VECTOR_POSITIONS; i++)
    {
        printf("%d ", vector_a[i]);
        vector_b[i] = vector_a[VECTOR_POSITIONS - (i + 1)];
    }

    printf("\nVector B: ");
    for (int i=0; i < VECTOR_POSITIONS; i++)
    {
        printf("%d ", vector_b[i]);
    }
    printf("\n");
}