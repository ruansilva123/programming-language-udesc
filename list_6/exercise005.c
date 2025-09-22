#include <stdio.h>
#define VECTOR_POSITIONS 5

int main()
{
    int vector_a[VECTOR_POSITIONS] = {}, vector_b[VECTOR_POSITIONS] = {}, vector_c[VECTOR_POSITIONS] = {};

    for (int i=0; i < VECTOR_POSITIONS; i++)
    {
        printf("Enter the %d° number for vector a: ", i + 1);
        scanf("%d", &vector_a[i]);

        printf("Enter the %d° number for vector b: ", i + 1);
        scanf("%d", &vector_b[i]);

        vector_c[i] = vector_a[i] + vector_b[i];
    }

    printf("Vector sum: ");
    for (int i=0; i < VECTOR_POSITIONS; i++)
    {
        printf("%d ", vector_c[i]);
    }
}