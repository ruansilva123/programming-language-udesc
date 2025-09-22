#include <stdio.h>
#define VECTOR_POSITIONS 5

int main()
{
    int vector_a[VECTOR_POSITIONS] = {}, vector_b[VECTOR_POSITIONS] = {}, vector_c[VECTOR_POSITIONS * 2] = {}, counter = 0;

    for (int i=0; i < VECTOR_POSITIONS; i++)
    {
        printf("Enter the %d° number for vector A: ", i + 1);
        scanf("%d", &vector_a[i]);

        printf("Enter the %d° number for vector B: ", i + 1);
        scanf("%d", &vector_b[i]);
    }

    for (int i=0; i < (VECTOR_POSITIONS * 2); i += 2)
    {
        vector_c[i] = vector_a[counter];
        vector_c[i + 1] = vector_b[counter];
        counter ++;
    }

    for (int i=0; i < (VECTOR_POSITIONS * 2); i++)
    {
        printf("%d ", vector_c[i]);
    }
}
