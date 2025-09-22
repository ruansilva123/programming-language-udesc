#include <stdio.h>
#define VECTOR_POSITIONS 5

int main()
{
    float numbers[VECTOR_POSITIONS] = {1.5, 2.0, 5.8, 10.2, 11.2}, average = 0.0, sum = 0.0;

    for (int i = 0; i < VECTOR_POSITIONS; i++)
    {
        sum += numbers[i];

        average = VECTOR_POSITIONS - 1 ? sum / VECTOR_POSITIONS : 0.0;
    }

    printf("The vector average is %.2f. \n", average);
}